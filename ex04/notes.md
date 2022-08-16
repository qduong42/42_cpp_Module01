## Notes

1. std::ifstream ifs;
2. ifs >> std::string only gets 1 string with space as delim.

## ifstream notes cppreference:
**Constructor**: Either basic or give param (filename, openmode)

**Open mode:** 
- app -> append  
- binary -> open in binary mode.
- in -> open reading
- out -> open writing
- trunc -> opposite of app
- ate -> seek to the end of stream immediately after open.

### **inherited from std::basic_istream member function:**

- tellg -> return (gets) input position indicator 
- seekg -> sets input position indicator
	- Overloaded: param possibilities
		- pos
		- off, dir 
    		- off = offset, relative pos to set input pos to
    		- dir = base positive to apply offset, can be beg end or cur
- seekg(n) is not necessarily equivalent to seekg(n, ios::beg). -> WHY?
-> Do we use get or read or rdbuf

### **inherited from std::ios_base: **
- seekdir **beg** **end** **cur**

## std::string notes cppreference:

- 

* Binary vs text line 6 https://stackoverflow.com/questions/20863959/difference-between-opening-a-file-in-binary-vs-text
* text mode = newline translations \n -> newline
* Binary ok for text, but wont translate newline, mostly prob on windows (carriage return + newline)