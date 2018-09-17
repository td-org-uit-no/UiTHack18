# UiTHack 2018 - thoughts and challenges

### Motivation and vision
Want more students that are not interested in security and related problems.
For this, a noob-friendly Capture-the-flag competition is perfect!
The idea is to expose people to gradually more challenging tasks, starting with very simple ones and moving to more complex ones, but none should be too hard.

## Challenge Categories
We define the following categories of challenges, with a minimum of three(3) in each category and up to six(6).
### Noob
- SSH into a box, unlock the next level, SSH further, becoming gradually harder. Probably with an easier last task than the previous year, or possibly mark it as hard!
- Maybe the last one should be a sudo assignment?

### Misc.
- Mandatory IRC flag (that everyone should be able to get)
- Some esoteric programming language where you simply need to determine that it is an esolang and run it (possibly online)
- Something other (but what???)

### Pwn
- Simple command injection of some sort (show how dangerous it is to use user input) (maybe a shell script or Rust using a system command or something else) - probably give source or script or something along those lines
- Final one; ROP (or shellcode) simulator (search functionality, input functionality and execute) - no ASLR

### Reverse Engineering
- Enkel strings (klassiker) - samme som i fjor, men kanskje bytte språk?
- Uten strings, men kanskje med strcmp (?) - samme som i fjor, men kanskje bytte språk?
- .NET-oppgave - Jeg og Fredrik diskuterte litt (fyll inn)

### Crypto
- Enkel base64 eller noe slikt, evt. en rotXX
- Vigenere med kort nøkkel (og lenke til info for å finne ut av Vigenere) (standard engelsk alfabet)
- Railway cipher (?)
- Annet type cipher(?)
- AES-ECB men på en slik måte at du kun trenger å forstå og så er det trivielt-ish (Vanskelig - sannsynligvis) 

### Web
- SQLi
- robots.txt
- Noe gjemt i sourcen
- Template injection (kanskje noe annet enn flask)