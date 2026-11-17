#ifndef DARRAY_H

#define DARRAY_H

#include

using namespace std;

class DArray

{

private:

int* arr;

int size;

int cap;

public:

DArray();

~DArray();

void push_back(int value);

int size() const;

int capacity() const;

int& operator[](int index);

friend ostream& operator<<(ostream& out, const DArray& d);

};

#endif
