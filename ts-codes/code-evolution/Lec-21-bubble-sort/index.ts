import { getUnsortedArray, getNumberAnswer } from "../helper";

// TC: O(log(n^2))

const bubbleSort = (uSArr: Array<number>) => {
  if (uSArr.length < 2) return uSArr;
  let swap = false;
  do {
    let index = 0;
    swap = false;
    while (index < uSArr.length) {
      if (uSArr[index] > uSArr[index + 1]) {
        const temp = uSArr[index];
        uSArr[index] = uSArr[index + 1];
        uSArr[index + 1] = temp;
        if (!swap) swap = true;
      }
      index++;
    }
  } while (swap);
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
  console.log(bubbleSort(unSortedArray), "this is sorted now");
  console.timeEnd("test");
})();
