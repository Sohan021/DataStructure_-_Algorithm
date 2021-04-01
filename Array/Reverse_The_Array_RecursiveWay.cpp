#include<bits/stdc++.h>
using namespace std;

void printA(int a[], int n)
{
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reverseA(int a[], int s, int e)
{
    if(s >= e)
        return;

    int t = a[s];
    a[s] = a[e];
    a[e] = t;

    reverseA(a, s + 1, e - 1);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    int n = sizeof(a)/sizeof(a[0]);

    printA(a, n);

    reverseA(a, 0, n-1);

    cout << "Reversed array is" << endl;

    printA(a, n);
}
