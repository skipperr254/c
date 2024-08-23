## Key Takeaways

scanf returns 0, 1 or EOF depending on whether it was successful in scanning the characters it was designated to scan. For example:
```c
    scanf("%d", &num);
```

If the character entered is an integer, in returns 1 if not 0. EOF returned if end of line is detected through ctrl+d in Linux and Mac systems and ctrl+z in Windows.
