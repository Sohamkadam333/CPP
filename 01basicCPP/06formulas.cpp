#include <iostream>
#include <cmath>
using namespace std;
int main()
{       
        // Area of Triangle
        /*
        float area,breadth,height;
        cout << "Enter Breadth and Height: ";
        cin >> breadth >> height;
        // area = 0.5 * (breadth * height);
        area = (breadth * height) / 2;
        cout << "Area of Triangle is " << area;
        */

       //Perimiter of Rectangle
       /*
        float perimetere, length, breadth;
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
        perimetere = 2 * (length + breadth);
        cout << "Permiter of rectangel is: " << perimetere;
        */

       //Sum on n terms
       /*
        float sum, number;
        cout << "Enter number: ";
        cin >> number;
        sum = (number * (number + 1)) / 2;
        cout << "Sum of n terms is: " << sum;
        */

       //nth term of A.P series
       /*
        float sum, number;
        cout << "Enter number: ";
        cin >> number;
        sum = (a + (n - 1)) * d;
        cout << "Sum of n terms is: " << sum;
        */

        // root of quadratic equations
        /*
                float a, b, c, result1, result2;
                cout << "Enter value of a, b, c: ";
                cin >> a >> b >> c;
                result1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
                result2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
                cout << "roots are: " << result1<<"\n" <<result2;
        */

       // Area of Circle
       /*
        float area, radius;
        cout << "Enter Radius: ";
        cin >> radius;
        area = 3.1425f * (radius * radius);
        cout << "Area is: " << area;
        */

       //speed
       /*
        float speed, v, u, a;
        cout << "Enter 3 no: ";
        cin >> u >> v >> a;
        speed = (pow(v, 2) - pow(u, 2)) / (2 * a);
        // speed = (v*v)
        cout << speed;
        */

       //Simple Interest
       /*
        //A=final amount
        //P=initial principal balance
        //r=annual interest rate
        //t=time (in years)
        float amount, p, r, t;
        cout << "Enter balance amount: ";
        cin >> p;
        cout << "Enter annual rate: ";
        cin >> r;
        float annualRate = r / 100;
        cout << "Enter time(in years): ";
        cin >> t;
        amount = p * (1 + (annualRate * t));
        cout << "Interest Is: " << amount;
        // cout << annualRate;
        */


       // Volume of Cylinde
       /*
        float volume, radius, height;
        cout << "Enter Radius and Height: ";
        cin >> radius >> height;
        volume = 3.14f * radius * radius * height;
        cout << volume;
        */

       //Calculating Net Salary
        float netSalary, basicSalary, pAllowances, pDeduction;

        cout << "Enter basic salary,percentage of allowance, percentage of deduction: ";
        cin >> basicSalary >> pAllowances >> pDeduction;
        netSalary = basicSalary + (basicSalary * pAllowances)/100 - (basicSalary * pDeduction)/100;
        cout << netSalary;
        return 0;
}