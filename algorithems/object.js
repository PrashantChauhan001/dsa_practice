/**
Time complexities
insert - O(1)
remove - O(1)
access - O(1)
search  -O(n)
Objects.keys() - O(n)
Objects.values() - O(n)
Objects.entries() - O(n)
 */

class ObjectPolyfill {
  constructor() {}
  add(key, val) {
    this[key] = val;
  }
  get(key) {
    return this[key];
  }
  delete(key) {
    const val = this[key];
    delete this[key];
    return val;
  }
  search(val) {
    return Object.values(this).includes(val);
  }
}

const poliObj = new ObjectPolyfill();

poliObj.add("001", "this is one");
poliObj.add("002", "this is two");
poliObj.add("003", "this is three");
poliObj.add("004", "this is four");
poliObj.add("005", "this is five");

console.log(poliObj);

console.log(poliObj.get("001"), "get<---");

console.log(poliObj.search("this is three"), "search");
console.log(poliObj.search("007"), "search");

console.log(poliObj);

console.log(poliObj.delete("003"));
console.log(poliObj.search("this is one"));
console.log(poliObj.get("003"));

console.log(poliObj);
