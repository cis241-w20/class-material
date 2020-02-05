# Minilab 08

In project1, we are looking at the most common words
in all the positive reviews with rating 10 and all
the negative reviews with rating 1.

What if we needed to repeat this process regularly
for some other potential set (so negative with 2 or
positive with 8)?

Write a shell script that takes in 2 arguments:
1. path to directory of reviews (this will include
   neg or pos)
2. rating number
and outputs the most common words in those reviews
(or just output whatever you currently have gotten
to in the project if you aren't finished yet).

To do this:
1. create a shell script
2. In the script, use cd to change into directory
   passed as the first positional argument
3. Modify your cat command from the hw to use the rating
   specified in the 2nd argument. 
3. Combine this and your other commands into one script
   (hint - you basically did this when you made
   a text file to upload to the autograder).


