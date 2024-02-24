#include <iostream>
#include "client.h"
#include "employer.h"
#include "bikeConfig.h"

int main() {

    bikeConfig Bike1("Bike1", 15000, 2, "Ukraine");

    cout << Bike1.show() << endl;

    return 0;
}
