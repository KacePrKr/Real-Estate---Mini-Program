//
// Created by THESITM on 3/8/2023.
//

#include <iostream>
#include <string>


using namespace std;
#define SIZE 50


struct forRent{
    string name;
    string address;
    string detail;
    string toContact;
    string type;
    string floor;
    string aera;
    int bedroom;
    int bathroom;
    string owner;
    int price;


}rentDetail[SIZE];



struct forSale{
    string name;
    string address;
    string detail;
    string toContact;
    string type;
    string floor;
    string aera;
    int bedroom;
    int bathroom;
    string owner;
    int price;

}saleDetail[SIZE];



int forHomeFun(){
    for (int i = 0; i < 3; i++) {
        rentDetail[i].name = "San Chaung";


    }



}



int forRentFun(){


}



int forSaleFun(){


}