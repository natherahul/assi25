#include<iostream>
using namespace std;
class RECTANGLE
{
    private:
        float length,breadth,area;
    public:
        void setnum(float a,float b)
        {
            length=a;
            breadth=b;
        }
        void findarea()
        {
            area=(length*breadth)/2;   
        }
        float getarea()
        {
            return area;
        }
};
int main()
{
    float x,y;
    cout<<"enter the two numbers:";
    cin>>x>>y;
    RECTANGLE r;
    r.setnum(x,y);
    r.findarea();
    cout<<"area of rectangle is "<<r.getarea();
}