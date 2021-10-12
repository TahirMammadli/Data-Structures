#ifndef NODE_H
#define NODE_H

template <typename T>
class Node{
    private:
        Node*next;
        Node*prev;
        T d;

    public:
        Node(T d){
            data = d;
        }

};

#endif