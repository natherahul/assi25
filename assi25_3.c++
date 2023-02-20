#include<iostream>
using namespace std;
class Factorial
{
    private:
        int num,k=1;
    public:
        void setnumber(int a)
        {
            num=a;
        }
        void factorial()
        {
            int i;
            i=num;
            while(num>0)
            {
                k=k*num;
                num--;
            }
            cout<<"factorial of "<<i<<" is "<<k;
        }
};
int main()
{
    int p;
    Factorial f;
    f.setnumber(5);
    f.factorial();
}