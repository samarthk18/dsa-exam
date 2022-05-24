#include <iostream>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void Heapify(int a[],int size,int i)
{
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<size && a[left]>a[largest])
    {
        largest=left;
    }
   
    if(right<size && a[right]>a[largest])
    {
        largest=right;
    }
    
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        Heapify(a,size,largest);
    }
}

void Heapsort(int a[],int size)
{
    for(int i=size/2-1;i>=0;i--)
    {
        Heapify(a,size,i);
    }
    
    for(int i=size-1;i>0;i--)
    {
        swap(a[0],a[i]);
        Heapify(a,i,0);
    }
}

int main()
{
    int n;
    cout<<"How many numbers you want to enter";
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cout << "Enter elements: ";
        cin >> arr[i];
    }
    cout<<"\nUnsorted array: "<<endl;
    display(arr,n);
    Heapsort(arr, n);
    cout << "\nSorted array: "<<endl;;
    display(arr, n);
}






   
