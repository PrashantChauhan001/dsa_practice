import { getUnsortedArray, getNumberAnswer } from "../helper";

// TC: O(log(n^2))

const insertionSort = (uSArr: Array<number>) => {
  if (uSArr.length < 2) return uSArr;
  for (let i = 1; i < uSArr.length; i++) {
    const curr = uSArr[i];
    let index = i;
    while (index > 0 && uSArr[index - 1] > curr) {
      uSArr[index] = uSArr[index - 1];
      index--;
    }
    uSArr[index] = curr;
  }
  return uSArr;
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
  console.log(insertionSort(unSortedArray), "this is sorted now");
  console.timeEnd("test");
})();
