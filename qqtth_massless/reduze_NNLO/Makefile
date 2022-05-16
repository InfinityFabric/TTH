# an example for computing reductions with Reduze 2

#REDUZECMD=reduze
# activate this for parallel version
#REDUZECMD=mpirun -np 4 /home/pulak/Work/Softwares/Install/reduze/bin/reduze
REDUZECMD=reduze
all:
	${REDUZECMD} ./myjobs/jobs_1_setup.yaml
	${REDUZECMD} ./myjobs/jobs_2_diamatches.yaml
	${REDUZECMD} ./myjobs/jobs_3_printinfo.yaml
	${REDUZECMD} ./myjobs/jobs_4_interference.yaml
	${REDUZECMD} ./myjobs/jobs_5_reduction.yaml
	${REDUZECMD} ./myjobs/jobs_6_insert.yaml

clean:
	rm -rf log/* graphs/* reductions/* sectormappings/* tmp/*
