[BITS 64]

section .text
    global sum_array             

sum_array:
    mov rax, 0x00

loop:
    dec rsi
    add rax, [rdi + rsi * 4]
    cmp rsi, 0
    jnz loop
    ret

%ifidn __OUTPUT_FORMAT__,elf64
    section .note,GNU-stack noalloc noexe nowrite progbits
%endif
