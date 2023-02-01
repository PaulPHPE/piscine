# Run WHOAMI to get the user and you have the value of your FT_USER
# groups $FT_USER allows you to know all the groups you are part of 
# The sed command takes the input, remove all spaces and add commas : s for substitution / text to find / text to replace / g for global
# tr works similarly to sed (we could write the sed command like this : tr ' ' ',') but it doesn't work on some particular windows systems
# In this context tr is used to suppress every backspaces
groups $FT_USER | sed 's/ /,/g' | tr -d '\n'