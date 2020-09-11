#include "library.h"

std::chrono::high_resolution_clock::time_point Id_generator::start_time = std::chrono::high_resolution_clock::now();

int Id_generator::create_seed() {
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

/*function<int()> Id_generator::char_num {
    uniform_int_distribution<>::param_type char_num_param{0, 1};
    const int alpha_num_seed = create_seed();
    return bind(uniform_int_distribution<>{char_num_param}, default_random_engine{alpha_num_seed});
}

function<int()> Id_generator::num() {
    uniform_int_distribution<>::param_type num_param{0, 9};
    const int num_seed = create_seed();
    return bind(uniform_int_distribution<>{num_param}, default_random_engine{num_seed});
}

function<int()> Id_generator::char_case() {
    uniform_int_distribution<>::param_type case_param{0, 1};
    const int case_seed = create_seed();
    return bind(uniform_int_distribution<>{case_param}, default_random_engine{case_seed});

}

function<int()> Id_generator::upper_char() {
    uniform_int_distribution<>::param_type upper_param{0, 25};
    const int upper_char_seed = create_seed();
    return bind(uniform_int_distribution<>{upper_param}, default_random_engine{upper_char_seed});

}

function<int()> Id_generator::lower_char() {
    uniform_int_distribution<>::param_type lower_param{0, 25};
    const int lower_char_seed = create_seed();
    return bind(uniform_int_distribution<>{lower_param}, default_random_engine{lower_char_seed});

}*/
