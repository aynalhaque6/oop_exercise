//
// Created by aynal on 4/20/26.
//

#ifndef NEW_FOLDER__2_H
#define NEW_FOLDER__2_H

class list {
public:
    virtual void store(int val) = 0;
    virtual int retrieve() = 0;
};

class queue : public list {
private:
    static const int size = 100;
    int q[size];
    int rear, front;
public:
    queue() { rear = 0; front = 0; }
    void store(int val) {
        if (rear < size) {
            q[rear] = val;
            rear++;
        }
    }
    int retrieve() {
        if (front < rear)
            return q[front++];
        return -1;
    }
};

class stack : public list {
private:
    static const int size = 100;
    int stk[size];
    int tos;
public:
    stack() { tos = 0; }
    void store(int val) {
        if (tos < size) {
            stk[tos] = val;
            tos++;
        }
    }
    int retrieve() {
        if (tos > 0)
            return stk[--tos];
        return -1;
    }
};


#endif //NEW_FOLDER__2_H
