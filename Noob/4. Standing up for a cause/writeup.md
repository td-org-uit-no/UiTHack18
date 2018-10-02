# Standing up for a cause

> > Noob 200pts
> 
> After earning the rights to call yourself a script kiddie, you will now be tried for the title of [hacktivist](https://en.wikipedia.org/wiki/Hacktivism#Notable_hacktivist_groups) at the dojo with the username `uithack_hacktivist`, and the flag from the skid challenge as the password.
> 
> As a hacktivist, you should be able to find and unravel information different places on the internet as well as handling important information, potentially encrypted.
> 
> Because you are now being considered for the title of hacktivist, I am at liberty to share this piece of encrypted information with you: [paste](https://paste.ee/p/sT8gj), but do not pass it on to untrusted people!
> 
> You should be able to locate the encryption key without more of my help!
> 
> Hint: you can always use the `/tmp/` directory as a scratchpad, but remember that it might be cleaned up and other hackers might see what you are doing.

## Writeup

Firstly, the file is lz4-encrypted which must be lz4-decrypted before being gunzipped and bunzipped and finally untared, leaving a `flag.zip` file.

The file can be decrompressed and untared with the following terminal command:

```
lz4cat flag.lz4 | gunzip | bunzip2 | tar -xvf -
```

Yielding `flag.zip`, which must be unzipped, but that require a password.

Following the trail and information laid out on the pastes starting with [the first](https://paste.ee/p/sT8gj#U92hQGMdNXPwaA3nNZGDsR8ulL9HNCny), you end up with the password `i_am_free`, which will decrypt the zipfile.

This yields the flag.txt file containing:

```
UiTHack18{I_choose_the_red_pill!}
```
