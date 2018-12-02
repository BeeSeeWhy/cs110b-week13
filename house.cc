#include <cstring>
#include <fstream>
#include <iostream>
//#include <string>
#include "house.h"
using namespace std;

House::House(){
    strcpy(street, " ");
    strcpy(city, " ");
    zip = 0;
    strcpy(state, " ");
    beds = 0;
    baths = 0;
    sq_ft = 0;
    strcpy(type, " ");
    strcpy(sale_date, " ");
    price = 0.00;
    latitude = 0;
    longitude = 0;
}
House::House(const char *s, const char *c, int z, const char *st, int bed, int bath, int s_f,
              const char *t, const char *s_d, double p, double lat, double longi) {
    strcpy(street, s);
    strcpy(city, c);
    zip = z;
    strcpy(state, st);
    beds = bed;
    baths = bath;
    sq_ft = s_f;
    strcpy(type, t);
    strcpy(sale_date, s_d);
    price = p;
    latitude = lat;
    longitude = longi;
}

void House::save(ofstream& of) {
    of.write((char *) &street, sizeof(street));
    of.write((char *) &city, sizeof(city));
    of.write((char *) &zip, sizeof(zip));
    of.write((char *) &state, sizeof(state));
    of.write((char *) &beds, sizeof(beds));
    of.write((char *) &baths, sizeof(baths));
    of.write((char *) &sq_ft, sizeof(sq_ft));
    of.write((char *) &type, sizeof(type));
    of.write((char *) &sale_date, sizeof(sale_date));
    of.write((char *) &price, sizeof(price));
    of.write((char *) &latitude, sizeof(latitude));
    of.write((char *) &longitude, sizeof(longitude));
}

void House::load(ifstream& inf) {
    inf.read((char *) &street, sizeof(street));
    inf.read((char *) &city, sizeof(city));
    inf.read((char *) &zip, sizeof(zip));
    inf.read((char *) &state, sizeof(state));
    inf.read((char *) &beds, sizeof(beds));
    inf.read((char *) &baths, sizeof(baths));
    inf.read((char *) &sq_ft, sizeof(sq_ft));
    inf.read((char *) &type, sizeof(type));
    inf.read((char *) &sale_date, sizeof(sale_date));
    inf.read((char *) &price, sizeof(price));
    inf.read((char *) &latitude, sizeof(latitude));
    inf.read((char *) &longitude, sizeof(longitude));
}
