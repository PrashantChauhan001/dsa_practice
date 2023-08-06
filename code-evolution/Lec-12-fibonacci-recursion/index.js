const { getNumberAnswer } = require("../helper");

let memoArr = [0, 1];

// TC: O(2^n) for non memo
// TC: O(n) for memo
const fibonacciRecursive = (num) => {
  if (num <= 0) return 0;
  if (num === 1) return 1;
  if (memoArr[num]) return memoArr[num];
  const res = fibonacciRecursive(num - 1) + fibonacciRecursive(num - 2);
  memoArr[num] = res;
  return res;
};

(async () => {
  const res = await getNumberAnswer(
    "Enter positive integer to find it's fibonacci number"
  );
  console.time("test");
  console.log(fibonacciRecursive(res));
  console.timeEnd("test");
})();
