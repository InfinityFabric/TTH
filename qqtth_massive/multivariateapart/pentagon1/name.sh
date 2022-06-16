#! /bin/bash/

cd /home/xty/Desktop/TTH/qqtth_massive/multivariateapart/pentagon1

for ((i=1;i<=126;i++))
do
	echo "$i"
	cd /home/xty/Desktop/TTH/qqtth_massive/multivariateapart/pentagon1/headfile"$i"
        pwd	
	sed -i s#apartreduce#apartreduce"$i"#g apartreduce.h
	sed -i s#dens#dens"$i"#g apartreduce.h
	sed -i s#apartpattern#headfile"$i"/apartpattern"$i"#g apartreduce.h
	sed -i s#apartrules#headfile"$i"/apartrules"$i"#g apartreduce.h
	rename apartpattern.inc apartpattern"$i".inc apartpattern.inc
	rename apartrules.inc apartrules"$i".inc apartrules.inc
	rename apartreduce.h apartreduce"$i".h apartreduce.h
done
