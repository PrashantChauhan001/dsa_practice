const { getUnsortedArray, getNumberAnswer } = require("../helper");

// WTC: O(log(n^2))
// ATC: O(log(nlog(n)))

const quickSort = (arr) => {
  if (arr.length <= 1) return arr;
  const middle = Math.floor(arr.length / 2) - (arr.length % 2 ? 1 : 0);
  let pivot = arr[middle];
  arr[middle] = null;
  const leftArr = [];
  const rightArr = [];
  while (arr.length) {
    let lastEle = arr.pop();
    if (!lastEle) continue;
    if (lastEle > pivot) rightArr.push(lastEle);
    else leftArr.push(lastEle);
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
