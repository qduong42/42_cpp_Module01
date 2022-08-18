## Notes

-	So..... Switches! Those sparkly new things that you have no idea how they work (Thanks Norminette!) Switches are another way to formulate conditional clauses for your program to follow.

**Whats new?!**

- You input a variable for e.g like i in line 43 of Harl.cpp as a param into switch. Then you define cases for this variable i, that will go into the case if your variable matches that case. In case 0, 1, 2, 3. It will match i to the case it first sees, then sequentially go down the code until you reach the end, without executing default.
- In this concrete example of my code. executing `./harlfilter DEBUG` goes into case 0, i is zero which executes `this->*a[i]`. Then i is incremented, it will however go into case 1, 2 and 3 regardless of the value of i(fallthrough), however I had to increment i to solve the excercise the correct way.(printing all seubsequent warning levels)
- `__atributes__((fallthrough));` is used to allow compilation on Linux, Mac allows so much bs to compile actually, even with the same flags. This attribute suppresses Error warnings on Linux.

- scope definition is between two curly brackets.