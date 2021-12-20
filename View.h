//
// Created by HP on 2021/12/17.
//

#ifndef INTERFACES_VIEW_H
#define INTERFACES_VIEW_H


#include <iostream>
#include <string>

using namespace std;

class View {
public:
    void showMenu(int &);

    void showOwnerMenu(int &);

    void showUserMenu(int &);

    void showAddBook();

    void showRemoveBook();

    void showStorePublisherInformation();

    void showReport();

    void showBrowseBook();

    void showSearchBook();

    void showCheckOutBasket();

    void showOrder();

    const string &getUsername() const;

    const string &getOwnername() const;

    void OwnerLogin();

    void UserLogin();

private:
    string username;
    string ownername;
    string password;
    string book;
    int price = 0;
    int page = 0;
    string publisher;
    string Address = "! Address shows here !";
    string Email = "! Email shows here !";
    string Phone = "! Phone shows here !";
    string Bank = "! Bank Account shows here !";
    string ISBN;
    string author;
    string genre;
    string ordernumber;
    string order = "! Other order information shows here !";
    string search;
};


#endif //INTERFACES_VIEW_H
