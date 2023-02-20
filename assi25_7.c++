#include<iostream>
using namespace std;
class GCD
{
    int a,b;
    public:
        void setnum(int x,int y)
        {
            a=x;
            b=y;
        }
        void gcd()
        {
            int i,min;
            if(a<b)
                min=a;
            else
                min=b;
            for(i=min/2;i>0;i--)
            {
                if(a%i==0 && b%i==0){
                    cout<<"gcd of "<<a<<" and "<<b<<" is "<<i;
                    break;
                }
            }
        }
};
int main()
{
    int p,q;
    GCD g;
    g.setnum(25,63);
    g.gcd();
}