#pragma once
#include <fstream>
using namespace std;

class CropInfo{
    public:
        CropInfo();
         ~CropInfo();
        CropInfo(const CropInfo &other);
        void operator =(const CropInfo &other);
        void readFromFile(istream &file);
        void readFromUser();
        void print(ostream &out);
        bool codeIsBetween(double lowerBound, double upperBound);
    private:

            enum{  NUM_YEARS = 19,
              START_YEAR = 2000}; 
        double cropCode;
        char *name;
        double *yieldsByYear;
        
};
