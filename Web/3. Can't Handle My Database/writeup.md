# Can't Handle My Database

> > Web 200pts
> 
> I made sure to secure my flag storage better by using a proper database and hashing the password.
> Good luck breaking it this time around!
>
> The service is located at: `http://46.101.109.0:1337`
> 
> Files: [handle my database](./src)

## Writeup

Based on the name of the challenge, the hint is towards the database, and that we do not handle the username and password properly.
This means that we are vulnerable to SQLi, which can be exploited by writing `' OR 1=1; --` as the username and anything as the password, which will return the first user in the database to us.

When using the SQLi, we are logged in and presented with the flag:

```
UiTHack18{string_concatenation_to_create_SQL_queries_is_a_recipie_for_SQLi}
```
