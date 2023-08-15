import { getSortedNumArray, getNumberAnswer } from "../helper";

// TC: O(log(n))
const binarySearch = (num: number, arr: number[]): number => {
  let first = 0,
    last = arr.length;
  while (first < last) {
    const half = Math.floor((first + last) / 2);
    if (arr[half] === num) return half;
    if (num > arr[half]) first = half + 1;
    else last = half;
  }
  return -1;
};

(async () => {
  let maxNumber = -1,
    divider = -1;
  while (maxNumber <= 0) {
    console.log("Max integer should be positive non-zero number");
    maxNumber = await getNumberAnswer("Enter Max integer for the array");
  }
  while (divider <= 0) {
    console.log("Divider should be positive non-zero number");
    divider = await getNumberAnswer(
      "Enter positive integer to which array item should be divided"
    );
  }
  const sortedArray = getSortedNumArray(-maxNumber, maxNumber, divider);
  console.log(sortedArray, "<-- this is your generated array");
  const res = await getNumberAnswer("Find Your number in array of 1000");
  console.time("test");
  console.log(binarySearch(res, sortedArray));
  console.timeEnd("test");
})();
