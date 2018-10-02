# The Pleb Becomes the Skid

> > Noob 150pts
> 
> You have completed the first two levels of the dojo, great work!
> 
> Having solved a challenge as the pleb, you now become a [skid](https://en.wikipedia.org/wiki/Script_kiddie), using `uithack_skid` as the username, and the flag from the pleb challenge as the password.
> 
> Now for something more challenging. Again, your flag is hidden somewhere in your home directory, but not simply a hidden file..
> 
> Hint: there are some characters that must be escaped in shells; google is your friend! :)

## Writeup

There is a directory named ". " in the home directory which will bring you to a new directory with two directories: " " and "flag", and "flag" will bring you back to your home directory.
If you enter the " " directory, you can find a file named ".flag.txt>".

It is important to escape the last ">" character when printing the contents of the file as such: `cat .flag.txt\>`, yielding the flag:

```
UiThack18{properly_escaping_file_names_can_be_a_real_PITA}
```
