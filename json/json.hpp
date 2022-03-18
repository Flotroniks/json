#include <string>
#include <stdio.h>
using namespace std;

//make a json class

class json {       // The class
    public: 
        json();
        json(string key, string value);
        void add(string key, string value);
        void add(string key, int value);
        void add(string key, double value);
        void add(string key, bool value);
        void add(string key, json value);
        
           

        string getkey(string key);
        

        void print();
        void print(string);
        

    private: 
        string json_string;
        string key;
        string value;
 
};