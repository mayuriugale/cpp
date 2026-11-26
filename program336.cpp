#include<iostream>
using namespace std;

int  Average( int Arr[],int iLength)     //fun
{
   int iCnt =0;
    int iSum = 0; 

   for(iCnt =0; iCnt < iLength; iCnt++)
   {
     iSum = iSum + Arr[iCnt];
   }
}
   int  summation( int Arr[],int iLength)     //fun
{
   
   int iCnt =0;
    int iSum = 0; 

   for(iCnt =0; iCnt < iLength; iCnt++)
   {
     iSum = iSum + Arr[iCnt];
   }
   return iSum;
}
int main()
{
   int *ptr = NULL;
   int iSize = 0, iCnt =0;
   int iRet =0;
   int fRet=0;
   cout<<"enter number of elements:\n";
   cin>>iSize;
   //step 1:allocate the memeory;
   ptr = new int[iSize];
  //step2: use the memory;
  cout<<"enter the elements:\n";
 for(iCnt = 0; iCnt <iSize;iCnt++)
 {
    cin>>ptr[iCnt];
 }
 cout<<"elements of the arry are:\n";
 for(iCnt = 0; iCnt <iSize;iCnt++)
 {
    cout<<ptr[iCnt]<<endl;
 }
 iRet = summation(ptr,iSize);
 cout<<"Addtion is :"<<iRet<<endl;

 fRet = Addtion(ptr,iSize);
 cout<<"Addtion is :"<<fRet<<endl;

  //free the memoey;
delete [] ptr;             // free(ptr)
    return EXIT_SUCCESS;
}