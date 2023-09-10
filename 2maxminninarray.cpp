#include<iostream>
#include<algorithm>
using namespace std;

void maxmin(int arr[],int n){
    int max=arr[0];
    int min=arr[0];
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
        
    }
    cout<<"Maximum element of the array is : "<<max<<endl;
    cout<<"Minimum element of the array is : "<<min<<endl;

    
}
// int main()
// {
//     int n;
//     cout<<"Enter the length of the array : ";
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"Enter element at "<<i<<" index : ";
//         cin>>arr[i];
//     }
//     maxmin(arr,n);
    
// }


//Second approach
int main()
{
    int n;
    cout<<"Enter the length of the array is : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element at "<<i<<" index : ";
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"Maximum element of the array is : "<<arr[n-1]<<endl;
    cout<<"Minimum element of the array is : "<<arr[0]<<endl;

}
