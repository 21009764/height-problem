#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int d_feet,h_inches,angle_degree,d_inches;

    cout<<"Enter the value of h in inches  : "<< endl;
    cin>>h_inches ;

    cout<<"Enter the value of d in feet and inches  : "<< endl;
    cin>>d_feet>>d_inches;

    cout << "Enter the value of angle in degrees  : " << endl;
    cin>>angle_degree;



    double d_total_inches = d_feet*12+d_inches;
    double height_feet = h_inches/ 12 + d_total_inches*tan(angle_degree*M_PI/180);
    cout<<"height of the tree is : "<<height_feet <<" feet.";


    return 0;
}
