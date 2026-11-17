#include "DArray.h"
DArray::DArray()
{
arr = nullptr;
sz = 0;
cap = 0;
}
DArray::DArray(const DArray& other)
{
sz = other.sz;
cap = other.cap;
if (cap == 0)
arr = nullptr;
else
{
arr = new int[cap];
for (int i = 0; i < sz; i++)
{
arr[i] = other.arr[i];
}
}
}
DArray::~DArray()
{
delete[] arr;
}
void DArray::push_back(int value)
{
if (sz == cap)
{
int newCap;
if (cap == 0)
newCap = 1;
else
newCap = cap * 2;
int* temp = new int[newCap];
for (int i = 0; i < sz; i++)
{
temp[i] = arr[i];
}
delete[] arr;
arr = temp;
cap = newCap;
}
arr[sz] = value;
sz++;
}
int DArray::size() const
{
return sz;
}
int DArray::capacity() const
{
return cap;
}
int& DArray::operator[](int index)
{
return arr[index];
}
const int& DArray::operator[](int index) const
{
return arr[index];
}
bool DArray::operator==(const DArray& other) const
{
if (sz != other.sz)
return false;
for (int i = 0; i < sz; i++)
{
if (arr[i] != other.arr[i])
return false;
}
return true;
}
ostream& operator<<(ostream& out, const DArray& d)
{
for (int i = 0; i < d.sz; i++)
{
out << d.arr[i] << " ";
}
return out;
}
