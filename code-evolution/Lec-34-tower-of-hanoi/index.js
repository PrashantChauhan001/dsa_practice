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

const stepLog = (towerCount, from = "A", to = "C", middle = "B") => {
  if (towerCount === 1) {
    console.log(`Move disk ${towerCount} from ${from} to ${to}`);
    return;
  }
  stepLog(towerCount - 1, from, middle, to);
  console.log(`Move disk ${towerCount} from ${from} to ${to}`);
  stepLog(towerCount - 1, middle, to, from);
};

(async () => {
  const towerCount = await getNumberAnswer("Enter the tower count of hanoi");
  console.time("test");
  console.log(minStep(towerCount), "Min step required to solve the tower");
  stepLog(towerCount), "Min step required to solve the tower";
  console.timeEnd("test");
})();
