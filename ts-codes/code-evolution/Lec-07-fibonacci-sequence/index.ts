import { getNumberAnswer } from "../helper";

const getFibonacci = (place: number): number[] => {
  if (place <= 1) return [0];
  const fibonacci: number[] = [0, 1];
  if (place === 2) return fibonacci;

  while (place > 2) {
    const length = fibonacci.length;
    fibonacci.push(fibonacci[length - 1] + fibonacci[length - 2]);
    place--;
  }
  return fibonacci;
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
