# I need a what?

> > Crypto 300pts
> 
> Another set of wierd looking letters and numbers.. 
> Thinks it's some sort of pre-AES encryption of data.
> 
> I think me might need to guess or brute force the password:
> 
> ```
> 0x8df142cb3a6857f8bd3595fe93fbefede0d5e5fc1782ae6a1678623860d5eea47dac4db3ad4408c8
> ```
> 
> Alongside, I managed to get a hash that I think might be related in some way:
> 
> ```
> 286755fad04869ca523320acce0dc6a4
> ```
> 
> Hopefully, you can recover the data!

## Writeup

This is a DES-encrypted string using ECB mode.
With the key being `password`, yielding: 

```
UiTHack{does_anyone_still_use_DES?}
```

