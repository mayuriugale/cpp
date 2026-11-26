#include<iostream>
using namespace std;
int main()
{
   int *ptr = NULL;
   int iSize = 0;
   cout<<"enter number of elements:\n";
   cin>>iSize;
   //step 1:allocate the memeory;
   ptr = new int[iSize];
  //step2: use the memory;

  //free the memoey;
delete ptr;
    return EXIT_SUCCESS;
}