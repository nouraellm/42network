ls -l | awk '{ if ( NR %2 == 1) print}'
