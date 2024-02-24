section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    ; Call printf with the address of the hello string
    mov rdi, hello     ; Format string
    call printf

    ; Exit the program
    mov eax, 0          ; syscall: exit
    ret
