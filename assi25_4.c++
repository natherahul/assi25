#include<iostream>
using namespace std;
class Largestnum
{
    int a,b,c,max;
    public:
        void setnum(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        void large()
        {
            if(a>b && a>c)
            {
                max=a;
            }
            else if(b>=a && b>c)
            {
                max=b;
            }
            else
            {
                max=c;
            }
        }
        int getmax()
        {
            return max;
        }
        int geta(){return a;}
        int getb(){return b;}
        int getc(){return c;}
};
int main()
{
    Largestnum l;
    int p,q,r;
    cout<<"enter the three number:";
    cin>>p>>q>>r;
    l.setnum(p,q,r);
    l.large();
    cout<<"maximum number is "<<l.getmax();
}