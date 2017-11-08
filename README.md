
# ROT1
Like _ROT13_ but _ROT1_.

## What?
A useless nonsensical tool that will do a binary rot1 on it's stdin, and output the result to stdout.  For example, the ASCII character `A` which is `0100 0001` in binary, will become `1011 1110`, which is `¥` (the yen character) in the extended ASCII table. Note that the output will likely not be valid ASCII, and you will likely need to base64 encode that output if you want to be able to copy/paste it somewhere, like in an email.

## Usage
To _encrypt_ using `rot1`
```bash
$ echo "My secret message" | rot1 | base64
sobfjJqcjZqL35KajIyemJr1
$ _
```

To _decrypt_ using `rot1`
```bash
$ echo "sobfjJqcjZqL35KajIyemJr1" | base64 -d | rot1
"My secret message"
$ _
```
## Warning: Extreme Danger!!
It you didn't get it yet, this tool is not a real encryption/decryption utility, it's a joke swing on the _ROT13_ substitution cypher, which is related to the [Caesar Cipher](https://en.wikipedia.org/wiki/Caesar_cipher). **It will not protect your data in any way whatsoever**.
