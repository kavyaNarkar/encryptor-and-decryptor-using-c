# String-Binary Converter in C

This C program provides functionalities for converting a string to its binary representation and vice versa. It allows the user to input a string and see its binary form, as well as input a binary sequence and retrieve the corresponding string.

## Features

- String to Binary: Converts a string of characters to its binary representation (8 bits per character).
- Binary to String: Converts binary data back to its string form, where each 8-bit segment corresponds to a character.
- Interactive Menu: The program offers a simple menu where users can choose between converting a string to binary, converting binary back to a string, or exiting the program.

## Prerequisites

- C Compiler: Any standard C compiler (e.g., GCC, Clang).
- Operating System: Windows, macOS, Linux.

## Installation

1. Clone the repository or copy the code into a `.c` file.
    ```bash
    git clone https://github.com/yourusername/String-Binary-Converter.git
    cd String-Binary-Converter
    ```

2. Compile the code using your C compiler:
    ```bash
    gcc -o converter main.c
    ```

3. Run the compiled program:
    ```bash
    ./converter
    ```

## Usage

When you run the program, you will be prompted to choose from the following options:

1. String to Binary: Input a string, and the program will output the binary representation of the string.
2. Binary to String: Input binary data (8 bits per character, separated by spaces), and the program will convert it back to the original string.
3. Exit: Exit the program.

### Example Workflow

1. String to Binary: 
    - Enter the string `Hello`.
    - The program will output the binary form:
      ```
      01001000 01100101 01101100 01101100 01101111
      ```

2. Binary to String: 
    - Enter the binary string:
      ```
      01001000 01100101 01101100 01101100 01101111
      ```
    - The program will output the string:
      ```
      Hello
      ```

## Code Explanation

- stringToBinary: Converts each character of the input string to its corresponding binary form (8 bits per character). It prints the binary representation of each character.
  
- binaryToString: Reads the binary string (with 8 bits per character), converts each 8-bit segment back to a character, and outputs the corresponding string.

- Main Loop: The program runs in an infinite loop until the user chooses to exit. It provides the user with an interactive menu to perform the conversions.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.

## Contributing

If you want to contribute to this project:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add feature'`).
5. Push your branch (`git push origin feature-branch`).
6. Open a pull request.

## Acknowledgments

- This project was created as a simple example for understanding string and binary conversions in C.
- Thanks to all open-source contributors and resources that make learning C easier.

