# Minilab 08

Last time, we created a script based on our project
commands that took in 2 arguments:
1. path to directory of reviews (this will include
   neg or pos)
2. rating number
and outputted the most common words in those reviews
(or whatever you had gotten to in the project).

## Task

Today, we are going to revise this script further to:
* Only require a path to a higher level directory
  (aka including `train` or `test`, but not including
  pos or neg)
* Allow two different ways to call the script:
    * With 2 arguments (the script will need to check
      the rating number to figure out what directory
      it is in and make sure it is valid)
        1. path to directory
        2. rating # to summarize
    * With 3 arguments (the script will loop through
      rating values between start and end arguments
      and count popular words (or wherever you are currently
      at) for all valid ones in that range).
        1. path to directory
        2. starting rating # to summarize
        3. ending rating # to summarize
* To accomplish the previous, you'll need to:
    1. Use a conditional to check the number of arguments
    2. If 3, use a for loop to go through possible,
       check if valid
    3. If just 2 (or for each if 3, use conditional
       to figure out which subfolder it is in and process.

### About the Rating Numbers

* Ratings 1, 2, 3, 4 are in `neg`
* Ratings 7, 8, 9, 10 are in `pos`
* There are no reviews with ratings of 5 or 6
