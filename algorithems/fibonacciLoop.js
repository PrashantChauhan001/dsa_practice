/**

Def :- fibonacci is a sequence in which each number is the sum of the two preceding onces
the first two numbers in the sequence are 0 and 1.
BigO - O(n)

 */

const getFibonacci = (index) => {
  if (index < 1) return "enter positive number";
  else if (index === 1) return 0;
  else if (index === 2) return 1;

  let first = 0,
    second = 1,
    length = 2,
    final = 1;
  while (length < index) {
    let last = final;
    if (final > Number.MAX_SAFE_INTEGER && typeof final !== "bigint") {
      last = BigInt(final);
      first = BigInt(first);
      second = BigInt(second);
      final = first + second;
      console.log("this is if");
    } else {
      final = second + first;
    }
    // final = second + first;
    first = second;
    second = last;
    length++;
  }
  return final;
};

console.time("test01");
console.log(getFibonacci(2000000)); // 34 second
// console.log(getFibonacci(10));
console.timeEnd("test01");
