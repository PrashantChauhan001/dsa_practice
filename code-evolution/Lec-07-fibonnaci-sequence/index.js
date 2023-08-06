const { getNumberAnswer } = require("../helper.js");

// TC: O(n)
async function getFibonacci() {
  const place = await getNumberAnswer(
    "Enter positive number to get fibonacci item of that place"
  );
  const fibonacci = [0, 1];
  if (place <= 0) return 0;
  if (place === 1 || place === 2) return fibonacci[place - 1];
  let curr = 1;
  while (place - 1 > curr) {
    fibonacci.push(getNextItemFibonacci(fibonacci[curr], fibonacci[curr - 1]));
    curr++;
  }
  return fibonacci[fibonacci.length - 1];
}

function getNextItemFibonacci(num01, num02) {
  return num01 + num02;
}

console.time("test");
(async function () {
  const res = await getFibonacci();
  console.log(res);
  console.timeEnd("test");
})();
