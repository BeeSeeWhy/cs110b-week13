#ifndef HOUSE_H
#define HOUSE_H

#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

class House {
private:
    char street[300];
    char city[200];
    int zip;
    char state[50];
    int beds;
    int baths;
    int sq_ft;
    char type[50];
    char sale_date[100];
    double price;
    double latitude;
    double longitude;
public:
    House();
    House(const char *s, const char *c, int z, const char *st, int bed, int bath, int s_f,
      const char *t, const char *s_d, double p, double lat, double longi);
    void save(ofstream &of);
    void load(ifstream &inf);

};
#endif
