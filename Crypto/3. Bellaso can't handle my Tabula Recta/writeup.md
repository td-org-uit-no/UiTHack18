# Bellaso can't handle my Tabula Recta

> > Crypto 200pts
> 
> I came over this encrypted text, can you help me decipher it?
> 
> ```
> BiVRukd18{lvgx_jwefanzbiultkm_mcuztkdobbvn_esjpxys_ekh_jx_irquyv_uf_kpyqv_isakxnmqa_avdukdz}
> ```
> 
> Files: [ciphertext](./ciphertext.txt)

## Writeup

The challenge name hints at it being Vigenere, which can easily be broken by a known plaintext attack if the key is small enough.
Using the Vigenere decoder at [dcode](https://dcode.fr) and "UiTHack" as a known plaintext word, you should get "HACKUIT" as the key.
Plugging this as the key yields the flag:

```
UiTHack18{even_polyalphabetic_substitution_ciphers_can_be_broken_by_known_plaintext_attacks}
```
