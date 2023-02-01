# Find is the bash command to look for specific file or directory 
# Type f is a flag to specify that we are looking for a file and not a folder
# -name specify the criteria to llok for (everything whit .sh at the end)
# the first argument specify where to look / here in the current repository . but it could be the parent repo ..
# in the second sed expression we changed the delimiter / by =

find . -type f -name "*.sh" | sed 's/.sh//g' | sed 's=./==g'