//
// Created by salama on 2/22/19.
//

template<typename T>

class DSInterface {
protected:
    int size = 0;
public:
    virtual void insertLast(T item) = 0;

    virtual void print() = 0;

    int getSize(){
        return this->size;
    };
};