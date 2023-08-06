const { getNumberAnswer } = require("../helper");

// TC: O(log(n))
const isPowerOfTwo = (num) => {
  let curr = num;
  if (num < 1) return false;
  if (num == 1) return true;
  while (curr > 1) {
    if (curr % 2 !== 0) return false;
    curr /= 2;
  }
  if (curr === 1) return true;
  return false;
};

// TC: O(1)
const isPowerOfTwoBitwise = (num) => {
  if (num < 1) return false;
  return (num & (num - 1)) === 0;
};

(async () => {
  const res = await getNumberAnswer(
    "Enter positive integer to find it's power of two or not"
  );
  console.time("non-bit");
  console.log(isPowerOfTwo(res));
  console.timeEnd("non-bit");
  console.time("bit");
  console.log(isPowerOfTwoBitwise(res));
  console.timeEnd("bit");
})();
