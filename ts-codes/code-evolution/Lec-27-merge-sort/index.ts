import { getUnsortedArray, getNumberAnswer } from "../helper";

// TC: O(log(n^2))

const mergeSort = (uSArr: Array<number>): number[] => {
  if (uSArr.length < 2) return uSArr;
  const middle = Math.floor(uSArr.length / 2);
  const leftArr = uSArr.slice(0, middle);
  const rightArr = uSArr.slice(middle);
  return merge(mergeSort(leftArr), mergeSort(rightArr));
};

const merge = (leftArr: number[], rightArr: number[]): number[] => {
  const sortedArr: number[] = [];
  while (leftArr.length && rightArr.length) {
    if (leftArr[0] < rightArr[0]) sortedArr.push(leftArr.shift() as number);
    else sortedArr.push(rightArr.shift() as number);
  }
  return [...sortedArr, ...leftArr, ...rightArr];
};

(async () => {
  const count = await getNumberAnswer("Enter length of the array");
  let maxNumber = await getNumberAnswer(
    "Enter maximum possible integer into the array"
  );
  while (maxNumber <= 0) {
    console.log("Max integer should be positive non-zero number");
    maxNumber = await getNumberAnswer("Enter last integer for the array");
  }
  const unSortedArray = getUnsortedArray(count, maxNumber);
  console.log(unSortedArray, "this is unsorted array");
  console.time("test");
  console.log(mergeSort(unSortedArray), "this is sorted now");
  console.timeEnd("test");
})();
