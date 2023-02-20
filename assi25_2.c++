#include<iostream>
using namespace std;
class Time
{
    private:
        int a,b,c;
    public:
        void settime(int x,int y,int z )
        {
            a=x;
            b=y;
            c=z;
        }
        void displaytime()
        {
            cout<<a<<" hr "<<b<<" min "<<c<<" sec";
        }
};
int main()
{
    Time t;

    t.settime(3,45,27);
    t.displaytime();
}