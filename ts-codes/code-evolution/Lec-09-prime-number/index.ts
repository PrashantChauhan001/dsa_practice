import { getNumberAnswer } from "../helper";

const isPrimeNumber = (num: number): boolean => {
  let root = Math.floor(Math.sqrt(num));
  let isPrimeNumber = true;
  while (root > 1) {
    if (num % root === 0) {
      isPrimeNumber = false;
      break;
    }
  }
  return isPrimeNumber;
};

(async function () {
  const num = await getNumberAnswer(
    "Enter positive number to find it's prime number or not"
  );
  console.time("test");
  const res = isPrimeNumber(num);
  console.log(res);
  console.timeEnd("test");
})();
