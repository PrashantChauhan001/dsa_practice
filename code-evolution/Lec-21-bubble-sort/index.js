const { getUnsortedArray, getNumberAnswer } = require("../helper");

// TC: O(log(n))

const bubbleSort = (sortedArray) => {
  console.log(sortedArray);
  return null;
};

(async () => {
  const startIndex = await getNumberAnswer(
    "Enter starting integer for the array"
  );
  let endIndex = await getNumberAnswer("Enter last integer for the array");
  while (endIndex <= startIndex) {
    console.log("Last integer must be greter than start integer");
    endIndex = await getNumberAnswer("Enter last integer for the array");
  }
  const divider = await getNumberAnswer(
    "Enter possible divider for the array element"
  );
  const sortedArray = getUnsortedArray(startIndex, endIndex, divider);
  console.time("test");
  console.log(bubbleSort(sortedArray));
  console.timeEnd("test");
})();
