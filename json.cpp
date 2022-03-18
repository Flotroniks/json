#include "json.hpp"
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

string format(string a, string b){

    string tmp ="\n\""+a +"\": \""+ b+"\",";
    return tmp;
}
string format(string a, json b){
    string tmp = "\n\"" + a + "\": " + b.toString();
    return tmp;
}

json::json(){
        cout<<"constructeur de json"<<endl;
        this->key = "";
        this->value = "";

    }

json::json(string key, string value){
    cout<<"clear json_data"<<endl;
    json::json_data="";
    json::json_data.append(format(key,value)) ;

    }
json::json(string key, json json1){
    cout<<"clear json_data"<<endl;
    json::json_data="";
    json::json_data.append(format(key,json1.toString())) ;
}
json::json(string key, int number){
    cout<<"clear json_data"<<endl;
    json::json_data="";
    json::json_data.append(format(key,to_string(number))) ;
}
json::json(string key, bool boolean){
    cout<<"clear json_data"<<endl;
    json::json_data="";
    json::json_data.append(format(key,to_string(boolean))) ;
}
string json::toString(){
    const string start="{";
    const string end="\n}";
    //pour enlever la virgule a la fin
    json::json_data=json::json_data.substr(0, json::json_data.size()-1);
    //mettre les crochet
    json::json_data=start+json::json_data+end;

    return json::json_data;
}
void json::append(string key, string value){
    json::json_data.append(format(key,value));
    cout<<"data added\n";
}


ostream& operator<< (ostream& o, json& json1){


    o<<"Voici je json :\n"<<json1.toString();

    return o;
}


