const { getNumberAnswer } = require("../helper");

// WTC: O(log(nlog(n)))

const minStep = (towerCount) => {
  let steps = 0;
  while (towerCount > 0) {
    steps = steps + Math.pow(2, towerCount - 1);
    towerCount--;
  }
  return steps;
};

(async () => {
  const towerCount = await getNumberAnswer("Enter the tower count of hanoi");
  console.time("test");
  console.log(minStep(towerCount), "Min step required to solve the tower");
  console.timeEnd("test");
})();
