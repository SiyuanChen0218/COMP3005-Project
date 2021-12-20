#include "View.h"

void View::showMenu(int &choice) {
    cout << endl << endl;
    cout << "What's your identity':" << endl;
    cout << "  (1) Owner" << endl;
    cout << "  (2) User" << endl;
    cout << "  (0) Exit" << endl << endl;

    cout << "Enter your selection: ";
    cin >> choice;
    if (choice == 0)
        return;

    while (choice < 1 || choice > 2) {
        cout << "Enter your selection: ";
        cin >> choice;
    }
}

void View::showOwnerMenu(int &choice) {
    if (getOwnername() == "") {
        OwnerLogin();
    }
    cout << endl << endl;
    cout << "What you want to do: " << endl;
    cout << "  (1) Add new book" << endl;
    cout << "  (2) Remove book" << endl;
    cout << "  (3) Store information of publisher" << endl;
    cout << "  (4) Get the report of the store" << endl;
    cout << "  (0) Exit" << endl << endl;

    cout << "Enter your selection: ";
    cin >> choice;
    if (choice == 0)
        return;

    while (choice < 1 || choice > 4) {
        cout << "Enter your selection: ";
        cin >> choice;
    }
}

void View::showUserMenu(int &choice) {
    if (getUsername() == "") {
        UserLogin();
    }
    cout << endl << endl;
    cout << "What you want to do: " << endl;
    cout << "  (1) Browse book" << endl;
    cout << "  (2) Search book" << endl;
    cout << "  (3) Checkout basket" << endl;
    cout << "  (4) Check order" << endl;
    cout << "  (0) Exit" << endl << endl;

    cout << "Enter your selection: ";
    cin >> choice;
    if (choice == 0)
        return;

    while (choice < 1 || choice > 4) {
        cout << "Enter your selection: ";
        cin >> choice;
    }
}

void View::showAddBook() {
    cout << endl << endl;\
    cout << "Book you want to add:" << endl;
    cout << "Title:";
    cin >> book;
    cout << "ISBN:";
    cin >> ISBN;
    cout << "Author:";
    cin >> author;
    cout << "Genre:";
    cin >> genre;
    cout << "Page Number:";
    cin >> page;
    cout << "Price:";
    cin >> price;
    cout << "Add Book '" << book << "' success." << endl;
    cout << "   ISBN:" << ISBN << endl;
    cout << "   Title: " << book << endl;
    cout << "   Author: " << author << endl;
    cout << "   Genre: " << genre << endl;
    cout << "   Price: " << price << endl << endl;
}

void View::showRemoveBook() {
    cout << endl << endl;
    cout << username << endl;
    cout << "Book you want to remove:";
    cin >> book;
    cout << "Remove Book '" << book << "' success." << endl;
}

void View::showStorePublisherInformation() {
    cout << endl << endl;
    cout << "Publisher you want to see: ";
    cin >> publisher;
    cout << "Publisher: " << publisher << endl;
    cout << "Address:" << Address << endl;
    cout << "Email address:" << Email << endl;
    cout << "Phone number:" << Phone << endl;
    cout << "Bank account:" << Bank << endl;
}

void View::showReport() {
    cout << endl << endl;
    cout << "! Report should show here !" << endl;
}

void View::showBrowseBook() {
    cout << endl << endl;
    cout << "Booklist:" << endl << endl;
    cout << "   ISBN:" << ISBN << endl;
    cout << "   Title: " << book << endl;
    cout << "   Author: " << author << endl;
    cout << "   Genre: " << genre << endl;
    cout << "   Price: " << price << endl << endl;

    cout << "! Other books should show here !" << endl << endl << endl;
}

void View::showSearchBook() {
    cout << endl << endl;
    cout << "Search Book(ISBN, title, author, genre):" << endl;
    cin >> search;
    cout << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Title: " << book << endl;
    cout << "Genre: " << genre << endl;
    cout << "Author: " << author << endl;
    cout << "   Price: " << price << endl << endl;

    cout << "! Other books should show here !" << endl << endl << endl;
}

void View::showCheckOutBasket() {
    cout << endl << endl;
    cout << "! Check Out Basket should show here !" << endl << endl;
    cout << "Check out" << endl;
    ordernumber = "A01";
    cout << "Make order success! Order number:" << ordernumber <<endl << endl;
}

void View::showOrder() {
    cout << endl << endl;
    cout << "Order information:" << endl;
    cout << ordernumber << endl;
    cout << order << endl;
}

const string &View::getUsername() const {
    return username;
}

const string &View::getOwnername() const {
    return ownername;
}

void View::OwnerLogin() {
    cout << endl << endl;
    cout << "Owner" << endl;
    cout << "Ownername:";
    cin >> ownername;
    cout << "password:";
    cin >> password;
}

void View::UserLogin() {
    cout << endl << endl;
    cout << "User" << endl;
    cout << "Username:";
    cin >> username;
    cout << "password:";
    cin >> password;
}

