// Unit tests for unique_id

#include <iostream>
#include "library.h"

void test_random_id() {
    Id_generator random_id_generator;
    std::string new_id = random_id_generator();
    std::cout << new_id << endl;
};

void test_determined_len_id() {
    Id_generator random_id_generator(8);
    std::string new_id = random_id_generator();
    std::cout << new_id << endl;
};

int main(){
    test_random_id();
    test_determined_len_id();
}