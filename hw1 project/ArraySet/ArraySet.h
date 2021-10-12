#ifndef ARRAYSET_H
#define ARRAYSET_H
#include "vector"

template <typename T> class ArraySet {
private:
  int capacity;
  int *arr;
  int currentSize = 0;

public:
  ArraySet(int capacity);

  /** Displays all items in the set
   @post if the set is not empty,
  all items are printed */
  void display();

  /** returns the current size of the set
   @post the current size of the set is returned */
  int getCurrentSize() const;

  /** check if the set is empty
   @post true returned if the set is empty, false otherwise
   @return true if the set is empty, false otherwise*/
  bool isEmpty();

  /** adds a new item to the set
   if successful, a new item is added to the set. Doesn't
   add duplicates.
   @post if successful, a new item is added
   @return true if added successfully, false if not and
   false if a duplicate is passed*/
  bool add(const T &newEntry);

  /** removes a user specified item
   @post if the item is in the set,
   the item passed is removed
   @param anEntry the entry to remove
   @return true if removed, false if not */
  bool remove(const T &anEntry);

  /** removes a random item if it's in the set
   @post a random value removed if it was in the set
   @return true if removed, false if the item is not in the set
   */
  bool remove();

  /** deletes all items in the set
   @post if successful, all items are removed */
  void clear();

  /** outputs whether a passed item
    is in the set
    @post if successful true of false is returned
    whether the item is present in the set or not
    @param anEntry the entry to check
    @return true if the item is in the set, false if not*/
  bool contains(const T &anEntry) const;

  /** turns the set into a vector
   @post if successful, the set is turned
   into a vector */
  std::vector<T> toVector();

  /** displays the vector
   @post if successful, a vector is returned
   @param v a vector that'll be displayed*/
  void displayVector(std::vector<T> v);

  /** combines two different sets
   * @post if successful, the current initial set(a set that calls this method)
   * and setB are added to a new set called setUnion
   * @param setB a setB that'll be added to the end of the current set
   * @return returns a combined array set with no duplicates */
  ArraySet<T> setUnion(ArraySet<T> setB);

  /** returns the intersection of two different sets
   * @post if successful, items that are present in
   * both sets are put into a new set
   * @param setB a different set
   * @return returns a set that contains items that are present in
   * both sets */
  ArraySet<T> intersection(ArraySet<T> setB);

  /** return the items that are present in the
   * @post if successful, elements that are present only in setB ,
   * and not in the current initial set(a set that calls this method)
   * are added to a new and returned
   * @param setB a different set
   * @return returns a set which contains items that are present only in setB ,
   * and not in the current initial set(a set that calls this method) */
  ArraySet<T> difference(ArraySet<T> setB);
};

#endif