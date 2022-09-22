# Leak report
There was a leak in checkWhiteSpace::isCleaned because the passed pointer was not being cleaned up. This sucked\
There was a leak in main::main because the passed pointer was not being cleaned up, this omega sucked.\
There were 5 leaks in checkWhitespaceTest.cpp this was lame but I used it to practice vim shortcuts.\\\



To fix the leaks, run 'free()' on the value returned by strip.\
If you need to use the value, save the returned value to temp, use it, and then free it.

