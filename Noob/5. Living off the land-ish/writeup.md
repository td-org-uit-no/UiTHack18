# Living off the land-ish

> Noob 250pts

You are now a self-proclaimed hacktivist, let's see if you are made of [hacker](https://en.wikipedia.org/wiki/Hacker) material!

A useful skill is to [live off the land](https://www.symantec.com/connect/blogs/attackers-are-increasingly-living-land), which is the trial you must pass to be recognized as a "certified" hacker.

Living off the land means you should use tools that are already available where you are to minimize the risk of being detected and blocked.

Hint: You might find it helpful to take a look at [Unix permissions](https://en.wikipedia.org/wiki/File_system_permissions#Changing_permission_behavior_with_setuid,_setgid,_and_sticky_bits) and any binaries in the system that might elevate privileges upon execution. It might also be nice to take a look at [find](https://linux.die.net/man/1/find) to see if you can find some suitable files.

## Writeup

Based on the hints, you migth be inclined to run `find / -perm -4000 2> /dev/null`, which among other files return `/opt/super-cat`.

When running `super-cat`, you will discover that you can impersonate a user and read files on behalf of it.

This can be used to read the flag.txt file, which is owned by `uid=1007`, by running `/opt/super-cat 1007 /home/uithack_hacker/flag.txt`, yielding the flag:

```
UiTHack18{living_off_the_land_is_quite_great}
```
