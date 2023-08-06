const readline = require("node:readline/promises");
const { stdin, stdout } = require("node:process");

const getAnswer = async (question) => {
  const r1 = readline.createInterface({
    input: stdin,
    output: stdout,
  });
  const ans = await r1.question(`${question} --> `);
  r1.close();
  return ans;
};

const getNumberAnswer = async (question) => {
  let ans = await getAnswer(question);
  if (isNaN(parseFloat(ans))) {
    console.log("Please enter number only!!");
    const res = await getNumberAnswer(question);
    ans = res;
  }
  return parseFloat(ans);
};

// for testing
// getNumberAnswer("How old are you?").then((res) =>
//   console.log(typeof res, "-->", res)
// );

module.exports.getAnswer = getAnswer;
module.exports.getNumberAnswer = getNumberAnswer;
