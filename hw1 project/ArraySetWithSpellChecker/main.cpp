#include "ArraySet.cpp"
#include "fstream"
#include "iostream"

using namespace std;

template <typename T> void ArraySet<T>::displayVector(vector<T> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}



// *** READ AND CHECK METHODS MUST BE APP LEVEL 
// *** METHODS I.E. MUST BE IMPLEMENTED IN MAIN.CPP 



int main() {

  ArraySet<string> dictionary(5);
  ArraySet<string> incorrect(5);
  ArraySet<string> checked(5);


  vector<string> incorrectVect = incorrect.read("incorrect.txt");
  
  vector<string> dictVect = incorrect.read("dictionary.txt");

 

   checked = dictionary.check(dictVect, incorrectVect);
   vector<string> checkedVect = checked.toVector();
   checked.displayVector(checkedVect);
}