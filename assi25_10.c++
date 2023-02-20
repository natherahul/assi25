#include<iostream>
using namespace std;
class Area
{
    private:
        int rad,length,breadth,side;
    public:
        void area(float r)
        {
            rad=r;
            float k=3.14*rad*rad;
            cout<<"area of circle is "<<k<<endl;
        }
        void area(int l,int b)
        {
            length=l;
            breadth=b;
            float k;
            k=(length*breadth)/2;
            cout<<"area of rectangle is "<<k<<endl;
        }
        void area(int s)
        {
            side=s;
            cout<<"area of square is "<<side*side<<endl;
        }
};
int main()
{
    Area a1,a2,a3;
    float r;
    cout<<"enter the radius of circle:";
    cin>>r;
    a1.area(r);
    int l,b;
    cout<<endl<<"enter the length and breadth rectangle: ";
    cin>>l>>b;
    a1.area(l,b);
    int s;
    cout<<endl<<"enter the side of square:";
    cin>>s;
    a1.area(s);

}