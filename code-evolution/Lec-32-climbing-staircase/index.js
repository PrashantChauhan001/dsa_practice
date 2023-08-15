const { getNumberAnswer } = require("../helper");

// WTC: O(log(nlog(n)))

const combinationOfStep = (stairCount) => {
  if (stairCount <= 0) return 0;
  if (stairCount === 1) return 1;
  let combination = 1;
  let prev = 1;
  while (stairCount > 1) {
    const temp = combination;
    combination = temp + prev;
    prev = temp;
    stairCount--;
  }
  return combination;
};

(async () => {
  const stairCount = await getNumberAnswer("Enter the steps of the stair");
  console.time("test");
  console.log(combinationOfStep(stairCount), "combination count");
  console.timeEnd("test");
})();
