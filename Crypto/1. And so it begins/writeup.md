# And so it begins

# And so it begins

> Crypto 100pts

The following string was discovered, can you figure out what it says:

```
VWlUSGFjazE4e21heWJlX3RoaXNfd2lsbF93b3JrfQo=
```

Files: [mystery text](./mystery.txt)


## Writeup

The challenge is base64-encoded

To solve promt the string into https://www.dcode.fr/base-64-coding
and read `UiTHack18{mabye_this_will_work}`
OR with terminal:
`openssl base64 -d < mystery.txt`
