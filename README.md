# UiTHack 2018

## Status/TODO
- [ ] Create Crypto challs
- [ ] Create Noob challs
- [x] Create Pwn challs
    * [x] First Pwn implemented (online calculator)
    * [x] Second Pwn implemented (privilege escalation)
    * [x] Third Pwn implemented (overflow playground)
- [ ] Create RE challs
    * [x] First RE implemented (guess the password)
    * [x] Second RE implemented (in the library)
- [x] Create Web challs
    * [x] First Web implmented (don't thell the robots)
    * [x] Second Web implemented (source of evil)
    * [x] Third Web implemented (can't handle my database)
    * [x] Fourth Web implemented (article viewer)
- [ ] Write chall text and define score for Misc
- [x] Publish Pwn challs on servers and website
- [x] Publich Web challs on servers and website

### Categories
- [Crypto](./Crypto)
- [Misc](./Misc)
- [Noob](./Noob)
- [Pwn](./Pwn)
- [Reverse Engineering](./Reverse%20Engineering)
- [Web](./Web)

### Planning:

#### UiTHack 2018 - thoughts and challenges

###### Motivation and vision
Want more students that are not interested in security and related problems.
For this, a noob-friendly Capture-the-flag competition is perfect!
The idea is to expose people to gradually more challenging tasks, starting with very simple ones and moving to more complex ones, but none should be too hard.

##### Challenge Categories
We define the following categories of challenges, with a minimum of three(3) in each category and up to six(6).
###### Noob
- SSH into a box, unlock the next level, SSH further, becoming gradually harder. Probably with an easier last task than the previous year, or possibly mark it as hard!
- Maybe the last one should be a sudo assignment?

###### Misc.
- Mandatory IRC flag (that everyone should be able to get)
- Some esoteric programming language where you simply need to determine that it is an esolang and run it (possibly online)
- Wireshark og PCAP

###### Pwn
- Simple command injection of some sort (show how dangerous it is to use user input) (maybe a shell script or Rust using a system command or something else) - probably give source or script or something along those lines
- Enkel overflow av felter i en struct i C. Trenger ikke tenke på det å overflowe returadressen. Sende med source også og ikke bare binary.
- Buffer overflow emulator. Allow kids to read the stack (pretty-print stack), write into a buffer and execute shellcode.
- Kanskje en oppgave som er ordentlig rop eller buffer overflow for de ordentlig hard-core gutta! (?)

###### Reverse Engineering
- Enkel strings (klassiker) - samme som i fjor, men kanskje bytte språk?
- Uten strings, men kanskje med strcmp (?) - samme som i fjor, men kanskje bytte språk?
- .NET-oppgave - Jeg og Fredrik diskuterte litt (fyll inn)

###### Crypto
- Enkel base64 eller noe slikt, evt. en rotXX
- Vigenere med kort nøkkel (og lenke til info for å finne ut av Vigenere) (standard engelsk alfabet)
- Railway cipher (?)
- Annet type cipher(?)
- AES-ECB men på en slik måte at du kun trenger å forstå og så er det trivielt-ish (Vanskelig - sannsynligvis) 

###### Web
- SQLi
- robots.txt
- Noe gjemt i sourcen
- Template injection (kanskje noe annet enn flask)
