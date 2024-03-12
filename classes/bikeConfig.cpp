#include "bikeConfig.h"
BikeConfig::BikeConfig()
    : BikeConfig("", 0, 0, 0, "") {}

BikeConfig::BikeConfig(string name, int price, int height, int width, string country)
    : name(name), price(price), height(height), width(width), country(country){};

BikeConfig &BikeConfig::operator=(const BikeConfig &obj){
    if (this != &obj) {
        name = obj.name;
        price = obj.price;
        height = obj.height;
        width = obj.width;
        country = obj.country;
    }
    return *this;
}
