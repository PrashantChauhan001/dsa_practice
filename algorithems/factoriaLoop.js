/**
Factorial of a number :- if product of all the positive integer less than or equal to n
BigO - O(n)
 */

const getFactorial = (number) => {
  if (number < 0) return 0;
  if (number === 0) return 1;
  let answer = 1;
  while (number > 1) {
    answer = answer * number;
    if (answer > Number.MAX_SAFE_INTEGER && typeof answer !== "bigint") {
      answer = BigInt(answer);
      number = BigInt(number);
    }
    number--;
  }
  return answer;
};

console.time("test");
// console.log(getFactorial(200000)); // 33 seconds
// console.log(getFactorial(100000)); // 7 seconds
console.log(getFactorial(5)); // 33 seconds
console.timeEnd("test");
