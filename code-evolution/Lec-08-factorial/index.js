const getFactoria = (num) => {
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

console.log(getFactoria(0));
