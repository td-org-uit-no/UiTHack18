# The Source of All Evil

> > Web 150pts
> 
> I made this online flag storage, I bet you can't get it!
>
> The service is located at: `http://104.248.30.120:1337`
> 
> Files: [source of evil](./src)

## Writeup

You can find credentials in the source of the login page for easy testing, but they were not removed when we went into production.
The credentials can be used to log in, after which you are redirected to the flag:

```
UiTHack18{credentials_in_html_for_testing_is_not_intelligent}
```
