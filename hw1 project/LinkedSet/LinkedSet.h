#ifndef LINKED_SET_H
#define LINKED_SET_H
#include "Node.h"
#include "vector"

template <typename T> class LinkedSet {
private:
  Node *head;

public:
  LinkedSet();

  /** adds a new item to the set
 if successful, a new item is added to the set. Doesn't
 add duplicates.
 @post if successful, a new item is added
 @return true if added successfully, false if not and
 false if a duplicate is passed*/
  bool add(T val);

  /** Displays all items in the set
 @post if the set is not empty,
all items are printed */
  void display();

  /** check if the set is empty
   @post true returned if the set is empty, false otherwise
   @return true if the set is empty, false otherwise*/
  bool isEmpty();

  /** returns the current size of the set
@post the current size of the set is returned */
  int getCurrentSize();

  /** outputs whether a passed item
 is in the set
 @post if successful true of false is returned
 whether the item is present in the set or not
 @param anEntry the entry to check
 @return true if the item is in the set, false if not*/
  bool contains(int val);

  /** removes a user specified item
 @post if the item is in the set,
 the item passed is removed
 @param anEntry the entry to remove
 @return true if removed, false if not */
  bool remove(int val);

  /** removes a random item if it's in the set
 @post a random value removed if it was in the set
 @return true if removed, false if the item is not in the set
 */
  bool remove();

  /** deletes all items in the set
@post if successful, all items are removed */
  void clear();

  /** turns the set into a vector
   @post if successful, the set is turned
   into a vector */
  std::vector<int> toVector();

  /** combines two different sets
   * @post if successful, the current initial set(a set that calls this method)
   * and setB are added to a new set called setUnion
   * @param head head of the set
   * @return returns a combined array set with no duplicates */
  LinkedSet setUnion(LinkedSet head);

  /** returns the intersection of two different sets
   * @post if successful, items that are present in
   * both sets are put into a new set
   * @param head head of the set
   * @return returns a set that contains items that are present in
   * both sets */
  LinkedSet intersection(LinkedSet head);

  /** return the items that are present in the
   * @post if successful, elements that are present only in ls2(passed set) ,
   * and not in the current initial set(a set that calls this method)
   * are added to a new and returned
   * @param head head of the set
   * @return returns a set which contains items that are present only in ls2 ,
   * and not in the current initial set(a set that calls this method) */
  LinkedSet difference(LinkedSet head);
};

#endif