#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void PrintRectanglePerimeter(double, double);
void DoubleRectanglePerimeter(double&, double&);
void Swap(double&, double&);
void Swap(int&, int&);
double CalcCircumferenceOfCircle(double);
double CalcAreaOfCircle(double);
double CalcVolumeOfSphere(double);
double CalcRectanglePerimeter(double, double);

const double PI = 3.14;

//main function
int main(){
    cout << "Getting this line to print earns you points!\n";

    double height = 0;
    double width = 0;
    double radius = 0;

    cin >> height >> width >> radius;

    PrintRectanglePerimeter(height, width);
    cout << CalcRectanglePerimeter(height, width) << std::endl;
    cout << "... about to double height and width...\n";
    DoubleRectanglePerimeter(height, width);
    PrintRectanglePerimeter(height, width);

    return 0;
}

double CalcRectanglePerimeter (double height1, double width1){
    double perimeter;
    perimeter = (height1 * 2) + (width1 * 2);
    cout << fixed << setprecision(1);
    return perimeter;
}
void PrintRectanglePerimeter(double height1, double width1){
    cout << fixed << setprecision(1);
    cout << "A rectangle with height " << height1 << " and width " << width1 << " has a perimeter of " << CalcRectanglePerimeter(height1, width1) << "." << endl;
}
void DoubleRectanglePerimeter(double& height, double& width){
    height *= 2;
    width *= 2;
}
double CalcCircumferenceOfCircle(double radius){
    double circumferenceOutput;

    circumferenceOutput = radius * PI * 2;
    return circumferenceOutput;
}
double CalcAreaOfCircle(double radius){
    double circleArea;

    circleArea = PI * (radius * radius);
    return circleArea;
}
double CalcVolumeOfSphere(double radius){
    double volume;
    double fraction = 4.0/3.0;
    volume = fraction * PI * (radius * radius * radius);
    return volume;
}
void Swap(double& valueA, double& valueB){
    double intMem;
    intMem = valueA;
    valueA = valueB;
    valueB = intMem;
}
void Swap(int& valueA, int& valueB){
    int intMem;
    intMem = valueA;
    valueA = valueB;
    valueB = intMem;
}
