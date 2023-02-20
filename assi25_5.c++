#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
    int num,rev;
    public:
        void setnum(int x)
        {
            num=x;
        }
        void reverse()
        {
            int rem;
            int p=0;
            int k=num;
            while(k>0)
            {
                rem=k%10;
                p=p*10+rem;
                k=k/10;
            }
            rev=p;
        }
        int getreverse()
        {
            return rev;
        }
        int getactualnum()
        {
            return num;
        }
};
int main()
{
    int a;
    cout<<"enter the number:";
    cin>>a;
    ReverseNumber r,r2;
    r.setnum(a);
    r.reverse();
    r2.setnum(897);
    r2.reverse();
    cout<<"reverse number is "<<r.getreverse()<<endl;
    cout<<"reverse number is "<<r2.getreverse()<<endl;
    cout<<"actual number of r is "<<r.getactualnum()<<endl;
}