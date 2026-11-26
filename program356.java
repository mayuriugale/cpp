import java.util.Scanner;
class number
{
         private int Arr[];

         public number(int iSize)
         {
            Arr = new int[iSize]; //
         }
            public void Accept()
            { 
                Scanner Scanner = new Scanner(system.in);
                int iCnt =0;
                system.out.println("ente the elemete");

                for(iCnt =0; iCnt< Arr.Length; iCnt++)
                {
                    Arr[iCnt] =Scanner.nextINT();
                }

            }
              public void Display()
              {
                    int iCnt =0;
                    system.out.println("elemenys of the array are:\n");
                    for(iCnt =0; iCnt< Arr.Length; iCnt++)
                {
                    system.out.println(Arr[iCnt])
                }
              }
}

class program356
{
    public static void main(String A[])
    {
                     number nobj1 = new number(iSize:5);

                     nobj1. Accept();
                     nobj1.Display();
                      nobj1.null;
                     system.gc();
    }
}