# Python Lists are NOT just a crude mapping of Indexes to Memory Locations.
# A Python List is an "Object"

# Create a new List - there is now an Objectin memory being actively managed by the Python Runtime (aka "python" or "python3")
# Java works similarly
# A list object is not just data - there are are functions bundled with the object as well.  A set of standard functions
# that the Python development team (Guido and crew) believe make for a good set of common things one does to Lists of data
# Like "sort"

list = [1,3,7,4]

# Here is a nice abstraction that Python does.  What to see what's in the list - just print it
print(list)

# You can work with Lists just like Arrays in C using indexes:
list[0] = 2

print(list)

# You could loop through it as well using a counted for loop
for i in range(4):
    print(list[i])

# However Python is the ultimate "List Processing Language" 
# "FOR" loops in Python are really "FOR NEXT" loops...
# so just do this:
for item in list:
    print(item)

# We can sort the list
# But where is the code that sorts its?  Didn't import anything. We didn't need to write code to sort it oursevles.
# This code is in the List Object.  When we declared our list an Object was created to store the List Data in memory
# AND also in that Object are a series of functions we can run, like:
list.sort()

print(list)

# Let's grow the List using the append function. It will add something to the end.
list.append(10)
print(list)
# We just grew the list in size.  From 4 items to 5 items.  
# How can we just do this?  In C this could cause issues.  We'd have to resize the array by using malloc/calloc, move the array to its new location, etc.
# Well...Python takes care of that for us.  When we Invoke .append we are running code that manages this stuff for us.

# Same for insert:
list.insert(4,11)
print(list)
# Here we are doing something even more complex.  We need to grow the size of the list of data, but then insert something between two items.
# So we first need to resize the array, then nudge over some items.
# But again, Python takes care of that for use. Somebody at Python wrote C code to manage our arrays for us.

'''

WRITE A SHORT PARAGRAPH

Define what an Object is in terms of the Object Oriented Programming paradigm.

Feel free to use AI like this prompt I put into CoPilot

what is an object in object oriented programming

How does a Python List embody what CoPilot to you?

'''
