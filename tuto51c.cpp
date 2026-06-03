#include <iostream>
#include <math.h>
using namespace std;

class Point{
    public:
    int x, y;

    Point(int x, int y){
        this->x = x;
        this->y = y;
    }

};

class Line{
    private:
    Point point1;
    Point point2;

    public:
    Line(Point p1, Point p2) : point1(p1), point2(p2){}

    int length(){

        int dx = point2.x - point1.x;
        int dy = point2.y - point1.y;

        int line = sqrt(dx*dx + dy*dy);

        return line;
    
    }
       
};

int main(){
    
    Point p1(0, 0);
    Point p2(3, 4);

    Line line1(p1, p2);

    cout << "Length of line: " << line1.length() << endl;

    return 0;
}
