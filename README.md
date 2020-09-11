# Id_generator
A simple static C++ library to generate unique ids.

### Usage
The default length of a newly generated id will be 32 characters
```c++
Id_generator random_id_generator;
std::string new_id = random_id_generator();
std::cout << new_id << endl;
```
```
07440Cc2A0xsId0QE318RE612cJqxF2E
```
But you can determine your own length
```c++
Id_generator random_id_generator(8);
std::string new_id = random_id_generator();
std::cout << new_id << endl;
```
```
p54PI6Ej
```

### License
[MIT](https://choosealicense.com/licenses/mit/)
