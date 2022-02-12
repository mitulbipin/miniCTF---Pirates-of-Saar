# miniCTF---Pirates-of-Saar

1. The Stack is kept safe, and is non-executable. However, utilizing certain internal functions might change your perspective. 
2. The Binary has already been provided. It is important to note that the addresses might change. This changes with time. 
3. Once the Shell has been obtained, it is mandatory to decode a token to proceed further. The token consists of 26 uppercase characters. 

Hints:

1. Try to find the size of the stack. 
2. One can also use tools like 'Pwntool' to obtain the Shell. 
3. The key can be dervied out of the Buf sizes.

4. A key would be obtained after decoding the token. 
5. The flag would be seen if the token is applied to the following URL - https://apeeyeseeteefchallenge.herokuapp.com/{token}
