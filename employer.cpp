#include "employer.h"

string Employer::show() const
{
    return "Name: " + name + "\n" +
           "Date of Birthday: " + dateOfBirthday + "\n" +
           "Place of Life: " + placeOfLife + "\n" +
           "Salary: " + "$" + to_string(salary) +"\n";
};

int Employer::employers = 0;

Employer::Employer(string name, string dateOfBirthday, string placeOfLife, int salary)
   : People(), dateOfBirthday("0.00.0000"), placeOfLife("none"), salary(0)
{
    employers++;

    this->name = name;
    this->dateOfBirthday = dateOfBirthday;
    this->placeOfLife = placeOfLife;
    this->salary = salary;

    cout << "Constructor called" << endl;
};

Employer::Employer(string name, int salary)
    : People(), salary(0)
{
    this->name = name;
    this->salary = salary;
};



// Deep Copy constructor♥
Employer::Employer(const Employer& other)
    : People(other), dateOfBirthday(other.dateOfBirthday), placeOfLife(other.placeOfLife), salary(other.salary + 1)
{
    employers++;

    cout << "Deep Copy constructor called" << endl;
};

// Shalow Copy constructor♥
Employer::Employer(Employer& other)
    : People(other), dateOfBirthday(other.dateOfBirthday), placeOfLife(other.placeOfLife), salary(other.salary)
{
    employers++;

    cout << "Shalow Copy constructor called" << endl;
};

/*
 * Різниця між Deep та Shalow Copy у тому що:
 *
 * Shalow просто копіює і якщо ми процюємо з динамічною пам'ятю то скопійований об'єкт ссилатиметься на туж область
 * пам'яті, при очищені ми матимемо помилку тому що основний об'єкт вже почистив її, і туда ж знову хоче її почистити
 * скопійований, але та область вже нам не належить і прога падає. А ще Shalow це по суті той конструктор копіювання що
 * створюється компілятором самостійно без прописання власноруч.
 *
 * Deep у свій час, це той що ми прописуємо власноруч, і він при копіюванні об'єкта з динамічною пам'ятю виділяє зовсім
 * іншу область, і тому у основного свій адрес пам'яті а у скопійованного свій.
*/


//Move constructor♥
Employer::Employer(Employer&& other)
    : People(other), dateOfBirthday(other.dateOfBirthday), placeOfLife(other.placeOfLife), salary(other.salary)
{
    employers++;

    other.name = "";
    other.dateOfBirthday = "";
    other.placeOfLife = "";
    other.salary = 0;

    cout << "Move constructor called" << endl;
};

/*
 * Move конструктор.
 * З назви можна зрозуміти що це конструктор переміщення, і що він переносить значення з одного об'єкта у інший.
 * Саме тому створюючи конструктор ми спочатку копіюємо значення з одного об'єкта у інший, і потім зануляєм перший.
*/

Employer::~Employer()
{
    employers--;
    cout << "Destructor called" << endl;
};
