# an example for computing reductions with Reduze 2

#REDUZECMD=reduze
# activate this for parallel version
#REDUZECMD=mpirun -np 4 /usr/bin/reduze
REDUZECMD=reduze
all:
	${REDUZECMD} ./myjobs/jobs_1_setup.yaml
	${REDUZECMD} ./myjobs/jobs_2_diamatches.yaml

clean:
	rm -rf log/* graphs/* reductions/* sectormappings/* tmp/*
