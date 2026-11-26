#include<iostream>
using namespace std;
class Number
{
    private:
                      int *Arr;  //8
                      int iLength;  //4byte
              
            public:
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
             int iSum =0;
            cout<<" elements of the aray :\n";
            for(iCnt =0; iCnt<iLength; iCnt++)
            {
              cout<<Arr[iCnt]<<endl;
            }
          }
          int Summation()
          {
            iSum = iSum + iCnt;
          }
         
};
int main()
{
   Number nobj1(5);
    Number nobj2(7);
    nobj1.Accept();
    cout<<"Additon is:"<<nobj1.Summation()<<endl;

   nobj2.Accept();
    cout<<"Additon is:"<<nobj2.Summation()<<endl;
   
  return EXIT_SUCCESS;}
   
  