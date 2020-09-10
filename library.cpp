#include "library.h"

int Id_generator::create_seed() const {
    auto current_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_difference = (current_time - start_time) * 1000000;
    return time_difference.count();
}

string Id_generator::operator()() const {
    string id;
    for (int i = 0; i < length; ++i){
        int char_num_choice = char_num();
        if (char_num_choice == 0){
            //choose a number
            id += to_string(num());
        }
        else if (char_num_choice == 1){
            //choose case for char
            int case_choice = char_case();
            if (case_choice == 0){
                //choose upper case character
                id += upper_char_map.at(upper_char());
            }
            else if (case_choice == 1){
                //choose lower case character
                id += lower_char_map.at(lower_char());
            }
            else {
                throw;
            }
        }
        else {
            throw ;
        }
    }
    return id;
}
