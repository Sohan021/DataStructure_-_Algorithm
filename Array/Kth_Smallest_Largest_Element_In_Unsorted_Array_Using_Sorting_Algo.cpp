#include<bits/stdc++.h>

using namespace std;

int KthSmallest(int a[], int n, int k)
{
    int t=0;

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j+1]<a[j])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return a[k-1];
}

int main()
{
    int a[100];

    int n;

    cout<<"Enter number of element of array:";

    cin>>n;

    cout<<"Enter Elements: ";

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    ///int b = sizeof(a)/sizeof(a[0]);

    int k;

    cin>>k;

    cout<<"Kth smallest element is "<<KthSmallest(a, n, k);

    return 0;
}
