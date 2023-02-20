#include<iostream>
using namespace std;
class Square
{
    int num;
    static int k;
    public:
        void setnum(int x)
        {
            num=x;
        }
        int square()
        {
            k++;
            return num*num;
        }
        int getnum()
        {
            return num;
        }
        int count()
        {
            return k;
        }
};
int Square::k=0;
int main()
{
    int data;
    cout<<"enter the number:";
    cin>>data;
    Square s,s1,s2;
    s.setnum(data);
    cout<<"square of "<<s.getnum()<<" is "<<s.square()<<endl;
    s1.setnum(10);
    cout<<"square of "<<s.getnum()<<" is "<<s1.square()<<endl;
    s2.setnum(13);
    cout<<"square of "<<s.getnum()<<" is "<<s2.square()<<endl;
    cout<<"counting of function "<<s.count()<<" times";
}