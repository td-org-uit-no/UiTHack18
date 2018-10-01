# In Plain Sight

> > Misc 200pts
> 
> I came over this strange network traffic, and I think someone tried to exfiltrate an important document from the network.
> 
> Can you find what data was stolen?
> 
> Files: [challenge](./challenge.pcap)

## Writeup

After some research, it should be obvious the file is a packet capture, and using a tool like [Wireshark](https://www.wireshark.org/) you can easily extract the file.

Extracting the file yields an [image](./flag.png) in which the flag is written:

```
UiTHack18{super_hemmelig_melding_med_små_bokstaver:kake}
```
