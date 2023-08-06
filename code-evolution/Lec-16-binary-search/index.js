const { getSortedNumArray, getNumberAnswer } = require("../helper");

const sortedArray = getSortedNumArray(-1000, 1000, 2);

// TC: O(log(n))
const binarySearch = (num, arr) => {
  if (arr.length === 0) return -1;
  let right = arr.length,
    left = 0;
  while (left < right) {
    let mid = Math.floor((right + left) / 2);
    if (arr[mid] === num) return mid;
    if (arr[mid] < num) {
      left = mid + 1;
    }
    if (arr[mid] > num) {
      right = mid;
    }
  }
  return -1;
};

(async () => {
  const res = await getNumberAnswer("Find Your number in array of 1000");
  console.time("test");
  console.log(binarySearch(res, sortedArray));
  console.timeEnd("test");
})();
