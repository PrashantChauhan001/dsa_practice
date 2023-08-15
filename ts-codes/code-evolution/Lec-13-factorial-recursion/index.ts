import { getNumberAnswer } from "../helper";

// WTC: O(n)

const getFactorial = (num: number): number => {
  if (num <= 1) return 1;
  return num * getFactorial(num - 1);
};

(async function () {
  const num = await getNumberAnswer("Enter positive number to get factorial");
  console.time("test");
  const res = getFactorial(num);
  console.log(res);
  console.timeEnd("test");
})();
