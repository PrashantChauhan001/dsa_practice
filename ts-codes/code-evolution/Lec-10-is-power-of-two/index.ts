import { getNumberAnswer } from "../helper";

// WTC: O(log(n))

const isPowerOfTwo = (num: number): boolean => {
  let isPowerOfTwo = true;
  while (num > 1) {
    if (num % 2 !== 0) {
      isPowerOfTwo = false;
      break;
    }
    num /= 2;
  }
  return isPowerOfTwo;
};

// WTC: O(1)

const isPowerOfTwoConst = (num: number): boolean => {
  return num & (num - 1) ? false : true;
};

(async function () {
  const num = await getNumberAnswer(
    "Enter positive number to find it's power of two or not"
  );
  console.time("test");
  const res1 = isPowerOfTwo(num);
  const res2 = isPowerOfTwoConst(num);
  console.log(res1, res2);
  console.timeEnd("test");
})();
