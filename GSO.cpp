#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //G
    const double G = 6.67408e-11;
    //Mass in kg
    const double earthMass = 5.972e24;
    const double moonMass = 7.34767309e22;
    const double marsMass = 6.4171e23;
    const double venusMass = 4.8675e24;
    const double mercuryMass = 3.3011e23;
    const double jupiterMass = 1.8986e27;
    const double saturnMass = 5.6834e26;
    const double uranusMass = 8.6810e25;
    const double neptuneMass = 1.0243e26;
    const double plutoMass = 1.303e22;
    const double sunMass = 1.989e30;
    double customMass = 0;
    //Radius in meters
    const double earthRadius = 6371000;
    const double moonRadius = 1737100;
    const double marsRadius = 3389500;
    const double venusRadius = 6051800;
    const double mercuryRadius = 2439700;
    const double jupiterRadius = 69911000;
    const double saturnRadius = 58232000;
    const double uranusRadius = 25362000;
    const double neptuneRadius = 24622000;
    const double plutoRadius = 1187000;
    const double sunRadius = 695700000;
    double customRadius = 0;
    //Period in seconds
    const double earthRotationalPeriod = 86164.1;
    const double moonRotationalPeriod = 2360591;
    const double marsRotationalPeriod = 88642;
    const double venusRotationalPeriod = 224700;
    const double mercuryRotationalPeriod = 140800;
    const double jupiterRotationalPeriod = 4332.59;
    const double saturnRotationalPeriod = 10759.22;
    const double uranusRotationalPeriod = 30685.4;
    const double neptuneRotationalPeriod = 60190;
    const double plutoRotationalPeriod = 153.3;
    const double sunRotationalPeriod = 25.38;
    double customRotationalPeriod = 0;
    //Program
    bool running = true;
    cout << "Welcome to the Geostationary Orbit Calculator!" << endl;
    do {
        int choice = 0;
        double geostationaryOrbit = 0;
        double r = 0;
        do {
            cout << "Please select a planet to calculate the geostationary orbit for: " << endl;
            cout << "1. Earth" << endl;
            cout << "2. Moon" << endl;
            cout << "3. Mars" << endl;
            cout << "4. Venus" << endl;
            cout << "5. Mercury" << endl;
            cout << "6. Jupiter" << endl;
            cout << "7. Saturn" << endl;
            cout << "8. Uranus" << endl;
            cout << "9. Neptune" << endl;
            cout << "10. Pluto" << endl;
            cout << "11. Sun" << endl;
            cout << "12. Custom" << endl;
            cout << "13. Exit" << endl;
            cout << "Choice: "; cin >> choice; fflush(stdin);
            if (choice < 1 || choice > 13) {
                cout << "Invalid choice, please try again." << endl;
            }
        } while (choice < 1 || choice > 13);
        switch (choice) {
        case 1:
            customMass = earthMass;
            customRadius = earthRadius;
            customRotationalPeriod = earthRotationalPeriod;
            break;
        case 2:
            customMass = moonMass;
            customRadius = moonRadius;
            customRotationalPeriod = moonRotationalPeriod;
            break;
        case 3:
            customMass = marsMass;
            customRadius = marsRadius;
            customRotationalPeriod = marsRotationalPeriod;
            break;
        case 4:
            customMass = venusMass;
            customRadius = venusRadius;
            customRotationalPeriod = venusRotationalPeriod;
            break;
        case 5:
            customMass = mercuryMass;
            customRadius = mercuryRadius;
            customRotationalPeriod = mercuryRotationalPeriod;
            break;
        case 6:
            customMass = jupiterMass;
            customRadius = jupiterRadius;
            customRotationalPeriod = jupiterRotationalPeriod;
            break;
        case 7:
            customMass = saturnMass;
            customRadius = saturnRadius;
            customRotationalPeriod = saturnRotationalPeriod;
            break;
        case 8:
            customMass = uranusMass;
            customRadius = uranusRadius;
            customRotationalPeriod = uranusRotationalPeriod;
            break;
        case 9:
            customMass = neptuneMass;
            customRadius = neptuneRadius;
            customRotationalPeriod = neptuneRotationalPeriod;
            break;
        case 10:
            customMass = plutoMass;
            customRadius = plutoRadius;
            customRotationalPeriod = plutoRotationalPeriod;
            break;
        case 11:
            customMass = sunMass;
            customRadius = sunRadius;
            customRotationalPeriod = sunRotationalPeriod;
            break;
        case 12:
            cout << "Please enter the mass of the planet in kg: "; cin >> customMass; fflush(stdin);
            cout << "Please enter the radius of the planet in meters: "; cin >> customRadius; fflush(stdin);
            cout << "Please enter the rotational period of the planet in seconds: "; cin >> customRotationalPeriod; fflush(stdin);
            break;
        case 13:
            running = false;
            break;
        }
        if (running) {
            r = pow((G * customMass * pow(customRotationalPeriod, 2)) / (4 * pow(M_PI, 2)), 1.0 / 3.0);
            geostationaryOrbit = r - customRadius;
            cout << "The radius of the geostationary orbit is " << r << " meters." << endl;
            cout << "The geostationary orbit for the planet is " << geostationaryOrbit << " meters above the surface." << endl;
        }
    } while (running);
}