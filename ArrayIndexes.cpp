#include<iostream>
#include<math.h>

using namespace std;

class Array
{
    int *a, size, startIndex;
    float d;
    
    public:
        Array(int i = 0, int s = 10)
        {
            size = s;
            a = new int[size];
            startIndex = i;
            d = 0.0f;
        }
        
        int &operator[](int index)
        {
            if(index < startIndex || index > size-1)
            {
                cout<<"\n ** ArrayException : Index "<<index<<" is Out of Range **";
                return a[startIndex];
            }
            return a[index-startIndex];
        }
    
        float operator[](float index)
        {
            int c = ceil(index);
            int f = floor(index);
            float l = index - f;
            float r = c - index;
            float ans = a[c]*l + a[f]*r;
            return ans;
        }
};

int main()
{
    int i;
    Array b(0, 10);
    
    b[1] = 20;
    b[2] = 40;
    
    cout<<"\nb[1] : "<<b[1];
    cout<<"\nb[1.2] : "<<b[1.2f];
    cout<<"\nb[1.8] : "<<b[1.8f];
    cout<<"\nb[2] : "<<b[2];
    
    return 0;
}
