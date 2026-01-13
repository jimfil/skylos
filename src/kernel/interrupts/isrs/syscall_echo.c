#include <stdint.h>
#include <terminal_io.h>
#include <isrs.h>

typedef struct {
    uint32_t edi, esi, ebp, esp, ebx, edx, ecx, eax; // Pushed by pushad
    uint32_t eip, cs, eflags;                        // Pushed by CPU
} registers_t;

void syscall_echo_isr(registers_t *regs) {

    printf("Char = %c\n", (char)regs->eax);
    return;
}
