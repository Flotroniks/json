#include <string>
#include <cstdio>
using namespace std;

//make a json class

class json {       // The class
    private:
        string json_data;
        string key;
        string value;

    public:
        json();
        ~json() {};
        json(string key, string value);
        json(string key, json json1);
        json(string key, int number);
        json(string key, bool boolean);

        void append(string key, string value);
        string toString();


    // output stream
    friend ostream& operator<< (ostream& o,json& json1);
};
string format(string a, string b);
string format(string a, json b);




