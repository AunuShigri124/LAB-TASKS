#ifndef DARRAY_H

#define DARRAY_H

#include

using namespace std;

class DArray

{

private:

int* arr;

int sz;

int cap;

public:

DArray();

DArray(const DArray& other);

~DArray();

void push_back(int value);

int size() const;

int capacity() const;

int& operator[](int index);

const int& operator[](int index) const;

bool operator==(const DArray& other) const;

friend ostream& operator<<(ostream& out, const DArray& d);

};

#endif
