#include<iostream>
using namespace std;
void reversearray(int arr[],int n){
    int i=0;
    int j=n-1;
    while (i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    cout<<"Your Reversed array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
// int main()
// {
//     int n;
//     cout<<"Enter the length of the array : ";
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"Enter your "<<i+1<<" element : ";
//         cin>>arr[i];
//     }
//     cout<<"Your Entered array is : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     reversearray(arr,n);
    
// }



//Second logic

int main()
{
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter your "<<i+1<<" element : ";
        cin>>arr[i];
    }
    cout<<"Your Entered array is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int rev[n];
    int j=0;
    for (int i = n-1; i>=0; i--)
    {
        rev[j++]=arr[i];
    }
    cout<<"Your reversed array is : ";
    for ( int i = 0; i < n ; i++)
    {
        cout<<rev[i]<<" ";
    }
    
    

}