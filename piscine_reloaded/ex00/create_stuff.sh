#!/bin/bash

# shellcheck disable=SC2035
rm -rf *.tar test*
DATE=20190601
echo "drwx--xr-x  2 ksticks  2019   68 Jun  1 20:47 test0
-rwx--xr--  1 ksticks  2019    4 Jun  1 21:46 test1
dr-x---r--  2 ksticks  2019   68 Jun  1 22:45 test2
-r-----r--  2 ksticks  2019    1 Jun  1 23:44 test3
-rw-r----x  1 ksticks  2019    2 Jun  1 23:43 test4
-r-----r--  2 ksticks  2019    1 Jun  1 23:44 test5
lrwxr-xr-x  1 ksticks  2019    5 Jun  1 22:20 test6 -> test0" > validation.txt

mkdir test0
echo -n 1234 > test1
mkdir test2
echo -n 1 > test3
echo -n 12 > test4
ln test3 test5
ln -s test0 test6

touch -t $DATE"2047" test0
touch -t $DATE"2146" test1
touch -t $DATE"2245" test2
touch -t $DATE"2344" test3
touch -t $DATE"2343" test4
touch -t $DATE"2220" -h test6

chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
chmod -h 755 test6

ls -l | grep test > ls.txt

diff ls.txt validation.txt

tar -cf exo.tar test*
