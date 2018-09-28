# Guess the Password

> > Reverse Engineering 150pts
> 
> Are you able to guess the password and extract the flag from the application?
>    
> File: [guess_the_password](./guess_the_password)

## Writeup

If you check the binary for strings, you can see that both the flag and the password are defined as static strings in the binary and can be extracted by using the `strings` utility

```
strings guess_the_password | grep UiT
```

Yielding the flag:

```
UiTHack18{static_strings_are_visible_in_the_binary}
```
