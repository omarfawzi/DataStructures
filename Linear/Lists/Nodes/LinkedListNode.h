//
// Created by salama on 2/23/19.
//

template<typename T>

struct LinkedListNode {
public:
    LinkedListNode<T>(T data) {
        this->data = data;
        this->next = nullptr;
    }

    T data;
    struct LinkedListNode *next;
};
