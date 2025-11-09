#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string name, courseName, locationName;
    bool isPau;
    int courseChoice, locationChoice;
    int days = 0;
    int regFee = 0;
    int lodgingPerDay = 0;
    double lodgingCost = 0;
    double total = 0;
    double regDiscount = 0;
    double lodgeDiscount = 0;
    double promo = 0;

    
    cout << "Enter Full Name ===> ";
    getline(cin, name);

    cout << "Is PAU student? (1 = true, 0 = false): ";
    int temp;
    cin >> temp;
    isPau = (temp == 1);

    cout << "Enter course (1–5): \n"<<"\t1. Photograpy\n"<<"\t2. Painting\n"<<"\t3. Fish Farming\n"<<"\t4. Baking\n"<<"\t5. Public speaking\n"<<"Enter here ===> ";
    cin >> courseChoice;

    cout << "Enter course (1–5): \n"<<"\t1. Camp House A\n"<<"\t2. Camp House B\n"<<"\t3. Camp House C\n"<<"\t4. Camp House D\n"<<"\t5. Camp House E\n"<<"Enter here ===> ";
    cin >> locationChoice;

    
    if (courseChoice == 1) {
        courseName = "Photography";
        days = 3; regFee = 10000;
    } else if (courseChoice == 2) {
        courseName = "Painting";
        days = 5; regFee = 8000;
    } else if (courseChoice == 3) {
        courseName = "Fish Farming";
        days = 7; regFee = 15000;
    } else if (courseChoice == 4) {
        courseName = "Baking";
        days = 5; regFee = 13000;
    } else if (courseChoice == 5) {
        courseName = "Public Speaking";
        days = 2; regFee = 5000;
    } else {
        cout << "Invalid course selection!" << endl;
        return 0;
    }

    
    if (locationChoice == 1) {
        locationName = "Camp House A";
        lodgingPerDay = 10000;
    } else if (locationChoice == 2) {
        locationName = "Camp House B";
        lodgingPerDay = 2500;
    } else if (locationChoice == 3) {
        locationName = "Camp House C";
        lodgingPerDay = 5000;
    } else if (locationChoice == 4) {
        locationName = "Camp House D";
        lodgingPerDay = 13000;
    } else if (locationChoice == 5) {
        locationName = "Camp House E";
        lodgingPerDay = 5000;
    } else {
        cout << "Invalid location selection!" << endl;
        return 0;
    }

    // --- Compute lodging cost ---
    lodgingCost = lodgingPerDay * days;

    // --- Apply lodging discount (PAU + A or B) ---
    if (isPau && (locationChoice == 1 || locationChoice == 2)) {
        lodgeDiscount = 0.05 * lodgingCost;
        lodgingCost -= lodgeDiscount;
    }

    // --- Apply registration discount (days > 5 OR regFee > 12000) ---
    if ((days > 5) || (regFee > 12000)) {
        regDiscount = 0.03 * regFee;
        regFee -= regDiscount;
    }

    // --- Random promo ---
    int r = rand() % 100 + 1 ; 
    if (r == 7 || r == 77) {
        promo = 500;
    }

    // Compute total 
    total = regFee + lodgingCost - promo;

    
    cout << "Name: " << name << "   (PAU student: " << (isPau ? "Yes" : "No") << ")" << endl;
    cout << "Course: " << courseName << "   Days: " << days << endl;
    cout << "Registration: " << regFee << "  (reg discount: " << regDiscount << ")" << endl;
    cout << "Lodging: " << lodgingPerDay << " × " << days
     << " = " << (lodgingPerDay * days)
     << "  (lodging discount: " << lodgeDiscount << ")" << endl;
    cout << "Random draw: " << r << "  Promo applied: " << promo << endl;
    cout << "TOTAL: " << total << endl;
    
    return 0;
}
