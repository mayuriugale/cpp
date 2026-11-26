#include<iostream>
using namespace std;
int main()
{
 int Arr[5] = {0};
 int iCnt =0;
 cout<<"enter the elements:\n";
 for(iCnt = 0; iCnt <5;iCnt++)
 {
    cin>>Arr[iCnt];
 }
 cout<<"elements of the arry are:\n";
 for(iCnt = 0; iCnt <5;iCnt++)
 {
    cout<<Arr[iCnt]<<endl;
 }

    return EXIT_SUCCESS;
}