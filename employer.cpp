#include "employer.h"

Employer::Employer(string name, string dateOfBirthday, string placeOfLife, int salary)
    : name(""), dateOfBirthday("0.00.0000"), placeOfLife("none"), salary(0)
{
    this->name = name;
    this->dateOfBirthday = dateOfBirthday;
    this->placeOfLife = placeOfLife;
    this->salary = salary;
};


// Deep Copy constructor♥
Employer::Employer(const Employer& other)
    : name(""), dateOfBirthday("0.00.0000"), placeOfLife("none"), salary(0)
{
    this->name = other.name;
    this->dateOfBirthday = other.dateOfBirthday;
    this->placeOfLife = other.placeOfLife;
    this->salary = other.salary + 1;
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
    : name(other.name), dateOfBirthday(other.dateOfBirthday), placeOfLife(other.placeOfLife), salary(other.salary)
{
    other.name = "";
    other.dateOfBirthday = "";
    other.placeOfLife = "";
    other.salary = 0;
};

/*
 * Move конструктор.
 * З назви можна зрозуміти що це конструктор переміщення, і що він переносить значення з одного об'єкта у інший.
 * Саме тому створюючи конструктор ми спочатку копіюємо значення з одного об'єкта у інший, і потім зануляєм перший.
*/
