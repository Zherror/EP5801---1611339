[BITS 64]

section .data
    msg db "Hola mundo", 10      
    len equ $ - msg              

section .text
    global _start                

_start:
    ; --- Llamada para imprimir (sys_write) ---
    mov rax, 1                  
    mov rdi, 1                  
    mov rsi, msg                
    mov rdx, len                
    syscall                     

    ; --- Llamada para cerrar (sys_exit) ---
    mov rax, 60                 
    xor rdi, rdi                
    syscall

%ifidn __OUTPUT_FORMAT__,elf64
    section .note,GNU-stack noalloc noexe nowrite progbits
%endif
