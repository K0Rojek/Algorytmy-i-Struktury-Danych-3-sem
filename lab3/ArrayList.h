#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include<iostream>
#include<fstream>

class ArrayList {
private:
    int* items;
    int head = -1;                    //index of first element
    int tail = -1;                    //index of last elements
    int capacity = 0;                 //array size
    int size = 0;                    //number of elements in array

public:
    ArrayList(int c);
    bool empty();
    bool full();
    int getSize();
    int getCapacity();
    int getFirst();
    int getLast();
    int getNext(int p);
    int getPrev(int p);
    int retrieve(int p);
    void append(int x);
    void preppend(int x);
    friend std::ostream& operator<<(std::ostream& out, ArrayList& l); //wypisuje elementu listy
    void insert(int p, int x);
    void del(int p);
    void clear();
    int locate(int x);
    void deleteX(int x);
    void deleteAllX(int x);
    void concat(ArrayList& l);
    ~ArrayList();
};

#endif