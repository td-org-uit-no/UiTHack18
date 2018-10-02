# Going deeper

> > Noob 100pts
> 
> Congratulation on clearing the first level, you now enter deeper, and continue as the `uithack_newb`, with the flag collected in the previous level as password.
> 
> This time, the flag will not just be waiting for you, but will be in a hidden file located somewhere in your home directory.
> 
> Best of luck!
> 
> PS: You don't need to SSH into the new users, because they are located on the same server, you can simply `su <username>` and enter the password.
> 
> Hint: [ls](https://linux.die.net/man/1/ls) might have some interesting flags

## Writeup

The flag is in a hidden file, meaning one starting with a ".", and in particular, it's name is ".flag.txt".

This file can be read, yielding the flag:

```
UiTHack18{great_job_finding_the_hidden_file}
```
