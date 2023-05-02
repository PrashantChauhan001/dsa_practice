/**
an array is an ordered collection of values 
insert / remove at end  - O(1)
insert / remove at beginning  - O(n)
access  - O(1)
search  - O(n)
push / pop - O(1)
shift / unshift / concat / slice / splice - O(n)
forEach / map / filter / reduce - O(n)
 */

class ArrayPoli {
  constructor() {
    this.length = 0;
  }
  add(value) {
    this[this.length] = value;
    this.length++;
  }
  get(index) {
    if (this.length > index && index > -1) {
      return this[index];
    }
    return new Error("not found");
  }
  search(value) {
    const valArray = Object.values(this);
    return valArray.indexOf(value);
  }
  delete(index) {
    if (this.length > index && index > -1) {
      const val = this[index];
      while (index < this.length - 1) {
        this[index] = this[index + 1];
        index++;
      }
      delete this[this.length - 1];
      this.length--;
      return val;
    }
    return new Error("not found");
  }
}

const newArray = new ArrayPoli();

newArray.add(12);
newArray.add(13);
newArray.add(15);
newArray.add("this is prashant");
newArray.add("this is string");
newArray.add(true);

console.log(newArray);

console.log(newArray.get(3));
console.log(newArray.get(2));
console.log(newArray.get(7));
console.log(newArray.search(13));
console.log(newArray.search(16));
console.log(newArray.delete(3));

console.log(newArray);
