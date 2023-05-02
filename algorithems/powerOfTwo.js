// O(n) - O(log n)

const isPowerOfTwo = (number) => {
  if (number < 1) return false;
  let index = 0;
  if (number === 1) return true;
  while (2 ** index < number) {
    index++;
    if (2 ** index === number) return true;
  }
  return false;
};

// O(n) - O(1) using bitwiseOperator

const isPowerOfTwoBItWise = (n) => {
  if (n < 1) return false;
  return (n & (n - 1)) === 0;
};

// console.log(isPowerOfTwo(128));
// console.log(isPowerOfTwo(1026));
console.time("test001");
console.log(isPowerOfTwo(2 ** 10 - 2));
console.timeEnd("test001");
console.time("test002");
console.log(isPowerOfTwoBItWise(2 ** 10 - 2));
console.timeEnd("test002");
