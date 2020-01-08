## Mini-lab 01

1. Use `ssh` to access one of the eos machines
2. Make a directory for this mini-lab (you can call it whatever you want)
3. Use `cd` to change into that directory
4. Run
   `wget https://raw.githubusercontent.com/  
   fivethirtyeight/data/master/  
   avengers/avengers.csv`
   and  
   `wget https://raw.githubusercontent.com/  
   fivethirtyeight/data/master/  
   college-majors/recent-grads.csv`
5. Use `ls` to verify that you have 2 data files in this directory
6. Use `exit` to disconnect (now you'll be back on your local machine)
7. Use `scp` to transfer the directory from eos to your local machine
   Hint:  we used `scp` in lecture to transfer a file,
   where might you look to see how you can transfer a directory?
8. Rename the files or directory
9.  Use `scp` to transfer the renamed files back to eos
