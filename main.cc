#include <iostream>
#include "syncker.cc"

using namespace std;

const int MIN_ARG_NUM = 2;

void get_help() {
    cout << endl << "Usage: syncker <command>" << endl
    << "Available commands:" << endl
    << "pull:              Updates local database. Use --install to also apply the changes." << endl
    << "push:              Updates server database with local changes. If no changes are found does nothing." << endl
    << "install:           Installs new entries from local database." << endl
    << "register <email>:  Creates a new user on Syncker server." << endl
    << "login <email>:     Authenticates user with Syncker server." << endl
    << "help:              Display this help." << endl;
}

int main(int argc, char *argv[]) {
    if (argc < MIN_ARG_NUM) {
        cout << "Wrong number of argments" << endl;
            get_help();
        return 1;
    }
    SynckerCLI cli;
    cout << argc - 2 << endl;
    cli.normalize(argv, argc);
    // cout << "hello world" << endl;
    return 0;
}
