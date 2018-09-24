# And so it begins

> > Crypto 100pts
>
> The following string was discovered, can you figure out what it says:
>     ```VWlUSGFja3ttYWJ5ZV90aGlzX3dpbGxfd29ya30=```

## Writeup

The challenge is base64-encoded

To solve promt the string into https://www.dcode.fr/base-64-coding
and read `UiTHack{mabye\_this\_will\_work}`
OR with mac in comandline (terminal)
`openssl base64 -d <<< 'VWlUSGFja3ttYWJ5ZV90aGlzX3dpbGxfd29ya30='`
