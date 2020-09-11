# unique_id
A simple C++ static library to generate unique ids.

### Usage
The default length of a newly generated id will be 32 characters
```c++
Id_generator random_id_generator;
std::string new_id = random_id_generator();
std::cout << new_id << endl;
```
```

```
But you can determine your own length
```c++
Id_generator random_id_generator(8);
std::string new_id = random_id_generator();
std::cout << new_id << endl;
```
```

```

### License
[MIT](https://choosealicense.com/licenses/mit/)