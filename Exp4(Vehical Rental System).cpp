#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Vehicle {
    string vehicleID;
    string make;
    string model;
    int year;
    double rentalRate;
    bool isRented;
};

void displayAvailableVehicles(const vector<Vehicle>& vehicles) {
    bool availableFound = false;
    cout << "\nAvailable Vehicles:\n";
    for (int i = 0; i < vehicles.size(); i++) {
        if (!vehicles[i].isRented) {
            cout << "ID: " << vehicles[i].vehicleID << ", Make: " << vehicles[i].make
                 << ", Model: " << vehicles[i].model << ", Year: " << vehicles[i].year
                 << ", Rate: $" << vehicles[i].rentalRate << "/day\n";
            availableFound = true;
        }
    }
    if (!availableFound) {
        cout << "No vehicles are available for rent.\n";
    }
}

void rentVehicle(vector<Vehicle>& vehicles) {
    string vehicleID;
    int days;
    bool found = false;

    cout << "\nEnter Vehicle ID to rent: ";
    cin >> vehicleID;
    cout << "Enter number of days: ";
    cin >> days;

    for (int i = 0; i < vehicles.size(); i++) {
        if (vehicles[i].vehicleID == vehicleID && !vehicles[i].isRented) {
            vehicles[i].isRented = true;
            double totalCost = vehicles[i].rentalRate * days;
            cout << "Rental Cost for " << days << " days: $" << totalCost << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Vehicle not found or already rented!" << endl;
    }
}

void returnVehicle(vector<Vehicle>& vehicles) {
    string vehicleID;
    bool found = false;

    cout << "\nEnter Vehicle ID to return: ";
    cin >> vehicleID;

    for (int i = 0; i < vehicles.size(); i++) {
        if (vehicles[i].vehicleID == vehicleID && vehicles[i].isRented) {
            vehicles[i].isRented = false;
            cout << "Vehicle returned successfully!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Vehicle not rented or invalid ID!" << endl;
    }
}

int main() {
    vector<Vehicle> vehicles;

    Vehicle car1 = {"CAR123", "Toyota", "Corolla", 2020, 50.0, false};
    Vehicle car2 = {"CAR124", "Honda", "Civic", 2019, 55.0, false};
    Vehicle car3 = {"CAR125", "Ford", "Focus", 2021, 45.0, false};

    vehicles.push_back(car1);
    vehicles.push_back(car2);
    vehicles.push_back(car3);

    int choice;
    do {
        cout << "\n1. Display Available Vehicles\n"
             << "2. Rent a Vehicle\n"
             << "3. Return a Vehicle\n"
             << "4. Exit\n"
             << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayAvailableVehicles(vehicles);
                break;
            case 2:
                rentVehicle(vehicles);
                break;
            case 3:
                returnVehicle(vehicles);
                break;
            case 4:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again!" << endl;
        }
    } while (choice != 4);

    return 0;
}
