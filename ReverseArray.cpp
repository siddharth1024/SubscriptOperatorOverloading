#include<iostream>

using namespace std;

class Array
{
    int *a, size;
	int rev;
	
    public:
	
        Array(int _size = 10)
        {
            size = _size;
            a = new int[size];
            rev = 0;
        }

        int &operator[](int index)
        {
            if(rev)
                return a[(size-1)-index];
            return a[index];
        }

        void reverse()
        {
            rev = !rev;
        }
};

int main()
{	
	Array a(5);
    
    for(int i=0; i<5 ; i++)
        a[i] = i*i;
    
    cout<<"\nBefore Reversing :  ";
    for(int i=0; i<5 ; i++)
        cout<<a[i]<<"  ";
    
    a.reverse();
    
    cout<<"\nAfter Reversing :  ";
    for(int i=0; i<5 ; i++)
        cout<<a[i]<<"  ";
        
}
