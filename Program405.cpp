#include<iostream>
using namespace std;

class ArrayX
{
   public:
   float *Arr;
   int iSize;
    ArrayX(int length);
    ~ArrayX();
    void Accept ();
    void Display();
    float Addition();

};
 ArrayX:: ArrayX(int length)
    {
       iSize = length;
       Arr = new float(iSize);
    }
   ArrayX:: ~ArrayX()
    {
        delete [] Arr;
    }
    void ArrayX:: Accept ()
    {
        int i = 0;
        cout<<"Please enter the values :"<<"\n";
        for(i = 0 ; i < iSize ; i++)
        {
           cin>>Arr[i];
        }
    }
    void ArrayX:: Display()
    {
        int i = 0;
        cout<<"Elements of Array Are : \n";
        for(i = 0 ; i < iSize ; i++)
        {
           cout<<Arr[i]<<"\n";
        }
    }
    float ArrayX:: Addition()
    {
        float iSum = 0.0f;
        int i = 0;
        for(i = 0 ; i < iSize ; i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }

int main()
{
    float iRet = 0.0f;
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();
    iRet = aobj.Addition();
    cout<<"Addition is :"<<iRet<<"\n";
    
    return 0;
}