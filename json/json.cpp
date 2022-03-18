#include "json.hpp"
#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;

        json::json(){
                cout<<"constructeur de json"<<endl;
                this->key = "";
                this->value = "";

        }
        json::json(string key, string value){

        }

        void json::add(string key, string value){

        }

        void json::add(string key, int value){

        }

        void json::add(string key, double value){

        }

        void json::add(string key, bool value){

        }

        void json::add(string key, json value){
            
        }
          

        string json::getkey(string key){
            
        }
        

        void json::print(){
            
        }

        void json::print(string){
            
        }