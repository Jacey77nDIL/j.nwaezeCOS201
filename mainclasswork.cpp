#include <iostream>
#include <iomanip> // for setw, setprecision
#include <cstdlib> // for rand(), srand()
#include <ctime>   // for time()

using namespace std;

int main()
{
    // ===== Step 1: Input =====
    string name;
    bool isPau;
    int courseChoice, locationChoice;

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Is PAU student? (1=true, 0=false): ";
    cin >> isPau;

    cout << "Enter course (1-5): ";
    cin >> courseChoice;

    cout << "Enter location (1-5): ";
    cin >> locationChoice;

    // ===== Step 2: Map course choice to days and registration fee =====
    string courseName;
    int days = 0;
    double regFee = 0.0;

    if (courseChoice == 1)
    {
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    }
    else if (courseChoice == 2)
    {
        courseName = "Painting";
        days = 5;
        regFee = 8000;
    }
    else if (courseChoice == 3)
    {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000;
    }
    else if (courseChoice == 4)
    {
        courseName = "Baking";
        days = 5;
        regFee = 13000;
    }
    else if (courseChoice == 5)
    {
        courseName = "Public Speaking";
        days = 2;
        regFee = 5000;
    }
    else
    {
        cout << "Invalid course choice!" << endl;
        return 0;
    }

    // ===== Step 3: Map location choice to lodging cost per day =====
    string locationName;
    double lodgingPerDay = 0.0;

    if (locationChoice == 1)
    {
        locationName = "Camp House A";
        lodgingPerDay = 10000;
    }
    else if (locationChoice == 2)
    {
        locationName = "Camp House B";
        lodgingPerDay = 2500;
    }
    else if (locationChoice == 3)
    {
        locationName = "Camp House C";
        lodgingPerDay = 5000;
    }
    else if (locationChoice == 4)
    {
        locationName = "Camp House D";
        lodgingPerDay = 13000;
    }
    else if (locationChoice == 5)
    {
        locationName = "Camp House E";
        lodgingPerDay = 5000;
    }
    else
    {
        cout << "Invalid location choice!" << endl;
        return 0;
    }

    // ===== Step 4: Compute base costs =====
    double lodgingCost = lodgingPerDay * days;
    double lodgingDiscount = 0.0;
    double regDiscount = 0.0;

    // Lodging discount: 5% if PAU student and Camp House A or B
    if (isPau && (locationChoice == 1 || locationChoice == 2))
    {
        lodgingDiscount = 0.05 * lodgingCost;
        lodgingCost -= lodgingDiscount;
    }

    // Registration discount: 3% if days > 5 OR regFee > 12000
    if (days > 5 || regFee > 12000)
    {
        regDiscount = 0.03 * regFee;
        regFee -= regDiscount;
    }

    // ===== Step 5: Random promo =====
    srand(time(0));
    int r = 1 + rand() % 100; // random number between 1 and 100
    double promo = 0.0;
    if (r == 7 || r == 77)
    {
        promo = 500;
    }

    // ===== Step 6: Compute total =====
    double total = regFee + lodgingCost - promo;

    // ===== Step 7: Output neatly =====
    cout << fixed << setprecision(2);
    cout << "\n===== PAYMENT BREAKDOWN =====\n";
    cout << "Name: " << name << "   (PAU student: " << (isPau ? "Yes" : "No") << ")\n";
    cout << "Course: " << courseName << "   Days: " << days << "\n";
    cout << "Registration: N" << regFee
         << "  (discount: N" << regDiscount << ")\n";
    cout << "Lodging: N" << lodgingPerDay << " x " << days
         << " = N" << (lodgingPerDay * days)
         << "  (discount: N" << lodgingDiscount << ")\n";
    cout << "Random draw: " << r
         << "  Promo applied: N" << promo << "\n";
    cout << "--------------------------------------\n";
    cout << "TOTAL: N" << total << "\n";

    return 0;
}
