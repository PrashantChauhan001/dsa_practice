const { getUnsortedArray, getNumberAnswer } = require("../helper");

// WTC: O(m*n)

const cartesianProduct = (arr01, arr02) => {
  const product = [];
  for (let i = 0; i < arr01.length; i++) {
    for (let j = 0; j < arr02.length; j++) {
      product.push([arr01[i], arr02[j]]);
    }
  }
  return product;
};

(async () => {
  const count01 = await getNumberAnswer("Enter length of the array 01");
  const maxNumber01 = await getNumberAnswer(
    "Enter maximum possible integer into the array 01"
  );
  const count02 = await getNumberAnswer("Enter length of the array 02");
  const maxNumber02 = await getNumberAnswer(
    "Enter maximum possible integer into the array 02"
  );
  const arr01 = getUnsortedArray(count01, maxNumber01);
  const arr02 = getUnsortedArray(count02, maxNumber02);
  console.log(arr01, "this is unsorted array 01");
  console.log(arr02, "this is unsorted array 02");
  console.time("test");
  console.log(cartesianProduct(arr01, arr02), "this is cartesian product");
  console.timeEnd("test");
})();
