const readline = require("node:readline/promises");
const { stdin, stdout } = require("node:process");

/**
 * Get any input from the user according to your question
 * @param {String} question | any question you want to ask to user
 * @returns {String} | ans given by the user could be empty string also
 */
const getAnswer = async (question) => {
  const r1 = readline.createInterface({
    input: stdin,
    output: stdout,
  });
  const ans = await r1.question(`${question} --> `);
  r1.close();
  return ans;
};

/**
 * Get Number input from the user according to your question
 * @param {String} question | any question you want to ask to user
 * @returns {Primise} | return promise when resolve return ans typed by the user and will be number
 */
const getNumberAnswer = async (question) => {
  let ans = await getAnswer(question);
  if (isNaN(parseFloat(ans))) {
    console.log("Please enter number only!!");
    const res = await getNumberAnswer(question);
    ans = res;
  }
  return parseFloat(ans);
};

/**
 * Get sorted number array
 * @param {String} from | any question you want to ask to user
 * @param {String} to | any question you want to ask to user
 * @param {divider} question | any question you want to ask to user
 * @returns {Number} | ans typed by the user and will be number
 */
const getSortedNumArray = (from, to, divider = 1) => {
  const res = [];
  while (from <= to) {
    if (from % divider === 0) res.push(from);
    from++;
  }
  return res;
};

/**
 * Create unsorted arra
 * @param {Number} from | lowest number of range you want to add into the unsorted array
 * @param {Number} to | highest number of range you want to add into the unsorted array
 * @param {Number} divider | number by which array item is divided
 * @returns {Array}
 */
const getUnsortedArray = (from, to, divider = 1) => {
  const res = [];
  while (from <= to) {
    if (from % divider === 0) {
      if (Math.random() * 10 > 5) res.push(from);
      else res.shift(from);
      from++;
    }
    return res;
  }
};

module.exports.getAnswer = getAnswer;
module.exports.getNumberAnswer = getNumberAnswer;
module.exports.getSortedNumArray = getSortedNumArray;
module.exports.getUnsortedArray = getUnsortedArray;
