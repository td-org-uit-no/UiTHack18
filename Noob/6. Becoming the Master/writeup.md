# Becoming the Master

> > Noob 500pts
> 
> Now, you are close to becoming the master of the terminal dojo; and will prove yourself by simply reading the flag in the home directory of `uithack_master` with the flag from the hacker challenge as the login password.
> 
> Hint: Take a look at the man page of [sudoers](https://linux.die.net/man/5/sudoers) and [sudo](https://linux.die.net/man/8/sudo). It will also be beneficial to have a look at how login shells are configured.

## Writeup

After logging in, you are greeted with some sort of interactive shell where you can change user id and then execute commands as that user.

Potentially by trial and error, you should discover that you can only execute as the `pivot` user.

The challenge hint is regarding the fact that `pivot` can execute the `suid_shell` as `shell_spawner`, which is the only user that can use this utility.

This shell spawner can be used to actually spawn a regular shell for the `uithack_master` user, allowing the flag to be read yielding:

```
UiTHack18{after_the_long_journey_you_have_finally_become_the_master_of_the_terminal_dojo_congratulations!}
```
