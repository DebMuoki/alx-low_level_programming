section .data
    format: db "Hello, Holberton\n", 0

section .text
    global main
    extern printf

main:
    mov edi, format


