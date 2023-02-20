#include<iostream>
using namespace std;
class complex 
{
    private:
        int a,b;
    public:
        void setvalues(int x,int y){
            a=x;
            b=y;
        }
        void print()
        {
            cout<<endl<<a<<"+"<<b<<"i";
        }
};
int main()
{
    complex c1,c2;
    c1.setvalues(4,7);
    c2.setvalues(15,20);
    c1.print();
    c2.print();
    return 0;
}