const { getSortedNumArray, getNumberAnswer } = require("../helper");

const sortedArray = getSortedNumArray(-1000, 1000, 3);

// TC: O(n)
const linearSearch = (num, arr) => {
  let pos = 0;
  while (pos < arr.length) {
    if (arr[pos] === num) return pos;
    pos++;
  }
  return -1;
};

(async () => {
  const res = await getNumberAnswer("Find Your number in array of 1000");
  console.time("test");
  console.log(linearSearch(res, sortedArray));
  console.timeEnd("test");
})();
