// primary solution - O(n)
// const isPrimeNumber = (number) => {
//   if (number < 2) return false;
//   let index = number - 1;
//   while (index >= 2) {
//     if (number % index === 0)
//       return { result: false, number, firstBigDivider: index };
//     index--;
//   }
//   return { result: true, number, firstBigDivider: null };
// };

// optimised solution - O(sqrt(n))
const isPrimeNumber = (number) => {
  if (number < 2) return false;
  let index = Math.floor(Math.sqrt(number));
  while (index >= 2) {
    if (number % index === 0)
      return { result: false, number, firstBigDivider: index };
    index--;
  }
  return { result: true, number, firstBigDivider: null };
};

console.time("test");
// console.log(isPrimeNumber(97));
// console.log(isPrimeNumber(93));
// console.log(isPrimeNumber(79));
// console.log(isPrimeNumber(100003679));
console.log(isPrimeNumber(1000004249));
// console.log(isPrimeNumber(2));
console.timeEnd("test");
