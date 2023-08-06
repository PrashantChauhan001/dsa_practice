const { getNumberAnswer } = require("../helper.js");

// TC: O(n)
const getFactorial = (num) => {
  let val = 1;
  if (num === 0) return val;
  if (num > 0) {
    while (num > 0) {
      val *= num;
      num--;
    }
    return val;
  }
  val *= -1;
  while (num < -1) {
    val *= num;
    num++;
  }
  return val;
};

(async () => {
  const res = await getNumberAnswer(
    "Enter positive number to find it's factorial"
  );
  console.time("test");
  console.log(getFactorial(res));
  console.timeEnd("test");
})();
