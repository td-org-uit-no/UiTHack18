# Privilege Escalation

> > Pwn 300pts
> 
> The program allow you to log in and take notes, and privileged users are able to read the flag.
> You can try the test user ola with the password passord_123!, but he is obviously not privileged.
> 
> The application is exposed over raw TCP, so use netcat to connect:
> 
> ```
> nc 142.93.107.146 1337
> ```
> 
> File: [privesc](./privesc)

## Writeup

After logging in to Ola's user, you can write an note, and if you write too many characters you get the note that you have overflowed something you should not.
If you try and decrease the number of overflowed bytes, you end up with being able to overflow the privileged boolean without overflowing the rest of the fields that are acheched for overflow.

It turns out you can overflow it with `112` characters and have that return true for the privileged check.

Trying to retrieve the flag now, the application will read the flag file and print it.

Yielding the flag:

```
UiTHack18{reading_too_many_bytes_from_a_user_can_be_catastrophic}
```
