const { getNumberAnswer } = require("../helper");

// TC: O(n)
const isPrimeNumber = (num) => {
  if (num < 2) return false;
  if (num % 1 !== 0) return false;
  if (num < 4) return true;
  const root = Math.floor(Math.sqrt(num));
  let curr = 2;
  while (curr <= root) {
    if (num % curr === 0) return false;
    curr++;
  }
  return true;
};

(async () => {
  const res = await getNumberAnswer(
    "Enter positive number to find it's prime number or not"
  );
  console.log(isPrimeNumber(res));
})();
