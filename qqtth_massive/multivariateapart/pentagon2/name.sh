#! /bin/bash/

cd /home/xty/Desktop/qqtth_form_massive/multivariateapart/pentagon2

for ((i=1;i<=187;i++))
do
	echo "$i"
	cd /home/xty/Desktop/qqtth_form_massive/multivariateapart/pentagon2/headfile"$i"
        pwd	
	sed -i s#apartreduce#apartreduce"$i"#g apartreduce.h
	sed -i s#dens#dens"$i"#g apartreduce.h
	sed -i s#apartpattern#headfile"$i"/apartpattern"$i"#g apartreduce.h
	sed -i s#apartrules#headfile"$i"/apartrules"$i"#g apartreduce.h
	rename apartpattern.inc apartpattern"$i".inc apartpattern.inc
	rename apartrules.inc apartrules"$i".inc apartrules.inc
	rename apartreduce.h apartreduce"$i".h apartreduce.h
done
