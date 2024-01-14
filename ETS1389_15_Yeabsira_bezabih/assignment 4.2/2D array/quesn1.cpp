#include <iostream>
using namespace std;
int main()
{
       const int MAX_SIZE = 100;
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size;
       
    cout << "Enter the size of the arrays: ";
    cin >> size;
       
    cout << "Enter " << size << " numbers for array 1: ";
    for(int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
       
    cout << "Enter " << size << " numbers for array 2: ";
    for(int i = 0; i < size; i++) {
        cin >> arr2[i];
    }
  for(int i = 0; i < size; i++) {
        if(arr1[i] = arr2[i])
    {
        cout << "The two array have identical data.";
    }
  }

      for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[i])
         {
        cout << "The two are do not have identical data";
          }
      }
    return 0;
}
