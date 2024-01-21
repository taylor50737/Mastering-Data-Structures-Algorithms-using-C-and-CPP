#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int width;
    
    public:
        Rectangle()
        {
            length=0;
            width=0;
        }
        Rectangle(int l, int w)
        {
            length=l;
            width=w;
        }
        int area()
        {
            return length*width;
        }
        int perimeter()
        {
            return 2*(length+width);
        }
        void setLength(int l)
        {
            length=l;
        }
        void setWidth(int w)
        {
            width=w;
        }
        int getLength(int l)
        {
            return length;
        }
        int getWidth(int w)
        {
            return width;
        }
        ~Rectangle()
        {
            cout<<"Destructor";
        }
};


int main()
{
    Rectangle r(10,5);

    cout<<"Area "<<r.area()<<endl;
    cout<<"Perimeter "<<r.perimeter()<<endl;

    return 0;
}