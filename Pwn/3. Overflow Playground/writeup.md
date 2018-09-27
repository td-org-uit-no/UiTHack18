# Overflow Playground

> > Pwn 500pts
> 
> Connect to the machine and try to exploit the overflow playground at `<ip>:4042` 
> 
> Are you able to get the flag from the server?
> 
> PS: connect using `nc <ip> <port>`
> 
> File: [overflow](./overflow)

## Writeup

This is a simple overflow playground for people to get to know buffer overflows and the dangers of
letting users execute their input as binary code.

Simply run the binary, select insert shellcode, then use pwntools or craft your own shellcode, but make sure it is line-encodable
After inserting it, execute the shellcode and you should get a shell
