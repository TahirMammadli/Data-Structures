
class Vector{
    private:
        int current;
        int capacity;
        int* arr;
    public:
        Vector();
       ///~Vector();
        int& operator [](int i);
        int getArr(int index);
        void append(int value);        
        void insert(int value, int index);
        void append(int num, int values);
        int get(int index);
        void pop();
        int size();
        int getCap();
        void print();
    };  
