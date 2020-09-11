// Unit tests for unique_id

#include <iostream>
#include <cassert>
#include "library.h"

void test_random_id() {
    Id_generator random_id_generator;
    std::string new_id = random_id_generator();
    assert(new_id.size() == 32);
    assert(!new_id.empty());
};

void test_determined_len_id() {
    int len = 8;
    Id_generator random_id_generator(len);
    std::string new_id = random_id_generator();
    assert(new_id.size() == len);
    assert(!new_id.empty());
};

int main(){
    test_random_id();
    test_determined_len_id();
}