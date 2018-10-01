# Don't Tell the Robots

> > Web - 150pts
> 
> I am really new to web dev and have heard that you disallow web crawlers from indexing certain files, so I did that.
> 
> The web service is located at: `<insert_ip>:1337`
> 
> Files: [server directory](./src/)

## Writeup

This hints to the robots.txt file, and the capabilities it give.

If requesting the robots.txt file, you get back an interesting line:

```
Disallow: /.super_secret_file_that_will_not_be_indexed
```

This hints to the flag being stored at that endpoint, and requesting that endpoint yields the flag:

```
UiTHack{robots_should_not_index_this_but_humans_are_not_disallowed}
```
