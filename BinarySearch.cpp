#include <iostream>

using namespace std;

int BinarySearch(int arr[], int, int);



int main()
{
    int n,num;
    cout<<"Enter the size of your list: "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter elements of your list in ascending order: " << endl;
    for(int i =0; i<n; i++){
       cin>>arr[i];
    }
    cout<<"Enter the number u wanna search: "<<endl;
    cin>>num;
   int result = BinarySearch(arr, n, num );
     if(result != -1)
     cout<<"The location of "<<num<<" is "<<result<<endl;
    else
     cout<<"No element is found with this index"<<endl;
    return 0;

}

 int BinarySearch(int arr[],int n, int num)
{
int right=n-1,left=0,middle;
while(right>=left){
      middle=(right + left)/2;
    if(arr[middle]==num)
       return middle;

    else if(num<arr[middle])
       right=middle-1;

    else
       left = middle+1;

     }
     return -1; // index = -1 implies that the element is not in the list
   }
