# Privilege Escalation

> Pwn 300pts

The program allow you to log in and take notes, and privileged users are able to read the flag.
You can try the test user ola with the password passord_123!, but he is obviously not privileged.

The application is exposed over raw TCP, so use netcat to connect:

```
nc <ip> 4242
```

File: [privesc](./privesc)

[Writeup](./writeup.md)
