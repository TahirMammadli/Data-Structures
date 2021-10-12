#include "ArraySet.cpp"
#include "iostream"

using namespace std;

template <typename T> void ArraySet<T>::displayVector(vector<T> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}

int main() {
  ArraySet<int> setA(10);
  ArraySet<int> setB(10);

  setA.add(1);
  setA.add(2);
  setA.add(7);
  setA.add(9);
  setA.add(5);
  setA.add(89);

  setB.add(89);
  setB.add(2);
  setB.add(7);
  setB.add(5);
  setB.add(10);
  setB.add(0);
  setB.add(30);
  setB.add(70);

  // *** SET_UNION ***
  // setA = setA.setUnion(setB);
  // vector<int> vectorA = setA.toVector();
  // setA.displayVector(vectorA);

  // *** INTERSECTION ***
  // setA = setA.intersection(setB);
  // vector<int> intersectionVect = setA.toVector();
  // setA.displayVector(intersectionVect);

  // *** DIFFERENCE ***
  // setA = setA.difference(setB);
  // vector<int> differenceVect = setA.toVector();
  // cout<<endl;
  // setA.displayVector(differenceVect);

  // *** REMOVE RANDOM ***
  // setA.display();
  // cout<<endl;
  // cout<<setA.remove();
  // cout<<endl;
  // setA.display();

  // *** REMOVE A SPECIFIC ITEM ***
  // setA.display();
  // cout<<endl;
  // setA.remove(54);
  // cout<<endl;
  // setA.display();

  // *** CONTAINS ***
  // cout<<setA.contains(5);

  // *** CLEAR ***
  // setA.display();
  // setA.clear();
  // setA.display();

  // *** IS_EMPTY ***
  // cout<<setA.isEmpty();

  // *** GET_CURRENT_SIZE ***
  // cout<<setB.getCurrentSize();

  // *** DISPLAY ***
  // setA.display();
}