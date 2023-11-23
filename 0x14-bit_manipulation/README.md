### Bit Manipulation Tasks

#### Task 0: `binary_to_uint`
This function converts a binary number to an unsigned integer.
- Prototype: `unsigned int binary_to_uint(const char *b)`
- Input: a string of 0 and 1 chars
- Returns: the converted number, or 0 if there's an invalid character or if `b` is NULL

#### Task 1: `print_binary`
This function prints the binary representation of a number without using arrays or malloc.
- Prototype: `void print_binary(unsigned long int n)`
- Format: prints the binary representation
- Restrictions: no use of arrays, malloc, % or / operators

#### Task 2: `get_bit`
Function to get the value of a bit at a given index.
- Prototype: `int get_bit(unsigned long int n, unsigned int index)`
- Returns: value of the bit at the specified index (0 or 1), or -1 if an error occurs

#### Task 3: `set_bit`
Sets the value of a bit to 1 at a given index.
- Prototype: `int set_bit(unsigned long int *n, unsigned int index)`
- Returns: 1 if the operation is successful, -1 if an error occurs

#### Task 4: `clear_bit`
Sets the value of a bit to 0 at a given index.
- Prototype: `int clear_bit(unsigned long int *n, unsigned int index)`
- Returns: 1 if the operation is successful, -1 if an error occurs

#### Task 5: `flip_bits`
Function that calculates the number of bits to flip to get from one number to another.
- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m)`
- Returns: the number of bits needed to flip to convert `n` to `m`, without using % or / operators
