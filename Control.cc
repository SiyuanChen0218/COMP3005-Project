#include "Control.h"

Control::Control() {

}

Control::~Control() {

}

void Control::launch() {
    while (1) {
        int choice;
        view.showMenu(choice);
        if (choice == 0)
            break;

        if (choice == 1) {
            launch1();
        }

        if (choice == 2) {
            launch2();

        }
    }
}

void Control::launch1() {
    while (1) {
        int choice1;
        view.showOwnerMenu(choice1);
        if (choice1 == 0)
            break;
        if (choice1 == 1) {
            view.showAddBook();
        }
        if (choice1 == 2) {
            view.showRemoveBook();
        }
        if (choice1 == 3) {
            view.showStorePublisherInformation();
        }
        if (choice1 == 4) {
            view.showReport();
        }
    }
}

void Control::launch2() {
    while (1) {
        int choice2;
        view.showUserMenu(choice2);
        if (choice2 == 0)
            break;
        if (choice2 == 1) {
            view.showBrowseBook();
        }
        if (choice2 == 2) {
            view.showSearchBook();
        }
        if (choice2 == 3) {
            view.showCheckOutBasket();
        }
        if (choice2 == 4) {
            view.showOrder();
        }
    }
}

