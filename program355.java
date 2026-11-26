import java.util.Scanner;
class number
{
         private int Arr[];

         public number(int iSize)
         {
            Arr = new int[iSize];
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
              public int Summation()
              {
                    int iCnt =0;  int iSum =0;
                    system.out.println("elemenys of the array are:\n");
                    for(iCnt =0; iCnt< Arr.Length; iCnt++)
                {
                    system.out.println(Arr[iCnt])
                }
                    return iSum;
              }
              public  float Average()
              {
                    int iCnt =0;  int iSum =0;
                    system.out.println("elemenys of the array are:\n");
                    for(iCnt =0; iCnt< Arr.Length; iCnt++)
                {
                    system.out.println(Arr[iCnt])
                }
}                          return((float)iSum/(iCnt))
}

class program356
{
    public static void main(String A[])
    {


                     number nobj1 = new number(iSize:5);

                     nobj1. Accept();
                     nobj1.Display();

                     iRet = nobj1.Summation();
                      system.out.println("Addtion is:"+iRet);

                      fRet = nobj1.Average();
                      system.out.println("Avereage is:"+fRet);

                      nobj1.null;
                     system.gc();
    }
}