#include "iostream"
#include "LinkedSet.cpp"

void displayVector(vector<int> vect){
    for (int i = 0; i < vect.size(); i++)
    {
        cout<<vect[i]<<" ";
    }
    
}
int main(){
    LinkedSet<int> ls;
    LinkedSet<int> ls2;
    vector<int> testingVector;
    
    
    ls.add(27);
    ls.add(4);
    ls.add(45667);
    ls.add(10);
    ls.add(17);
    ls.add(8);

    ls2.add(56);
    ls2.add(2);
    ls2.add(4);
    ls2.add(8);
    ls2.add(134);
    ls2.add(10);






    // *** INTERSECTION ***
    //  LinkedSet<int> intersection = ls.intersection(ls2);
    //  testingVector = intersection.toVector();
    //  displayVector(testingVector);
    

    // *** DIFFERENCE ***
    //  LinkedSet<int> difference = ls.difference(ls2);
    //  testingVector = difference.toVector();
    //  displayVector(testingVector);

    // *** SET_UNION ***
    // LinkedSet<int> setUnion = ls.setUnion(ls2);
    // testingVector = setUnion.toVector();
    // displayVector(testingVector);
    

  

  // *** REMOVE RANDOM ***
//   ls.display();
//   cout<<endl;
//   ls.remove();
//   cout<<endl;
//   ls.display();

  // *** REMOVE A SPECIFIC ITEM ***
//   ls.display();
//   cout<<endl;
//   ls.remove(4);
//   cout<<endl;
//   ls.display();

  //*** CONTAINS ***
  //cout<<ls.contains(132);

  // *** CLEAR ***
  // ls.display();
  // ls.clear();
  // ls.display();

  // *** IS_EMPTY ***
  //cout<<ls.isEmpty();

  // *** GET_CURRENT_SIZE *** 
  //cout<<ls.getCurrentSize();

  // *** DISPLAY ***
  //ls.display();
}