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
            
            delete [] this->Arr;
          }


};
int main()
{
    //step 1 : allocate memoey;
  Number *number1 = new Number(5);
   Number *number2 = new Number(7);

   //step2: use the memory;

   //step 3: dealloacte the me memroy

    return EXIT_SUCCESS;

}