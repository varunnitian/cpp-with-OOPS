#include<iostream>
using namespace std;
int binarySearch(int array[], int key, int low, int high) {
  
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == key)
      return mid;

    if (array[mid] < key)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return 1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int key;
  cout<<"enter the key : ";
  cin>>key;
  int result = binarySearch(array, key, 0, 6);
  if (result == 1)
    printf("Not found");
  else
    printf("Element is found at index :  %d", result);
}