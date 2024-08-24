## Key Takeaways

In defining strings (character arrays) in C, give the array a length that is one greater than the actual length of your string because of the last character that is added to the string but not shown when printed. Otherwise, you get your string plus some garbage.

String literal (string constant) is a sequence of characters enclosed in double quotes.
%s is a placeholder used in place of a string in printf.

In memory, string literals are stored as an array of characters. A \0 or null character is automatically added by the compiler to indicate the end of the string (character array)

In C, the compiler treats the string literal as a pointer to the first character of the literal. After the string is stored, the compiler returns the address to the first character of the literal. Therefore, to the printf and scanf functions, we are passing the address to the first character rather than the string literal itself.

Both scanf and printf expect a character pointer (char) as an argument. Passing "Hello world" is equivalent to passing the address of the character 'H'.


