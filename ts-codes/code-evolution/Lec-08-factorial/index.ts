import { getNumberAnswer } from "../helper";

const getFactorial = (num: number): number => {
  let factorial = 1;
  while (num > 1) {
    factorial *= num;
    num--;
  }
  return factorial;
};

(async function () {
  const num = await getNumberAnswer(
    "Enter positive integer to get it's factorial"
  );
  console.time("test");
  const res = getFactorial(num);
  console.log(res);
  console.timeEnd("test");
})();
