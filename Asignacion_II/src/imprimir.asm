[BITS 64]

section .text
    global imprimir             

imprimir:
    ; Cambio los valores de rdi y rsi a rbx y rcx, respectivamente, ya que los necesito para dar las directrices de impresión.
    mov rbx, rdi
    mov rcx, rsi

loop:
    ; Inicio mi bucle, reduciendo en 1 mi contador rcx, y luego guardo rcx en el stack de memoria, ya que al llamar a syscall causa que rcx cambie.
    dec rcx
    push rcx
    ; Realizo las directricez básicas para imprimir en la terminal, usando una longitud de 1 para la longitud del elemento que voy a imprimir (rdx), debido a que se va imprimir caracter por caracter.
    mov rax, 1                  
    mov rdi, 1                  
    mov rsi, rbx                
    mov rdx, 1
    syscall
    ; Incremento por 1 rbx, para que en el siguiente ciclo imprima el siguiente caracter y vuelvo a cargar el contador.
    inc rbx
    pop rcx
    ; Comparo el contador para ver si es 0, si lo es termino la funcion y en caso contrario continuo al siguiente ciclo.
    cmp rcx, 0
    jnz loop

    ret

%ifidn __OUTPUT_FORMAT__,elf64
    section .note,GNU-stack noalloc noexe nowrite progbits
%endif
