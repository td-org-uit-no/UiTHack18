# Overflow Playground

> > Pwn 500pts
> 
> Connect to the machine and try to exploit the overflow playground at `139.59.137.39:1337`
> 
> Are you able to get the flag from the server?
> 
> PS: connect using `nc 139.59.137.39 1337`
> 
> File: [overflow](./overflow)

## Writeup

This is a simple overflow playground for people to get to know buffer overflows and the dangers of
letting users execute their input as binary code.

Simply run the binary, select insert shellcode, then use pwntools or craft your own shellcode, but make sure it is line-encodable
After inserting it, execute the shellcode and you should get a shell

Then you can read the flag file, yielding:

```
UiTHack18{confusing_data_with_code_means_trouble!}
```
