# Old school, yeah

> > Crypto 150pts
> 
> Well, this string that was sent to my mail from my Italian boyfriend looks kind of familiar, buuuut.. no. I'm lost, can you help me?
> 
> ```
> KyJXqsa18{qbb_heqti_buqti_je_jxu_secfkjuh}
> ```
> 
> Files: [mystery](./mystery.txt)

## Writeup
This is a rotation cipher encryption with a key of 16. 
Can be solved by: `tr qrstuvwxyzabcdefghijklmnopQRSTUVWXYZABCDEFGHIJKLMNOP a-zA-Z < mystery.txt`, yielding:

```
UiTHack18{all_roads_leads_to_the_computer}
```
