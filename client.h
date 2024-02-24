#ifndef LAB3_CLIENT_H
#define LAB3_CLIENT_H
#include <iostream>
using namespace std;

class Client
{
    string name, location, bikeMake;
    bool buyBike, credit;
    int age;
public:
    Client() : name(""), age(0), location(""), buyBike(0){};

    Client(string name);
    Client(string name, int age);
    Client(string name, int age, string location);
    Client(string name, int age, string location, bool buyBike);
    Client(string name, int age, string location, bool buyBike, bool credit);

    string show()
    {
        string str;

        str = "Name: " + name + "\n" +
              "Age: " + to_string(age) + "\n" +
              "Location: " + location + "\n";


        switch (buyBike)
        {
            case 0:
                str = str + "Buy bike: No bike purchased" + "\n";
                break;

            case 1:
                cout << "Enter bike:";
                getline(cin, bikeMake);

                str = str + "Buy bike: " + bikeMake + "\n";
                break;
        };

        switch (credit)
        {
            case 0:
                str = str + "Credit: No" + "\n";
                break;

            case 1:
                str = str + "Credit: Yes" + "\n";
                break;
        }


        return str;
    };

    ~Client()
    {
        cout << "Destructor called\n";
    };
};

#endif
