const { getUnsortedArray, getNumberAnswer } = require("../helper");

// TC: O(log(n))

const bubbleSort = (unSortedArray) => {
  let swap;
  do {
    swap = false;
    for (let index = 0; index < unSortedArray.length - 1; index++) {
      if (unSortedArray[index] > unSortedArray[index + 1]) {
        const temp = unSortedArray[index];
        unSortedArray[index] = unSortedArray[index + 1];
        unSortedArray[index + 1] = temp;
        swap = true;
      }
    }
  } while (swap);
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
  console.log(bubbleSort(unSortedArray), "this is sorted now");
  console.timeEnd("test");
})();
