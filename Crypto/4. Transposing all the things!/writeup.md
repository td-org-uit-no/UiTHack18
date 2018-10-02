# Transposing all the things

> > Crypto 250pts
> 
> Supposedly, the Germans used this as the second part of their ADFGVX cipher, but are you able to crack it?
> 
> ```
> i8pnrairnoe_deonoT{o_s_cmcn_aeddcnariialloywdeyiryU1soe_soeissismeiHtsc_ca_r_irl_er}catpra_fphe__nnpknihesf_toawu__t 
> ```
> 
> Hint: Remember the flag format

## Writeup

The challenge name and text points toward a columnar transposition cipher, but we don't know the key.

Not to worry, if you write it down, you immediately should discover the key length is 7 because "8" comes after "i".
If you continue to write the ciphertext down you get to the "T{" which is the "T" in "UiT" and "{" which is the "{" after "UiTHack18".
Continuing to fill out the ciphertext, you can read the text in rows if you wrote it the cipher in columns.
This might reveal the key to the observant cryptanalyst as being "HACKERS"

Yielding the flag:

```
UiTHack18{transpositions_ciphers_are_a_classical_form_of_encryption_whose_ideas_are_widely_used_in_modern_encryption}
```
