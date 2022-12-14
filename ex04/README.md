# Program Flow:

1. argc checking, filename for outfile is created from argv and string.apend function.
2. string to search and replaced declared with const
3. infile and outfile streams are opened, with argv[1] and filename (explicit conversion to filename.c_str is required for compilation on Linux)
4. Infile fail check and error message
5. Step 3 open with std::ios_:base::ate seeks to end of file, giving us length of all characters in file, get with tellg Returns current seek position.
6. seekg used to reset input position indicator to start.
7. char *temp pointer with length + 1 to guarantee null termination as we are using a char array.
8. c++ string set to temp.
9. temp can be deleted.
10. position to save position of string found. returns npos on not finding or eof, erases and replaces(inserts) string, string pushed into outfile and closed.

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

### ifstream::rdbuf 
- Returns pointer to internal filebuf object
- seems like it can not be copied externally to a string, but can be printed.

## std::string notes cppreference:

- std::string string = mem where mem is a char* to a string is valid.
- erase
- insert
- .find -> return npos if string not found.

* Binary vs text line 6 https://stackoverflow.com/questions/20863959/difference-between-opening-a-file-in-binary-vs-text
* text mode = newline translations \n -> newline
* Binary ok for text, but wont translate newline, mostly prob on windows (carriage return + newline)
