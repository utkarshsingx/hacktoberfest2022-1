#include<iostream>
using namespace std ;

void merge(int arr[] , int l , int m , int u)
{
    int n1 = m - l + 1 ;
    int n2 = u - m ;
    
    int *left = new int[n1];
    int *right = new int[n2];
    
    for(int i = 0 ; i < n1 ; i++)
    left[i] = arr[i+l];
    for(int i = 0 ; i < n2 ; i++)
    right[i] = arr[m+i+1];
    int i , j , k ;
    for(i = 0 , j = 0 , k = l ; i < n1 && j < n2 ; )
    {
        if(left[i]<right[j])
        arr[k++] = left[i++];
        else 
        arr[k++] = right[j++];
    }
    while(i<n1)
    arr[k++] = left[i++];
    while(j<n2)
    arr[k++] = right[j++];
}
void mergesort(int arr[] , int l , int u)
{
    if(l<u)
    {
        int m = (u+l)/2;
        mergesort(arr , l , m);
        mergesort(arr , m+1 , u);
        merge(arr , l , m , u);
    }
    else 
    return ;
}
int main()
{
    int arr[9] = {9,7,5,3,1,8,6,4,2} , n = 9 ;
    mergesort(arr , 0 , 8);
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0 ;
}
