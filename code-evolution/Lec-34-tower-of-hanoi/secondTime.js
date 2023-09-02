const { getNumberAnswer } = require("../helper");

// WTC: O(log(nlog(n)))

const stepLog = (towerCount, from = "A", to = "C", middle = "B") => {
  if (towerCount < 1) return;
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
  stepLog(towerCount), "Min step required to solve the tower";
  console.timeEnd("test");
})();
