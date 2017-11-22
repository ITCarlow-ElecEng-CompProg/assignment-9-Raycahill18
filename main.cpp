/** \ Ray Cahill
 *
 * \ Exercise 9
 * \ 15/11/2017
 * \ Computer programming
 *
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void sphere(double rad, double *SA, double *V);

// main function
int main(void)
{
     //Variable declarations
     double V=0, SA=0, r=0;
     double *SA_ptr, *V_ptr;

    /**< initialize pointers */

     SA_ptr = &SA;
     V_ptr = &V;

        // main hrading on screen
     cout << "\n Sphere Calculations"<< endl;

     // while r is less than or equal to zero
     while (r<=0)
     {
         cout <<"\n Enter a value for radius (m): ";
         cin >> r;
     }

     sphere(r, SA_ptr, V_ptr);

     /**< display variable values and addresses */

     cout << "\n Sphere area : " << SA << "m^2" << endl;

     cout << "\n Volume: \t" << V << "m^3" << endl;

     return 0;
}

void sphere(double rad, double *SA, double *V)
{
    *SA = 4*M_PI*(pow(rad, 2));

    *V = 4.0 / 3.0 *M_PI*pow(rad,3);

    return;
}
