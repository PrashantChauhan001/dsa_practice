const { getNumberAnswer } = require("../helper.js");

// TC: O(n)
async function getFibonacci(place) {
  const fibonacci = [0, 1];
  if (place <= 0) return 0;
  if (place === 1) return fibonacci[place];
  let curr = 1;
  while (place > curr) {
    fibonacci.push(getNextItemFibonacci(fibonacci[curr], fibonacci[curr - 1]));
    curr++;
  }
  return fibonacci[fibonacci.length - 1];
}

function getNextItemFibonacci(num01, num02) {
  return num01 + num02;
}

(async function () {
  const place = await getNumberAnswer(
    "Enter positive number to get fibonacci item of that place"
  );
  console.time("test");
  const res = await getFibonacci(place);
  console.log(res);
  console.timeEnd("test");
})();
