const { getNumberAnswer } = require("../helper");

// TC: O(n)
const factorialRecursive = (num) => {
  if (num <= 1) return 1;
  return num * factorialRecursive(num - 1);
};

(async () => {
  const res = await getNumberAnswer(
    "Enter positive integer to find it's factorial"
  );
  console.time("test");
  console.log(factorialRecursive(res));
  console.timeEnd("test");
})();
