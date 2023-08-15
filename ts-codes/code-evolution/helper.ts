import readLine from "node:readline/promises";
import { stdin, stdout } from "node:process";

/**
 * Get any input from the user according to your question
 * @param {String} question | any question you want to ask to user
 * @returns {String} | ans given by the user could be empty string also
 */
export const getAnswer = async (question: string): Promise<string> => {
  const r1 = readLine.createInterface({
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
export const getNumberAnswer = async (question: string): Promise<number> => {
  let ans = await getAnswer(question);
  if (isNaN(parseFloat(ans))) {
    console.log("Please enter number only!!");
    const res = await getNumberAnswer(question);
    ans = res.toString();
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
export const getSortedNumArray = (
  from: number,
  to: number,
  divider: number = 1
): Array<number> => {
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
export const getUnsortedArray = (
  count: number,
  maxNumber: number
): number[] => {
  const res = [];
  while (count > 0) {
    const randomNumber = Math.ceil(Math.random() * maxNumber);
    res.push(randomNumber * (Math.random() * 100 > 50 ? -1 : 1));
    count--;
  }
  return res;
};
