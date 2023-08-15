const { getUnsortedArray, getNumberAnswer } = require("../helper");

// TC: O(log(n^2))

const insertionSort = (unSortedArray) => {
  if (unSortedArray.length < 2) return unSortedArray;
  let arrayIndex = 1;
  while (arrayIndex < unSortedArray.length) {
    let currIndex = arrayIndex;
    let currItem = unSortedArray[currIndex];
    while (currIndex !== 0 && currItem < unSortedArray[currIndex - 1]) {
      unSortedArray[currIndex] = unSortedArray[currIndex - 1];
      currIndex--;
    }
    if (currIndex !== arrayIndex) unSortedArray[currIndex] = currItem;
    arrayIndex++;
  }
  return unSortedArray;
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
