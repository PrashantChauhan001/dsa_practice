import { getUnsortedArray, getNumberAnswer } from "../helper";

// TC: O(log(n^2))

const quickSort = (uSArr: Array<number>): number[] => {
  if (uSArr.length < 2) return uSArr;
  const pivot = uSArr[uSArr.length - 1];
  const leftArr = [];
  const rightArr = [];
  for (let i = 0; i < uSArr.length - 1; i++) {
    const curr = uSArr[i];
    if (curr > pivot) rightArr.push(curr);
    else leftArr.push(curr);
  }
  return [...quickSort(leftArr), pivot, ...quickSort(rightArr)];
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
  console.log(quickSort(unSortedArray), "this is sorted now");
  console.timeEnd("test");
})();
