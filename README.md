# Custom C Standard Library

This project is a custom implementation of the C standard library.

## Features

- Memory management functions: `malloc`, `free`
- String conversion functions: `atoi`, `atol`, `atof`
- Printing function: `print`

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

- CMake version 3.10 or higher
- GCC compiler

### Building

To build the project, navigate to the project directory and run the following commands:

```bash
mkdir build
cd build
cmake ..
make
```

This will generate a static library `libcustom_c_stdlib.a` in the `build` directory.

## Running the tests

After building the project, you can run the tests with the following command:

```bash
./test.out
```

## Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details