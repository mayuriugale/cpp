#include<iostream>
using namespace std;
int main()
{
   int *ptr = NULL;
   int iSize = 0, iCnt =0;
   cout<<"enter number of elements:\n";
   cin>>iSize;
   //step 1:allocate the memeory;
   ptr = new int[iSize];
  //step2: use the memory;
  cout<<"enter the elements:\n";
 for(iCnt = 0; iCnt <5;iCnt++)
 {
    cin>>ptr[iCnt];
 }
 cout<<"elements of the arry are:\n";
 for(iCnt = 0; iCnt <5;iCnt++)
 {
    cout<<ptr[iCnt]<<endl;
 }

  //free the memoey;
delete [] ptr;             // free(ptr)
    return EXIT_SUCCESS;
}