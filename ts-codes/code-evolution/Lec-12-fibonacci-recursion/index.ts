import { getNumberAnswer } from "../helper";

// WTC: O(n)

const getFibonacci = (place: number): number[] => {
  const fibonacci: number[] = [0, 1];
  const res = getFibonacciNum(place, fibonacci);
  console.log(res, "into the function");
  return fibonacci;
};

const getFibonacciNum = (place: number, arr: number[]): number => {
  if (place <= 0) return 0;
  if (place === 1) return 1;
  if (arr[place]) return arr[place];
  arr[place] =
    getFibonacciNum(place - 1, arr) + getFibonacciNum(place - 2, arr);
  return arr[place];
  // return getFibonacciNum(place - 1, arr) + getFibonacciNum(place - 2, arr);
};

(async function () {
  const place = await getNumberAnswer(
    "Enter positive number to get fibonacci item of that place"
  );
  console.time("test");
  const res = getFibonacci(place);
  console.log(res);
  console.timeEnd("test");
})();
