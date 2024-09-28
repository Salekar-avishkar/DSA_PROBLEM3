#include<iostream>
using namespace std;
 int main(){
    int n=4;
    int arr[n]={2,3,6,5};
    int mx=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>mx)
        {
            mx=arr[i];
        } 
    }
    int second_mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=mx)
        {
            if (arr[i]>second_mx)
            {
                second_mx=arr[i];
                
            }
            
        }
    }
    cout<<second_mx<<endl;
    
    
    
 }