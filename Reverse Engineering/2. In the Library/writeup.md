# In the Library

> Reverse Engineering 250pts

The flag is no longer a plain string in the binary, good luck cracking this!
                                          
File: [in_the_library](./in_the_library)

## Writeup

The hint is in the name, namely in the library, meaning glibc.
This means the library call can be traced using ltrace.

Reveling the password as `super_secret_encrypted_password`. This password can be input back into the binary.

Yielding the flag:

```
UiTHack18{library_functions_can_be_inspected_easily}
```
