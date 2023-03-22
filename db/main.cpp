#include <iostream>
#include <string>
#include <vector>
#include "geopoint.h"

using namespace std;

int main(int argc, char *argv[]) {
    GeoPoint point_1(-40.36476, -71.46846, "Villa pudú pudú");
    GeoPoint point_2(-54.8235, -68.3381, "Ushuaia");
    GeoPoint point_3(-25.6939050, -54.4365376, "Cataratas de Iguasú");

    string file_name = "points.dat";

    try {
        vector<GeoPoint> points_out{point_1, point_2, point_3};
        std::ofstream out(file_name.c_str(), ios::binary | ios::app);
        for (auto p: points_out) {
            out << p;
        }
        out.close();

        std::ifstream in(file_name.c_str(), ios::binary);

        for (int i = 0; i < 6; ++i) {
            GeoPoint tmp;
            in >> tmp;
            cout << tmp << endl;
        }

        return 0;
    } catch (exception &e) {
        cerr << e.what() << endl;
        return -1;
    }
}
