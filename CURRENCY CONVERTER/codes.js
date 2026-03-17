const dropdowns = document.querySelectorAll(".dropdown select");
const btn = document.querySelector("form button");
const fromCurr = document.querySelector(".from select");
const toCurr = document.querySelector(".to select");
const msg = document.querySelector(".msg");

if (!dropdowns.length || !btn || !fromCurr || !toCurr || !msg) {
  console.error("Page DOM not loaded or selectors missing:", {dropdowns: dropdowns.length, btn, fromCurr, toCurr, msg});
}

const updateFlag = (element) => {
  let currCode = element.value;
  let countryCode = countryList[currCode];
  if (!countryCode) {
    console.warn(`No country code for currency ${currCode}`);
    return;
  }
  let newSrc = `https://flagsapi.com/${countryCode}/flat/64.png`;
  let img = element.parentElement.querySelector("img");
  img.src = newSrc;
};

for (let select of dropdowns) {
  for (const currCode in countryList) {
    let newOption = document.createElement("option");
    newOption.innerText = currCode;
    newOption.value = currCode;
    if (select.name === "from" && currCode === "USD") {
      newOption.selected = "selected";
    } else if (select.name === "to" && currCode === "INR") {
      newOption.selected = "selected";
    }
    select.append(newOption);
  }

  select.addEventListener("change", (evt) => {
    updateFlag(evt.target);
  });
}

updateFlag(fromCurr);
updateFlag(toCurr);

const updateExchangeRate = async () => {
  let amount = document.querySelector(".amount input");
  let amtVal = amount.value;
  if (amtVal === "" || Number(amtVal) < 1 || isNaN(Number(amtVal))) {
    amtVal = 1;
    amount.value = "1";
  }

  const URL = `https://api.exchangerate-api.com/v4/latest/${fromCurr.value}`;
  try {
    let response = await fetch(URL);
    if (!response.ok) throw new Error(`Network response error: ${response.status} ${response.statusText}`);
    let data = await response.json();
    console.log("API response data", data);

    let rate = data?.rates?.[toCurr.value];
    if (typeof rate !== "number") {
      throw new Error(`Invalid conversion data: missing rate for ${toCurr.value}`);
    }

    let finalAmount = (Number(amtVal) * rate).toFixed(4);
    msg.innerText = `${amtVal} ${fromCurr.value} = ${finalAmount} ${toCurr.value}`;
  } catch (error) {
    console.error(error);
    msg.innerText = "Could not get exchange rate right now. Check your internet and try again.";
  }
};

btn.addEventListener("click", (evt) => {
  evt.preventDefault();
  updateExchangeRate();
});

window.addEventListener("load", () => {
  updateExchangeRate();
});