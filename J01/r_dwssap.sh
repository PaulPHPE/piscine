# | sed '/^#/d' is used to delete comment lines 

#readonly FT_LINE1=12
#echo $FT_LINE1
#readonly FT_LINE2=13

# can't get 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' to work 

awk 'BEGIN {print "FT_LINE1=12"}'
awk 'BEGIN {print "FT_LINE2=13"}'
cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | sed 's/:\(.*\)//g' | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ' ' | sed 's/ /, /g'

# https://stackoverflow.com/questions/5877544/substituting-environment-variables-in-a-file-awk-or-sed
