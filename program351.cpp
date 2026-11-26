#include<iostream>
using namespace std;
class Number
{
    public:
         int *Arr;  //8
         int iLength;  //4byte

          Number(int iSize)     //default cons
          { 
                 cout<<"INSIDE  cons\n";
              this->iLength = iSize;    
               this -> Arr =new int[iLength]; 
          }

          ~Number()
          {
            cout<<"INSIDE  discons\n";
            delete [] this->Arr;
          }

          void Accept()
          { 
            int iCnt= 0;

            cout<<"Enter the elements:\n";
            for(iCnt =0; iCnt<iLength; iCnt++)
            {
              cin>>Arr[iCnt];
            }
          }
void Display()
          { 
            int iCnt= 0;

            cout<<" elements of the aray :\n";
            for(iCnt =0; iCnt<iLength; iCnt++)
            {
              cout<<Arr[iCnt]<<endl;
            }
          }



};
int main()
{
    //step 1 : allocate memoey;
  Number *number1 = new Number(5);
   

   //step2: use the memory;
   number1->Accept();
   number1->Display();

   //step 3: dealloacte the me memroy
   delete number1;
  

    return EXIT_SUCCESS;

}