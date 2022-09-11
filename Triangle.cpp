#include <iostream>
#include <math.h>
using namespace std;



// code for Equilateral triangle
void herons(float s1, float s2, float s3)
{
    float semiPerimeter = (s1 + s2 + s3) / 2;
    double ans = semiPerimeter * (semiPerimeter - s1) * (semiPerimeter - s2) * (semiPerimeter - s3);
    cout <<"The area of the triangle is " << pow(ans, 0.5);
}

// area of triangle
void area(float base, float altitude)
{
    cout << "The area of the triangle is" << (base * altitude) / 2;
}

// Equilateral triangle code:
void Equilateral()
{
    float side;
    cout << "What is The length of side (In meters)?\n";
    cin >> side;
    herons(side, side, side);
}

// isosceles triangle code:
void isosceles()
{
    char choice, choice2;
    cout << "Is same side Given?\n";
    cin >> choice;
    cout << "Is other side Given?\n";
    cin >> choice;
    if ((choice == 'y') and (choice2 == 'y'))
    {
        float base, side1;
        cout << "What is The length of base (In meters)\n\n\n\n\t";
        cin >> base;
        cout << "What is the length of Any other side\n\n\n\n\t";
        cin >> side1;
        herons(base, side1, side1);
    }
    else if ((choice == 'n') and (choice2 == 'y'))
    {
        float base = base;
        char choice3;
        cout << "Is altitude given ?(y/n)\n";
        cin >> choice3;
        if (choice3 == 'n'){
            cout << "Invalid triangle";
        }
        else{
            float alt;
            cout << "What is the length of the altitude?\n\n\n\n\t";
            cin >> alt;
            area(base,alt);
        }
    }
    else {
        cout << "Inavlid Triangle\n\n\n\n\t";
    }
}

// scelene triangle code:
void scelene()
{
    char choice, choice2;
    cout << "Is Base given?  (y/n)\n";
    cin >> choice;
    cout << "Is any side Except base given?  (y/n)\n";
    cin >> choice2;
    if ((choice == 'y') and (choice2 == 'y'))
    {
        float base, side1;
        cout << "What is The length of base (In meters)\n\n\n\n\t";
        cin >> base;
        cout << "What is the length of Any other side\n\n\n\n\t";
        cin >> side1;

        float alt = pow(pow(side1, 2) - pow(base / 2, 2), 0.5);
        area(base, alt);
    }

    else if ((choice == 'n') and (choice2 == 'n'))
    {
        cout << "Invalid Triangle\n";
    }
}

// Right angled triangle code:
void RightAngled()
{
    char choice, choice2;
    cout << "Is Base given?  (y/n)\n";
    cin >> choice;
    cout << "Is Atitude given?  (y/n)\n";
    cin >> choice2;
    if ((choice == 'y') and (choice2 == 'y'))
    {
        float base, alt;
        cout << "What is The length of base (In meters)\n\t";
        cin >> base;
        cout << "What is The length of altitude (In meters)\n\t";
        cin >> alt;
        area(base, alt);
    }
    else if ((choice == 'n') and (choice2 == 'n'))
    {
        cout << "Invalid Triangle\n";
    }

    else if ((choice == 'n') or (choice2 == 'n'))
    {
        float base, hypotenus;
        cout << "What is the length of base or altitude (In meters)\n\t";
        cin >> base;
        cout << "What is the length of Hypotenus (In meters)\n\t";
        cin >> hypotenus;

        float alt = pow((pow(hypotenus, 2) - pow(base, 2)), 0.5);
        area(base, alt);
    }
}

// Main code

int main()
{
// Condition if user Input not matched any of the conditions:
start:
    int Type;
    system("CLS");
    cout << "What type of triangle Is your Triangle ?\n\t\t1. Equilateral Triangle\n\t\t2. Isosceles Triangle\n\t\t3. Scelene Triangle\n\t\t4. Right angled Triangle\n";
    cin >> Type;

    switch (Type)
    {
    case 1:
        Equilateral();
        break;
    case 2:
        isosceles();
        break;
    case 3:
        scelene();
        break;
    case 4:
        RightAngled();
        break;

    default:
        goto start;
        break;
    }
    char again;
    cout << "\n\n\n\n\tWant to do again? (y/n)\n\n\n\n\t";
    cin >> again;
    if ( again == 'y'){
        goto start;
    }
    return 0;
}
