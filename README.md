# C-Draw-Poker
Simple draw poker game that runs in console made in C++. Advice is greatly appreciated! This is my first time working with C++ and only my second serious program, so I know it could be a lot better.

**The Story**

Hello! I am relatively new to coding (only about 1 year's worth of R for my BS in Ecology and Evolutionary Biology, followed by a month of dabbling in Python a year later). About a month ago I decided I wanted to try something "better" and "more challenging" than Python, even though I had only just started learning it. So began my first C++ project: a simple game of poker. I prepped by watching one 4 hour video of the basics and then jumped in. This was supposed to be a self-guided learning experience/challenge, so I set some basic rules against "cheating" like Googling "how to make a poker game". I had to come up each piece of the process myself, check if that was possible in C++, then try it out. **This project took me about 40-60 hours over the course of about 3 weeks.** I could have finished sooner if I didn't get sick, but whatever. It's done.

**Known Issues**

I haven't yet figured out if it's possible to restrict discard input to single character. Therefore if you type something like "3 4", it will count both numbers and respond to both. The simplest solution would probably be to use letters instead so that I'm working with strings instead of ints. The _better_ solution would be to make a whole GUI, but I thought it would be overkill to require that in this challenge - maybe in the future.

This program seems absolutely bloated to me. I'm sorry. I don't yet know how to compartmentalize things for better readability. I _tried_ to put things in classes initially, but then couldn't figure out how to call them. There is also a bit of unused code I left in as a peek behind the curtain and in case I need to come back to fix errors. Hopefully I didn't leave too many pencil marks.
