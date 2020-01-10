# Minilab 02

1. Use `ssh` to access one of the eos machines
2. Make a directory for this minilab (you can call it whatever you want - avoid spaces)
3. Change into that directory
4. Run
   `wget https://raw.githubusercontent.com/fivethirtyeight/data/master/avengers/avengers.csv`
   and  
   `wget https://raw.githubusercontent.com/fivethirtyeight/data/master/college-majors/recent-grads.csv`</small>
5. Use `exit` to disconnect (now you'll be back on your local machine)
6. Use `scp` with the `-p` option
   to transfer the directory from eos to your local machine.
   **How would you find out what the `-p` option does?**
7. Use `rsync` to perform a dry-run of transferring the files
   back to the eos machine and verify that it would not transfer
   either of the files.  
   **Hint:**  you'll need to find and pass the correct 2 options
   (specify dry-run and to have rsync show info about what it is doing).
   Where should you look?
8. Edit 1 of the 2 data files (any change is fine)
9. Repeat the previous commands to verify that rsync will transfer
   the edited file.
10. Use `rsync` to transfer both files without the dry-run option
11. `ssh` back into eos and use `ls` to verify just the edited
    file was transferred by looking at time stamps.
    **Hint:**  what option would you pass to `ls`
    to get more info about the files?

