#include<iostream>
using namespace std;
class CIRCLE
{
   private:
        int radius;
        float area;
    public:
        void setnum(int a)
        {
            radius=a;
        }
        void findarea()
        {
            area=3.14*(radius)*radius;
            
        }
        float getarea()
        {
            return area;
        }
        int getradius()
        {
            return radius;
        }
};
int main()
{
    int x;
    cout<<"enter the radius:";
    cin>>x;
    CIRCLE r;
    r.setnum(x);
    r.findarea();
    cout<<"area of circle is "<<r.getarea();
}