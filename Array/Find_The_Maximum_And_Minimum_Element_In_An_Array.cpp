#include<bits/stdc++.h>
using namespace std;

struct Pair
{
    int min;
    int max;
};

struct Pair getMinMax(int a[], int n)
{
    struct Pair minmax;
    int i;

    if(n == 1)
    {
        minmax.max = a[0];
        minmax.min = a[0];
        return minmax;
    }
    if(a[0]>a[1])
    {
      minmax.max = a[0];
      minmax.min = a[1];
    }
    else
    {
        minmax.max = a[1];
        minmax.min = a[0];
    }

    for(i=2;i<n;i++)
    {
        if(a[i] > minmax.max)
        {
            minmax.max = a[i];
        }
        else if(a[i] < minmax.min)
        {
            minmax.min = a[i];
        }
    }
    return minmax;
};

int main()
{
    int a[] = {1000, 45, 763 ,0, 456, 5000};

    int n = sizeof(a)/sizeof(a[0]);

    struct Pair minmax = getMinMax(a, n);

    cout<<"Minimum: "<<minmax.min<<endl;

    cout<<"Maximum: "<<minmax.max<<endl;

}
