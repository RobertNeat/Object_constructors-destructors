# Person Class Program

This C++ program showcases the functionalities of a 'Person' class through the implementation of constructors, methods, and data handling.

## Features

- **Constructors:** Demonstrates the use of default and overloaded constructors.
- **Data Handling:** Manages personal information like name, surname, and date of birth.
- **Methods:** Includes methods for inputting data, displaying information, and determining age-related details.

## How to Execute

### Prerequisites

- C++ compiler

### Steps to Execute

1. **Clone the Repository:**

```
git clone https://github.com/your-username/Person-Class.git
```

2. **Navigate to the Directory:**

```
cd Person-Class
```

3. **Compile the Code:**

```
g++ main.cpp Tosoba.cpp -o Person
```

4. **Run the Executable:**

```
./Person
```

## Usage

The `main.cpp` file contains an example implementation of the 'Person' class. Modify this file or use the 'Tosoba' class in your project by including `Tosoba.h` and `Tosoba.cpp`.

### Functions Demonstrated:

- `Tosoba::Tosoba()`: Default constructor
- `Tosoba::Tosoba(char* imie, string nazwisko, data dataUrodzenia)`: Overloaded constructor
- `Tosoba::wczytaj()`: Input method for personal data
- `Tosoba::wyswietl()`: Display method for personal information
- `Tosoba::wyswietl(int biezacyRok)`: Display method with age calculation
- `Tosoba::info()`: Information method determining when the person turns 18
- `Tosoba::info(int biezacyRok)`: Information method determining person's age status

## Code Structure

- `main.cpp`: Contains the example usage of the 'Tosoba' class.
- `Tosoba.h`: Header file defining the 'Tosoba' class.
- `Tosoba.cpp`: Source file implementing the 'Tosoba' class methods.

## Contribution

Feel free to contribute by forking the repository, making changes, and creating a pull request. For major changes, please open an issue first to discuss the modifications.
