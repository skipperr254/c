## Key Takeaways

1. scanf scans through the line of input up to where the data type no longer matches what you enlisted it for when you called the function.
    For example, if you called scanf for string:
    ```c
        scanf("%s", name);
    ```
    It scans the line upto where the string first ends. So, if you give it `Name with spaces` as your string, it will only take the    first word/string, that is, `Name`.

2. You can also specify explicitly how many characters to scan through using modifiers like in printf.
    ```c
        scanf("%100s", name);
    ```
    ... to only scan the first 100 characters of the input line.

3. To read/scan an entire line, use regular expressions and the number of characters to scan. For example:
    ```c
        scandf("%[^\n]100", line);
    ```line
