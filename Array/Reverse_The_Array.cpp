#include<bits/stdc++.h>
using namespace std;

void printA(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reverseA(int a[], int s, int e)
{
    while(s<e)
    {
        int t = a[s];
        a[s] = a[e];
        a[e] = t;
        s++;
        e--;
    }
}

int main()
{
    int a[] = {1, 4,6,8,9};

    int n =  sizeof(a)/ sizeof(a[0]);

    printA(a, n);

    reverseA(a, 0, n-1);

    cout << "Reversed array is" << endl;

    printA(a, n);

    return 0;
}


