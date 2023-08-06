const { getSortedNumArray, getNumberAnswer } = require("../helper");

const sortedArray = getSortedNumArray(-1000, 1000, 2);

// TC: O(log(n))
const binarySearchRecusive = (
  num,
  arr = [],
  left = 0,
  right = arr.length - 1
) => {
  if (arr.length === 0) return -1;
  let mid = Math.floor((left + right) / 2);
  if (arr[mid] === num) return mid;
  if (arr[mid] > num) return binarySearchRecusive(num, arr, left, mid - 1);
  if (arr[mid] < num) return binarySearchRecusive(num, arr, mid + 1, right);
};

(async () => {
  const res = await getNumberAnswer("Find Your number in array of 1000");
  console.time("test");
  console.log(binarySearchRecusive(res, sortedArray));
  console.timeEnd("test");
})();
