#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter number of elements you wish to store: ";
    cin>>n;
    int a[n],i,j;
    cout<<"\nEnter array values:\n";


    for (i=0;i<n;i++)
        {
        cin >> a[i];
        }
        
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            
         if (a[j]>a[j+1])
            {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;    
            }
        }
    }
    cout<<"\nAfter Bubble sort the array is:\n";
    for (i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}