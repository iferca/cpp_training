//
// Created by iferca on 3/22/23.
//
#include <iostream>
#include <string>
#include "geopoint.h"

using namespace std;


ofstream &operator<<(ofstream &stream, GeoPoint &data) {
    stream.write(reinterpret_cast<char *>(&data), sizeof(GeoPoint));
    return stream;
}

ifstream &operator>>(ifstream &istream, GeoPoint &data) {
    istream.read(reinterpret_cast<char *>(&data), sizeof(GeoPoint));
    return istream;
}

std::ostream &operator<<(ostream &stream, GeoPoint &data) {
    stream << data.name << " ( " << data.lat << ", " << data.lon << " )";
    return stream;
}
