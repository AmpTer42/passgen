# passgen

A password generator with C/C++ implementations

## Features
- Generates secure random passwords
- Supports letters, numbers, and symbols
- Both C and C++ implementations
- Simple command-line interface

## Getting Started
1. Clone the repository: `git clone https://github.com/AmpTer42/passgen.git`
2. Compile the projects using Make:
   - `make all` to build both implementations
   - `make clean` to remove compiled files
3. Run the password generator:
   - C implementation: `./passgen`
   - C++ implementation: `./passgen_c`
4. Install system-wide (requires sudo): `sudo make install`

## Build Instructions
```bash
make all
```
This will compile both implementations:
- `passgen` (C implementation)
- `passgen_c` (C++ implementation)

## Usage
### C Implementation (`passgen`)
```bash
./passgen
```

### C++ Implementation (`passgen_c`)
```bash
./passgen_c
```

## Notes
- The C implementation uses a basic random generator
- The C++ version uses C++11 random facilities
- Generated passwords are printed to stdout
- This software was written with AI assistance

## Contributing
Enhance the password generation algorithm or add new features!

For more information, see the [Makefile](Makefile) for build details.
