//
// Created by iferca on 3/22/23.
//

#ifndef DB_GEOPOINT_H
#define DB_GEOPOINT_H

#include <cstring>
#include <string>
#include <fstream>

using namespace std;


struct GeoPoint {
    double lat;
    double lon;
    char name[50];

    GeoPoint() : lat(0), lon(0), name("") {}

    GeoPoint(double lat, double lon, string name) : lat(lat), lon(lon) {
        ::strcpy(this->name, name.c_str());
    }
};

ofstream &operator<<(ofstream &stream, GeoPoint &data);

ifstream &operator>>(ifstream &istream, GeoPoint &data);

ostream &operator<<(ostream &stream, GeoPoint &data);

#endif //DB_GEOPOINT_H
