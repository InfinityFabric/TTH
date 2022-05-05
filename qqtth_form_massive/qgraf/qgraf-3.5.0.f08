!
! ----------------------------------------------------------
!
!       qgraf-3.5.0
!       a module for Feynman diagram generation
!
!       copyright 1990-2021 by P. Nogueira
!
!       not to be redistributed without explicit permission
!
!       literature:
!        [1] Automatic Feynman graph generation
!            P. Nogueira
!            J. Comput. Phys. 105 (1993) 279-289
!            https://doi.org/10.1006/jcph.1993.1074
!
!       documentation:
!         [2] files 'qgraf-3.0.pdf' and 'qgraf-3.5.0.pdf'
!
! ----------------------------------------------------------
!
!     Disclaimer and License:
!
!     This program is copyrighted but may be used for Physics
!     Research and Physics Teaching purposes: it may be
!     downloaded, compiled, and then used in executable form.
!     Any other use is unauthorized including, but not limited
!     to, use in commercial and mission-critical environments.
!
!     As it should be clear — not least because this is a
!     not-for-profit research tool — there is no warranty of
!     _any_ kind, including suitability for any purpose.
!
!     With two exceptions, explained below, redistribution is
!     also unauthorized (the term "redistribution" applies to
!     any distribution not made by the author). A version of
!     this program is _available_ if it can be obtained from
!     the official website for the program; a "stable" version
!     (that attribute is not permanent) is a version that is
!     declared as such in that website.
!
!     Redistributing a version ("A") of this program that is
!     no longer available is authorized when it is strictly
!     necessary to the functioning of another gratis,
!     non-commercial program ("B") used in Physics Research,
!     but only if a "stable" version is no longer available at
!     that time, or if the author(s) and maintainer(s) of "B"
!     are no longer able to update it so that a "stable"
!     version of this program may be used instead. In that
!     case, programs "A" and "B" must be distributed gratis in
!     a single package, and the license of "B" must allow such
!     a distribution; moreover, the intention of distributing
!     that package should be communicated by e-mail to the
!     author of "A", whenever possible; further, the license of
!     that package must state that "A" cannot be used for any
!     other purpose than contributing to the functioning of
!     "B", and refer to this license; lastly, "A" must be
!     distributed only in source form (currently Fortran),
!     encrypted or not, and must have been (or be) a "stable"
!     version, with no known serious errors.
!
!     By making their programs dependent on this program, the
!     authors of said programs agree to make reasonable efforts
!     to move the dependence from older versions of this
!     program to a "stable" version.
!
!     Users of this program agree to communicate to its author
!     any error that they may happen to find, in a timely
!     manner.
!
! ----------------------------------------------------------
!
module aski
implicit none
save
integer::acr,alf,anull,aspace,dquote,squote
integer::acomma,ascol,albra,arbra,alpar,arpar
integer::aeq,agt,alt,aminus,anine,aplus,aslash
integer::atimes,azero,ausco
integer::abo(0:6),acf(0:127),acz(0:127),punct1(0:0)
end module
module cbuffer
implicit none
save
integer,parameter::scbuff=524287
integer,parameter::stcbdst0=4
character(len=:),target,allocatable::xstcb,ystcb
character(len=:),pointer::stcb
integer::stcbas(1:1),stcbdst(1:1),stcbs(1:1)
integer::scbff(0:stcbdst0)
integer::dcff0
end module
module intbuffer
implicit none
save
integer,parameter::sibuff=2097151
integer,parameter::stibdst0=7
integer,parameter::sjbuff=8191
integer,parameter::stj0=4
integer,target,allocatable::xstib(:),ystib(:)
integer,pointer::stib(:)
integer::stibas(1:1),stibdst(1:1),stibs(1:1)
integer::diff0
integer::sibff(0:stibdst0)
integer::stjb(1:sjbuff+1)
integer::stjbs(1:1)
end module
module ikeys
implicit none
save
integer,parameter::deccon=1
integer,parameter::decmes=2
integer,parameter::decoutp=3
integer,parameter::decsty=4
integer,parameter::declib=5
integer,parameter::decmod=6
integer,parameter::decin=7
integer,parameter::decout=8
integer,parameter::decloo=9
integer,parameter::declmo=10
integer,parameter::decopt=11
integer,parameter::decind=12
integer,parameter::dectru=13
integer,parameter::decfal=14
integer,parameter::decmax=14
integer::comc(1:decmax)
integer::pisk(0:0),wisk(0:0),cisk(0:0),fisk(0:0)
integer::oisk(0:0),misk(0:0),aisk(0:0)
integer::popt0(0:0),wopt0(0:0),copt0(0:0),vopt0(0:0)
integer::aopt0(0:0)
integer::popt1(0:0),wopt1(0:0),copt1(0:0),vopt1(0:0)
integer::aopt1(0:0)
integer::popt3(0:0),wopt3(0:0),copt3(0:0),aopt3(0:0)
integer::popt5(0:0),wopt5(0:0),copt5(0:0),aopt5(0:0)
integer::popt7(0:0),wopt7(0:0),copt7(0:0),aopt7(0:0)
integer::popt8(0:0),wopt8(0:0),copt8(0:0),aopt8(0:0)
integer::popt9(0:0),wopt9(0:0),copt9(0:0),aopt9(0:0)
integer::kc(0:0),kse(0:0),pske(0:0),wske(0:0),aske(0:0)
integer::nske,mcopt5,ncopt5
integer::xtstrp(0:0),xtstrl(0:0)
end module
module qfiles
implicit none
save
integer,parameter::ctype=1
integer,parameter::wtype=2
integer,parameter::mtype=3
integer,parameter::ltype=4
integer,parameter::stype=5
integer,parameter::otype=6
integer,parameter::msfiles0=4
integer,parameter::nafiles0=4
integer,parameter::mfiles0=2*msfiles0+nafiles0
integer::filesp(1:mfiles0),filesq(1:mfiles0)
integer::filesm(1:mfiles0),filest(1:mfiles0),filesu(1:mfiles0)
integer::nfiles,nsfiles,dso
end module
module qintr
implicit none
save
integer,parameter::eoa=-32767
integer,parameter::nap=-131071
integer,parameter::cflags=8
integer,parameter::dflags=25
integer,parameter::jflags=10
integer::qdatp,qdatq,qvp,qvl,dprefp,dprefl
integer::iref,wiref,wsint,spten
integer::aaf(0:4)
integer::cflag(1:cflags),dflag(1:dflags),jflag(1:jflags)
end module
module qmix
implicit none
save
integer,parameter::maxrho=7
integer,parameter::maxpoint=11
integer,parameter::maxi=max(maxpoint,maxrho)
integer,parameter::maxdeg=8
integer,parameter::maxn=maxi+maxi-2
integer,parameter::maxli=maxn+maxrho
integer::n,nli
integer::dis,dsym,nsym,psyms,psym(0:0)
integer::ndiagp,ndiagl,hhp,hhl,doffp,doffl,noffp,noffl
integer::nrho,rhop1,rhop2
integer::rho(1:maxdeg),xn(1:maxn),gam(1:maxn,1:maxn)
integer::vdeg(1:maxn),vxl(1:maxn),vfo(1:maxn)
integer::lmap(1:maxn,1:maxdeg),vmap(1:maxn,1:maxdeg)
integer::pmap(1:maxn,1:maxdeg),vlis(1:maxn),invlis(1:maxn)
integer::rdeg(1:maxn),sdeg(1:maxn),amap(1:maxn,1:maxdeg)
integer::ex(1:maxli),ey(1:maxli)
integer::ovm(1:maxn,1:maxdeg),iovm(1:maxn,1:maxdeg)
integer::ntadp,net(-3:3),xtail(1:maxn),xhead(1:maxn)
integer::flow(1:maxli,0:maxpoint+maxrho),ege(1:maxn,1:maxn)
integer::zcho(0:maxli),zbri(0:maxli),zpro(0:maxli)
integer::rbri(0:maxli),sbri(0:maxli)
end module
module qmodel
implicit none
save
integer,parameter::mflags=7
integer::mflag(1:mflags)
integer::nphi,nblok,nprop,npprop,nvert
integer::namep(0:0),namel(0:0),link(0:0),antiq(0:0)
integer::blok(0:0)
integer::nivd(0:0),dpntro(0:0),vparto(0:0),vval(0:0)
integer::nudk,ngmk,npmk,nvmk
integer::gmkp(0:0),gmkl(0:0),gmkd(0:0),gmko(0:0)
integer::gmkvp(0:0),gmkvl(0:0)
integer::pmkp(0:0),pmkl(0:0),pmkd(0:0),pmkr(0:0)
integer::pmkvma(0:0),pmkvmi(0:0)
integer::pmkvp(0:0),pmkvl(0:0),pmkvpp(0:0),pmkvlp(0:0)
integer::vmkp(0:0),vmkl(0:0),vmkr(0:0),vmks(0:0)
integer::vmkmao(0:0),vmkmio(0:0),vmkzp(0:0)
integer::vmkvp(0:0),vmkvl(0:0),vmkvpp(0:0),vmkvlp(0:0)
end module
module qproc
implicit none
save
integer,parameter::maxleg=11
integer,parameter::ipar1=maxleg*maxleg-maxleg
integer,parameter::ipar2=ipar1/2
integer::nleg,nloop,inco,outg,leg(1:maxleg)
integer::momep(0:maxleg),momel(0:maxleg),kpqs(1:4)
integer::ps1(1:maxleg),invps1(1:maxleg)
integer::ns1,p1l(1:ipar2),p1r(1:ipar2)
integer::ntf,tpc(0:0),tftyp(0:0),tfnarg(0:0)
integer::tfa(0:0),tfb(0:0),tfc(0:0),tfo(0:0),tf2(0:0)
integer::tfta(0:0),tftb(0:0),tftic(0:0)
integer::tfills(0:0),tfiuls(0:0)
end module
module qsty
use qfiles
implicit none
save
integer,parameter::maxtak=3
integer,parameter::maxpot=6
integer,parameter::eosf=-8191
integer::iogp(1:4)
integer::ks,tak(1:maxtak),pot(0:maxpot)
integer::udkp(0:2),udkl(0:0),udkt(0:0),udki(0:0)
integer::kla(0:0),klo(0:0),bbc(0:0)
end module
module wbuffer
use qfiles
implicit none
save
integer,parameter::srec=81
integer,parameter::sfrec=71,ssrec=63
integer,parameter::swbuff0=32767
integer,parameter::swbuff1=(swbuff0+1)/2
integer,parameter::swbuff=swbuff0+swbuff1
integer,parameter::sxbuff=2047
integer::stwbpf(1:msfiles0),stwbqf(1:msfiles0)
character(len=:),allocatable::stwb
character(len=sxbuff+1)::stxb
character(len=srec)::mlin
integer::nwer,wera(0:0),werb(0:0)
end module
module xyx
implicit none
save
integer,parameter::parkpa=10
integer::stapi(0:4),kpa(0:parkpa),cfrp(0:1)
integer::drecp(0:0),drecl(0:0),drecii(0:0),drect(0:0)
integer::irecc(0:0),frecc(0:0)
integer::ndrec,ncom
integer::aopp(0:0),aopl(0:0),aopna(0:0),aopnb(0:0)
end module
program qgraf
use aski
use ikeys
use qintr
use qmix
use qmodel
use qproc
use wbuffer
implicit none
save
call init0
call initq
jflag(6)=1
call inputs
if(cflag(1).gt.0)then
call iki
call prepos(1)
end if
call pgen11
if(cflag(1).gt.0)then
call prepos(3)
end if
if(cflag(2).ge.0)then
call spp(5,0,0,1)
end if
call qclose(0,0)
stop
end program
subroutine pgen11
use intbuffer
use qintr
use qmix
use qmodel
use qproc
use wbuffer
implicit none
save
integer::atyp,ii,i1,i2,i3,j1,j2,jj,nili,styp
call rflag
if(jflag(1).ne.0)then
go to 90
end if
rho(1)=nleg
rho(2)=0
rhop1=rho(1)+1
jj=rhop1-3+2*nloop
do i1=nrho,3,-1
rho(i1)=jj/(i1-2)
jj=jj-rho(i1)*(i1-2)
end do
go to 50
10 continue
do i1=4,nrho
if(rho(i1).gt.0)then
go to 30
end if
end do
go to 90
30 continue
rho(i1)=rho(i1)-1
jj=i1-2+rho(3)
do i2=i1-1,3,-1
rho(i2)=jj/(i2-2)
jj=jj-rho(i2)*(i2-2)
end do
50 continue
do i1=3,nrho
if(stib(nivd(0)+i1).eq.0)then
if(rho(i1).gt.0)then
go to 10
end if
end if
end do
call sdiag(1,-1)
jflag(2)=1
nili=-rho(1)
do i1=3,nrho
nili=nili+i1*rho(i1)
end do
nili=nili/2
if(npprop.eq.0)then
if(nili.gt.0)then
go to 40
end if
end if
if(nloop.eq.0)then
if((dflag(1).gt.0).or.(dflag(2).gt.0))then
if(nili.ne.0)then
go to 40
end if
else if((dflag(1).lt.0).or.(dflag(2).lt.0))then
if(nili.eq.0)then
go to 40
end if
end if
end if
if(zpro(nili).eq.0)then
go to 40
end if
do i1=nloop,nili
if(zcho(i1).ne.0)then
if(zbri(nili-i1).ne.0)then
do i2=0,nili-i1
if(rbri(i2).ne.0)then
if(sbri(nili-i1-i2).ne.0)then
go to 70
end if
end if
end do
end if
end if
end do
go to 40
70 continue
if(dflag(18).ne.0)then
atyp=6
ii=stib(tftic(0)+atyp)
do i1=stib(tfta(0)+ii),stib(tftb(0)+ii)
i2=stib(tf2(0)+i1)
styp=stib(tftyp(0)+i2)
j1=0
j2=0
jj=stib(stib(tfo(0)+i2)+1)
if(stib(vmks(0)+jj).ne.1)then
mlin(1:srec)='pgen11_1'
call mput(1,0,0,0)
end if
do i3=nrho,3,-1
if(rho(i3).gt.0)then
j1=j1+rho(i3)*stib(stib(vmkmio(0)+jj)+i3)
j2=j2+rho(i3)*stib(stib(vmkmao(0)+jj)+i3)
end if
end do
if(styp.gt.0)then
if(j1.gt.stib(tfb(0)+i2))then
go to 40
else if(j2.lt.stib(tfa(0)+i2))then
go to 40
end if
else
if(j1.ge.stib(tfa(0)+i2))then
if(j2.le.stib(tfb(0)+i2))then
go to 40
end if
end if
end if
end do
end if
jflag(2)=0
call gen21
40 continue
if(cflag(2).ge.0)then
call spp(4,0,0,0)
end if
go to 10
90 return
end subroutine
subroutine ctxb(ii,jj,kk)
use cbuffer
use wbuffer
implicit none
save
integer,intent(in)::jj,kk
integer,intent(inout)::ii
integer::j1
j1=0
if(ii.lt.0)then
j1=1
else if(kk.lt.0)then
j1=1
else if(jj.le.0)then
j1=1
else if(kk+jj.gt.stcbas(1))then
j1=1
end if
if(j1.ne.0)then
mlin(1:srec)='ctxb_1'
call mput(1,0,0,0)
end if
if(ii+jj.gt.sxbuff)then
call uput(8)
end if
stxb(ii+1:ii+jj)=stcb(kk+1:kk+jj)
ii=ii+jj
return
end subroutine
subroutine spp(what,ja,jb,nl)
use aski
use cbuffer
use ikeys
use intbuffer
use qintr
use qmix
use qmodel
use qproc
use wbuffer
implicit none
save
integer,intent(in)::what,ja,jb,nl
integer::wztos
integer::gg,i1,i2,i3,i4,j1,j2,j3,j4,ii,jj,kk
integer::nps(0:4)
if(nl.ne.0)then
if(jflag(7).eq.0)then
write(unit=*,fmt='(a)')
jflag(7)=10
end if
end if
select case(what)
case(0)
go to 01
case(1)
go to 11
case(2)
go to 21
case(3)
go to 31
case(4)
go to 41
case(5)
go to 51
end select
mlin(1:srec)='spp_1'
call mput(1,0,0,0)
01 continue
call hrul(1,1)
kk=1+(ssrec-qvl)/2
write(unit=*,fmt='(a,/,a,/,a,/)')stxb(1:ssrec),&
stcb(1:kk)//stcb(qvp:qvp-1+qvl),stxb(1:ssrec)
jflag(7)=10
jflag(6)=2
go to 90
11 continue
j1=ja
do i1=ja,jb
if(iachar(stcb(i1:i1)).eq.alf)then
if(j1.lt.i1)then
write(unit=*,fmt='(1x,a)')stcb(j1:i1-1)
else
write(unit=*,fmt='(1x,a)')
end if
j1=i1+1
end if
end do
go to 90
21 continue
call hrul(1,1)
write(unit=*,fmt='(a,/)')stxb(1:ssrec)
jflag(7)=10
go to 90
31 continue
do i1=1,2
do i2=0,size(nps)-1
nps(i2)=0
end do
do i2=1,nphi
jj=0
if((i1.eq.1).and.(stib(tpc(0)+i2).eq.5))then
jj=1
else if((i1.eq.2).and.(stib(tpc(0)+i2).ne.5))then
jj=1
end if
if(jj.eq.1)then
if(i2.lt.stib(link(0)+i2))then
if(stib(antiq(0)+i2).eq.0)then
nps(2)=nps(2)+1
else
nps(4)=nps(4)+1
end if
else if(i2.eq.stib(link(0)+i2))then
if(stib(antiq(0)+i2).eq.0)then
nps(1)=nps(1)+1
else
nps(3)=nps(3)+1
end if
end if
end if
end do
nps(0)=nps(1)+nps(2)+nps(3)+nps(4)
if(nps(0).gt.0)then
ii=0
call ctxb(ii,2,0)
call ctxb(ii,stib(xtstrl(0)+i1),stib(xtstrp(0)+i1)-1)
j1=stcbs(1)
jj=2
call vaocb(jj)
call dkar(nps(0),jj)
call ctxb(ii,jj,j1)
call ctxb(ii,stib(xtstrl(0)+14),stib(xtstrp(0)+14)-1)
if(nps(0).gt.0)then
do i2=1,4
if(nps(i2).gt.0)then
call ctxb(ii,2,0)
call dkar(nps(i2),jj)
call ctxb(ii,jj,j1)
j2=stib(xtstrp(0)+2+i2)
stcb(j1+1:j1+2)=stcb(j2:j2+1)
call ctxb(ii,2,j1)
end if
end do
end if
if(ii.ge.srec)then
j2=stib(xtstrp(0)+18)
j3=stib(xtstrl(0)+18)
ii=srec-1
stxb(srec-j3:ii)=stcb(j2+1:j2+j3)
end if
write(unit=*,fmt='(a,/)')stxb(1:ii)
end if
end do
j1=stcbs(1)
ii=0
call ctxb(ii,2,0)
call ctxb(ii,stib(xtstrl(0)+7),stib(xtstrp(0)+7)-1)
call dkar(nvert,jj)
call ctxb(ii,jj,j1)
call ctxb(ii,stib(xtstrl(0)+14),stib(xtstrp(0)+14)-1)
j2=ii+3
do i1=1,nrho
if(stib(nivd(0)+i1).gt.0)then
j3=ii
call ctxb(ii,2,0)
25 continue
call dkar(i1,jj)
call ctxb(ii,jj,j1)
stcb(j1+1:j1+1)='^'
call ctxb(ii,1,j1)
call dkar(stib(nivd(0)+i1),jj)
call ctxb(ii,jj,j1)
if(ii.ge.ssrec)then
if(j2.ne.0)then
ii=j3
call ctxb(ii,1,0)
stxb(ii:ii)=achar(alf)
call ctxb(ii,j2,0)
j2=0
go to 25
end if
end if
end if
end do
write(unit=*,fmt='(a,/)')stxb(1:ii)
call hrul(1,1)
write(unit=*,fmt='(a,/)')stxb(1:ssrec)
jflag(7)=10
go to 90
41 continue
gg=0
do i1=3,nrho
gg=gg+(i1-2)*rho(i1)
end do
call vaocb(1)
j1=stcbs(1)
j2=j1+1
ii=0
do i1=1,nrho
if(stib(nivd(0)+i1).gt.0)then
kk=wztos(gg/(i1-2))+2
call dkar(i1,jj)
if(rho(i1).gt.0)then
call ctxb(ii,jj,j1)
stcb(j2:j2)='^'
call ctxb(ii,1,j1)
call dkar(rho(i1),jj)
call ctxb(ii,jj,j1)
kk=kk-jj
else
call ctxb(ii,jj,0)
stcb(j2:j2)=achar(aminus)
call ctxb(ii,1,j1)
end if
call ctxb(ii,kk,0)
end if
end do
ii=ii-2
j2=ii
jj=5
call ctxb(ii,jj,0)
call ctxb(ii,stib(xtstrl(0)+15),stib(xtstrp(0)+15)-1)
call ctxb(ii,jj,0)
call ctxb(ii,hhl,hhp)
if(dflag(25).eq.0)then
if(jflag(2).ne.0)then
call ctxb(ii,stib(xtstrl(0)+16),stib(xtstrp(0)+16)-1)
end if
end if
i2=stib(xtstrl(0)+8)
j1=stib(xtstrl(0)+15)
if(j2.lt.i2)then
j4=(i2-j2)/2
else
j4=0
end if
if(jflag(6).lt.3)then
if(j2.lt.i2)then
j3=0
else
j3=(j2-i2)/2
end if
jj=j2-i2+2*jj+j1+j4-j3-3
i1=stib(xtstrp(0)+8)
i3=stib(xtstrp(0)+9+dflag(16))
i4=i3-1+stib(xtstrl(0)+9+dflag(16))
write(unit=*,fmt='(a,/)')stcb(1:j3+4)//stcb(i1:i1-1+i2)//&
stcb(1:jj)//stcb(i3:i4)
jflag(6)=3
end if
write(unit=*,fmt='(a)')stcb(1:j4+4)//stxb(1:ii)
jflag(7)=0
go to 90
51 continue
ii=0
call ctxb(ii,stib(xtstrl(0)+11),stib(xtstrp(0)+11)-1)
call ctxb(ii,ndiagl,ndiagp)
jj=0
if(ndiagl.eq.1)then
j1=ndiagp+1
if(iachar(stcb(j1:j1)).eq.azero+1)then
jj=1
end if
end if
j1=12+dflag(16)
call ctxb(ii,stib(xtstrl(0)+j1)-jj,stib(xtstrp(0)+j1)-1)
if(dflag(25).eq.0)then
if(jflag(1).ne.0)then
call ctxb(ii,stib(xtstrl(0)+16),stib(xtstrp(0)+16)-1)
end if
end if
if(jflag(8).gt.0)then
if(cflag(6).eq.0)then
call ctxb(ii,stib(xtstrl(0)+17),stib(xtstrp(0)+17)-1)
end if
end if
write(unit=*,fmt='(/,a,/)')stxb(1:ii)
jflag(7)=10
90 return
end subroutine
subroutine rflag
use intbuffer
use qintr
use qmix
use qmodel
use qproc
use wbuffer
implicit none
save
integer,parameter::tr=1
integer,parameter::ntr=2
integer,parameter::sb=3
integer,parameter::nsb=4
integer,parameter::rb=5
integer,parameter::nrb=6
integer,parameter::b=7
integer,parameter::nb=8
integer,parameter::sl=9
integer,parameter::nsl=10
integer,parameter::dl=11
integer,parameter::ndl=12
integer::intf(1:12)
integer::i1,j1
if(dflag(16).ne.0)then
if(mflag(1).eq.0)then
mlin(1:srec)="option 'topol' does not apply here"
call mput(1,0,0,0)
end if
if(dflag(21).ne.0)then
j1=stib(tftic(0)+11)
do i1=stib(tfta(0)+j1),stib(tftb(0)+j1)
if(stib(tfnarg(0)+stib(tf2(0)+i1)).ne.nleg)then
mlin(1:srec)="'elink' statement incompatible with "&
//"option 'topol'"
call mput(1,0,0,0)
end if
end do
end if
if(dflag(22).ne.0)then
mlin(1:srec)="'plink' statement incompatible with option"&
//" 'topol'"
call mput(1,0,0,0)
end if
end if
if(dflag(17).ne.0)then
if((mflag(2).gt.0).or.(mflag(7).eq.0))then
mlin(1:srec)="option 'floop' does not apply here"
call mput(1,0,0,0)
end if
end if
if(jflag(4).eq.0)then
if(dflag(2).ne.0)then
jflag(4)=1
else if(dflag(5).ne.0)then
jflag(4)=1
else if(dflag(6).ne.0)then
jflag(4)=1
else if(dflag(7).ne.0)then
jflag(4)=1
else if(dflag(9).ne.0)then
jflag(4)=1
else if(dflag(10).ne.0)then
jflag(4)=1
else if(dflag(22).ne.0)then
jflag(4)=1
end if
end if
if(dflag(25).ne.0)then
go to 90
end if
if(dflag(1).ne.0)then
if(dflag(1).gt.0)then
intf(nrb)=1
intf(nsb)=1
intf(nb)=1
else
intf(b)=1
end if
end if
if(dflag(2).ne.0)then
if(dflag(2).gt.0)then
intf(nrb)=1
else
intf(rb)=1
intf(b)=1
end if
end if
if(dflag(3).ne.0)then
if(dflag(3).gt.0)then
intf(nsb)=1
else
intf(sb)=1
intf(b)=1
end if
end if
if(dflag(4).ne.0)then
if(dflag(4).lt.0)then
intf(b)=1
end if
end if
if(dflag(8).ne.0)then
if(dflag(8).gt.0)then
intf(nsb)=1
intf(nsl)=1
end if
end if
if(dflag(9).ne.0)then
if(dflag(9).lt.0)then
intf(ntr)=1
end if
end if
if(dflag(11).ne.0)then
if(dflag(11).gt.0)then
intf(nsl)=1
end if
end if
if(dflag(12).ne.0)then
if(dflag(12).gt.0)then
intf(nsl)=1
else
intf(sl)=1
intf(ntr)=1
end if
end if
if(dflag(13).ne.0)then
if(dflag(13).lt.0)then
intf(dl)=1
intf(ntr)=1
end if
end if
if(dflag(14).ne.0)then
if(dflag(14).gt.0)then
intf(ndl)=1
else
intf(ntr)=1
end if
end if
if(dflag(15).ne.0)then
if(dflag(15).gt.0)then
intf(nsl)=1
intf(ndl)=1
else
intf(ntr)=1
end if
end if
if((intf(tr).ne.0).and.(intf(ntr).ne.0))then
jflag(1)=1
else if((intf(sb).ne.0).and.(intf(nsb).ne.0))then
jflag(1)=1
else if((intf(rb).ne.0).and.(intf(nrb).ne.0))then
jflag(1)=1
else if((intf(b).ne.0).and.(intf(nb).ne.0))then
jflag(1)=1
else if((intf(sl).ne.0).and.(intf(nsl).ne.0))then
jflag(1)=1
else if((intf(dl).ne.0).and.(intf(ndl).ne.0))then
jflag(1)=1
end if
if(jflag(1).ne.0)then
call wput(11,0,0)
end if
if(dflag(13).gt.0)then
if(dflag(12).gt.0)then
if(dflag(15).lt.0)then
jflag(1)=1
end if
end if
end if
if(dflag(1).lt.0)then
if(dflag(2).gt.0)then
if(dflag(3).gt.0)then
jflag(1)=1
end if
end if
end if
if(dflag(4).lt.0)then
if(dflag(5).gt.0)then
jflag(1)=1
end if
end if
if(dflag(9).gt.0)then
if(dflag(1).gt.0)then
if(dflag(10).lt.0)then
jflag(1)=1
end if
end if
end if
if(dflag(9).lt.0)then
if(dflag(8).gt.0)then
if(dflag(1).gt.0)then
if(dflag(10).gt.0)then
jflag(1)=1
end if
end if
end if
end if
if(dflag(4).lt.0)then
if(dflag(10).gt.0)then
if(dflag(15).gt.0)then
jflag(1)=1
end if
end if
end if
if(dflag(13).gt.0)then
if(dflag(12).gt.0)then
if(dflag(14).lt.0)then
jflag(1)=1
end if
end if
end if
if(dflag(14).lt.0)then
if(dflag(15).gt.0)then
jflag(1)=1
end if
end if
if(nloop.gt.0)then
if(dflag(1).lt.0)then
if(dflag(10).gt.0)then
if(dflag(8).gt.0)then
jflag(1)=1
else if(dflag(15).gt.0)then
jflag(1)=1
end if
end if
end if
end if
if(nloop.gt.1)then
if(dflag(9).gt.0)then
if(dflag(1).lt.0)then
if(dflag(10).gt.0)then
jflag(1)=1
end if
end if
end if
if(dflag(9).gt.0)then
if(dflag(12).lt.0)then
jflag(1)=1
end if
end if
end if
if(nloop.eq.0)then
if(dflag(1).gt.0)then
if(nrho.lt.nleg)then
jflag(1)=1
end if
end if
if(dflag(2).gt.0)then
if(nrho.lt.nleg)then
jflag(1)=1
end if
end if
if(dflag(3).lt.0)then
jflag(1)=1
else
dflag(3)=0
end if
if(dflag(8).lt.0)then
jflag(1)=1
else
dflag(8)=0
end if
if(dflag(9).lt.0)then
jflag(1)=1
else
dflag(9)=0
end if
if(dflag(11).lt.0)then
jflag(1)=1
else
dflag(11)=0
end if
if(dflag(12).lt.0)then
jflag(1)=1
else
dflag(12)=0
end if
if(dflag(13).lt.0)then
jflag(1)=1
else
dflag(13)=0
end if
if(dflag(14).lt.0)then
jflag(1)=1
else
dflag(14)=0
end if
if(dflag(17).lt.0)then
jflag(1)=1
else
dflag(17)=0
end if
if(dflag(15).lt.0)then
jflag(1)=1
else
dflag(15)=0
end if
else if(nloop.eq.1)then
if(dflag(9).lt.0)then
jflag(1)=1
else
dflag(9)=0
end if
end if
if(mflag(3).ne.0)then
if(mod(nleg,2).ne.0)then
jflag(1)=1
end if
end if
if(dflag(22).ne.0)then
if((dflag(1).gt.0).or.(dflag(2).gt.0))then
j1=stib(tftic(0)+12)
do i1=stib(tfta(0)+j1),stib(tftb(0)+j1)
if(stib(tftyp(0)+stib(tf2(0)+i1)).gt.0)then
jflag(1)=1
end if
end do
end if
end if
if(mflag(6).ne.0)then
if(nloop.eq.0)then
mflag(6)=0
else if(dflag(1).gt.0)then
mflag(6)=0
else if(dflag(3).gt.0)then
mflag(6)=0
else if(dflag(8).gt.0)then
mflag(6)=0
end if
end if
if(nleg.eq.1)then
if(stib(tpc(0)+leg(1)).eq.1)then
jflag(1)=1
end if
end if
if(dflag(1).gt.0)then
do i1=1,maxli
rbri(i1)=0
sbri(i1)=0
zbri(i1)=0
end do
else if(dflag(1).lt.0)then
zbri(0)=0
end if
if(dflag(2).gt.0)then
do i1=1,maxli
rbri(i1)=0
end do
else if(dflag(2).lt.0)then
rbri(0)=0
end if
if(dflag(3).gt.0)then
do i1=1,maxli
sbri(i1)=0
end do
else if(dflag(3).lt.0)then
sbri(0)=0
end if
if(dflag(4).lt.0)then
zbri(0)=0
end if
if(dflag(8).gt.0)then
do i1=1,maxli
sbri(i1)=0
end do
end if
if(nloop.eq.0)then
do i1=1,maxli
zcho(i1)=0
end do
end if
if(zcho(0).ne.0)then
if(dflag(3).lt.0)then
zcho(0)=0
else if(dflag(4).lt.0)then
zcho(0)=0
else if(dflag(5).lt.0)then
zcho(0)=0
else if(dflag(6).lt.0)then
zcho(0)=0
else if(dflag(7).lt.0)then
zcho(0)=0
else if(dflag(8).lt.0)then
zcho(0)=0
else if(dflag(15).lt.0)then
zcho(0)=0
end if
end if
if(jflag(1).ne.0)then
call wput(11,0,0)
end if
90 return
end subroutine
subroutine prepos(sec)
use aski
use cbuffer
use ikeys
use intbuffer
use qfiles
use qintr
use qmix
use qmodel
use qsty
use wbuffer
use xyx
implicit none
save
integer,intent(in)::sec
integer::ig,igc,igk,kma,lupi,lupj,lupt,ios
integer::i1,ij,j1,j2,k1,k2
integer::f0,f1,f2,ip,stwbp,stwbq,stwbu
if(abs(sec-2).ne.1)then
mlin(1:srec)='prepos_1'
call mput(1,0,0,0)
end if
if(sec.eq.1)then
j1=0
do i1=1,nfiles
if(filest(i1).eq.otype)then
f1=filesm(i1)
if(filesp(i1).ne.nap)then
call qopen(i1)
j1=j1+1
stwbpf(f1)=(j1-1)*(swbuff+1)
stwbqf(f1)=stwbpf(f1)
else
stwbpf(f1)=nap
stwbqf(f1)=nap
end if
end if
end do
ios=1
allocate(character(j1*(swbuff+1))::stwb,stat=ios)
if(ios.ne.0)then
call uput(0)
end if
f2=0
j1=min(decoutp,decsty)
do i1=1,decmax
if(i1.lt.j1)then
f2=f2+comc(i1)
end if
end do
end if
ig=iogp(sec)
if(ig.ge.iogp(sec+1))then
go to 80
end if
f0=0
10 continue
f0=f0+1
if(f0.gt.nfiles)then
go to 90
else if(filest(f0).ne.otype)then
go to 10
end if
if(filesp(f0).eq.nap)then
ig=ig+stib(ig+1)
go to 10
else
ig=ig+2
end if
f1=filesm(f0)
if(sec.ne.1)then
if(stwbqf(f1).gt.stwbpf(f1))then
call qout(f0)
stwbqf(f1)=stwbpf(f1)
end if
end if
stwbp=stwbpf(f1)
stwbq=stwbqf(f1)
stwbu=stwbp+swbuff
kma=-1
lupt=0
20 continue
igk=stib(ig)
if(igk.gt.0)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq:stwbq)=achar(igk)
ig=ig+1
go to 20
else if(igk.eq.eosf)then
if(lupt.ne.0)then
go to 80
end if
if(stwbq.gt.stwbp)then
stwbqf(f1)=stwbq
call qout(f0)
stwbqf(f1)=stwbp
end if
if(sec.ne.1)then
call qclose(f0,0)
end if
go to 10
else if(igk.eq.eoa)then
mlin(1:srec)='prepos_2'
call mput(1,0,0,0)
end if
igc=stib(ig+1)
if(igk.eq.-1)then
if(igc.eq.1)then
70 continue
if(stib(ig+4).eq.0)then
stib(ig+4)=ncom
stib(ig+5)=1
else
stib(ig+5)=stib(ig+5)+1
end if
if(stib(ig+4).lt.stib(ig+5))then
stib(ig+4)=0
ig=ig+1
lupt=0
lupi=0
else
lupt=1
lupi=stib(ig+5)
if((lupi.gt.f2).and.(lupi.le.f2+2*nsfiles))then
if((lupi.lt.f2+2*f1-1).or.(lupi.gt.f2+2*f1))then
go to 70
end if
end if
end if
else if(igc.eq.2)then
if(stib(ig+4).eq.0)then
stib(ig+4)=stib(frecc(0)+lupi)
stib(ig+5)=stib(irecc(0)+lupi)
else
stib(ig+5)=stib(ig+5)+1
end if
if(stib(ig+4).lt.stib(ig+5))then
stib(ig+4)=0
ig=ig+1
lupt=1
lupj=0
else
lupt=2
lupj=stib(ig+5)
end if
else if(igc.ne.-1)then
go to 80
end if
else if(igk.eq.-2)then
if(igc.eq.22)then
if(jflag(10).eq.0)then
if(kma.ge.0)then
stwbq=kma
kma=-1
end if
else if(stwbq.gt.stwbp)then
stwbq=stwbq-1
else
go to 80
end if
else
go to 80
end if
else if(igk.eq.-3)then
ip=stwbq+1
if(igc.eq.71)then
stwbq=stwbq+ndiagl
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(ndiagp+1:ndiagp+ndiagl)
else if(igc.eq.81)then
stwbq=stwbq+qvl
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(qvp:qvp-1+qvl)
else
go to 80
end if
else if(igk.eq.-4)then
if(igc.eq.82)then
if(lupt.eq.1)then
k1=stib(irecc(0)+lupi)
k2=stib(frecc(0)+lupi)
else if(lupt.eq.2)then
k1=lupj
k2=lupj
else
go to 80
end if
do i1=k1,k2
j2=stib(drecl(0)+i1)
ip=stwbq+1
stwbq=stwbq+j2
if(stwbq.gt.stwbu)then
go to 85
end if
j1=stib(drecp(0)+i1)
stwb(ip:stwbq)=stcb(j1:j1+j2-1)
end do
else
go to 80
end if
else if(igk.eq.-6)then
if((igc.le.0).or.(igc.gt.nudk))then
go to 80
end if
if(stib(udkt(0)+igc).eq.1)then
ij=stib(udki(0)+igc)
if((ij.le.0).or.(ij.gt.ngmk))then
go to 80
end if
j1=stib(gmkvp(0)+ij)
j2=stib(gmkvl(0)+ij)
if(j2.gt.0)then
ip=stwbq+1
stwbq=stwbq+j2
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(j1:j1+j2-1)
else if(j2.lt.0)then
go to 80
end if
else
go to 80
end if
else
go to 80
end if
ig=ig+stib(ig+2)
go to 20
80 continue
j1=stib(pske(0)+sec)
j2=j1-1+stib(wske(0)+sec)
mlin(1:srec)='runtime error while processing <'//stcb(j1:j2)//'>'
call mput(1,0,0,0)
85 continue
call uput(7)
90 return
end subroutine
subroutine umpi(xx,situ)
use qmix
use wbuffer
implicit none
save
integer,intent(in)::xx
integer,intent(out)::situ
integer::aa(1:maxn),bb(1:maxn)
integer::i1,i2,i3,i4,ii,jj,kk
ntadp=0
situ=-1
do i1=rhop1,n
do i2=i1+1,n
if(gam(i1,i2).eq.1)then
gam(i1,i2)=0
kk=1
bb(1)=1
aa(1)=1
do i4=2,n
aa(i4)=0
end do
do i3=1,n
if(kk.eq.n)then
go to 20
end if
if(i3.gt.kk)then
gam(i1,i2)=1
if(xx.eq.1)then
go to 90
end if
ii=0
do i4=1,rho(1)
ii=ii+aa(i4)
end do
if(xx.eq.2)then
if((ii.eq.0).or.(ii.eq.rho(1)))then
go to 90
end if
else if(xx.eq.3)then
if((ii.eq.0).or.(ii.eq.rho(1)))then
ntadp=ntadp+1
xtail(ntadp)=i1
xhead(ntadp)=i2
end if
else if(xx.eq.4)then
if((ii.eq.1).or.(ii.eq.rho(1)-1))then
go to 90
end if
end if
go to 20
end if
jj=bb(i3)
do i4=1,jj-1
if(aa(i4).eq.0)then
if(gam(i4,jj).gt.0)then
kk=kk+1
bb(kk)=i4
aa(i4)=1
end if
end if
end do
do i4=jj+1,n
if(aa(i4).eq.0)then
if(gam(jj,i4).gt.0)then
kk=kk+1
bb(kk)=i4
aa(i4)=1
end if
end if
end do
end do
mlin(1:srec)='umpi_1'
call mput(1,0,0,0)
20 continue
gam(i1,i2)=1
end if
end do
end do
situ=1
90 return
end subroutine
subroutine umvi(xx,situ)
use qmix
use qproc
use wbuffer
implicit none
save
integer,intent(in)::xx
integer,intent(out)::situ
integer::ii,i1,i2,i3,i4,jj,j0,j1,j2,j3,kk,k1
integer::aa(1:maxn),bb(1:maxn),cc(1:maxn)
situ=1
if(xx.eq.1)then
if(nloop.eq.0)then
go to 90
end if
ii=0
if(rho(1).ne.1)then
ii=1
else if(nloop.gt.1)then
ii=1
end if
if(ii.ne.0)then
do i1=rhop1,n
if(gam(i1,i1).ne.0)then
go to 80
end if
end do
end if
else if(xx.eq.2)then
if(n-1-rhop1.le.0)then
go to 90
end if
else if(xx.eq.3)then
if(nloop.eq.0)then
go to 90
else if(rho(1).eq.0)then
go to 90
end if
go to 30
else
mlin(1:srec)='umvi_0'
call mput(1,0,0,0)
end if
do i1=rhop1,n
if(xx.eq.1)then
kk=rho(1)
do i2=1,rho(1)
aa(i2)=1
bb(i2)=i2
end do
do i2=rhop1,n
aa(i2)=0
end do
k1=n
else if(xx.eq.2)then
kk=1
do i2=rhop1,n
aa(i2)=0
end do
if(i1.ne.rhop1)then
bb(1)=rhop1
else if(i1.ne.n)then
bb(1)=n
else
go to 90
end if
aa(bb(1))=1
k1=n-rho(1)
end if
do i2=1,k1
if(kk.eq.k1)then
go to 20
end if
if(i2.gt.kk)then
go to 80
end if
j1=bb(i2)
if(j1.ne.i1)then
do i3=rhop1,j1-1
if(aa(i3).eq.0)then
if(gam(i3,j1).gt.0)then
kk=kk+1
bb(kk)=i3
aa(i3)=1
end if
end if
end do
do i3=j1+1,n
if(aa(i3).eq.0)then
if(gam(j1,i3).gt.0)then
kk=kk+1
bb(kk)=i3
aa(i3)=1
end if
end if
end do
end if
end do
mlin(1:srec)='umvi_1'
call mput(1,0,0,0)
20 continue
end do
go to 90
30 continue
do i1=rhop1,n
do i2=1,n
aa(i2)=0
end do
jj=0
kk=1
aa(i1)=-1
bb(1)=i1
do i2=1,n
if(kk.eq.n)then
go to 45
else if(aa(i2).ne.0)then
go to 40
end if
jj=jj+1
aa(i2)=jj
kk=kk+1
bb(kk)=i2
ii=kk
35 continue
j1=bb(ii)
do i3=i2+1,j1-1
if(aa(i3).eq.0)then
if(gam(i3,j1).gt.0)then
kk=kk+1
bb(kk)=i3
aa(i3)=jj
end if
end if
end do
do i3=j1+1,n
if(aa(i3).eq.0)then
if(gam(j1,i3).gt.0)then
kk=kk+1
bb(kk)=i3
aa(i3)=jj
end if
end if
end do
if(ii.lt.kk)then
if(kk.lt.n)then
ii=ii+1
go to 35
end if
end if
40 continue
end do
45 continue
if(kk.ne.n)then
mlin(1:srec)='umvi_2'
call mput(1,0,0,0)
end if
do i2=1,jj
cc(i2)=0
end do
do i2=1,rho(1)
cc(aa(i2))=cc(aa(i2))+1
end do
do i2=1,jj
if(cc(i2).eq.1)then
go to 50
end if
end do
go to 70
50 continue
j0=0
do i2=1,jj
bb(i2)=cc(i2)
if(cc(i2).eq.0)then
j0=j0+1
end if
end do
do i2=rhop1,n
if(i2.ne.i1)then
bb(aa(i2))=bb(aa(i2))+1
end if
end do
do i2=1,jj
if(cc(i2).eq.1)then
j1=bb(i2)
j2=gam(i1,i1)
j3=j0
if(j1.eq.1)then
if(j2.gt.1)then
j2=j2-2
else if(j0.gt.0)then
i4=0
do i3=1,jj
if(cc(i3).eq.0)then
if(i4.eq.0)then
i4=i3
else if(bb(i3).lt.bb(i4))then
i4=i3
end if
end if
end do
j3=j3-1
j1=j1+bb(i4)
else
go to 55
end if
end if
if(0.lt.j2+j3)then
go to 80
else if(j1+2.lt.n)then
go to 80
end if
end if
55 continue
end do
70 continue
end do
go to 90
80 continue
situ=-1
90 return
end subroutine
subroutine dkar(im,iw)
use aski
use cbuffer
use qintr
use wbuffer
implicit none
save
integer,intent(in)::im
integer,intent(out)::iw
integer::ii,jj,kk,jc,xm,ym
jc=stcbs(1)
if(im.lt.0)then
if(im+iref.lt.0)then
go to 80
end if
xm=-im
if(jc.ge.stcbas(1))then
call vaocb(scbuff)
end if
jc=jc+1
stcb(jc:jc)=achar(aminus)
else
if(im-iref.gt.0)then
go to 80
end if
xm=im
end if
ii=jc+1
10 continue
if(jc.ge.stcbas(1))then
call vaocb(scbuff)
end if
jc=jc+1
if(xm.lt.10)then
stcb(jc:jc)=achar(xm+azero)
else
ym=xm/10
stcb(jc:jc)=achar((xm-10*ym)+azero)
xm=ym
go to 10
end if
jj=jc
20 continue
if(ii.lt.jj)then
kk=iachar(stcb(ii:ii))
stcb(ii:ii)=stcb(jj:jj)
stcb(jj:jj)=achar(kk)
ii=ii+1
jj=jj-1
go to 20
end if
go to 90
80 continue
call wput(-15,0,0)
90 continue
iw=jc-stcbs(1)
return
end subroutine
subroutine sdiag(ii,jj)
use aski
use cbuffer
use qintr
use qmix
use wbuffer
implicit none
save
integer,intent(in)::ii,jj
integer::i1,j1,xp,xl
if(ii.eq.1)then
xp=hhp
xl=hhl
else if(ii.eq.2)then
xp=noffp
xl=noffl
else if(ii.eq.3)then
xp=ndiagp
xl=ndiagl
else
mlin(1:srec)='sdiag_1'
call mput(1,0,0,0)
end if
if(jj.eq.0)then
do i1=xp+xl,xp+1,-1
j1=iachar(stcb(i1:i1))
if(j1.lt.anine)then
stcb(i1:i1)=achar(j1+1)
go to 90
else
stcb(i1:i1)=achar(azero)
end if
end do
if(xl.ge.wsint)then
mlin(1:srec)='sdiag_2'
call mput(1,0,0,0)
end if
j1=xp+1
stcb(j1:j1)=achar(azero+1)
j1=j1+xl
stcb(j1:j1)=achar(azero)
xl=xl+1
else if(jj.eq.-1)then
j1=xp+1
stcb(j1:j1)=achar(azero)
xl=1
else
mlin(1:srec)='sdiag_3'
call mput(1,0,0,0)
end if
if(ii.eq.1)then
hhl=xl
else if(ii.eq.2)then
noffl=xl
else if(ii.eq.3)then
ndiagl=xl
end if
90 return
end subroutine
integer function stoz(s,j1,j2)
use aski
use qintr
use wbuffer
implicit none
save
integer,intent(in)::j1,j2
character(len=*)::s
integer::i1,jj,js
stoz=0
if((j1.le.0).or.(j1.gt.j2))then
go to 80
end if
js=iachar(s(j1:j1))
if((js.eq.aplus).or.(js.eq.aminus))then
i1=j1+1
else
i1=j1
end if
10 continue
jj=iachar(s(i1:i1))
if(acf(jj).ne.1)then
go to 80
end if
stoz=10*stoz+(jj-azero)
if(stoz-iref.gt.0)then
call wput(-15,0,0)
end if
if(i1.lt.j2)then
i1=i1+1
go to 10
end if
if(js.eq.aminus)then
stoz=-stoz
end if
go to 90
80 continue
mlin(1:srec)='stoz_1'
call mput(1,0,0,0)
90 return
end function
integer function sigz(s,ia,ib)
use aski
use wbuffer
implicit none
save
integer,intent(in)::ia,ib
character(len=*),intent(in)::s
integer::i1,ii,jj,ja
sigz=0
if(ia.le.0)then
go to 30
end if
jj=iachar(s(ia:ia))
if(jj.eq.aplus)then
ii=1
else if(jj.eq.aminus)then
ii=-1
else
ii=0
end if
ja=ia+ii*ii
if(ja.gt.ib)then
go to 30
end if
do i1=ja,ib
jj=iachar(s(i1:i1))
if(acf(jj).ne.1)then
go to 30
else if(sigz.eq.0)then
if(jj.ne.azero)then
if(ii.lt.0)then
sigz=-1
else
sigz=1
end if
end if
end if
end do
go to 90
30 continue
mlin(1:srec)='sigz_1'
call mput(1,0,0,0)
90 return
end function
integer function wztos(nn)
use intbuffer
use qintr
use wbuffer
implicit none
save
integer,intent(in)::nn
integer::mm,i1
wztos=0
if(nn.ge.0)then
if(nn-iref.gt.0)then
go to 80
end if
mm=nn
else
if(nn+iref.lt.0)then
go to 80
end if
mm=-nn
wztos=1
end if
do i1=1,spten
if(mm.lt.stib(i1))then
wztos=wztos+i1
go to 90
end if
end do
wztos=wztos+spten+1
80 continue
call wput(-15,0,0)
90 return
end function
subroutine spak(s,ind,m,uc,nos)
use aski
use cbuffer
use intbuffer
use qmix
use qmodel
use qproc
use wbuffer
implicit none
save
integer,intent(in)::m,uc,nos
integer,intent(inout)::ind
character(len=*)::s
integer::stoz
integer::i1,i2,i3,j0,j1,j2,j3
integer::ii,ij,inos,iuc,jj,k,kk,sl,sp
if(m.ne.0)then
if(m.ne.1)then
go to 80
end if
end if
if(nos.ne.0)then
if(nos.ne.1)then
go to 80
end if
end if
if(uc.ne.0)then
if(uc.ne.1)then
go to 80
end if
end if
inos=nos
iuc=uc
i1=0
sl=1
ii=2*srec+2
03 continue
if(iachar(s(sl:sl)).ne.ascol)then
if(sl.lt.ii)then
if(i1.eq.0)then
if(iachar(s(sl:sl)).eq.acomma)then
i1=sl
end if
end if
sl=sl+1
go to 03
else
go to 80
end if
end if
if(i1.eq.0)then
i1=sl
end if
if(i1.lt.3)then
go to 80
end if
if(sl.lt.3)then
go to 80
end if
if(mod(i1,2).eq.0)then
go to 80
end if
sp=stcbs(1)+1
i1=(i1-1)/2
call aocb(i1+1)
ij=0
j2=1
k=sp
do i2=1,i1
ii=iachar(s(j2:j2))
jj=iachar(s(j2+1:j2+1))
if((ii.lt.azero).or.(ii.gt.anine))then
go to 80
else if((jj.lt.azero).or.(jj.gt.anine))then
go to 80
end if
kk=10*ii+jj-496
if(iuc.eq.1)then
if(kk.ge.abo(3))then
if(kk.le.abo(4))then
go to 80
end if
end if
end if
if(kk.ge.abo(5))then
if(kk.le.abo(6))then
ij=1
end if
end if
stcb(k:k)=achar(kk)
j2=j2+2
k=k+1
end do
stcb(k:k)=achar(alf)
if(iuc.eq.1)then
if(ij.eq.0)then
go to 80
end if
end if
if(inos.eq.1)then
if(iachar(stcb(k-1:k-1)).ne.kpqs(4))then
inos=0
end if
end if
j0=stibs(1)
call aoib(2)
stib(j0+1)=sp
stib(j0+2)=i1
if(m.ne.0)then
if((nos.ne.0).or.(uc.ne.0))then
go to 80
end if
go to 90
end if
j2=i1+i1+1
j1=j2+1
11 continue
if(j2.lt.sl)then
j2=j2+1
j3=iachar(s(j2:j2))
if((j3.eq.acomma).or.(j3.eq.ascol))then
j2=j2-1
if(j2.lt.j1)then
go to 80
end if
call aoib(1)
stib(stibs(1))=stoz(s,j1,j2)
j2=j2+1
j1=j2+1
end if
go to 11
end if
ind=ind+1
if(iuc.eq.1)then
ii=stcbs(1)
call aocb(i1+1)
i3=ii+1
do i2=ii-i1,ii-1
j2=iachar(stcb(i2:i2))
if((j2.ge.abo(5)).and.(j2.le.abo(6)))then
j2=j2+abo(0)
end if
stcb(i3:i3)=achar(j2)
i3=i3+1
end do
stcb(i3:i3)=achar(alf)
j1=stibs(1)
jj=j1-j0
if(jj.lt.2)then
go to 80
end if
call aoib(jj)
ii=j1+1
stib(ii)=stib(ii-jj)+i1+1
do i2=2,jj
ii=ii+1
stib(ii)=stib(ii-jj)
end do
ind=ind+1
end if
if(inos.eq.1)then
j1=stibs(1)
jj=j1-j0
if(jj.lt.4)then
go to 80
end if
call aoib(jj)
ii=j1
do i2=1,jj
ii=ii+1
stib(ii)=stib(ii-jj)
end do
ii=j1+2
stib(ii)=stib(ii)-1
ind=ind+1
if(uc.eq.1)then
ii=ii+jj/2
stib(ii)=stib(ii)-1
ind=ind+1
end if
end if
go to 90
80 continue
mlin(1:srec)='spak_1'
call mput(1,0,0,0)
90 return
end subroutine
integer function stds(s,ia,ib,iw)
use aski
use cbuffer
use wbuffer
implicit none
save
integer,intent(in)::ia,ib,iw
character(len=*)::s
integer::i1,j1,ii,jj,kk,ll,mm,itl,sc,sf,sl
stds=-1
if(ia.le.0)then
go to 90
else if(ia.ge.ib)then
go to 90
else if(iw.lt.0)then
go to 90
else if(iw.gt.2)then
go to 90
end if
sc=0
sl=0
sf=0
itl=1
ii=0
ll=0
mm=0
do i1=ia,ib
jj=iachar(s(i1:i1))
if(jj.eq.squote)then
ii=ii+1
mm=1-mm
ll=0
if(ii.gt.1)then
kk=mm
else
kk=0
end if
else if(jj.eq.alf)then
if(mm.ne.0)then
go to 90
else if(ll.eq.1)then
go to 90
end if
sf=sf+1
ll=1
if(ii.gt.0)then
ii=0
sc=sc+1
end if
kk=0
else if(jj.eq.aspace)then
if(ii.gt.0)then
ii=0
if(mm.eq.0)then
sc=sc+1
end if
end if
kk=mm
else if((jj.lt.abo(1)).or.(jj.gt.abo(2)))then
go to 90
else
if(mm.ne.1)then
go to 90
end if
ii=0
kk=1
end if
if(kk.ne.0)then
if(iw.eq.2)then
if(jj.ne.aspace)then
itl=0
end if
end if
if((iw.eq.1).or.((iw.eq.2).and.(itl.eq.0)))then
sl=sl+1
call vaocb(sl)
j1=stcbs(1)+sl
stcb(j1:j1)=achar(jj)
end if
end if
end do
if(mm.ne.0)then
go to 90
end if
if(iachar(s(ib:ib)).eq.squote)then
sc=sc+1
end if
if(iw.eq.2)then
if(sl.gt.1)then
do i1=stcbs(1)+sl,stcbs(1)+1,-1
if(iachar(stcb(i1:i1)).ne.aspace)then
exit
end if
sl=sl-1
end do
end if
end if
stds=sl
90 return
end function
subroutine mstr0(s,ia,ib,pp,pl,ap,ind)
use cbuffer
use intbuffer
use qintr
use wbuffer
implicit none
save
integer,intent(in)::ia,ib,pp,pl,ap
integer,intent(out)::ind
character(len=*)::s
integer::ii,jj,ls
ind=0
if(pp.eq.nap)then
go to 90
end if
ls=ib-ia+1
10 continue
ind=ind+1
ii=stib(pl+ind)
if(ii.ne.eoa)then
if(ii.eq.ls)then
jj=stib(pp+ind)
if(stcb(jj:jj-1+ls).eq.s(ia:ib))then
go to 90
end if
end if
go to 10
end if
ind=0
90 continue
if(ap.ne.nap)then
if(ap.lt.0)then
mlin(1:srec)='mstr0_1'
call mput(1,0,0,0)
else if(ind.gt.0)then
ind=stib(ap+ind)
end if
end if
if(ind.lt.0)then
mlin(1:srec)='mstr0_2'
call mput(1,0,0,0)
end if
return
end subroutine
subroutine mstr1(s,ia,ib,pp,kp,kl,ind)
use cbuffer
use intbuffer
use qintr
use wbuffer
implicit none
save
integer,intent(in)::ia,ib,pp,kp,kl
integer,intent(out)::ind
character(len=*)::s
integer::jj,ls,p1
ind=0
if(pp.eq.nap)then
go to 90
end if
ls=ib-ia+1
p1=pp
10 continue
p1=stib(p1)
if(p1.eq.eoa)then
ind=0
go to 90
end if
ind=ind+1
if(stib(p1+kl).eq.ls)then
jj=stib(p1+kp)
if(stcb(jj:jj-1+ls).eq.s(ia:ib))then
go to 90
end if
end if
go to 10
90 continue
if(ind.lt.0)then
mlin(1:srec)='mstr1_1'
call mput(1,0,0,0)
end if
return
end subroutine
integer function stdw(s,ia,ib)
use aski
use wbuffer
implicit none
save
integer,intent(in)::ia,ib
character(len=*)::s
integer::i1
if((ia.le.0).or.(ia.gt.ib))then
mlin(1:srec)='stdw_1'
call mput(1,0,0,0)
end if
if(acf(iachar(s(ia:ia))).lt.2)then
stdw=0
else
stdw=1
do i1=ia+1,ib
if(acf(iachar(s(i1:i1))).lt.0)then
stdw=0
exit
end if
end do
end if
return
end function
integer function stdz(s,ia,ib)
use aski
use wbuffer
implicit none
save
integer,intent(in)::ia,ib
character(len=*)::s
integer::i1,jj
if((ia.le.0).or.(ia.gt.ib))then
mlin(1:srec)='stdz_1'
call mput(1,0,0,0)
end if
stdz=0
jj=iachar(s(ia:ia))
if((jj.eq.aplus).or.(jj.eq.aminus))then
if(ia.lt.ib)then
stdz=1
end if
else if(acf(jj).eq.1)then
stdz=1
end if
if(stdz.eq.1)then
do i1=ia+1,ib
if(acf(iachar(s(i1:i1))).ne.1)then
stdz=0
go to 90
end if
end do
end if
90 return
end function
subroutine nows(j1)
use aski
use cbuffer
use intbuffer
use wbuffer
implicit none
save
integer,intent(in)::j1
integer::i1,j2,j3
if((j1.le.0).or.(j1.ge.sjbuff))then
mlin(1:srec)='nows_1'
call mput(1,0,0,0)
end if
j2=0
do i1=stjb(j1)+1,stjb(j1+1)-1
if(iachar(stcb(i1:i1)).eq.aspace)then
j2=j2+1
end if
end do
if(j2.gt.0)then
j3=stjb(j1+1)-stjb(j1)-(j2-1)
j2=stcbs(1)
call aocb(j3)
j3=j2
do i1=stjb(j1),stjb(j1+1)
if(iachar(stcb(i1:i1)).ne.aspace)then
j3=j3+1
stcb(j3:j3)=stcb(i1:i1)
end if
end do
stjb(j1)=j2+1
stjb(j1+1)=stcbs(1)
end if
return
end subroutine
integer function stdq(s,ia,ib)
use aski
use wbuffer
implicit none
save
integer,intent(in)::ia,ib
character(len=*)::s
integer::i1,jj,xden,xnum,xsla
if((ia.le.0).or.(ia.gt.ib))then
mlin(1:srec)='stdq_1'
call mput(1,0,0,0)
end if
xsla=0
xnum=0
xden=0
jj=iachar(s(ia:ia))
if((jj.eq.aplus).or.(jj.eq.aminus))then
stdq=1
else if(acf(jj).eq.1)then
stdq=1
xnum=1
else
stdq=0
end if
if(stdq.eq.1)then
do i1=ia+1,ib
jj=iachar(s(i1:i1))
if(acf(jj).eq.1)then
if(xsla.eq.0)then
xnum=1
else if(jj.ne.azero)then
xden=1
end if
else if(jj.eq.aslash)then
if(xsla.ne.0)then
stdq=0
go to 90
end if
xsla=1
else
stdq=0
go to 90
end if
end do
if(xnum.ne.1)then
stdq=0
else if(xsla.ne.0)then
if(xden.ne.1)then
stdq=0
end if
end if
end if
90 return
end function
subroutine compac
use aski
use cbuffer
use intbuffer
use qfiles
use qintr
use qmix
use qmodel
use qproc
use qsty
use wbuffer
implicit none
save
integer::i,ia,ii,ij,ik,il,i1,j,jj,jk,j1,j2,k,kk,k0,other
integer::f0,f1,lupi,lupj,lupt,kma
integer::ig,igc,igk,igut,ip,stwbp,stwbq,stwbt,stwbu
integer::lupti(0:maxtak)
ig=iogp(2)
if(ig.ge.iogp(3))then
go to 80
end if
f0=0
01 continue
f0=f0+1
if(f0.gt.nfiles)then
go to 90
else if(filest(f0).ne.otype)then
go to 01
else if(filesp(f0).eq.nap)then
ig=ig+stib(ig+1)
go to 01
else
ig=ig+2
end if
f1=filesm(f0)
stwbp=stwbpf(f1)
stwbq=stwbqf(f1)
stwbt=stwbp+swbuff0
stwbu=stwbp+swbuff
do i1=0,maxtak
lupti(i1)=0
end do
kma=-1
lupt=0
10 continue
igk=stib(ig)
if(igk.gt.0)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq:stwbq)=achar(igk)
ig=ig+1
go to 10
end if
if(igk.gt.-3)then
igc=stib(ig+1)
if(igk.eq.-1)then
lupt=igc
if(lupt.gt.0)then
if(stib(ig+4).eq.0)then
if(lupt.eq.1)then
stib(ig+4)=inco
stib(ig+5)=0
lupti(0)=1
lupti(1)=1
else if(lupt.eq.2)then
stib(ig+4)=nleg
stib(ig+5)=inco
lupti(0)=1
lupti(1)=2
else if(lupt.eq.3)then
stib(ig+4)=nli-nleg
stib(ig+5)=0
lupti(0)=1
lupti(1)=3
else if(lupt.eq.4)then
stib(ig+4)=n-nleg
stib(ig+5)=0
lupti(0)=1
lupti(1)=4
else if(lupt.eq.5)then
stib(ig+4)=vdeg(nleg+lupi)
stib(ig+5)=0
if(lupti(0).ne.1)then
go to 80
end if
lupti(0)=2
lupti(2)=5
end if
end if
stib(ig+5)=stib(ig+5)+1
if(stib(ig+4).lt.stib(ig+5))then
stib(ig+4)=0
lupti(0)=lupti(0)-1
if(lupti(0).gt.0)then
lupt=lupti(lupti(0))
else
lupt=0
end if
ig=ig+1
else
if(lupt.eq.5)then
lupj=stib(ig+5)
else
lupi=stib(ig+5)
end if
end if
else if(lupt.ne.-1)then
go to 80
end if
else if(igk.eq.-2)then
if(igc.eq.22)then
if(jflag(10).eq.0)then
if(kma.ge.0)then
stwbq=kma
kma=-1
end if
else if(stwbq.gt.stwbp)then
stwbq=stwbq-1
else
go to 80
end if
else
go to 80
end if
else
go to 80
end if
else if(igk.gt.-5)then
igc=stib(ig+1)
if(igk.eq.-3)then
if((igc.gt.70).and.(igc.lt.80))then
if(igc.lt.74)then
if(igc.eq.72)then
jj=dsym
if(dsym.gt.1)then
stwbq=stwbq+2
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq-1:stwbq)=achar(azero+1)//achar(aslash)
end if
else if(igc.eq.73)then
jj=dsym
end if
else if(igc.lt.77)then
if(igc.eq.74)then
jj=nli-nleg
else if(igc.eq.75)then
jj=nleg
else if(igc.eq.76)then
jj=nloop
end if
else
if(igc.eq.77)then
jj=n-nleg
else if(igc.eq.78)then
jj=inco
else if(igc.eq.79)then
jj=nleg-inco
end if
end if
if(igc.ne.71)then
call dkar(jj,jk)
ip=stwbq+1
stwbq=stwbq+jk
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(stcbs(1)+1:stcbs(1)+jk)
else
ip=stwbq+1
stwbq=stwbq+noffl
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(noffp+1:noffp+noffl)
end if
else
if(igc.eq.61)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
if(dis.gt.0)then
stwb(stwbq:stwbq)=achar(aplus)
else if(dis.lt.0)then
stwb(stwbq:stwbq)=achar(aminus)
else
go to 80
end if
else if(igc.eq.62)then
if(dis.lt.0)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq:stwbq)=achar(aminus)
end if
else
go to 80
end if
end if
else if(igk.eq.-4)then
if(lupt.eq.3)then
if(igc.lt.40)then
if(abs(igc-32).eq.1)then
i=lupi
j=pmap(ex(i),ey(i))
if(igc.eq.33)then
j=stib(link(0)+j)
end if
il=stib(namel(0)+j)
ip=stwbq+1
stwbq=stwbq+il
if(stwbq.gt.stwbu)then
go to 85
end if
ia=stib(namep(0)+j)
stwb(ip:stwbq)=stcb(ia:ia-1+il)
else if((igc.eq.32).or.(igc.eq.34))then
i=lupi
if(igc.eq.32)then
ik=1
else
ik=-1
end if
j=ey(i)
i=ex(i)
k0=stwbq
other=0
if(vmap(i,j).eq.i)then
if(ik*(lmap(i,j)-j).lt.0)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq:stwbq)=achar(aminus)
end if
ip=stwbq+1
stwbq=stwbq+momel(0)
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(momep(0):momep(0)-1+momel(0))
ii=amap(i,j)
do k=nleg+1,nleg+nloop
if(flow(ii,k).ne.0)then
call dkar(k-nleg,jk)
ip=stwbq+1
stwbq=stwbq+jk
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(stcbs(1)+1:stcbs(1)+jk)
go to 70
end if
end do
else
if(vmap(i,j).lt.i)then
ij=-ik
else
ij=ik
end if
ii=amap(i,j)
do k=nleg+1,nleg+nloop
jj=flow(ii,k)
if(jj.ne.0)then
if((other.eq.1).or.(ij.eq.jj))then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
if(ij.eq.jj)then
stwb(stwbq:stwbq)=achar(aminus)
else
stwb(stwbq:stwbq)=achar(aplus)
end if
end if
ip=stwbq+1
stwbq=stwbq+momel(0)
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(momep(0):momep(0)-1+momel(0))
call dkar(k-nleg,jk)
ip=stwbq+1
stwbq=stwbq+jk
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(stcbs(1)+1:stcbs(1)+jk)
other=1
end if
end do
do k=1,nleg
jj=flow(ii,invps1(k))
if(jj.ne.0)then
if(k.gt.inco)then
jj=-jj
end if
if((other.eq.1).or.(ij.eq.jj))then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
if(ij.eq.jj)then
stwb(stwbq:stwbq)=achar(aminus)
else
stwb(stwbq:stwbq)=achar(aplus)
end if
end if
ip=stwbq+1
stwbq=stwbq+momel(k)
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(momep(k):momep(k)-1+momel(k))
other=1
end if
end do
if(k0.eq.stwbq)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq:stwbq)=achar(azero)
end if
end if
else if(igc.eq.35)then
i=lupi
j=pmap(ex(i),ey(i))
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
if(stib(antiq(0)+j).eq.0)then
stwb(stwbq:stwbq)=achar(aplus)
else
stwb(stwbq:stwbq)=achar(aminus)
end if
else
go to 80
end if
else if(igc.le.50)then
if(igc.lt.44)then
if(igc.eq.40)then
jj=3
else if(igc.eq.41)then
jj=lupi
else if(igc.eq.42)then
jj=2*lupi-1
else if(igc.eq.43)then
i=lupi
j=ey(i)
i=ex(i)
jj=iovm(i,j)
else
go to 80
end if
else if(igc.lt.47)then
if(igc.eq.44)then
i=lupi
jj=ex(i)-nleg
else if(igc.eq.45)then
jj=2*lupi
else if(igc.eq.46)then
i=lupi
j=lmap(ex(i),ey(i))
i=vmap(ex(i),ey(i))
jj=iovm(i,j)
else
go to 80
end if
else
if(igc.eq.47)then
i=lupi
jj=vmap(ex(i),ey(i))-nleg
else if(igc.eq.48)then
i=lupi
jj=vdeg(ex(i))
else if(igc.eq.49)then
i=lupi
jj=vdeg(vmap(ex(i),ey(i)))
else
go to 80
end if
end if
call dkar(jj,jk)
ip=stwbq+1
stwbq=stwbq+jk
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(stcbs(1)+1:stcbs(1)+jk)
else
go to 80
end if
else if((lupt.eq.1).or.(lupt.eq.2))then
if(igc.lt.40)then
if(abs(igc-32).eq.1)then
i=lupi
j=stib(link(0)+leg(i))
if(igc.eq.33)then
j=stib(link(0)+j)
end if
if(lupi.gt.inco)then
j=stib(link(0)+j)
end if
il=stib(namel(0)+j)
ip=stwbq+1
stwbq=stwbq+il
if(stwbq.gt.stwbu)then
go to 85
end if
ia=stib(namep(0)+j)
stwb(ip:stwbq)=stcb(ia:ia-1+il)
else if((igc.eq.32).or.(igc.eq.34))then
i=lupi
if(igc.eq.34)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq:stwbq)=achar(aminus)
end if
ip=stwbq+1
stwbq=stwbq+momel(i)
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(momep(i):momep(i)-1+momel(i))
else if(igc.eq.35)then
i=lupi
j=leg(i)
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
if(stib(antiq(0)+j).eq.0)then
stwb(stwbq:stwbq)=achar(aplus)
else
stwb(stwbq:stwbq)=achar(aminus)
end if
else
go to 80
end if
else if(igc.lt.50)then
if(igc.eq.40)then
i=lupi
if(i.le.inco)then
jj=1
else
jj=2
end if
else if(igc.eq.42)then
i=lupi
if(i.le.inco)then
jj=1-2*i
else
jj=2*(inco-i)
end if
else if(igc.eq.43)then
i=lupi
j=lmap(invps1(i),1)
i=vmap(invps1(i),1)
jj=iovm(i,j)
else if(igc.eq.44)then
i=lupi
jj=vmap(invps1(i),1)-nleg
else if(igc.eq.48)then
i=lupi
j=lmap(invps1(i),1)
jj=vdeg(vmap(invps1(i),1))
else
go to 80
end if
call dkar(jj,jk)
ip=stwbq+1
stwbq=stwbq+jk
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(stcbs(1)+1:stcbs(1)+jk)
else if(igc.lt.60)then
if(igc.eq.51)then
i=lupi
else if(igc.eq.52)then
i=lupi
else if(igc.eq.53)then
i=lupi-inco
else
go to 80
end if
call dkar(i,jk)
ip=stwbq+1
stwbq=stwbq+jk
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(stcbs(1)+1:stcbs(1)+jk)
else
go to 80
end if
else if((lupt.eq.4).or.(lupt.eq.5))then
if(igc.lt.40)then
if(abs(igc-32).eq.1)then
i=nleg+lupi
j=lupj
j=pmap(i,ovm(i,j))
if(igc.eq.33)then
j=stib(link(0)+j)
end if
il=stib(namel(0)+j)
ip=stwbq+1
stwbq=stwbq+il
if(stwbq.gt.stwbu)then
go to 85
end if
ia=stib(namep(0)+j)
stwb(ip:stwbq)=stcb(ia:ia-1+il)
else if(abs(igc-33).eq.1)then
i=nleg+lupi
j=lupj
j=ovm(i,j)
ij=vmap(i,j)
if(igc.eq.32)then
kk=1
else
kk=-1
end if
k0=stwbq
other=0
if(ij.le.nleg)then
ij=ps1(ij)
if(ij.gt.inco)then
kk=-kk
end if
if(kk.lt.0)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq:stwbq)=achar(aminus)
end if
ip=stwbq+1
stwbq=stwbq+momel(ij)
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(momep(ij):momep(ij)-1+momel(ij))
else if(ij.eq.i)then
if(kk*(lmap(i,j)-j).lt.0)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq:stwbq)=achar(aminus)
end if
ip=stwbq+1
stwbq=stwbq+momel(0)
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(momep(0):momep(0)-1+momel(0))
ii=amap(i,j)
do k=nleg+1,nleg+nloop
if(flow(ii,k).ne.0)then
call dkar(k-nleg,jk)
ip=stwbq+1
stwbq=stwbq+jk
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(stcbs(1)+1:stcbs(1)+jk)
go to 70
end if
end do
else
if(ij.lt.i)then
ik=-kk
else
ik=kk
end if
ii=amap(i,j)
do k=nleg+1,nleg+nloop
jj=flow(ii,k)
if(jj.ne.0)then
if((other.eq.1).or.(ik.eq.jj))then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
if(ik.eq.jj)then
stwb(stwbq:stwbq)=achar(aminus)
else
stwb(stwbq:stwbq)=achar(aplus)
end if
end if
ip=stwbq+1
stwbq=stwbq+momel(0)
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(momep(0):momep(0)-1+momel(0))
call dkar(k-nleg,jk)
ip=stwbq+1
stwbq=stwbq+jk
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(stcbs(1)+1:stcbs(1)+jk)
other=1
end if
end do
do k=1,nleg
jj=flow(ii,invps1(k))
if(jj.ne.0)then
if(k.gt.inco)then
jj=-jj
end if
if((other.eq.1).or.(ik.eq.jj))then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
if(ik.eq.jj)then
stwb(stwbq:stwbq)=achar(aminus)
else
stwb(stwbq:stwbq)=achar(aplus)
end if
end if
ip=stwbq+1
stwbq=stwbq+momel(k)
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(momep(k):momep(k)-1+momel(k))
other=1
end if
end do
if(k0.eq.stwbq)then
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(stwbq:stwbq)=achar(azero)
end if
end if
else if(igc.eq.35)then
i=nleg+lupi
j=lupj
j=pmap(i,ovm(i,j))
stwbq=stwbq+1
if(stwbq.gt.stwbu)then
go to 85
end if
if(stib(antiq(0)+j).eq.0)then
stwb(stwbq:stwbq)=achar(aplus)
else
stwb(stwbq:stwbq)=achar(aminus)
end if
end if
else if(igc.le.50)then
if(igc.eq.41)then
i=nleg+lupi
j=lupj
j=ovm(i,j)
ij=vmap(i,j)
if(ij.le.nleg)then
ij=ps1(ij)
if(ij.le.inco)then
jj=1-2*ij
else
jj=2*(inco-ij)
end if
else
jj=amap(i,j)-nleg
end if
else if(igc.lt.46)then
if(igc.eq.40)then
i=nleg+lupi
j=lupj
j=ovm(i,j)
ij=vmap(i,j)
if(ij.le.nleg)then
if(ps1(ij).le.inco)then
jj=1
else
jj=2
end if
else
jj=3
end if
else if((igc.eq.42).or.(igc.eq.45))then
i=nleg+lupi
j=lupj
j=ovm(i,j)
ij=vmap(i,j)
if(ij.le.nleg)then
ij=ps1(ij)
if(ij.le.inco)then
jj=1-2*ij
else
jj=2*(inco-ij)
end if
else
kk=amap(i,j)-nleg
if((ex(kk).eq.i).and.(ey(kk).eq.j))then
jj=2*kk-1
else
jj=2*kk
end if
end if
if(igc.eq.45)then
if(jj.gt.0)then
jj=jj-1+2*mod(jj,2)
else
jj=0
end if
end if
else if(igc.eq.43)then
jj=lupj
else if(igc.eq.44)then
jj=lupi
else
go to 80
end if
else
if(igc.eq.46)then
i=nleg+lupi
j=lupj
ij=ovm(i,j)
ii=vmap(i,ij)
if(ii.gt.nleg)then
jj=iovm(ii,lmap(i,ij))
else
jj=0
end if
else if(igc.eq.47)then
i=nleg+lupi
j=lupj
jj=vmap(i,ovm(i,j))-nleg
if(jj.lt.0)then
jj=0
end if
else if(igc.eq.48)then
jj=vdeg(nleg+lupi)
else if(igc.eq.49)then
i=nleg+lupi
j=lupj
jj=vmap(i,ovm(i,j))
if(jj.le.nleg)then
jj=0
else
jj=vdeg(jj)
end if
else
go to 80
end if
end if
call dkar(jj,jk)
ip=stwbq+1
stwbq=stwbq+jk
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(stcbs(1)+1:stcbs(1)+jk)
else
go to 80
end if
else
go to 80
end if
else
go to 80
end if
else if(igk.eq.-6)then
igc=stib(ig+1)
if((igc.le.0).or.(igc.gt.nudk))then
go to 80
end if
igut=stib(udkt(0)+igc)
if(igut.eq.1)then
ij=stib(udki(0)+igc)
if((ij.le.0).or.(ij.gt.ngmk))then
go to 80
end if
j1=stib(gmkvp(0)+ij)
j2=stib(gmkvl(0)+ij)
if(j2.gt.0)then
ip=stwbq+1
stwbq=stwbq+j2
if(stwbq.gt.stwbu)then
go to 85
end if
stwb(ip:stwbq)=stcb(j1:j1-1+j2)
else if((j2.lt.0).or.(stib(ig+3).ne.0))then
go to 80
end if
else if(igut.eq.2)then
if(lupt.eq.1)then
i=lupi
j=stib(link(0)+leg(i))
else if(lupt.eq.2)then
i=lupi
j=leg(i)
else if(lupt.eq.3)then
i=lupi
j=pmap(ex(i),ey(i))
else if(lupt.eq.4)then
go to 80
else if(lupt.eq.5)then
i=nleg+lupi
j=lupj
j=pmap(i,ovm(i,j))
else
go to 80
end if
if(stib(ig+3).ne.0)then
j=stib(link(0)+j)
end if
ij=stib(udki(0)+igc)
if((ij.le.0).or.(ij.gt.npmk))then
go to 80
else if((j.le.0).or.(j.gt.nphi))then
go to 80
end if
il=stib(stib(pmkvlp(0)+ij)+j)
if(il.gt.0)then
ip=stwbq+1
stwbq=stwbq+il
if(stwbq.gt.stwbu)then
go to 85
end if
ia=stib(stib(pmkvpp(0)+ij)+j)
stwb(ip:stwbq)=stcb(ia:ia-1+il)
else if(il.lt.0)then
go to 80
end if
else if(igut.eq.3)then
if((lupt.eq.1).or.(lupt.eq.2))then
i=lupi
jj=vmap(invps1(i),1)
else if(lupt.eq.3)then
i=lupi
if(stib(ig+3).eq.0)then
jj=ex(i)
else
jj=vmap(ex(i),ey(i))
end if
else if(lupt.eq.4)then
jj=nleg+lupi
else if(lupt.eq.5)then
jj=nleg+lupi
else
go to 80
end if
j=stib(vfo(jj))
ij=stib(udki(0)+igc)
if((ij.le.0).or.(ij.gt.nvmk))then
go to 80
else if((j.le.0).or.(j.gt.nvert))then
go to 80
end if
il=stib(stib(vmkvlp(0)+ij)+j)
if(il.gt.0)then
ip=stwbq+1
stwbq=stwbq+il
if(stwbq.gt.stwbu)then
go to 85
end if
ia=stib(stib(vmkvpp(0)+ij)+j)
stwb(ip:stwbq)=stcb(ia:ia-1+il)
else if(il.lt.0)then
go to 80
end if
else
go to 80
end if
else if(igk.eq.eosf)then
if(lupt.ne.0)then
go to 80
end if
if(stwbq.gt.stwbp)then
if(stwbq.lt.stwbt)then
stwbqf(f1)=stwbq
else if(stwbq.lt.stwbu)then
stwbqf(f1)=stwbq
call qout(f0)
stwbqf(f1)=stwbp
else
go to 80
end if
end if
go to 01
else
go to 80
end if
70 continue
ig=ig+stib(ig+2)
go to 10
80 continue
mlin(1:srec)='run-time error while processing <diagram>'
call mput(1,0,0,0)
85 continue
call uput(7)
90 return
end subroutine
subroutine style
use aski
use cbuffer
use ikeys
use intbuffer
use qfiles
use qintr
use qsty
use wbuffer
implicit none
save
character(len=srec)::styb
integer::styki,udstyk
integer::f0,f1,icc,ieosf,iout,isec,lgm,qc,slin
integer::ii,ij,i1,jj,j1,j2,kp1,kp2,k1,k2
integer::clin(1:msfiles0),nlin(1:msfiles0)
j1=0
do i1=1,nfiles
if(filest(i1).eq.stype)then
if(filesp(i1).ne.nap)then
call qopen(i1)
end if
j1=j1+1
nlin(j1)=0
end if
end do
ks=0
call aoib(2)
udkp(1)=stibs(1)-1
stib(udkp(1))=eoa
stib(stibs(1))=eoa
isec=-1
04 continue
if(isec.gt.0)then
call aoib(1)
stib(stibs(1))=eosf
end if
isec=isec+1
if(isec.gt.4)then
go to 90
end if
if(isec.gt.0)then
iogp(isec)=stibs(1)+1
end if
ieosf=0
f0=1
10 continue
f0=f0+1
if(f0.gt.nfiles)then
go to 04
else if(filest(f0).ne.stype)then
go to 10
else if(filesp(f0).eq.nap)then
go to 10
end if
if(filesp(f0+dso).ne.nap)then
iout=cflag(1)
else
iout=0
end if
f1=filesm(f0)
if(abs(isec-2).le.1)then
call aoib(2)
if(f1.gt.1)then
stib(ieosf)=stibs(1)-ieosf
end if
ieosf=stibs(1)
stib(ieosf-1)=eosf
end if
clin(f1)=0
jflag(9)=-1
jflag(10)=1
icc=0
20 continue
slin=0
call qrr(f0,nlin(f1),slin,qc)
if(slin.eq.-1)then
if(isec.lt.4)then
mlin(1:srec)='is incomplete'
call mput(1,0,0,-f0)
end if
go to 10
else if(slin.gt.0)then
styb(1:slin+1)=stcb(stcbs(1)+1:stcbs(1)+slin)//achar(alf)
ij=0
if(slin.gt.2)then
j1=iachar(styb(1:1))
j2=iachar(styb(slin:slin))
if((j1.eq.alt).and.(j2.eq.agt))then
ij=styki(styb,2,slin-1,isec,iout)
if(stib(kla(0)+ij).ne.0)then
if(abs(isec-2).ne.2)then
go to 01
else if((ij.ne.24).and.(ij.ne.25))then
go to 01
end if
else if(ij.ne.isec+1)then
go to 80
else
if(abs(isec-2).le.1)then
if(ks.ne.0)then
go to 80
end if
end if
go to 10
end if
end if
end if
end if
if(abs(isec-2).eq.2)then
if(slin.eq.0)then
go to 20
end if
if(qc.ne.0)then
if(jflag(9).lt.0)then
jflag(9)=1
go to 20
else if(jflag(9).gt.0)then
go to 20
else if(clin(f1).eq.0)then
go to 80
end if
end if
if(slin.gt.2)then
j1=iachar(styb(1:1))
j2=iachar(styb(slin:slin))
if((j1.eq.alt).and.(j2.eq.agt))then
ii=styki(styb,2,slin-1,isec,iout)
if(ii.eq.24)then
if(jflag(9).lt.0)then
jflag(9)=0
end if
if(abs(isec-2).eq.2)then
if(icc.ne.0)then
go to 80
else
icc=1
end if
end if
if(clin(f1).eq.0)then
clin(f1)=nlin(f1)
go to 20
else
go to 80
end if
else if(ii.eq.25)then
if(clin(f1).ne.0)then
clin(f1)=0
go to 20
else
go to 80
end if
else if((isec.eq.0).and.(ii.eq.1))then
icc=0
go to 10
end if
end if
end if
if(clin(f1).ne.0)then
go to 20
else
go to 80
end if
else if(clin(f1).gt.0)then
go to 80
end if
01 continue
j1=0
j2=0
k1=0
k2=0
kp1=0
kp2=0
lgm=0
do i1=1,slin
jj=iachar(styb(i1:i1))
if((j2.eq.0).and.(jj.eq.alt))then
j1=j1+1
if(j1.eq.2)then
call aoib(1)
stib(stibs(1))=jj
j1=0
else if(iachar(styb(i1+1:i1+1)).ne.alt)then
lgm=1-lgm
if(lgm.eq.0)then
go to 80
end if
kp1=i1+1
end if
else if((j1.eq.0).and.(jj.eq.albra))then
j2=j2+1
if(j2.eq.2)then
call aoib(1)
stib(stibs(1))=jj
j2=0
else if(iachar(styb(i1+1:i1+1)).ne.albra)then
if(j1.ne.0)then
go to 80
end if
lgm=1-lgm
if(lgm.eq.0)then
go to 80
end if
kp1=i1+1
end if
else if((j2.eq.0).and.(jj.eq.agt))then
if(j1.eq.0)then
k1=k1+1
if(k1.eq.2)then
call aoib(1)
stib(stibs(1))=jj
k1=0
else if(iachar(styb(i1+1:i1+1)).ne.agt)then
go to 80
end if
else
j1=0
lgm=1-lgm
if(lgm.ne.0)then
go to 80
end if
kp2=i1-1
if(kp2-kp1.lt.0)then
go to 80
end if
ii=styki(styb,kp1,kp2,isec,iout)
if(ii.le.0)then
go to 80
else if(ii.lt.5)then
if((kp1.ne.2).or.(kp2+1.ne.slin))then
go to 80
else if((ks.ne.0).or.(clin(f1).ne.0))then
go to 80
end if
else if(ii.eq.24)then
if(clin(f1).ne.0)then
go to 80
end if
if(abs(isec-2).eq.2)then
if((kp1.ne.2).or.(kp2+1.ne.slin))then
go to 80
end if
end if
clin(f1)=nlin(f1)
else if(ii.eq.25)then
if(clin(f1).eq.0)then
go to 80
end if
if(abs(isec-2).eq.2)then
if((kp1.ne.2).or.(kp2+1.ne.slin))then
go to 80
end if
end if
clin(f1)=0
else if(clin(f1).eq.0)then
call ktoc(isec,ii,nlin(f1),f0)
else
mlin(1:srec)='style_2'
call mput(1,0,0,0)
end if
end if
else if((j1.eq.0).and.(jj.eq.arbra))then
if(j2.eq.0)then
k2=k2+1
if(k2.eq.2)then
call aoib(1)
stib(stibs(1))=jj
k2=0
else if(iachar(styb(i1+1:i1+1)).ne.arbra)then
go to 80
end if
else
j2=0
if(j1.ne.0)then
go to 80
end if
lgm=1-lgm
if(lgm.ne.0)then
go to 80
end if
kp2=i1-1
if(kp2-kp1.lt.0)then
go to 80
end if
if(clin(f1).eq.0)then
ii=udstyk(styb,kp1,kp2)
else
mlin(1:srec)='style_3'
end if
if(ii.eq.0)then
go to 80
end if
end if
else if((j1.eq.0).and.(j2.eq.0))then
if(clin(f1).eq.0)then
call aoib(1)
stib(stibs(1))=jj
else if(jj.ne.aspace)then
if(abs(isec-2).lt.2)then
go to 80
end if
end if
end if
end do
if(lgm.ne.0)then
go to 80
end if
if(clin(f1).ne.0)then
go to 20
end if
call aoib(1)
stib(stibs(1))=alf
go to 20
80 continue
mlin(1:srec)='wrong syntax,'
if(clin(f1).eq.0)then
ii=nlin(f1)
else
ii=clin(f1)
end if
call mput(1,ii,nlin(f1),f0)
90 continue
call rsfki
return
end subroutine
subroutine ktoc(isec,kco,nlin,ifile)
use aski
use cbuffer
use ikeys
use intbuffer
use qintr
use qsty
use wbuffer
implicit none
save
integer,intent(in)::isec,kco,nlin,ifile
integer::lupty
integer::astak(1:maxtak)
integer::i1,ii,ik,j1,j2,ka,kk,lupt
ka=-1
do i1=1,nske
if(stib(kc(0)+i1).eq.kco)then
ik=i1
ka=stib(kla(0)+i1)
j1=stib(pske(0)+i1)-1
j2=stib(wske(0)+i1)
go to 10
end if
end do
10 continue
ii=0
if(max(3,5,2,6).gt.maxpot)then
ii=1
else if(abs(isec-2).gt.1)then
ii=1
else if(abs(ka-3).gt.2)then
ii=1
end if
if(ii.ne.0)then
mlin(1:srec)='ktoc_1'
call mput(1,0,0,0)
end if
kk=stib(klo(0)+i1)
if(ks.eq.0)then
if(kk.ne.0)then
go to 80
end if
else if(kk.ne.0)then
do i1=ks,1,-1
if(mod(kk,pot(tak(i1))).ge.pot(tak(i1)-1))then
go to 70
end if
end do
go to 80
70 continue
else if(ks.ne.0)then
if(ka.eq.1)then
go to 80
end if
end if
if(ka.eq.1)then
lupt=lupty(kco)
if(lupt.gt.0)then
if(ks.ge.maxtak)then
mlin(1:srec)='too many nested loops,'
call mput(1,nlin,nlin,ifile)
end if
if((lupt.eq.2).and.(abs(isec-2).eq.1))then
if(tak(1).ne.1)then
go to 80
end if
else if(lupt.eq.5)then
if(tak(1).ne.4)then
go to 80
end if
else if(lupt.ne.6)then
if(ks.ne.0)then
go to 80
end if
end if
ii=stibs(1)+1
call aoib(6)
stib(ii)=-ka
stib(ii+1)=lupt
stib(ii+2)=6
stib(ii+3)=0
stib(ii+4)=0
stib(stibs(1))=0
ks=ks+1
astak(ks)=ii
tak(ks)=lupt
else if(lupt.eq.-1)then
if(ks.le.0)then
go to 80
end if
call aoib(3)
ii=stibs(1)-astak(ks)
stib(stibs(1)-2)=-ka
stib(stibs(1)-1)=-1
stib(stibs(1))=2-ii
stib(astak(ks)+3)=ii
ks=ks-1
end if
else if(ka.eq.5)then
call aoib(1)
stib(stibs(1))=alf
else
call aoib(3)
stib(stibs(1)-2)=-ka
stib(stibs(1)-1)=kco
stib(stibs(1))=3
end if
if(stib(bbc(0)+ik).ne.0)then
jflag(10)=0
end if
go to 90
80 continue
mlin(1:srec)='wrong syntax,'
call mput(1,nlin,nlin,ifile)
90 return
end subroutine
integer function styki(s,s1,s2,level,iout)
use cbuffer
use ikeys
use intbuffer
use qintr
use qsty
use wbuffer
implicit none
save
integer,intent(in)::s1,s2,level,iout
character(len=*)::s
integer::ij
if(s1.gt.s2)then
mlin(1:srec)='styki_1'
call mput(1,0,0,0)
end if
styki=0
call mstr0(s,s1,s2,pske(0),wske(0),aske(0),ij)
if(ij.le.0)then
go to 90
end if
styki=stib(kc(0)+ij)
if(styki.le.4)then
if(styki.ne.level+1)then
styki=0
end if
else if(abs(level-2)-1.le.0)then
if(mod(stib(kse(0)+ij),pot(level)).lt.pot(level-1))then
styki=0
end if
end if
if(iout.gt.0)then
if(abs(styki-33).eq.1)then
jflag(4)=1
end if
end if
90 return
end function
integer function udstyk(s,s1,s2)
use aski
use cbuffer
use intbuffer
use qintr
use qmodel
use qsty
use wbuffer
implicit none
save
integer,intent(in)::s1,s2
character(len=*)::s
integer::stdw
integer::i1,ii,j1,j2,j3,jj,kd,kt,kstep
udstyk=0
jj=ks
if(jj.eq.0)then
kt=4
else
if(tak(jj).eq.6)then
jj=jj-1
end if
kt=max(tak(jj)+3,5)
if(kt.gt.8)then
go to 90
end if
end if
kd=0
j1=s1-1+dprefl
if(s2.ge.j1)then
if(s(s1:j1).eq.stcb(dprefp:dprefp-1+dprefl))then
if(s2.gt.j1)then
kd=1
else
go to 90
end if
end if
end if
j1=s1+kd*dprefl
jj=s2-j1+1
if(stdw(s,j1,s2).eq.0)then
go to 90
end if
if(nudk.gt.0)then
call mstr1(s,j1,s2,udkp(1),1,2,udstyk)
end if
j2=stibs(1)
kstep=4
call aoib(kstep)
stib(j2+1)=-6
if(udstyk.eq.0)then
nudk=nudk+1
stib(j2+2)=nudk
else
stib(j2+2)=udstyk
end if
stib(j2+3)=kstep
stib(j2+4)=kd
ii=udkp(1)
if(udstyk.ne.0)then
do i1=1,udstyk
ii=stib(ii)
end do
j2=ii-1+kt
if(stib(j2).eq.0)then
stib(j2)=1+kd
else if(stib(j2).eq.2-kd)then
stib(j2)=3
end if
go to 90
end if
udstyk=stib(j2+2)
do i1=2,nudk
ii=stib(ii)
end do
j3=stcbs(1)+1
call aocb(jj+1)
stcb(j3:stcbs(1))=s(j1:s2)//achar(alf)
j2=stibs(1)
kstep=8
call aoib(kstep)
stib(j2-1)=stib(j2-1)+kstep
stib(ii)=j2+1
stib(j2+1)=eoa
stib(j2+2)=j3
stib(j2+3)=jj
stib(j2+4)=0
stib(j2+5)=0
stib(j2+6)=0
stib(j2+7)=0
stib(j2+8)=0
stib(j2+kt)=kd+1
90 return
end function
integer function lupty(ll)
use qsty
use wbuffer
implicit none
save
integer,intent(in)::ll
integer,parameter::lup1=11,lup2=19
if((ll.lt.lup1).or.(ll.gt.lup2))then
mlin(1:srec)='lupty_1'
call mput(1,0,0,0)
end if
if(ll.ne.lup2)then
if(ll.lt.13)then
lupty=ll-10
else
lupty=ll-12
end if
else
lupty=-1
end if
return
end function
subroutine stpa(s,ia,ib)
use aski
use intbuffer
use wbuffer
implicit none
save
integer,intent(in)::ia,ib
character(len=*)::s
integer::stdw,stdz,stdq
integer::i1,ic,it,sts,st0,s0,j1,j2,splic,dplic,bplic
if((ia.le.0).or.(ib.lt.ia))then
mlin(1:srec)='stpa_1'
call mput(1,0,0,0)
end if
sts=1
call vaojb(sts)
st0=stjbs(1)+sts
s0=st0
stjb(s0)=0
j1=0
j2=0
splic=0
dplic=0
bplic=0
i1=ia-1
ic=0
11 continue
if(i1.gt.ib)then
if(splic.ne.0)then
go to 80
else if(dplic.ne.0)then
go to 80
else if(bplic.ne.0)then
go to 80
end if
go to 90
end if
i1=i1+1
if(i1.le.ib)then
ic=iachar(s(i1:i1))
else
if(ic.eq.alf)then
go to 11
end if
ic=alf
end if
if(bplic.eq.0)then
if(stib(punct1(0)+ic).le.0)then
if(j1.eq.0)then
j1=i1
if(ic.eq.squote)then
splic=1
bplic=1
else if(ic.eq.dquote)then
dplic=1
bplic=1
end if
else
if(ic.eq.squote)then
go to 80
else if(ic.eq.dquote)then
go to 80
end if
end if
j2=i1
else
if(j2.ne.0)then
it=0
if(splic.ne.0)then
it=3
splic=0
else if(dplic.ne.0)then
it=5
dplic=0
else if(j1.eq.j2)then
it=abs(stib(punct1(0)+iachar(s(j1:j1))))
end if
if(it.eq.0)then
if(stdw(s,j1,j2).ne.0)then
it=2
else if(stdz(s,j1,j2).ne.0)then
it=4
else if(stdq(s,j1,j2).ne.0)then
it=6
else
go to 80
end if
end if
sts=sts+3
call vaojb(sts)
st0=stjbs(1)+sts
stjb(st0-2)=it
stjb(st0-1)=j1
stjb(st0)=j2
stjb(s0)=stjb(s0)+1
j1=0
j2=0
end if
if((ic.ne.aspace).and.(ic.ne.alf))then
it=1
sts=sts+3
call vaojb(sts)
st0=stjbs(1)+sts
stjb(st0-2)=it
stjb(st0-1)=ic
stjb(st0)=i1
stjb(s0)=stjb(s0)+1
end if
end if
else
if(splic.ne.0)then
if(ic.eq.squote)then
bplic=1-bplic
end if
else if(dplic.ne.0)then
if(ic.eq.dquote)then
bplic=1-bplic
end if
end if
j2=i1
end if
go to 11
80 continue
stjb(stjbs(1)+1)=-1
90 continue
call aojb(sts)
return
end subroutine
subroutine hsort(x,ia,ib)
use wbuffer
implicit none
save
integer,intent(in)::ia,ib
integer,intent(inout)::x(*)
integer::i0,hi,hj,hl,hr,xtmp
if((ia.le.0).or.(ia.gt.ib))then
mlin(1:srec)='hsort_1'
call mput(1,0,0,0)
else if(ia.eq.ib)then
go to 90
end if
i0=ia-1
hr=ib-i0
hl=1+hr/2
20 continue
if(hl.gt.1)then
hl=hl-1
xtmp=x(i0+hl)
else
xtmp=x(i0+hr)
x(i0+hr)=x(i0+1)
hr=hr-1
if(hr.eq.1)then
x(i0+1)=xtmp
go to 90
end if
end if
hj=hl
40 continue
hi=hj
hj=hi+hi
if(hj.le.hr)then
if(hj.lt.hr)then
if(x(i0+hj).lt.x(i0+hj+1))then
hj=hj+1
end if
end if
if(xtmp.lt.x(i0+hj))then
x(i0+hi)=x(i0+hj)
go to 40
end if
end if
x(i0+hi)=xtmp
go to 20
90 return
end subroutine
subroutine xipht(ia,ib,ixipht)
use intbuffer
use wbuffer
implicit none
save
integer,intent(in)::ia,ib,ixipht
integer::ii,jj,i1,j1,j2,j3
ii=0
if(ia.le.0)then
ii=1
else if(ib.le.0)then
ii=1
else if(ib.lt.ia)then
ii=1
else if(ib.gt.stibas(1))then
ii=1
else if(stibs(1).le.0)then
ii=1
else if(stibs(1).ge.stibas(1)-1)then
ii=1
else if(ixipht.lt.0)then
if(ia+ixipht.le.0)then
ii=1
end if
end if
if(ii.ne.0)then
mlin(1:srec)='xipht_1'
call mput(1,0,0,0)
end if
if(ixipht.lt.0)then
j1=ia
j2=ib
j3=1
else if(ixipht.gt.0)then
jj=ixipht-(stibs(1)-ib)
if(jj.gt.0)then
jj=(stibas(1)-ia)-ixipht
if(jj.ge.0)then
mlin(1:srec)='xipht_2'
call mput(1,0,0,0)
end if
end if
j1=ib
j2=ia
j3=-1
end if
if(ixipht.ne.0)then
do i1=j1,j2,j3
stib(i1+ixipht)=stib(i1)
end do
end if
return
end subroutine
subroutine cxipht(ia,ib,ixipht)
use cbuffer
use wbuffer
implicit none
save
integer,intent(in)::ia,ib,ixipht
integer::ii,jj,i1,j1,j2,j3
ii=0
if(ia.le.0)then
ii=1
else if(ib.lt.ia)then
ii=1
else if(stcbas(1).lt.ib)then
ii=1
else if(stcbs(1).gt.stcbas(1))then
ii=1
else if(ixipht.lt.0)then
if(ia+ixipht.le.0)then
ii=1
end if
end if
if(ii.ne.0)then
mlin(1:srec)='cxipht_1'
call mput(1,0,0,0)
end if
if(ixipht.lt.0)then
j1=ia
j2=ib
j3=1
else if(ixipht.gt.0)then
jj=ib-(stcbs(1)-ixipht)
if(jj.gt.0)then
call vaocb(jj)
end if
j1=ib
j2=ia
j3=-1
end if
if(ixipht.ne.0)then
do i1=j1,j2,j3
stcb(i1+ixipht:i1+ixipht)=stcb(i1:i1)
end do
end if
return
end subroutine
subroutine trm(ia,ib)
use cbuffer
use intbuffer
use wbuffer
implicit none
save
integer,intent(in)::ia,ib
integer::ab,i1,ii,ix,jj,kk,st0,xtmp,ytmp
if((ia.le.0).or.(ib.le.0))then
mlin(1:srec)='trm_1'
call mput(1,0,0,0)
end if
ab=ia*ib
st0=stibs(1)-ab+1
do i1=1,ab-2
ix=0
jj=i1
10 continue
ii=jj/ia
kk=ii+ib*(jj-ii*ia)
if(ix.eq.1)then
ytmp=stib(st0+kk)
stib(st0+kk)=xtmp
xtmp=ytmp
end if
if(kk.gt.i1)then
jj=kk
go to 10
else if(kk.eq.i1)then
if(ix.eq.0)then
if(kk.ne.jj)then
ix=1
jj=i1
xtmp=stib(st0+i1)
go to 10
end if
end if
end if
end do
return
end subroutine
subroutine qrr(junit,nlin,slin,qc)
use aski
use cbuffer
use qfiles
use wbuffer
implicit none
save
integer,intent(in)::junit
integer,intent(inout)::nlin
integer,intent(out)::qc,slin
integer,parameter::srecx=87
integer::ii,iunit,i1,ios,jj,j1,j2
ii=0
if(srecx.le.srec)then
ii=1
else if(srecx.gt.sxbuff)then
ii=1
else if(junit.le.0)then
ii=1
else if(junit.gt.mfiles0)then
ii=1
else if(filest(junit).eq.otype)then
ii=1
end if
if(ii.ne.0)then
mlin(1:srec)='qrr_1'
call mput(1,0,0,0)
end if
iunit=filesu(junit)
do i1=1,srecx
stxb(i1:i1)=achar(aspace)
end do
ios=1
read(unit=iunit,fmt='(a)',iostat=ios)stxb(1:srecx)
if(ios.ne.0)then
if(ios.gt.0)then
call uput(1)
end if
call qclose(junit,0)
slin=-1
go to 90
end if
nlin=nlin+1
slin=0
do i1=srecx,1,-1
if(iachar(stxb(i1:i1)).ne.aspace)then
slin=i1
go to 10
end if
end do
10 continue
j1=0
if(nlin.eq.1)then
if(slin.gt.2)then
if(ichar(stxb(1:1)).eq.239)then
if(ichar(stxb(2:2)).eq.187)then
if(ichar(stxb(3:3)).eq.191)then
j1=3
slin=slin-j1
end if
end if
end if
end if
end if
if(slin.ge.srec)then
mlin(1:srec)='line too long,'
call mput(1,nlin,nlin,junit)
end if
jj=stcbs(1)
ii=slin+1
call vaocb(ii)
i1=jj+ii
stcb(i1:i1)=achar(alf)
qc=0
if(slin.gt.0)then
do i1=jj+1,jj+slin
j1=j1+1
j2=iachar(stxb(j1:j1))
if((j2.lt.abo(1)).or.(j2.gt.abo(2)))then
mlin(1:srec)='wrong syntax,'
call mput(1,nlin,nlin,junit)
end if
stcb(i1:i1)=achar(j2)
end do
i1=jj+1
if(acf(iachar(stcb(i1:i1))).eq.-1)then
qc=1
end if
end if
90 return
end subroutine
subroutine qout(junit)
use aski
use qfiles
use qintr
use wbuffer
implicit none
save
integer,intent(in)::junit
integer::f1,ii,i1,j1,j2,j3,ios,iunit
f1=filesm(junit)
ii=0
if(f1.lt.1)then
ii=1
else if(f1.gt.nsfiles)then
ii=1
else if(filest(junit).ne.otype)then
ii=1
end if
if(ii.ne.0)then
mlin(1:srec)='qout_1'
call mput(1,0,0,0)
end if
j1=stwbpf(f1)+1
j2=stwbqf(f1)
if(j1.le.0)then
ii=1
else if(j2.lt.j1)then
ii=1
else if(len(stwb).le.j2)then
ii=1
else if(iachar(stwb(j2:j2)).ne.alf)then
ii=1
end if
if(ii.ne.0)then
mlin(1:srec)='qout_2'
call mput(1,0,0,0)
end if
iunit=filesu(junit)
j3=j1
if(cflag(4).eq.0)then
do i1=j1,j2
if(iachar(stwb(i1:i1)).eq.alf)then
ios=1
if(j3.lt.i1)then
write(unit=iunit,fmt='(a)',iostat=ios)stwb(j3:i1-1)
else
write(unit=iunit,fmt='(a)',iostat=ios)
end if
if(ios.ne.0)then
call uput(1)
end if
j3=i1+1
end if
end do
else
if(j1.lt.j2)then
write(unit=iunit,fmt='(a)',iostat=ios)stwb(j1:j2-1)
else
write(unit=iunit,fmt='(a)',iostat=ios)
end if
if(ios.ne.0)then
call uput(1)
end if
end if
return
end subroutine
subroutine qopen(junit)
use cbuffer
use qfiles
use qintr
use wbuffer
implicit none
save
integer,intent(in)::junit
logical::lun,loun
integer::j1,j2,ii,jstat,ios,iunit
ii=0
if(junit.le.0)then
ii=1
else if(junit.gt.mfiles0)then
ii=1
else if(filesu(junit)+1.ne.0)then
ii=1
end if
if(ii.ne.0)then
mlin(1:srec)='qopen_1'
call mput(1,0,0,0)
end if
if((filest(junit).eq.otype).or.&
(filest(junit).eq.wtype))then
jstat=1
lun=.true.
else
jstat=0
lun=.false.
end if
j1=filesp(junit)
j2=filesq(junit)
ios=1
loun=.true.
inquire(file=stcb(j1:j2),exist=lun,opened=loun,iostat=ios)
if(ios.ne.0)then
call uput(1)
else if(loun)then
mlin(1:srec)='is already open (or a duplicate)'
call mput(1,0,0,-junit)
else if(jstat.eq.0)then
if(.not.lun)then
mlin(1:srec)='could not be found'
call mput(1,0,0,-junit)
end if
else if(lun)then
mlin(1:srec)='already exists'
call mput(1,0,0,-junit)
end if
ios=1
if(jstat.eq.0)then
open(newunit=iunit,access='sequential',file=stcb(j1:j2),&
action='read',status='old',position='rewind',iostat=ios)
else
open(newunit=iunit,access='sequential',file=stcb(j1:j2),&
action='write',status='new',iostat=ios)
end if
if(ios.ne.0)then
mlin(1:srec)='could not be opened'
call mput(1,0,0,-junit)
end if
filesu(junit)=iunit
return
end subroutine
subroutine qclose(junit,istop)
use qfiles
use qintr
use wbuffer
implicit none
save
integer,intent(in)::junit,istop
logical::lun
character(len=6)::fstat
integer::i1,ii,jj,j1,j2,iunit,ios
ii=0
if(junit.lt.0)then
ii=1
else if(junit.gt.mfiles0)then
ii=1
else if(istop.lt.0)then
ii=1
else if(istop.gt.1)then
ii=1
end if
if(ii.ne.0)then
mlin(1:srec)='qclose_1'
call mput(-1,0,0,0)
end if
if(junit.eq.0)then
j1=1
j2=mfiles0
else
j1=junit
j2=junit
end if
do i1=j1,j2
iunit=filesu(i1)
if(iunit+1.ne.0)then
ios=1
lun=.false.
inquire(unit=iunit,opened=lun,iostat=ios)
if((ios.eq.0).and.(lun))then
jj=0
if(filest(i1).eq.otype)then
if(istop.ne.0)then
if(cflag(1).gt.0)then
jj=6
end if
end if
else if(filest(i1).eq.wtype)then
if(cflag(6).gt.1)then
write(unit=iunit,fmt='(a)',iostat=ios)
if(ios.ne.0)then
call uput(1)
end if
else
jj=6
end if
end if
if(jj.eq.0)then
jj=4
fstat(1:jj)='keep'
else
fstat(1:jj)='delete'
end if
ios=1
close(unit=iunit,status=fstat(1:jj),iostat=ios)
end if
if(ios.ne.0)then
call uput(1)
end if
filesu(i1)=-1
end if
end do
return
end subroutine
subroutine inputs
use aski
use cbuffer
use ikeys
use intbuffer
use qfiles
use qintr
use qmix
use qmodel
use qproc
use wbuffer
use xyx
implicit none
save
integer,parameter::datls=5
integer::sigz,stoz
integer::icom,ii,ij,ik,i1,i2,i3,jj,jk,j1,j2,j3,j4,k,kid,kk,ll
integer::aa1,atyp,bot,nphia,ntf1,tfch,tfcl,tfcn,tfv
integer::dbl,ifile,newc,nlin,nmp,nmp0,pp0,pp1,pp2,slin,top
integer::phase,qc,stjr,stjr0,styp,tsl
integer::dreci(0:0),comii(0:0),comfi(0:0)
integer::comt(1:decmax)
integer::xli(1:maxleg)
if(stjbs(1).ne.stj0)then
mlin(1:srec)='inputs_1'
call mput(1,0,0,0)
end if
ifile=0
do i1=1,nfiles
if(filest(i1).eq.ctype)then
call qopen(i1)
ifile=i1
exit
end if
end do
phase=1
nmp=0
icom=deccon
ncom=0
inco=0
outg=0
nleg=0
ntf=0
stjr0=nap
tftyp(0)=nap
tfnarg(0)=nap
tfa(0)=nap
tfb(0)=nap
tfc(0)=nap
tf2(0)=nap
tfo(0)=nap
tfills(0)=nap
tfiuls(0)=nap
tftb(0)=nap
tfta(0)=nap
tftic(0)=nap
do i1=0,maxli
zpro(i1)=1
zbri(i1)=1
rbri(i1)=1
sbri(i1)=1
if(i1.lt.nloop)then
zcho(i1)=0
else
zcho(i1)=1
end if
end do
cfrp(0)=nap
cfrp(1)=nap
ndrec=0
newc=1
dbl=0
nlin=0
tsl=0
do i1=1,size(comc)
comc(i1)=0
end do
03 continue
slin=0
call qrr(ifile,nlin,slin,qc)
if(slin.eq.-1)then
if(newc.eq.0)then
go to 80
else
do i1=decmax,1,-1
if(stib(oisk(0)+i1).ne.0)then
if(comc(i1).eq.0)then
mlin(1:srec)='is incomplete'
call mput(1,0,0,-ifile)
end if
end if
end do
end if
go to 301
end if
if(newc.ne.0)then
bot=stcbs(1)+1
dbl=nlin
end if
if((slin.eq.0).or.(qc.ne.0))then
if(newc.ne.0)then
go to 03
else
go to 80
end if
end if
top=stcbs(1)+slin
ii=top+1
if(iachar(stcb(ii:ii)).ne.alf)then
go to 80
else if(iachar(stcb(top:top)).eq.aspace)then
go to 80
end if
tsl=tsl+slin+1
if(tsl.gt.sxbuff)then
mlin(1:srec)='statement too long,'
go to 80
end if
jflag(7)=0
if(iachar(stcb(top:top)).eq.ascol)then
newc=1
tsl=0
else
newc=0
end if
ndrec=ndrec+1
call aoib(datls)
jj=stibs(1)
if(cfrp(0).eq.nap)then
cfrp(0)=jj
end if
cfrp(1)=jj
ii=slin+1
stib(jj-4)=stcbs(1)+1
stib(jj-3)=ii
stib(jj-2)=nlin
stib(jj-1)=nlin-dbl
stib(jj)=nap
call aocb(ii)
if(newc.eq.0)then
go to 03
end if
stjr=stjbs(1)
if(stjr0.eq.nap)then
stjr0=stjr
end if
call stap(bot,top+1,ctype)
if(stibs(1).ne.jj)then
mlin(1:srec)='inputs_2'
call mput(1,0,0,0)
end if
if(stapi(0).ne.ctype)then
go to 80
else if(stapi(1).ne.2)then
go to 80
else if(stapi(2).le.0)then
go to 80
else if(stapi(2).gt.size(comc))then
go to 80
else if(stapi(3).lt.0)then
go to 80
end if
if(stapi(2).eq.declib)then
go to 80
end if
do i1=1,size(comt)
comt(i1)=0
end do
do while((icom.ne.stapi(2)).and.&
(comt(icom).eq.0).and.&
(stib(oisk(0)+icom).eq.0))
comt(icom)=1
icom=stib(fisk(0)+icom)
end do
do while((icom.lt.stapi(2)).and.&
((comc(icom).ne.0).or.&
(stib(oisk(0)+icom).eq.0)))
icom=icom+1
end do
if(icom.ne.stapi(2))then
go to 80
end if
if(comc(icom).ne.0)then
if(stib(oisk(0)+icom).ne.0)then
go to 80
end if
end if
comc(icom)=comc(icom)+1
ncom=ncom+1
stib(jj)=icom
pp1=stjr+2
pp2=pp1+3*(stjb(pp1-1)-1)
if(icom.eq.deccon)then
if(ncom.ne.1)then
go to 80
end if
j1=stjb(stjbs(1)-2)+3
do i1=1,stapi(3)
j1=j1+6
if(stjb(j1-1).ne.2)then
go to 80
end if
call mstr0(stcb,stjb(j1),stjb(j1+1),popt0(0),wopt0(0),&
aopt0(0),ij)
if(ij.le.0)then
go to 80
end if
ik=stib(vopt0(0)+ij)
ij=stib(copt0(0)+ij)
if(cflag(ij).eq.0)then
cflag(ij)=ik
else if(cflag(ij).eq.ik)then
call wput(10,0,0)
else
call wput(-10,0,0)
end if
end do
cflag(2)=cflag(3)
else if(icom.eq.decmes)then
if(ncom.gt.2)then
go to 80
end if
ll=-1
if(stapi(3).eq.0)then
ll=0
else if(stapi(3).eq.1)then
j1=stjr+9
if(stjb(j1-1).eq.3)then
if(cflag(5).gt.0)then
call nows(j1)
end if
ll=stjb(j1+1)-1-stjb(j1)
end if
end if
if(ll.gt.0)then
nfiles=nfiles+1
filesp(nfiles)=stjb(j1)+1
filesq(nfiles)=stjb(j1+1)-1
filest(nfiles)=wtype
call qopen(nfiles)
cflag(6)=1
else if(ll.lt.0)then
go to 80
end if
end if
if(cflag(3).ge.0)then
if(ncom.eq.1)then
call spp(0,0,0,1)
end if
call spp(1,bot,top+1,0)
end if
if(icom.eq.deccon)then
go to 143
else if(icom.eq.decmes)then
go to 143
else if(icom.eq.decoutp)then
go to 102
else if(icom.eq.decsty)then
go to 103
else if(icom.eq.decmod)then
go to 104
else if(icom.eq.decin)then
go to 105
else if(icom.eq.decout)then
go to 105
else if(icom.eq.decloo)then
go to 107
else if(icom.eq.declmo)then
go to 108
else if(icom.eq.decopt)then
go to 109
else if(icom.eq.decind)then
go to 110
else if((icom.eq.dectru).or.(icom.eq.decfal))then
go to 111
else
go to 80
end if
102 continue
if(dso.eq.0)then
dso=1
if(comc(decoutp).ne.1)then
go to 80
else if(comc(decsty).ne.0)then
go to 80
end if
else
if(comc(decoutp).gt.msfiles0)then
go to 80
else if(comc(decoutp).ne.comc(decsty)+max(0,dso))then
go to 80
end if
end if
ll=-1
if(stapi(3).eq.0)then
ll=0
else if(stapi(3).eq.1)then
j1=stjr+9
if(stjb(j1-1).eq.3)then
if(cflag(5).gt.0)then
call nows(j1)
end if
ll=stjb(j1+1)-1-stjb(j1)
end if
end if
nfiles=nfiles+1
filest(nfiles)=otype
if(ll.gt.0)then
filesp(nfiles)=stjb(j1)+1
filesq(nfiles)=stjb(j1+1)-1
if(dso.lt.0)then
if(filesp(nfiles-1).eq.nap)then
mlin(1:srec)='style-file name(s) missing,'
call mput(1,0,0,ifile)
end if
end if
else if(ll.lt.0)then
go to 80
end if
go to 143
103 continue
if(dso.eq.0)then
dso=-1
if(comc(decoutp).ne.0)then
go to 80
else if(comc(decsty).ne.1)then
go to 80
end if
else
if(comc(decsty).gt.msfiles0)then
go to 80
else if(comc(decoutp).ne.comc(decsty)+min(0,dso))then
go to 80
end if
end if
ll=-1
if(stapi(3).eq.0)then
ll=0
else if(stapi(3).eq.1)then
j1=stjr+9
if(stjb(j1-1).eq.3)then
if(cflag(5).gt.0)then
call nows(j1)
end if
ll=stjb(j1+1)-1-stjb(j1)
end if
end if
nfiles=nfiles+1
filest(nfiles)=stype
nsfiles=nsfiles+1
if(ll.gt.0)then
filesp(nfiles)=stjb(j1)+1
filesq(nfiles)=stjb(j1+1)-1
else if(ll.lt.0)then
go to 80
else if(dso.gt.0)then
if(filesp(nfiles-1).ne.nap)then
mlin(1:srec)='style-file name(s) missing,'
call mput(1,0,0,ifile)
end if
end if
go to 143
104 continue
if(comc(decoutp).ne.comc(decsty))then
go to 80
end if
if(cflag(1).lt.0)then
cflag(1)=0
else
do i1=1,nfiles
if(filest(i1).eq.otype)then
if(filesp(i1).ne.nap)then
cflag(1)=1
exit
end if
end if
end do
end if
if(cflag(2).eq.0)then
if(cflag(1).eq.0)then
cflag(2)=1
end if
else if(cflag(2).gt.0)then
cflag(2)=cflag(2)-1
end if
ll=-1
if(stapi(3).eq.0)then
ll=0
else if(stapi(3).eq.1)then
j1=stjr+9
if(stjb(j1-1).eq.3)then
if(cflag(5).gt.0)then
call nows(j1)
end if
ll=stjb(j1+1)-1-stjb(j1)
end if
end if
if(ll.lt.0)then
go to 80
else if(ll.eq.0)then
mlin(1:srec)='model-file name is missing,'
call mput(1,0,0,ifile)
end if
nfiles=nfiles+1
filesp(nfiles)=stjb(j1)+1
filesq(nfiles)=stjb(j1+1)-1
filest(nfiles)=mtype
go to 143
105 continue
nphia=stapi(stapi(1)+1)
if(nphia.eq.0)then
nphia=0
else if(pp2-pp1.eq.3*(2*nphia+1))then
j1=pp1
do i1=1,nphia
j1=j1+6
if(stjb(j1).ne.2)then
go to 80
end if
end do
if(icom.eq.decin)then
cflag(8)=0
else if(cflag(8).ne.0)then
go to 80
end if
do i1=1,nphia
nleg=nleg+1
if(nleg.gt.maxleg)then
mlin(1:srec)='too many legs'
call mput(1,0,0,0)
end if
call aocb(1)
j3=stcbs(1)
if(icom.eq.decin)then
stcb(j3:j3)=achar(kpqs(2))
else
stcb(j3:j3)=achar(kpqs(3))
end if
momep(nleg)=j3
call dkar(i1,ii)
call aocb(ii)
momel(nleg)=ii+1
end do
else if(pp2-pp1.eq.3*(5*nphia+1))then
if(icom.eq.decin)then
cflag(8)=1
else if(inco.eq.0)then
cflag(8)=1
else if(cflag(8).eq.0)then
go to 80
end if
j1=pp1-9
do i1=1,nphia
j1=j1+15
if(stjb(j1).ne.2)then
go to 80
else if(stjb(j1+6).ne.2)then
go to 80
end if
nleg=nleg+1
if(nleg.gt.maxleg)then
mlin(1:srec)='too many legs'
call mput(1,0,0,0)
end if
momep(nleg)=stjb(j1+7)
momel(nleg)=stjb(j1+8)-momep(nleg)+1
end do
else
go to 80
end if
if(icom.eq.decin)then
inco=nphia
go to 143
end if
outg=nphia
if(nleg.ne.inco+outg)then
mlin(1:srec)='inputs_12'
call mput(1,0,0,0)
end if
if(nleg.eq.0)then
mlin(1:srec)='no external particles listed'
call mput(1,0,0,0)
end if
go to 143
107 continue
j1=pp1+7
if(stjb(j1-1).ne.4)then
go to 80
end if
nloop=stoz(stcb,stjb(j1),stjb(j1+1))
if(nloop.lt.0)then
mlin(1:srec)='check loops in'
call mput(1,0,0,ifile)
else if((nloop.gt.maxrho).or.&
(nloop+nleg.gt.max(maxleg,maxrho)))then
mlin(1:srec)='too many legs and/or loops'
call mput(1,0,0,0)
end if
if(nleg+nloop.lt.2)then
mlin(1:srec)='check legs, loops, in'
call mput(1,0,0,ifile)
end if
if((nleg.eq.2).and.(nloop.eq.0))then
mlin(1:srec)='case legs=2, loops=0 not accepted'
call mput(1,0,0,0)
end if
go to 143
108 continue
if(stapi(3).eq.1)then
j1=pp1+7
if(stjb(j1-1).ne.2)then
go to 80
end if
momep(0)=stjb(j1)
momel(0)=stjb(j1+1)-momep(0)+1
else if(stapi(3).ne.0)then
go to 80
end if
go to 143
109 continue
j1=pp1+1
do i1=1,stapi(3)
j1=j1+6
if(stjb(j1-1).ne.2)then
go to 80
end if
call mstr0(stcb,stjb(j1),stjb(j1+1),popt1(0),wopt1(0),&
aopt1(0),ij)
if(ij.le.0)then
go to 80
end if
ik=stib(vopt1(0)+ij)
ij=stib(copt1(0)+ij)
if(dflag(ij).ne.0)then
call wput(11,0,0)
if(dflag(ij)*ik.lt.0)then
jflag(1)=1
else if(dflag(ij).lt.ik)then
dflag(ij)=ik
end if
end if
dflag(ij)=ik
end do
go to 143
110 continue
if(stapi(3).eq.0)then
go to 143
else if(stapi(3).eq.1)then
j1=pp1+7
if(stjb(j1-1).ne.4)then
go to 80
end if
j2=stjb(j1+1)
kk=sigz(stcb,stjb(j1),j2)
if(kk.lt.0)then
go to 80
else if(kk.eq.0)then
go to 143
end if
cflag(7)=1
else
go to 80
end if
j1=stjb(j1)
if(iachar(stcb(j1:j1)).eq.aplus)then
j1=j1+1
end if
j3=j1-1
ii=0
do i1=j1,j2-1
if(ii.eq.0)then
if(iachar(stcb(i1:i1)).eq.azero)then
j3=i1
else
ii=1
end if
end if
end do
noffl=j2-j3
if(noffl.ge.wsint)then
ii=stoz(stcb,j1,j2)
end if
stcb(noffp+1:noffp+noffl)=stcb(j3+1:j2)
doffl=noffl
stcb(doffp+1:doffp+doffl)=stcb(j3+1:j2)
go to 143
111 continue
if(stapi(3).le.0)then
go to 80
end if
if(kpa(0).lt.7)then
go to 80
else if(kpa(2).lt.2)then
go to 80
else if(kpa(4).lt.1)then
go to 80
else if(kpa(0).ne.kpa(1)+kpa(2)+kpa(4))then
go to 80
else if(kpa(1).ne.kpa(2)+kpa(4)+1)then
go to 80
end if
ntf=ntf+1
go to 143
143 continue
if(stib(misk(0)+stapi(2)).eq.0)then
call aojb(-1)
else
j1=stjbs(1)
ii=stapi(1)+1
call aojb(ii)
nmp=nmp+1
do i1=1,stapi(1)
j1=j1+1
stjb(j1)=stapi(i1)
end do
end if
go to 03
301 continue
j1=cfrp(1)-cfrp(0)-(ndrec-1)*datls
if(j1.ne.0)then
mlin(1:srec)='inputs_6'
call mput(1,0,0,0)
end if
if(cflag(2).ge.0)then
call spp(2,0,0,1)
end if
ii=stibs(1)
call aoib(datls)
do i1=ii+1,stibs(1)
stib(i1)=eoa
end do
call trm(datls,ndrec+1)
ii=ndrec+1
drect(0)=stibs(1)-ii
drecii(0)=drect(0)-ii
dreci(0)=drecii(0)-ii
drecl(0)=dreci(0)-ii
drecp(0)=drecl(0)-ii
do i1=1,ndrec
j1=stib(drecp(0)+i1)
j2=j1-1+stib(drecl(0)+i1)
end do
ncom=0
j1=0
306 continue
j1=j1+1
ii=stib(drecp(0)+j1)
jj=ii-1
j2=j1
308 continue
jj=jj+stib(drecl(0)+j2)
if(j2.lt.ndrec)then
if(stib(drecii(0)+j2+1).ne.0)then
j2=j2+1
go to 308
end if
end if
j1=j2
ncom=ncom+1
call aoib(2)
stib(stibs(1)-1)=ii
stib(stibs(1))=jj
if(j1.lt.ndrec)then
go to 306
end if
call aoib(2)
stib(stibs(1)-1)=eoa
stib(stibs(1))=eoa
call trm(2,ncom+1)
ii=ncom+1
comfi(0)=stibs(1)-ii
comii(0)=comfi(0)-ii
irecc(0)=stibs(1)
call aoib(2*ii)
frecc(0)=irecc(0)+ii
stib(frecc(0))=eoa
stib(stibs(1))=eoa
j1=0
j2=0
337 continue
if(j1.lt.ndrec)then
j1=j1+1
else
go to 343
end if
if(stib(drecii(0)+j1).eq.0)then
if(j2.gt.0)then
stib(frecc(0)+j2)=j1-1
end if
j2=j2+1
stib(irecc(0)+j2)=j1
end if
if(j2.le.ncom)then
go to 337
end if
343 continue
stib(frecc(0)+ncom)=ndrec
if((j1.ne.ndrec).or.(j2.ne.ncom))then
mlin(1:srec)='inputs_4'
call mput(1,0,0,0)
end if
if(dso.ne.0)then
do i1=2,nfiles-1
if(filest(i1).eq.otype)then
if(filest(i1+dso).ne.stype)then
mlin(1:srec)='wrong style/output file pairing'
call mput(1,0,0,ifile)
else if(nsfiles.gt.1)then
if(filesp(i1).eq.nap)then
if(filesp(i1+dso).eq.nap)then
mlin(1:srec)='null style-file/output-file pair'
call mput(1,0,0,ifile)
end if
end if
end if
end if
end do
end if
do i1=1,nfiles
if(filesp(i1).ne.nap)then
j1=filesq(i1)-filesp(i1)
do i2=i1+1,nfiles
if(j1.eq.filesq(i2)-filesp(i2))then
if(stcb(filesp(i1):filesq(i1)).eq.&
stcb(filesp(i2):filesq(i2)))then
mlin(1:srec)='input filenames should be distinct'
call mput(1,0,0,0)
end if
end if
end do
end if
end do
do i1=1,otype
j1=0
do i2=1,nfiles
if(filest(i2).eq.i1)then
j1=j1+1
filesm(i2)=j1
end if
end do
end do
phase=2
ii=stjbs(1)
do i1=1,nfiles
if(filest(i1).eq.stype)then
if(filesp(i1).ne.nap)then
call style
exit
end if
end if
end do
if(stjbs(1).ne.ii)then
mlin(1:srec)='inputs_9'
call mput(1,0,0,0)
end if
call model
if(stjbs(1).ne.ii)then
mlin(1:srec)='inputs_10'
call mput(1,0,0,0)
end if
if(ntf.gt.0)then
ii=ntf+1
tftyp(0)=stibs(1)
jj=9*ii
call aoib(jj)
tfnarg(0)=tftyp(0)+ii
tfa(0)=tfnarg(0)+ii
tfb(0)=tfa(0)+ii
tfc(0)=tfb(0)+ii
tf2(0)=tfc(0)+ii
tfo(0)=tf2(0)+ii
tfills(0)=tfo(0)+ii
tfiuls(0)=tfills(0)+ii
stib(tfills(0))=eoa
stib(tfiuls(0))=eoa
stib(tfnarg(0))=eoa
stib(tfa(0))=eoa
stib(tfb(0))=eoa
stib(tfc(0))=eoa
stib(tf2(0))=eoa
stib(tfo(0))=eoa
stib(stibs(1))=eoa
end if
ntf1=0
pp0=nap
nmp0=1
501 continue
do i1=nmp0,nmp
if(pp0.eq.nap)then
pp0=stjr0+1
else
pp0=stjb(pp0-2)+1
end if
pp1=pp0+1
pp2=pp1+3*(stjb(pp0)-1)
pp0=stjb(pp0-2)+1
icom=stjb(pp0+1)
if(stib(misk(0)+icom).eq.0)then
mlin(1:srec)='inputs_8'
call mput(1,0,0,0)
end if
nmp0=i1+1
if((icom.eq.decin).or.(icom.eq.decout))then
go to 551
else if((icom.eq.dectru).or.(icom.eq.decfal))then
go to 611
else
go to 80
end if
end do
go to 701
551 continue
j1=stjb(pp1+1)
j2=stjb(pp2+2)
if(icom.eq.decin)then
nphia=inco
else
nphia=outg
end if
if(nphia.gt.0)then
ii=6+9*cflag(8)
j1=pp1+7-ii
do i1=1,nphia
j1=j1+ii
if(stjb(j1-1).ne.2)then
go to 80
end if
call mstr0(stcb,stjb(j1),stjb(j1+1),namep(0),namel(0),nap&
,jk)
if(jk.eq.0)then
mlin(1:srec)='unknown external particle(s)'
call mput(1,0,0,0)
end if
if(icom.eq.decin)then
leg(i1)=stib(link(0)+jk)
else
leg(inco+i1)=jk
end if
end do
end if
go to 501
611 continue
j1=stjb(pp1+1)
j2=stjb(pp2+2)
jj=stjb(pp1-1)
if(jj.lt.7)then
go to 80
else if(mod(jj,2).eq.0)then
go to 80
else if(stjb(pp1+6).ne.2)then
go to 80
end if
if(stjb(pp1).ne.2)then
go to 80
end if
j1=stjb(pp1+1)
j2=stjb(pp1+2)
call mstr0(stcb,j1,j2,popt3(0),wopt3(0),aopt3(0),ij)
if(ij.eq.0)then
go to 80
end if
tfv=stib(copt3(0)+ij)
if(stjb(pp1+6).ne.2)then
go to 80
end if
j1=stjb(pp1+7)
j2=stjb(pp1+8)
call mstr0(stcb,j1,j2,popt5(0),wopt5(0),aopt5(0),ij)
if(ij.eq.0)then
go to 80
end if
atyp=stib(copt5(0)+ij)
if(atyp.le.0)then
go to 80
end if
styp=atyp*tfv
if(atyp.lt.12)then
if(jj.lt.9)then
go to 80
else if(stjb(pp2-12).ne.4)then
go to 80
end if
end if
if(atyp.eq.6)then
dflag(18)=1
else if(atyp.eq.7)then
dflag(19)=1
else if(atyp.eq.11)then
dflag(21)=1
else if(atyp.eq.12)then
dflag(22)=1
else if(atyp.eq.15)then
dflag(20)=1
end if
j1=stjb(pp1-1)
j3=-1
if(atyp.lt.11)then
j3=j1-8
j4=2
else if(atyp.eq.11)then
j3=j1-10
j4=3
else if(atyp.eq.12)then
j3=j1-4
j4=0
end if
if(j3.eq.0)then
j3=1
else if(j3.lt.0)then
go to 80
end if
j3=(j3-1)/2
if(atyp.ge.11)then
if(j3.eq.0)then
go to 80
end if
end if
if(j4.gt.1)then
j1=stoz(stcb,stjb(pp2-11),stjb(pp2-10))
j2=stoz(stcb,stjb(pp2-5),stjb(pp2-4))
if(j1.gt.j2)then
go to 80
end if
if(atyp.lt.6)then
if(j1.lt.0)then
go to 80
end if
if(atyp.gt.1)then
jflag(4)=1
end if
else if(atyp.eq.11)then
if(j1.le.0)then
go to 80
end if
end if
else
j1=0
j2=0
end if
if(j3.eq.0)then
go to 673
end if
ntf1=ntf1+1
stib(tftyp(0)+ntf1)=styp
stib(tfnarg(0)+ntf1)=j3
stib(tfa(0)+ntf1)=j1
stib(tfb(0)+ntf1)=j2
stib(tfc(0)+ntf1)=0
stib(tfo(0)+ntf1)=stibs(1)
call aoib(j3+1)
if(dflag(18).ne.0)then
stib(tfills(0)+ntf1)=stibs(1)
call aoib(maxn+1)
stib(tfiuls(0)+ntf1)=stibs(1)
call aoib(maxn+1)
end if
stib(stibs(1))=eoa
if(atyp.gt.5)then
go to 637
end if
j4=stib(tfo(0)+ntf1)
ii=pp1+7
do i1=1,stib(tfnarg(0)+ntf1)
ii=ii+6
if(stjb(ii-1).ne.2)then
go to 80
end if
call mstr0(stcb,stjb(ii),stjb(ii+1),namep(0),namel(0),nap,jk)
if(jk.eq.0)then
mlin(1:srec)='unknown field,'
go to 81
end if
stib(j4+i1)=jk
end do
call hsort(stib,j4+1,j4+stib(tfnarg(0)+ntf1))
tfcl=stib(tfnarg(0)+ntf1)
tfch=1
tfcn=1
i3=1
do i1=2,stib(tfnarg(0)+ntf1)
i2=j4+i1
if((stib(i2).eq.stib(i2-1)).or.&
(stib(i2).eq.stib(link(0)+stib(i2-1))))then
i3=i3+1
if(i3.gt.tfch)then
tfch=i3
end if
else
if(i3.lt.tfcl)then
tfcl=i3
end if
tfcn=tfcn+1
i3=1
end if
end do
if(i3.lt.tfcl)then
tfcl=i3
end if
if(tfcn.ne.nprop)then
tfcl=0
end if
if(styp.gt.0)then
do i2=0,maxli
if((i2*tfch.lt.stib(tfa(0)+ntf1)).or.&
(i2*tfcl.gt.stib(tfb(0)+ntf1)))then
if(styp.eq.1)then
zpro(i2)=0
else if(styp.eq.2)then
zbri(i2)=0
else if(styp.eq.3)then
sbri(i2)=0
else if(styp.eq.4)then
rbri(i2)=0
else if(styp.eq.5)then
zcho(i2)=0
end if
end if
end do
else if(styp.lt.0)then
do i2=0,maxli
if(i2*tfch.le.stib(tfb(0)+ntf1))then
if(i2*tfcl.ge.stib(tfa(0)+ntf1))then
if(styp.eq.-1)then
zpro(i2)=0
else if(styp.eq.-2)then
zbri(i2)=0
else if(styp.eq.-3)then
sbri(i2)=0
else if(styp.eq.-4)then
rbri(i2)=0
else if(styp.eq.-5)then
zcho(i2)=0
end if
end if
end if
end do
end if
go to 501
673 continue
if(styp.gt.0)then
do i2=0,maxli
if((i2.lt.j1).or.(i2.gt.j2))then
if(styp.eq.1)then
zpro(i2)=0
else if(styp.eq.2)then
zbri(i2)=0
else if(styp.eq.3)then
sbri(i2)=0
else if(styp.eq.4)then
rbri(i2)=0
else if(styp.eq.5)then
zcho(i2)=0
end if
end if
end do
else
do i2=0,maxli
if(i2.ge.j1)then
if(i2.le.j2)then
if(styp.eq.-1)then
zpro(i2)=0
else if(styp.eq.-2)then
zbri(i2)=0
else if(styp.eq.-3)then
sbri(i2)=0
else if(styp.eq.-4)then
rbri(i2)=0
else if(styp.eq.-5)then
zcho(i2)=0
end if
end if
end if
end do
end if
go to 501
637 continue
if(atyp.eq.6)then
if(stib(tfnarg(0)+ntf1).ne.1)then
go to 80
end if
j1=stjb(pp1+13)
j2=stjb(pp1+14)
call mstr0(stcb,j1,j2,vmkp(0),vmkl(0),nap,kid)
if(kid.eq.0)then
mlin(1:srec)='wrong argument in vsum,'
go to 81
end if
if(stib(vmkr(0)+kid).ne.4)then
mlin(1:srec)='invalid keyword in vsum,'
go to 81
end if
stib(vmks(0)+kid)=1
stib(stib(tfo(0)+ntf1)+1)=kid
else if(atyp.eq.7)then
if(stib(tfnarg(0)+ntf1).ne.1)then
go to 80
end if
j1=stjb(pp1+13)
j2=stjb(pp1+14)
call mstr0(stcb,j1,j2,pmkp(0),pmkl(0),nap,kid)
if(kid.eq.0)then
mlin(1:srec)='wrong argument in psum,'
go to 81
end if
if((stib(pmkr(0)+kid).ne.4).or.&
(stib(pmkd(0)+kid).ne.1))then
mlin(1:srec)='invalid keyword in psum,'
go to 81
end if
stib(stib(tfo(0)+ntf1)+1)=kid
j1=stib(pmkvmi(0)+kid)
j2=stib(pmkvma(0)+kid)
do i2=0,maxli
if(styp.gt.0)then
if((i2*j1.gt.stib(tfb(0)+ntf1)).or.&
(i2*j2.lt.stib(tfa(0)+ntf1)))then
zpro(i2)=0
end if
else
if((i2*j1.ge.stib(tfa(0)+ntf1)).and.&
(i2*j2.le.stib(tfb(0)+ntf1)))then
zpro(i2)=0
end if
end if
end do
else if((atyp.ge.11).and.(atyp.le.15))then
if(nleg.lt.2)then
call wput(-14,0,0)
end if
j3=stib(tfnarg(0)+ntf1)
if(j3.le.0)then
go to 80
else if(j3.gt.nleg)then
go to 80
end if
if(atyp.eq.11)then
if(j3.lt.stib(tfb(0)+ntf1))then
go to 80
end if
else
if(j3.eq.nleg)then
go to 80
end if
end if
do i1=1,nleg
xli(i1)=0
end do
do i1=1,j3
j1=pp1+7+6*i1
if(stjb(j1-1).ne.4)then
go to 80
end if
j2=stoz(stcb,stjb(j1),stjb(j1+1))
if(j2.ge.0)then
go to 80
else if(j2+2*nleg.lt.0)then
go to 80
end if
j1=(-j2)/2
if(j2+2*j1.eq.0)then
j1=j1+inco
if(j1.gt.nleg)then
go to 80
end if
else
j1=j1+1
if(j1.gt.inco)then
go to 80
end if
end if
if(xli(j1).ne.0)then
go to 80
end if
xli(j1)=1
j4=stib(tfo(0)+ntf1)
stib(j4+i1)=j1
end do
if(atyp.eq.11)then
j1=pp1+13+6*j3
call mstr0(stcb,stjb(j1),stjb(j1+1),popt7(0),wopt7(0),&
aopt7(0),ij)
if(ij.le.0)then
go to 80
end if
j1=stib(copt7(0)+ij)
stib(tfc(0)+ntf1)=j1
j2=0
if(j1.ne.0)then
if(j3.eq.nleg)then
if(stib(tfa(0)+ntf1).eq.1)then
if(stib(tfb(0)+ntf1).eq.nleg)then
j2=styp
end if
end if
end if
else
if(stib(tfa(0)+ntf1).eq.1)then
if(stib(tfb(0)+ntf1).eq.j3)then
j2=styp
end if
end if
end if
if(j2.ne.0)then
if(j2.gt.0)then
call wput(12,0,0)
else
jflag(1)=1
call wput(13,0,0)
end if
end if
end if
else
mlin(1:srec)='inputs_3'
call mput(1,0,0,0)
end if
go to 501
701 continue
if(cflag(2).gt.0)then
call spp(3,0,0,0)
end if
vmkmio(0)=nap
vmkmao(0)=nap
if(dflag(18).ne.0)then
call vsig
end if
i1=0
kk=0
705 continue
i1=i1+1
j1=stib(copt5(0)+i1)
if(j1.gt.0)then
ik=i1
if(j1.gt.kk)then
kk=j1
else if(j1.lt.kk)then
mlin(1:srec)='inputs_5'
call mput(1,0,0,0)
end if
go to 705
end if
ii=ncopt5+1
jj=2*ii
call aoib(jj)
tftb(0)=stibs(1)-ii
tfta(0)=tftb(0)-ii
stib(tftb(0))=eoa
stib(stibs(1))=eoa
jj=mcopt5+1
tftic(0)=stibs(1)
call aoib(jj)
stib(stibs(1))=eoa
do i1=tftic(0)+1,tftic(0)+mcopt5
stib(i1)=nap
end do
do i1=1,ncopt5
j1=stib(copt5(0)+i1)
if(stib(tftic(0)+j1).eq.nap)then
stib(tftic(0)+j1)=i1
end if
end do
do i1=1,ncopt5
stib(tfta(0)+i1)=0
stib(tftb(0)+i1)=-1
end do
ii=0
do i1=1,mcopt5
j1=stib(tftic(0)+i1)
if(j1.gt.0)then
do i2=1,ntf
if(abs(stib(tftyp(0)+i2)).eq.i1)then
ii=ii+1
if(stib(tfta(0)+j1).eq.0)then
stib(tfta(0)+j1)=ii
end if
stib(tftb(0)+j1)=ii
stib(tf2(0)+ii)=i2
end if
end do
end if
end do
j1=stcbs(1)+1
aa1=momel(0)
call aocb(aa1)
k=stcbs(1)
j2=momep(0)-1+momel(0)
stcb(j1:k)=stcb(momep(0):j2)
do i1=1,nloop
call dkar(i1,jk)
ik=k+jk
do i2=1,nleg
if(momel(i2).eq.momel(0)+jk)then
j2=momep(i2)-1+momel(i2)
if(stcb(j1:ik).eq.stcb(momep(i2):j2))then
mlin(1:srec)='conflict between names of external and '&
//'internal momenta'
if(cflag(1).gt.0)then
call mput(1,0,0,0)
else if(cflag(2).gt.0)then
call mput(0,0,0,0)
else
jflag(8)=min(jflag(8)+1,iref)
end if
go to 181
end if
end if
end do
end do
181 continue
call aocb(-aa1)
ii=1
do i1=1,nleg
if(stib(antiq(0)+leg(i1)).ne.0)then
ii=-ii
end if
end do
if(ii.lt.0)then
call wput(9,0,0)
jflag(1)=1
end if
if(nleg.gt.1)then
ii=0
jj=stib(blok(0)+leg(1))
do i1=2,nleg
if(ii.eq.0)then
if(stib(blok(0)+leg(i1)).ne.jj)then
ii=1
call wput(8,0,0)
jflag(1)=1
end if
end if
end do
end if
if((nleg.ne.2).or.(nloop.ne.0))then
do i1=1,nleg
jj=stib(link(0)+leg(i1))
do i2=1,nrho
if(stib(nivd(0)+i2).gt.0)then
if(stib(stib(stib(dpntro(0)+i2)+jj)+1).eq.jj)then
go to 720
end if
end if
end do
jflag(1)=1
kk=0
if(i1.gt.inco)then
ii=stib(namep(0)+leg(i1))
do i2=inco+1,i1-1
if(leg(i2).eq.leg(i1))then
kk=1
end if
end do
if(kk.eq.0)then
j1=ii-1+stib(namel(0)+leg(i1))
call wput(7,ii,j1)
end if
else
ii=stib(namep(0)+jj)
do i2=1,i1-1
if(leg(i2).eq.leg(i1))then
kk=1
end if
end do
if(kk.eq.0)then
j1=ii-1+stib(namel(0)+jj)
call wput(6,ii,j1)
end if
end if
720 continue
end do
end if
if(nphi.eq.1)then
mflag(1)=1
end if
ii=0
jj=0
do i1=1,nphi
if(stib(antiq(0)+i1).eq.0)then
ii=1
else
jj=1
end if
end do
if(ii.eq.0)then
mflag(2)=-1
else if(jj.eq.0)then
mflag(2)=1
end if
mflag(3)=1
j1=nvert
730 continue
if(j1.gt.0)then
if(mod(stib(vval(0)+j1),2).eq.0)then
j1=j1-1
go to 730
end if
mflag(3)=0
end if
mflag(7)=1
j1=nvert
750 continue
if(j1.gt.0)then
j2=stib(vparto(0)+j1)
j3=j2+stib(vval(0)+j1)
ii=-1
do i2=j2+1,j3
ii=ii+stib(antiq(0)+stib(i2))
end do
if(abs(ii).eq.1)then
j1=j1-1
go to 750
end if
mflag(7)=0
end if
if(mflag(1).eq.0)then
jflag(3)=0
else if(mflag(4).ne.0)then
jflag(3)=0
else
jflag(3)=1
end if
go to 90
80 continue
mlin(1:srec)='wrong syntax or unexpected statement,'
81 continue
if(phase.eq.1)then
call mput(1,dbl,nlin,ifile)
else
j1=1
j2=0
82 continue
if(stib(drecii(0)+j1).eq.0)then
j2=j2+1
nlin=stib(dreci(0)+j1)
end if
if((j1.lt.ndrec).and.(j2.lt.icom))then
j1=j1+1
go to 82
end if
83 continue
if(j1.lt.ndrec)then
if(stib(drecii(0)+j1+1).ne.0)then
j1=j1+1
go to 83
end if
end if
call mput(1,nlin,nlin+stib(drecii(0)+j1),ifile)
end if
90 continue
do i1=1,2*nmp
call aojb(-1)
end do
if(stjbs(1).ne.stj0)then
mlin(1:srec)='inputs_11'
call mput(1,0,0,0)
end if
return
end subroutine
subroutine iki
use cbuffer
use intbuffer
use qfiles
use qmodel
use qintr
use qsty
use wbuffer
implicit none
save
integer::i1,i2,j1,j2,jj,kk
integer::ifile
ifile=0
do i1=1,nfiles
if(filest(i1).eq.mtype)then
ifile=i1
exit
end if
end do
do i1=1,nudk
j1=stib(udkp(0)+i1)
j2=j1-1+stib(udkl(0)+i1)
kk=0
call mstr0(stcb,j1,j2,gmkp(0),gmkl(0),nap,jj)
if(jj.gt.0)then
kk=1
end if
if(kk.eq.0)then
call mstr0(stcb,j1,j2,pmkp(0),pmkl(0),nap,jj)
if(jj.gt.0)then
kk=2
end if
end if
if(kk.eq.0)then
call mstr0(stcb,j1,j2,vmkp(0),vmkl(0),nap,jj)
if(jj.gt.0)then
kk=3
end if
end if
if(kk.eq.0)then
call emodel(18,1,0,0,ifile)
end if
stib(udkt(0)+i1)=kk
stib(udki(0)+i1)=jj
end do
j1=udkp(1)
do i1=1,nudk
j1=stib(j1)
if(stib(udkt(0)+i1).eq.1)then
do i2=3,7
if(stib(j1+i2).gt.1)then
call emodel(12,1,0,0,ifile)
end if
end do
else if(stib(udkt(0)+i1).eq.2)then
if(stib(pmkd(0)+stib(udki(0)+i1)).eq.3)then
if(stib(j1+3).ne.0)then
call emodel(13,1,0,0,ifile)
else if(stib(j1+6).ne.0)then
call emodel(14,1,0,0,ifile)
end if
else
if(stib(j1+3).ne.0)then
call emodel(13,1,0,0,ifile)
else if(stib(j1+6).ne.0)then
call emodel(15,1,0,0,ifile)
end if
do i2=4,7
if(stib(j1+i2).gt.1)then
call emodel(16,1,0,0,ifile)
end if
end do
end if
else if(stib(udkt(0)+i1).eq.3)then
if(stib(j1+3).ne.0)then
call emodel(13,1,0,0,ifile)
end if
do i2=4,7
if((i2.ne.5).and.(stib(j1+i2).gt.1))then
call emodel(17,1,0,0,ifile)
end if
end do
end if
end do
return
end subroutine
subroutine rsfki
use cbuffer
use intbuffer
use qintr
use qmodel
use qsty
use wbuffer
implicit none
save
integer::ii,i1,j1
ii=nudk+1
udkp(2)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
udkp(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
udkl(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
udkt(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
udki(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
j1=udkp(1)
do i1=1,nudk
stib(udkt(0)+i1)=0
stib(udki(0)+i1)=0
j1=stib(j1)
stib(udkp(2)+i1)=j1+1
stib(udkp(0)+i1)=stib(j1+1)
stib(udkl(0)+i1)=stib(j1+2)
end do
return
end subroutine
subroutine vsig
use cbuffer
use intbuffer
use qintr
use qmix
use qmodel
use wbuffer
implicit none
save
integer::stoz
integer::ii,ij,jj,i1,i2,j1,j2,p1,p2,p3
ii=nvmk+1
vmkzp(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
vmkmio(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
vmkmao(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
do i1=1,nvmk
if(stib(vmks(0)+i1).ne.1)then
stib(vmkzp(0)+i1)=nap
stib(vmkmio(0)+i1)=nap
stib(vmkmao(0)+i1)=nap
else
p3=stibs(1)
stib(vmkzp(0)+i1)=p3
ii=nvert
call aoib(ii)
ii=nrho
p1=stibs(1)
stib(vmkmio(0)+i1)=p1
call aoib(ii)
p2=stibs(1)
stib(vmkmao(0)+i1)=p2
call aoib(ii)
call vaoib(ii)
do i2=stibs(1)+1,stibs(1)+ii
stib(i2)=0
end do
ii=stib(vmkvpp(0)+i1)
jj=stib(vmkvlp(0)+i1)
do i2=1,nvert
j1=stib(ii+i2)
j2=j1-1+stib(jj+i2)
ij=stoz(stcb,j1,j2)
stib(p3+i2)=ij
j1=stib(vval(0)+i2)
j2=stibs(1)+j1
if(stib(j2).ne.0)then
if(ij.gt.stib(p2+j1))then
stib(p2+j1)=ij
else if(ij.lt.stib(p1+j1))then
stib(p1+j1)=ij
end if
else
stib(j2)=1
stib(p1+j1)=ij
stib(p2+j1)=ij
end if
end do
end if
end do
if(stib(stibs(1)).ne.eoa)then
call aoib(1)
stib(stibs(1))=eoa
end if
return
end subroutine
subroutine gen10
use intbuffer
use qintr
use qmix
use qmodel
use qproc
use wbuffer
implicit none
save
integer::ii,i1,i2,i3,i4,i5,jj,j1,j2,j3,kk
integer::atyp,aux,a1,a2,b1,b2,styp
integer::vaux(1:maxli),xli(1:maxleg),xlj(1:maxn)
do i1=1,n
vaux(i1)=xn(i1)
end do
do i1=1,rho(1)
vlis(i1)=i1
invlis(i1)=i1
end do
do i1=rhop1,n
invlis(i1)=0
end do
aux=rho(1)
jj=rhop1
10 continue
if(aux.lt.n)then
20 continue
if(invlis(jj).ne.0)then
jj=jj+1
go to 20
end if
ii=jj
do i1=ii+1,n
if(invlis(i1).eq.0)then
if(vaux(i1).gt.vaux(ii))then
ii=i1
end if
end if
end do
if(vaux(ii).eq.0)then
mlin(1:srec)='gen10_1'
call mput(1,0,0,0)
end if
aux=aux+1
vlis(aux)=ii
invlis(ii)=aux
rdeg(ii)=vaux(ii)
sdeg(ii)=rdeg(ii)+gam(ii,ii)
do i1=rhop1,n
vaux(i1)=vaux(i1)+gam(i1,ii)
end do
go to 10
end if
do i1=1,n
vaux(i1)=0
end do
do i1=1,n
ii=vlis(i1)
kk=0
j1=1
30 continue
if(kk.lt.vdeg(ii))then
jj=vlis(j1)
aux=1
do i3=1,gam(ii,jj)
kk=kk+1
vmap(ii,kk)=jj
vaux(jj)=vaux(jj)+1
if(ii.ne.jj)then
lmap(ii,kk)=vaux(jj)
else
lmap(ii,kk)=vaux(jj)+aux
aux=-aux
end if
end do
j1=j1+1
go to 30
end if
if(kk.ne.vdeg(ii))then
mlin(1:srec)='gen10_2'
call mput(1,0,0,0)
end if
end do
do i1=rhop1,n
do i2=1,vdeg(i1)-1
if(invlis(vmap(i1,i2)).gt.invlis(vmap(i1,i2+1)))then
mlin(1:srec)='gen10_3'
call mput(1,0,0,0)
end if
end do
end do
do i1=1,n
do i2=1,vdeg(i1)
j1=vmap(i1,i2)
j2=lmap(i1,i2)
if(vmap(j1,j2).ne.i1)then
mlin(1:srec)='gen10_4'
call mput(1,0,0,0)
end if
if(lmap(j1,j2).ne.i2)then
mlin(1:srec)='gen10_5'
call mput(1,0,0,0)
end if
end do
end do
if(cflag(1)+jflag(4).ne.0)then
do i1=rhop1,n
do i2=1,vdeg(i1)
j3=vmap(i1,i2)
if(j3.gt.rho(1))then
j1=min(i1,j3)
j2=max(i1,j3)
ii=ege(j1,j2)
jj=gam(i1,j3)-1
if(jj.eq.0)then
amap(i1,i2)=ii
else if(i1.eq.j3)then
amap(i1,i2)=ii+(i2-1-rdeg(i1))/2
else
kk=0
do i3=i2-1,1,-1
if(vmap(i1,i3).eq.j3)then
kk=kk+1
else
exit
end if
end do
amap(i1,i2)=ii+kk
end if
end if
end do
end do
end if
if(dflag(9).ne.0)then
call ccyc(1,j1)
if(j1.ne.dflag(9))then
go to 90
end if
end if
do i1=1,rho(1)
ps1(i1)=i1
end do
go to 70
29 continue
do i1=rho(1)-1,1,-1
if(ps1(i1).lt.ps1(i1+1))then
j1=i1
go to 38
end if
end do
go to 90
38 continue
do i1=j1+2,rho(1)
if(ps1(i1).lt.ps1(j1))then
j2=i1-1
go to 61
end if
end do
j2=rho(1)
61 continue
ii=ps1(j1)
ps1(j1)=ps1(j2)
ps1(j2)=ii
j1=j1+1
j2=rho(1)
33 continue
if(j1.lt.j2)then
ii=ps1(j1)
ps1(j1)=ps1(j2)
ps1(j2)=ii
j1=j1+1
j2=j2-1
go to 33
end if
70 continue
do i1=1,ns1
if(ps1(p1r(i1)).lt.ps1(p1l(i1)))then
do i2=p1r(i1)+1,rho(1)-1
do i3=i2+1,rho(1)
if(ps1(i2).lt.ps1(i3))then
ii=ps1(i2)
ps1(i2)=ps1(i3)
ps1(i3)=ii
end if
end do
end do
go to 29
end if
end do
do i1=1,rho(1)
invps1(ps1(i1))=i1
end do
if(dflag(21).ne.0)then
ii=stib(tftic(0)+11)
do i1=stib(tfta(0)+ii),stib(tftb(0)+ii)
i3=stib(tf2(0)+i1)
styp=stib(tftyp(0)+i3)
j1=stib(tfnarg(0)+i3)
j2=stib(tfo(0)+i3)
do i2=rhop1,n
xlj(i2)=0
end do
ii=0
do i2=1,j1
j3=vmap(invps1(stib(j2+i2)),1)
if(xlj(j3).eq.0)then
xlj(j3)=1
ii=ii+1
end if
end do
if((ii.lt.stib(tfa(0)+i3)).or.&
(ii.gt.stib(tfb(0)+i3)))then
if(styp.gt.0)then
go to 29
else
go to 55
end if
end if
if(stib(tfc(0)+i3).eq.0)then
if(styp.gt.0)then
go to 55
else
go to 29
end if
end if
do i2=1,rho(1)
xli(i2)=0
end do
do i2=1,j1
xli(invps1(stib(j2+i2)))=1
end do
do i2=1,rho(1)
if(xli(i2).eq.0)then
if(xlj(vmap(i2,1)).ne.0)then
if(styp.gt.0)then
go to 29
else
go to 55
end if
end if
end if
end do
if(styp.lt.0)then
go to 29
end if
55 continue
end do
end if
if(dflag(22).ne.0)then
do i1=12,12
ii=stib(tftic(0)+i1)
do i2=stib(tfta(0)+ii),stib(tftb(0)+ii)
j3=stib(tf2(0)+i2)
styp=stib(tftyp(0)+j3)
j1=stib(tfnarg(0)+j3)
j2=stib(tfo(0)+j3)
do i3=1,rho(1)
xli(i3)=0
end do
do i3=1,j1
xli(invps1(stib(j2+i3)))=1
end do
do i3=rhop1,nli
if(flow(i3,0).eq.1)then
kk=0
do i4=1,rho(1)
if(flow(i3,i4).eq.0)then
if(xli(i4).ne.0)then
kk=kk+1
end if
else
if(xli(i4).eq.0)then
kk=kk+1
end if
end if
end do
if(kk.gt.0)then
kk=kk-rho(1)
end if
if(kk.eq.0)then
if(styp.gt.0)then
go to 57
else
go to 29
end if
end if
end if
end do
if(styp.gt.0)then
go to 29
end if
57 continue
end do
end do
end if
do i1=1,rho(1)
amap(i1,1)=i1
amap(vmap(i1,1),lmap(i1,1))=i1
end do
if(dflag(18).ne.0)then
do i1=1,ntf
styp=stib(tftyp(0)+i1)
atyp=abs(styp)
if(atyp.ne.6)then
cycle
end if
j3=stib(stib(tfo(0)+i1)+1)
a1=stib(vmkmio(0)+j3)
b1=stib(vmkmao(0)+j3)
i3=stib(tfills(0)+i1)
i4=stib(tfiuls(0)+i1)
a2=-stib(tfa(0)+i1)
b2=-stib(tfb(0)+i1)
do i2=n,rhop1,-1
i5=vdeg(vlis(i2))
if(styp.gt.0)then
a2=a2+stib(b1+i5)
b2=b2+stib(a1+i5)
else
a2=a2+stib(a1+i5)
b2=b2+stib(b1+i5)
end if
stib(i3+i2)=a2
stib(i4+i2)=b2
end do
end do
end if
if(cflag(1).eq.0)then
go to 77
end if
do i1=1,nli
vaux(i1)=-2
end do
do i1=1,n
do i2=1,vdeg(i1)
ii=amap(i1,i2)
if(ii.gt.0)then
if(ii.le.nli)then
vaux(ii)=vaux(ii)+1
end if
end if
end do
end do
do i1=1,nli
if(vaux(i1).ne.0)then
mlin(1:srec)='gen10_7'
call mput(1,0,0,0)
end if
end do
77 continue
call gen43
if(dflag(16).eq.0)then
go to 29
end if
90 return
end subroutine
subroutine gen21
use intbuffer
use qintr
use qmix
use qmodel
use qproc
use wbuffer
implicit none
save
integer::bond,dsum,limax,limin,lin,loop,msum,n1,ntree,ubo
integer::aux,col,ii,i1,i2,i3,i4,jj,j1,j2,j3,j4,kk
integer::xc(1:maxdeg)
integer::xl(1:maxn),xt(1:maxn)
integer::bound(1:maxdeg),degr(1:maxdeg),xs(1:maxn)
integer::xg(1:maxn,1:maxn),ds(1:maxn,1:maxn)
integer::p1s(1:maxleg,1:maxleg)
integer::aa(1:maxn),bb(1:maxn)
integer::uset(0:maxn),xset(1:maxn),xp(1:maxn),a1(1:maxn)
integer::str(1:maxn),dta(1:maxn),lps(1:maxn)
integer::head(1:maxli),tail(1:maxli),intree(1:maxli)
integer::emul(1:maxdeg,1:maxli),nemul(1:maxdeg)
if(nrho.le.0)then
go to 97
end if
do i1=1,nrho
if((rho(i1).lt.0).or.(rho(i1).gt.maxn))then
go to 97
end if
end do
n=0
jj=0
do i1=1,nrho
jj=jj+i1*rho(i1)
do i2=1,rho(i1)
n=n+1
vdeg(n)=i1
end do
end do
if(n.gt.maxn)then
go to 97
end if
nli=jj/2
if(jj.ne.nli+nli)then
go to 97
end if
loop=nli-n+1
rhop2=rho(1)+loop
if(loop.lt.0)then
go to 97
end if
j1=0
if(dflag(13).gt.0)then
j1=1
else if(dflag(14).gt.0)then
j1=1
else if(dflag(15).gt.0)then
j1=1
end if
do i1=rhop1,n
if(j1.ne.0)then
str(i1)=1
else if(vdeg(i1).ne.vdeg(n))then
str(i1)=min(vdeg(i1),loop+1)
else if(n.gt.2)then
str(i1)=min(vdeg(i1)-1,loop+1)
else
str(i1)=min(vdeg(i1),loop+1)
end if
end do
j1=1
xl(1)=1
do i1=2,n
if(vdeg(i1).ne.vdeg(i1-1))then
xt(j1)=i1-1
j1=j1+1
xl(j1)=i1
end if
end do
xt(j1)=n
do i1=1,n
xn(i1)=0
end do
if(rho(1).eq.0)then
xc(1)=0
go to 59
end if
ubo=0
n1=1
do i1=2,nrho
if(rho(i1).gt.0)then
n1=n1+1
degr(n1)=i1
bound(n1)=i1*rho(i1)
ubo=ubo+bound(n1)
end if
end do
xc(1)=max(0,rho(1)-ubo)
61 continue
ii=rho(1)-xc(1)
do i1=n1,2,-1
xc(i1)=min(ii,bound(i1))
ii=ii-xc(i1)
end do
43 continue
do i1=n1,2,-1
ii=xc(i1)
do i2=xl(i1),xt(i1)
xn(i2)=min(ii,degr(i1))
ii=ii-xn(i2)
xs(i2)=ii
end do
end do
go to 12
76 continue
do i1=n1,2,-1
do i2=xt(i1)-1,xl(i1),-1
if(xn(i2).gt.1)then
j1=i2
go to 89
end if
end do
go to 82
89 continue
xn(j1)=xn(j1)-1
xs(j1)=xs(j1)+1
do i2=j1+1,xt(i1)
xn(i2)=min(xn(j1),xs(i2-1))
xs(i2)=xs(i2-1)-xn(i2)
end do
if(xs(xt(i1)).gt.0)then
do i2=j1-1,xl(i1),-1
if(xn(i2).gt.1)then
j1=i2
go to 89
end if
end do
go to 82
end if
do i2=i1+1,n1
ii=xc(i2)
do i3=xl(i2),xt(i2)
xn(i3)=min(ii,degr(i2))
ii=ii-xn(i3)
xs(i3)=ii
end do
end do
go to 12
82 continue
end do
do i1=n1,3,-1
if(xc(i1).gt.0)then
j1=i1
go to 45
end if
end do
go to 85
45 continue
do i1=j1-1,2,-1
if(xc(i1).lt.bound(i1))then
j1=i1
go to 55
end if
end do
go to 85
55 continue
xc(j1)=xc(j1)+1
ii=-1
do i1=j1+1,n1
ii=ii+xc(i1)
end do
do i1=n1,j1+1,-1
xc(i1)=min(ii,bound(i1))
ii=ii-xc(i1)
end do
if(ii.ne.0)then
mlin(1:srec)='gen21_2'
call mput(1,0,0,0)
end if
go to 43
85 continue
xc(1)=xc(1)+2
if(xc(1).le.rho(1))then
go to 61
end if
go to 90
12 continue
if(rho(1).lt.n)then
if(xc(1).gt.0)then
go to 90
end if
end if
if(n.gt.rhop1)then
j1=0
if(dflag(1).gt.0)then
j1=1
end if
do i1=rhop1,n
if(xn(i1)+j1.ge.vdeg(i1))then
go to 76
end if
end do
end if
ii=1
if(loop.eq.0)then
ii=0
else if(dflag(11).gt.0)then
ii=0
else if(dflag(12).gt.0)then
ii=0
else if(dflag(15).gt.0)then
ii=0
else
if(dflag(8).gt.0)then
if(rho(1)-1.ne.0)then
ii=0
end if
end if
if(dflag(9).gt.0)then
if(loop-1.ne.0)then
ii=0
end if
end if
end if
if(ii.eq.0)then
do i1=rhop1,n
dta(i1)=0
end do
else
do i1=rhop1,n
ii=0
if(n.gt.rhop1)then
if(dflag(1).gt.0)then
ii=2
else if((dflag(3).gt.0).and.(xn(i1).eq.0))then
ii=2
else
ii=1
end if
end if
jj=max(0,min(vdeg(i1)-xn(i1)-ii,loop+loop))/2
dta(i1)=jj+jj
if(dflag(14).gt.0)then
dta(i1)=min(dta(i1),2)
end if
end do
end if
59 continue
do i1=1,n
do i2=i1+1,n
xg(i1,i2)=0
end do
end do
do i1=2,xc(1),2
xg(i1-1,i1)=1
end do
limin=rhop1
limax=max(limin,n-1)
lin=limin
j1=xc(1)
do i1=limin,n
if(xn(i1).gt.0)then
a1(i1)=j1+1
do i2=1,xn(i1)
j1=j1+1
xg(j1,i1)=1
vmap(j1,1)=i1
end do
else
a1(i1)=0
end if
end do
dsum=-1
70 continue
dsum=dsum+1
if(dsum.gt.loop)then
go to 76
end if
ii=2*dsum
do i1=n,rhop1,-1
jj=min(ii,dta(i1))
xg(i1,i1)=jj
ii=ii-jj
end do
if(ii.eq.0)then
go to 19
else
go to 76
end if
32 continue
do i1=n,rhop1,-1
if(xg(i1,i1).gt.0)then
j1=i1
go to 33
end if
end do
go to 70
33 continue
do i1=j1-1,rhop1,-1
if(xg(i1,i1).lt.dta(i1))then
xg(i1,i1)=xg(i1,i1)+2
j2=i1
go to 64
end if
end do
go to 70
64 continue
ii=-2
do i1=j2+1,j1
ii=ii+xg(i1,i1)
end do
do i1=n,j2+1,-1
jj=min(ii,dta(i1))
xg(i1,i1)=jj
ii=ii-jj
end do
if(ii.ne.0)then
mlin(1:srec)='gen21_3'
call mput(1,0,0,0)
end if
19 continue
do i1=limin,n
ds(limin,i1)=vdeg(i1)-xn(i1)-xg(i1,i1)
end do
uset(0)=0
xset(1)=1
jj=1
do i1=2,n
if(vdeg(i1-1).ne.vdeg(i1))then
uset(jj)=i1-1
jj=jj+1
else if(xn(i1-1).ne.xn(i1))then
uset(jj)=i1-1
jj=jj+1
else
ii=xg(i1-1,i1-1)-xg(i1,i1)
if(ii.gt.0)then
uset(jj)=i1-1
jj=jj+1
else if(ii.lt.0)then
go to 32
end if
end if
xset(i1)=jj
end do
uset(jj)=n
lps(lin)=loop-dsum+1
10 continue
ii=ds(lin,lin)
bond=min(str(lin),lps(lin))
do i1=n,lin+1,-1
jj=min(ii,bond,ds(lin,i1))
xg(lin,i1)=jj
ii=ii-jj
end do
if(ii.gt.0)then
go to 15
end if
go to 28
05 continue
lin=limax
go to 17
15 continue
if(lin.eq.limin)then
go to 32
end if
lin=lin-1
17 continue
if((lin.lt.limin).or.(lin.gt.n))then
mlin(1:srec)='gen21_5'
call mput(1,0,0,0)
end if
do col=n,lin+1,-1
aux=xg(lin,col)-1
if(aux.ge.0)then
go to 23
end if
end do
go to 15
23 continue
bond=min(str(lin),lps(lin))
do i1=col-1,lin+1,-1
if(min(ds(lin,i1),bond).gt.xg(lin,i1))then
xg(lin,i1)=xg(lin,i1)+1
do i2=n,i1+1,-1
xg(lin,i2)=min(aux,bond,ds(lin,i2))
aux=aux-xg(lin,i2)
end do
go to 28
end if
aux=aux+xg(lin,i1)
end do
go to 15
38 continue
aux=-1
do i1=col,n
aux=aux+xg(lin,i1)
end do
go to 23
28 continue
if(lin.eq.n)then
go to 200
end if
msum=0
do i1=lin+1,n
ii=xg(lin,i1)-1
if(ii.gt.0)then
msum=msum+ii
end if
end do
if(msum.ge.lps(lin))then
go to 17
end if
if(lin.gt.limin)then
if(xset(lin).eq.xset(lin-1))then
do i1=limin,lin-2
ii=xg(i1,lin-1)-xg(i1,lin)
if(ii.gt.0)then
go to 35
else if(ii.lt.0)then
mlin(1:srec)='gen21_7'
call mput(1,0,0,0)
end if
end do
do col=lin+1,n
ii=xg(lin-1,col)-xg(lin,col)
if(ii.lt.0)then
go to 38
else if(ii.gt.0)then
go to 35
end if
end do
end if
end if
35 continue
do col=lin+2,n
if(xset(col).eq.xset(col-1))then
do i1=limin,lin
ii=xg(i1,col-1)-xg(i1,col)
if(ii.lt.0)then
go to 38
else if(ii.gt.0)then
go to 24
end if
end do
end if
24 continue
end do
do i1=lin+1,n
ds(lin+1,i1)=ds(lin,i1)-xg(lin,i1)
if(ds(lin+1,i1).lt.0)then
mlin(1:srec)='gen21_8'
call mput(1,0,0,0)
end if
end do
lin=lin+1
lps(lin)=lps(lin-1)-msum
go to 10
200 continue
if(dflag(12).lt.0)then
do i1=n,rhop1,-1
if(xg(i1,i1).gt.0)then
go to 210
end if
end do
go to 05
end if
210 continue
if(dflag(13).lt.0)then
do i1=n-1,rhop1,-1
do i2=i1+1,n
if(xg(i1,i2)-1.gt.0)then
go to 220
end if
end do
end do
go to 05
end if
220 continue
j1=rhop1
j2=n-1
lin=n
do i1=j1,j2
aa(i1)=0
end do
aa(n)=1
i1=n-rho(1)
bb(i1)=lin
kk=i1-1
21 continue
if(kk.gt.0)then
ii=bb(i1)
i1=i1-1
do i2=j2,ii+1,-1
if(aa(i2).eq.0)then
if(xg(ii,i2).ne.0)then
bb(kk)=i2
kk=kk-1
aa(i2)=-aa(ii)
end if
end if
end do
if(aa(j2).ne.0)then
j2=j2-1
end if
do i2=j1,ii-1
if(aa(i2).eq.0)then
if(xg(i2,ii).ne.0)then
bb(kk)=i2
kk=kk-1
aa(i2)=-aa(ii)
end if
end if
end do
if(aa(j1).ne.0)then
j1=j1+1
end if
if(i1.eq.kk)then
do i2=j2,j1,-1
if(aa(i2).eq.0)then
aa(i2)=1
bb(kk)=i2
kk=kk-1
lin=i2
j2=lin-1
go to 21
end if
end do
mlin(1:srec)='gen21_9'
call mput(1,0,0,0)
end if
go to 21
end if
if(lin.ne.n)then
go to 17
end if
if(dflag(11).ne.0)then
do i1=rhop1,n
if(xg(i1,i1).ne.0)then
if(dflag(11).gt.0)then
go to 05
else
go to 230
end if
end if
do i2=i1+1,n
if(xg(i1,i2).ne.0)then
if(aa(i1)+aa(i2).ne.0)then
if(dflag(11).gt.0)then
go to 05
else
go to 230
end if
end if
end if
end do
end do
if(dflag(11).lt.0)then
go to 05
end if
end if
230 continue
if(dflag(14).lt.0)then
do i1=n,rhop1,-1
if(xg(i1,i1)-3.gt.0)then
go to 240
end if
do i2=i1+1,n
if(xg(i1,i2)-1.gt.0)then
go to 240
end if
end do
end do
go to 05
end if
240 continue
if(dflag(15).lt.0)then
do i1=n,rhop1,-1
do i2=i1,n
if(xg(i1,i2)-1.gt.0)then
go to 250
end if
end do
end do
go to 05
end if
250 continue
do i1=1,n
do i2=1,i1-1
j1=xg(i2,i1)
gam(i1,i2)=j1
gam(i2,i1)=j1
end do
gam(i1,i1)=xg(i1,i1)
end do
if(dflag(1).ne.0)then
call umpi(1,ii)
if(ii.ne.dflag(1))then
go to 05
end if
end if
if(dflag(3).ne.0)then
call umpi(2,ii)
if(ii.ne.dflag(3))then
go to 05
end if
end if
if(dflag(4).ne.0)then
call umpi(4,ii)
if(ii.ne.dflag(4))then
go to 05
end if
end if
if(dflag(5).ne.0)then
call umvi(3,ii)
if(ii.ne.dflag(5))then
go to 05
end if
end if
if(dflag(8).ne.0)then
if(rho(1).ne.1)then
call umvi(1,ii)
else
call umvi(3,ii)
end if
if(ii.ne.dflag(8))then
go to 05
end if
end if
if(dflag(10).ne.0)then
call umvi(2,ii)
if(ii.ne.dflag(10))then
go to 05
end if
end if
ntadp=0
if(mflag(6).ne.0)then
call umpi(3,ii)
if(ii.ne.1)then
mlin(1:srec)='gen21_11'
call mput(1,0,0,0)
end if
end if
nsym=0
do i1=1,rho(1)-1
do i2=i1+1,rho(1)
p1s(i1,i2)=0
end do
end do
do i1=1,n
xp(i1)=i1
end do
go to 93
77 continue
do i1=xset(n),1,-1
do i2=uset(i1)-1,uset(i1-1)+1,-1
if(xp(i2).lt.xp(i2+1))then
go to 102
end if
end do
end do
go to 63
102 continue
j1=uset(i1)
do i1=i2+2,j1
if(xp(i1).lt.xp(i2))then
go to 202
end if
end do
i1=j1+1
202 continue
i1=i1-1
ii=xp(i1)
xp(i1)=xp(i2)
xp(i2)=ii
i1=i2+1
i2=j1
204 continue
if(i1.lt.i2)then
ii=xp(i1)
xp(i1)=xp(i2)
xp(i2)=ii
i1=i1+1
i2=i2-1
go to 204
end if
do i1=j1+1,n
xp(i1)=i1
end do
93 continue
if(rho(1).gt.0)then
if(xp(rho(1)).ne.rho(1))then
go to 63
end if
end if
do i1=rhop1,n-1
do i2=i1,n
ii=gam(xp(i1),xp(i2))-gam(i1,i2)
if(ii.gt.0)then
go to 05
end if
if(ii.lt.0)then
j1=xset(i2)
j3=uset(j1)
do i3=i2+1,j3-1
do i4=i3+1,j3
if(xp(i3).lt.xp(i4))then
ii=xp(i3)
xp(i3)=xp(i4)
xp(i4)=ii
end if
end do
end do
do i3=j1+1,xset(n)
j2=j3+1
j3=uset(i3)
j4=j2+j3
do i4=j2,j3
xp(i4)=j4-i4
end do
end do
go to 77
end if
end do
end do
if(rho(1).eq.0)then
go to 114
end if
i1=1
110 continue
j1=vmap(i1,1)
if(xp(j1).eq.j1)then
i1=i1+xn(j1)
if(i1.le.rho(1))then
go to 110
end if
go to 114
else
p1s(i1,a1(xp(j1)))=1
go to 77
end if
114 continue
if(jflag(3).eq.0)then
if(psym(0).lt.0)then
psyms=0
psym(0)=stibs(1)
call aoib(1)
stib(stibs(1))=eoa
end if
jj=n-rho(1)
ii=nsym*jj-psyms
if(ii.gt.0)then
if(psym(0).eq.stibs(1)-1-psyms)then
call aoib(ii)
psyms=psyms+ii
stib(stibs(1))=eoa
else
mlin(1:srec)='gen21_13'
call mput(1,0,0,0)
end if
end if
ii=nsym*jj
if(ii.le.psyms)then
if(nsym.gt.0)then
ii=psym(0)+(ii-n)
do i1=rhop1,n
stib(ii+i1)=xp(i1)
end do
end if
else
mlin(1:srec)='gen21_14'
call mput(1,0,0,0)
end if
end if
nsym=nsym+1
go to 77
63 continue
ns1=0
do i1=2,rho(1)
j1=i1-1
if(vmap(j1,1).eq.vmap(i1,1))then
p1s(j1,i1)=1
end if
do i2=1,j1
if(p1s(i2,i1).eq.1)then
ns1=ns1+1
p1l(ns1)=i2
p1r(ns1)=i1
end if
end do
end do
if(cflag(1)+jflag(4).eq.0)then
go to 80
end if
do i1=1,rho(1)
tail(i1)=i1
head(i1)=vmap(i1,1)
end do
do i1=1,vdeg(n)
nemul(i1)=0
end do
ii=rhop1
do i1=rhop1,n
do i2=i1,n
jj=gam(i1,i2)
if(jj.eq.0)then
ege(i1,i2)=0
else
ege(i1,i2)=ii
if(i1.eq.i2)then
jj=jj/2
else
nemul(jj)=nemul(jj)+1
emul(jj,nemul(jj))=ii
end if
ii=ii+jj
do i3=ii-jj,ii-1
tail(i3)=i1
head(i3)=i2
end do
end if
end do
end do
if(jflag(4).eq.0)then
go to 80
end if
do i1=rhop1,nli
intree(i1)=0
end do
do i1=1,n
bb(i1)=0
end do
do i1=rhop1,n
aa(i1)=0
end do
kk=0
ntree=0
ii=vdeg(n)
51 continue
if(ii.le.0)then
go to 52
end if
jj=nemul(ii)
58 continue
if(jj.le.0)then
ii=ii-1
go to 51
end if
j1=tail(emul(ii,jj))
j2=head(emul(ii,jj))
if(aa(j1).eq.aa(j2))then
if(aa(j1).eq.0)then
ntree=ntree+1
aa(j1)=ntree
aa(j2)=ntree
else
jj=jj-1
go to 58
end if
else
if(aa(j1).eq.0)then
aa(j1)=aa(j2)
else if(aa(j2).eq.0)then
aa(j2)=aa(j1)
else
j3=aa(j2)
do i1=rhop1,n
if(aa(i1).eq.j3)then
aa(i1)=aa(j1)
end if
end do
end if
end if
intree(ege(j1,j2))=1
bb(j1)=bb(j1)+1
bb(j2)=bb(j2)+1
kk=kk+1
if(kk.lt.n-rhop1)then
jj=jj-1
go to 58
end if
52 continue
do i1=1,rho(1)
intree(i1)=1
end do
do i1=1,nli
do i2=1,rhop2
flow(i1,i2)=0
end do
end do
do i1=1,rho(1)
flow(i1,i1)=1
end do
ii=rho(1)
do i1=rhop1,nli
if(intree(i1).eq.0)then
ii=ii+1
flow(i1,ii)=1
end if
end do
ii=rhop1
73 continue
if(bb(ii).eq.1)then
go to 71
else if(ii.lt.n)then
ii=ii+1
go to 73
else
go to 83
end if
71 continue
do i1=rhop1,ii-1
if(xg(i1,ii).ne.0)then
j1=ege(i1,ii)
if(intree(j1).ne.0)then
go to 75
end if
end if
end do
do i1=ii+1,n
if(xg(ii,i1).ne.0)then
j1=ege(ii,i1)
if(intree(j1).ne.0)then
go to 75
end if
end if
end do
mlin(1:srec)='gen21_16'
call mput(1,0,0,0)
75 continue
if(rho(1).gt.1)then
if(xn(ii).gt.0)then
do i1=1,rho(1)
if(vmap(i1,1).eq.ii)then
if(tail(j1).eq.ii)then
flow(j1,i1)=flow(j1,i1)+1
else
flow(j1,i1)=flow(j1,i1)-1
end if
end if
end do
end if
end if
do i1=rhop1,n
if(i1.ne.ii)then
if(i1.lt.ii)then
jj=ege(i1,ii)
else
jj=ege(ii,i1)
end if
do i2=jj,jj+gam(ii,i1)-1
if(intree(i2).eq.0)then
if((head(j1).eq.head(i2)).or.&
(tail(j1).eq.tail(i2)))then
do i3=1,rhop2
flow(j1,i3)=flow(j1,i3)-flow(i2,i3)
end do
else
do i3=1,rhop2
flow(j1,i3)=flow(j1,i3)+flow(i2,i3)
end do
end if
end if
end do
end if
end do
intree(j1)=0
bb(tail(j1))=bb(tail(j1))-1
bb(head(j1))=bb(head(j1))-1
ii=rhop1
go to 73
83 continue
do i1=rhop1,nli
ii=0
jj=0
do i2=1,rho(1)
kk=flow(i1,i2)
if(kk.gt.0)then
ii=ii+1
else if(kk.lt.0)then
jj=jj+1
end if
end do
if((ii.gt.0).and.(jj.gt.0))then
mlin(1:srec)='gen21_17'
call mput(1,0,0,0)
end if
if(2*(ii+jj).gt.rho(1))then
if(jj.eq.0)then
do i2=1,rho(1)
flow(i1,i2)=flow(i1,i2)-1
end do
else
do i2=1,rho(1)
flow(i1,i2)=flow(i1,i2)+1
end do
end if
end if
end do
do i1=1,nli
do i2=1,rhop2
if(abs(flow(i1,i2)).gt.1)then
mlin(1:srec)='gen21_18'
call mput(1,0,0,0)
end if
end do
end do
do i1=-2,2
net(i1)=0
end do
do i1=rhop1,nli
do i2=rhop1,rhop2
if(flow(i1,i2).ne.0)then
if(head(i1).ne.tail(i1))then
kk=-1
else
kk=-2
end if
flow(i1,0)=kk
net(kk)=net(kk)+1
go to 60
end if
end do
do i2=1,rho(1)
if(flow(i1,i2).ne.0)then
if(dflag(2).gt.0)then
go to 05
end if
flow(i1,0)=1
net(1)=net(1)+1
go to 60
end if
end do
net(2)=net(2)+1
flow(i1,0)=2
60 continue
end do
net(3)=net(1)+net(2)
net(-3)=net(-1)+net(-2)
net(0)=net(-3)+net(3)
ii=-2*net(-2)
do i1=rhop1,n
ii=ii+gam(i1,i1)
end do
if(ii.ne.0)then
mlin(1:srec)='gen21_123'
call mput(1,0,0,0)
end if
if(dflag(2).lt.0)then
if(net(1).eq.0)then
go to 05
end if
end if
if(zbri(net(3)).eq.0)then
go to 05
else if(zcho(nli-rho(1)-net(3)).eq.0)then
go to 05
else if(rbri(net(1)).eq.0)then
go to 05
else if(sbri(net(2)).eq.0)then
go to 05
end if
if(dflag(7).ne.0)then
call gsig(ii,head,tail)
if(dflag(7).ne.ii)then
go to 05
end if
end if
do i1=1,rho(1)
ege(i1,vmap(i1,1))=i1
end do
do i1=rhop1,n
ii=0
do i2=1,rho(1)
jj=0
do i3=1,n
if(i3.ne.i1)then
j2=gam(i1,i3)
if(j2.gt.0)then
if(i1.lt.i3)then
j1=ege(i1,i3)
else
j1=ege(i3,i1)
end if
j3=head(j1)-i1
do i4=j1,j1+j2-1
if(j3.eq.0)then
jj=jj+flow(i4,i2)
else
jj=jj-flow(i4,i2)
end if
end do
end if
end if
end do
if(jj.ne.ii)then
if(i2.eq.1)then
ii=jj
else
mlin(1:srec)='gen21_19'
call mput(1,0,0,0)
end if
end if
end do
end do
do i1=rhop1,n
do i2=rhop1,rhop2
ii=0
do i3=1,n
if(i3.ne.i1)then
j2=gam(i1,i3)
if(j2.gt.0)then
if(i1.lt.i3)then
j1=ege(i1,i3)
else
j1=ege(i3,i1)
end if
j3=head(j1)-i1
do i4=j1,j1+j2-1
if(j3.eq.0)then
ii=ii+flow(i4,i2)
else
ii=ii-flow(i4,i2)
end if
end do
end if
end if
end do
if(ii.ne.0)then
mlin(1:srec)='gen21_20'
call mput(1,0,0,0)
end if
end do
end do
go to 80
97 continue
mlin(1:srec)='gen21_1'
call mput(1,0,0,0)
80 continue
call gen10
go to 05
90 return
end subroutine
subroutine gsig(situ,head,tail)
use cbuffer
use qmix
use qproc
use wbuffer
implicit none
save
integer,intent(in)::head(1:maxli),tail(1:maxli)
integer,intent(out)::situ
integer::aa(1:maxli),bb(1:maxli)
integer::ii,jj,rr,ss,tt
integer::f1,i1,i2,i3,i4,j3,j4
situ=1
if(rho(1).eq.0)then
go to 80
end if
do i1=rhop1,nli
f1=flow(i1,0)
if(abs(f1).eq.1)then
do i2=1,i1-1
ii=1
if(i2.lt.rhop1)then
if(f1.eq.1)then
ii=0
end if
else if(f1.eq.flow(i2,0))then
ii=0
end if
if(ii.eq.0)then
do i3=-1,1,2
if(f1.lt.0)then
do i4=rhop1,rhop2
ii=flow(i1,i4)+i3*flow(i2,i4)
if(ii.ne.0)then
go to 10
end if
end do
end if
ii=0
jj=0
do i4=1,rho(1)
if(flow(i1,i4)+i3*flow(i2,i4).ne.0)then
if(jj.ne.0)then
go to 10
end if
ii=ii+1
else
if(ii.ne.0)then
go to 10
end if
jj=jj+1
end if
end do
go to 80
10 continue
end do
end if
end do
end if
end do
if(rho(1)-1.ne.0)then
if(net(2)-1.le.0)then
go to 90
end if
else
if(net(2).ne.0)then
go to 80
else
go to 90
end if
end if
rr=0
do i3=rhop1,n
if(xn(i3).eq.0)then
aa(i3)=0
else
aa(i3)=1
rr=rr+1
bb(rr)=i3
end if
end do
if(rr.le.0)then
mlin(1:srec)='gsig_1'
call mput(1,0,0,0)
end if
ss=1
30 continue
tt=bb(ss)
do i3=rhop1,n
if(aa(i3).eq.0)then
if(i3.ne.tt)then
if(i3.lt.tt)then
j3=i3
j4=tt
else
j3=tt
j4=i3
end if
if(gam(j3,j4).ne.0)then
if(flow(ege(j3,j4),0).ne.2)then
aa(i3)=1
rr=rr+1
bb(rr)=i3
end if
end if
end if
end if
end do
if(ss.lt.rr)then
ss=ss+1
go to 30
end if
do i1=rhop1,nli
if(flow(i1,0).eq.2)then
if(aa(head(i1)).eq.0)then
if(aa(tail(i1)).eq.0)then
go to 80
end if
end if
end if
end do
go to 90
80 continue
situ=-1
90 return
end subroutine
subroutine gen43
use cbuffer
use intbuffer
use qintr
use qmix
use qmodel
use qproc
use wbuffer
implicit none
save
integer::stoz
integer::i,ii,ij,ik,i1,i2,i3,i4,i5,j,jj,jk,j1,j2,j3,j4,k,kk
integer::a1,a2,aux,b1,b2,igo,jgo
integer::aoff,atyp,narg,nf,nf1,styp,vi,vind,vj,vk,vv
integer::xli(2*maxn+2*maxrho+maxdeg)
do i1=1,rho(1)
pmap(i1,1)=leg(ps1(i1))
pmap(vmap(i1,1),lmap(i1,1))=stib(link(0)+leg(ps1(i1)))
end do
vind=rho(1)
57 continue
vind=vind+1
vv=vlis(vind)
vfo(vv)=stib(stib(dpntro(0)+vdeg(vv))+pmap(vv,1))
100 continue
do i1=1,rdeg(vv)
ii=stib(vfo(vv)+i1)-pmap(vv,i1)
if(ii.lt.0)then
vfo(vv)=vfo(vv)+vdeg(vv)+1
go to 100
else if(ii.gt.0)then
go to 104
end if
end do
go to 163
58 continue
vfo(vv)=vfo(vv)+vdeg(vv)+1
do i1=rdeg(vv),1,-1
if(stib(vfo(vv)+i1).ne.pmap(vv,i1))then
go to 104
end if
end do
go to 163
104 continue
if(vind.ne.rhop1)then
vind=vind-1
vv=vlis(vind)
go to 58
end if
go to 90
163 continue
do i1=rdeg(vv)+1,sdeg(vv),2
j1=vfo(vv)+i1
j2=stib(j1)
j3=stib(j1+1)
if(j2.gt.j3)then
go to 58
else if(j2.ne.stib(link(0)+j3))then
go to 58
else if(i1+1.ne.sdeg(vv))then
if(j2.gt.stib(j1+2))then
go to 58
end if
end if
end do
do i1=rdeg(vv)+1,vdeg(vv)
pmap(vv,i1)=stib(vfo(vv)+i1)
end do
do i1=sdeg(vv)+1,vdeg(vv)-1
if(vmap(vv,i1).eq.vmap(vv,i1+1))then
if(pmap(vv,i1).gt.pmap(vv,i1+1))then
go to 58
end if
end if
end do
if(mflag(5).ne.0)then
do i1=rdeg(vv)+1,vdeg(vv)
if(stib(tpc(0)+pmap(vv,i1)).eq.5)then
go to 58
end if
end do
end if
if(mflag(6).ne.0)then
do i1=1,ntadp
if(xtail(i1).eq.vv)then
jj=xhead(i1)
else if(xhead(i1).eq.vv)then
jj=xtail(i1)
else
jj=0
end if
if(jj.ne.0)then
do i2=1,vdeg(vv)
if(jj.eq.vmap(vv,i2))then
if(stib(tpc(0)+pmap(vv,i2)).eq.1)then
go to 58
end if
end if
end do
end if
end do
end if
do i1=sdeg(vv)+1,vdeg(vv)
pmap(vmap(vv,i1),lmap(vv,i1))=stib(link(0)+pmap(vv,i1))
end do
if(vind.lt.n)then
go to 57
end if
if(dflag(17).eq.0)then
go to 333
end if
if(nloop.eq.0)then
if(dflag(17).gt.0)then
go to 333
else if(dflag(17).lt.0)then
go to 58
end if
end if
do i1=1,n
xli(i1)=0
end do
do i1=1,n
if(xli(i1).eq.0)then
ii=i1
kk=1
820 continue
do i2=1,vdeg(ii)
if(i2.ne.xli(ii))then
jj=pmap(ii,i2)
if(stib(antiq(0)+jj).ne.0)then
k=ii
ii=vmap(k,i2)
xli(ii)=lmap(k,i2)
go to 830
end if
end if
end do
go to 74
830 continue
if(ii.gt.rho(1))then
if(ii.ne.i1)then
kk=-kk
go to 820
end if
if(kk.gt.0)then
if(dflag(17).gt.0)then
go to 58
else
go to 333
end if
end if
end if
end if
74 continue
end do
if(dflag(17).lt.0)then
go to 58
end if
333 continue
if(jflag(3).ne.0)then
dsym=nsym
else
dsym=1
jk=psym(0)-rho(1)
do 206 i1=2,nsym
if(mflag(1).eq.0)then
do i2=rhop1,n
j1=stib(jk+i2)
j2=rdeg(i2)+1
400 continue
if(j2.le.vdeg(i2))then
j3=vmap(i2,j2)
j4=1
410 continue
if(j4.le.vdeg(i2))then
if(vmap(j1,j4).ne.stib(jk+j3))then
j4=j4+1
go to 410
end if
end if
jj=gam(i2,j3)
do i3=1,jj
xli(i3)=pmap(j1,i3+j4-1)
end do
do i3=1,jj-1
do i4=i3+1,jj
if(xli(i3).gt.xli(i4))then
ii=xli(i3)
xli(i3)=xli(i4)
xli(i4)=ii
end if
end do
end do
do i3=1,jj
ii=xli(i3)-pmap(i2,j2)
if(ii.lt.0)then
go to 58
else if(ii.gt.0)then
go to 339
end if
j2=j2+1
end do
go to 400
end if
end do
end if
if(mflag(4).ne.0)then
do i2=rhop1,n
j1=stib(jk+i2)
if(i2.ne.j1)then
ii=stib(vfo(j1))-stib(vfo(i2))
if(ii.lt.0)then
go to 58
else if(ii.gt.0)then
go to 339
end if
end if
end do
end if
dsym=dsym+1
339 continue
jk=jk+(n-rho(1))
206 continue
end if
if(dflag(18).ne.0)then
jgo=0
vi=n
atyp=6
j1=stib(tftic(0)+atyp)
do i1=stib(tfta(0)+j1),stib(tftb(0)+j1)
i2=stib(tf2(0)+i1)
styp=stib(tftyp(0)+i2)
aoff=stib(tfo(0)+i2)
j3=stib(aoff+1)
jj=stib(vmkzp(0)+j3)
ii=0
do k=rhop1,n
ii=ii+stib(jj+stib(vfo(k)))
end do
j1=stib(tfa(0)+i2)
j2=stib(tfb(0)+i2)
igo=0
if(styp.gt.0)then
if((ii.lt.j1).or.(ii.gt.j2))then
igo=1
end if
else
if((ii.ge.j1).and.(ii.le.j2))then
igo=1
end if
end if
if(igo.ne.0)then
jgo=1
a1=stib(vmkmio(0)+j3)
b1=stib(vmkmao(0)+j3)
a2=stib(stib(tfills(0)+i2)+rhop1)
b2=stib(stib(tfiuls(0)+i2)+rhop1)
if(styp.gt.0)then
do i3=rhop1,n-1
i4=vlis(i3)
i5=stib(jj+stib(vfo(i4)))
i4=vdeg(i4)
a2=a2+(i5-stib(b1+i4))
b2=b2+(i5-stib(a1+i4))
if((a2.lt.0).or.(b2.gt.0))then
if(vi.gt.i3)then
vi=i3
vj=jj
vk=i5
end if
exit
end if
end do
else
do i3=rhop1,n-1
i4=vlis(i3)
i5=stib(jj+stib(vfo(i4)))
i4=vdeg(i4)
a2=a2+(i5-stib(a1+i4))
b2=b2+(i5-stib(b1+i4))
if((a2.ge.0).and.(b2.le.0))then
if(vi.gt.i3)then
vi=i3
vj=jj
vk=i5
end if
exit
end if
end do
end if
end if
end do
if(jgo.ne.0)then
if(vi.lt.n)then
vind=vi
vv=vlis(vind)
end if
158 continue
j1=vfo(vv)+vdeg(vv)+1
vfo(vv)=j1
do i1=rdeg(vv),1,-1
if(stib(j1+i1).ne.pmap(vv,i1))then
go to 104
end if
end do
if(stib(vj+stib(vfo(vv))).eq.vk)then
go to 158
else
go to 163
end if
end if
end if
do i=1,ntf
narg=stib(tfnarg(0)+i)
styp=stib(tftyp(0)+i)
atyp=abs(styp)
if((narg.eq.0).and.(atyp.eq.0))then
cycle
else if((narg.le.0).or.(atyp.le.0))then
mlin(1:srec)='gen43_2'
call mput(1,0,0,0)
else if(atyp.eq.6)then
cycle
else if(atyp.gt.10)then
cycle
end if
aoff=stib(tfo(0)+i)
if(atyp.eq.1)then
ii=0
do j=rhop1,n
do jj=rdeg(j)+1,sdeg(j),2
jk=pmap(j,jj)
do ij=1,narg
ik=stib(aoff+ij)
if(ik.eq.jk)then
ii=ii+1
else if(stib(link(0)+ik).eq.jk)then
ii=ii+1
end if
end do
end do
do jj=sdeg(j)+1,vdeg(j)
jk=pmap(j,jj)
do ij=1,narg
ik=stib(aoff+ij)
if(ik.eq.jk)then
ii=ii+1
else if(stib(link(0)+ik).eq.jk)then
ii=ii+1
end if
end do
end do
end do
else if(atyp.eq.5)then
ii=0
do j=rhop1,n
do jj=rdeg(j)+1,sdeg(j),2
jk=pmap(j,jj)
if(flow(amap(j,jj),0).lt.0)then
do ij=1,narg
ik=stib(aoff+ij)
if(ik.eq.jk)then
ii=ii+1
else if(stib(link(0)+ik).eq.jk)then
ii=ii+1
end if
end do
end if
end do
do jj=sdeg(j)+1,vdeg(j)
jk=pmap(j,jj)
if(flow(amap(j,jj),0).lt.0)then
do ij=1,narg
ik=stib(aoff+ij)
if(ik.eq.jk)then
ii=ii+1
else if(stib(link(0)+ik).eq.jk)then
ii=ii+1
end if
end do
end if
end do
end do
else if(atyp.lt.5)then
if(atyp.eq.2)then
j1=1
j2=2
else if(atyp.eq.3)then
j1=2
j2=2
else if(atyp.eq.4)then
j1=1
j2=1
else
mlin(1:srec)='gen43_3'
call mput(1,0,0,0)
end if
ii=0
do j=rhop1,n
do jj=rdeg(j)+1,sdeg(j),2
ij=flow(amap(j,jj),0)
if((ij.eq.j1).or.(ij.eq.j2))then
jk=pmap(j,jj)
do ij=1,narg
ik=stib(aoff+ij)
if(ik.eq.jk)then
ii=ii+1
else if(stib(link(0)+ik).eq.jk)then
ii=ii+1
end if
end do
end if
end do
do jj=sdeg(j)+1,vdeg(j)
ij=flow(amap(j,jj),0)
if((ij.eq.j1).or.(ij.eq.j2))then
jk=pmap(j,jj)
do ij=1,narg
ik=stib(aoff+ij)
if(ik.eq.jk)then
ii=ii+1
else if(stib(link(0)+ik).eq.jk)then
ii=ii+1
end if
end do
end if
end do
end do
else if(atyp.eq.7)then
ii=0
jj=stib(aoff+1)
j1=stib(pmkvpp(0)+jj)
j2=stib(pmkvlp(0)+jj)
do j=rhop1,n
do k=rdeg(j)+1,sdeg(j),2
kk=pmap(j,k)
ik=stib(j1+kk)
ij=stoz(stcb,ik,ik-1+stib(j2+kk))
ii=ii+ij
end do
do k=sdeg(j)+1,vdeg(j)
kk=pmap(j,k)
ik=stib(j1+kk)
ij=stoz(stcb,ik,ik-1+stib(j2+kk))
ii=ii+ij
end do
end do
end if
j1=stib(tfa(0)+i)
j2=stib(tfb(0)+i)
if(styp.gt.0)then
if((ii.lt.j1).or.(ii.gt.j2))then
go to 58
end if
else if(styp.lt.0)then
if((ii.ge.j1).and.(ii.le.j2))then
go to 58
end if
end if
end do
call sdiag(1,0)
call sdiag(2,0)
call sdiag(3,0)
if(cflag(1).eq.0)then
go to 58
end if
if(nloop.eq.0)then
go to 231
end if
do 236 i=rhop1,n
j=rdeg(i)+1
420 continue
if(j.le.vdeg(i))then
ii=vmap(i,j)
aux=gam(i,ii)
k=j+aux
if(i.ne.ii)then
430 continue
if(j.lt.k)then
kk=1
aux=pmap(i,j)
440 continue
if(j+kk.lt.k)then
if(aux.eq.pmap(i,j+kk))then
kk=kk+1
dsym=dsym*kk
go to 440
end if
end if
j=j+kk
go to 430
end if
else
450 continue
if(j.lt.k)then
kk=1
aux=pmap(i,j)
460 continue
if(j+kk+kk.lt.k)then
if(aux.eq.pmap(i,j+kk+kk))then
kk=kk+1
dsym=dsym*kk
go to 460
end if
end if
if(aux.eq.stib(link(0)+aux))then
do ii=1,kk
dsym=dsym+dsym
end do
end if
j=j+kk+kk
go to 450
end if
end if
go to 420
end if
236 continue
231 continue
do i=rhop1,n
do j=1,vdeg(i)
if(vmap(i,j).gt.nleg)then
k=pmap(i,j)
if(k.le.stib(link(0)+k))then
if(k.eq.stib(link(0)+k))then
if(i.gt.vmap(i,j))then
go to 250
end if
if((i.eq.vmap(i,j)).and.&
(mod(j-rdeg(i),2).eq.0))then
go to 250
end if
end if
k=amap(i,j)-nleg
ex(k)=i
ey(k)=j
end if
end if
250 continue
end do
end do
do i=rhop1,n
do j=1,vdeg(i)
xli(j)=0
end do
do j=1,vdeg(i)
k=stib(stib(vparto(0)+stib(vfo(i)))+j)
do i3=1,vdeg(i)
if(xli(i3).eq.0)then
if(pmap(i,i3).eq.k)then
xli(i3)=1
ovm(i,j)=i3
iovm(i,i3)=j
go to 14
end if
end if
end do
mlin(1:srec)='gen43_4'
call mput(1,0,0,0)
14 continue
end do
end do
dis=1
if(mflag(2).gt.0)then
go to 495
end if
nf=0
nf1=0
do i=rhop1,n
do j=1,vdeg(i)
k=ovm(i,j)
ii=pmap(i,k)
if(stib(antiq(0)+ii).ne.0)then
nf=nf+1
ij=vmap(i,k)
if(ij.le.nleg)then
ij=ps1(ij)
if(ij.le.inco)then
jj=1-2*ij
else
jj=2*(inco-ij)
end if
else if(ii.lt.stib(link(0)+ii))then
jj=2*(amap(i,k)-nleg)-1
else if(ii.gt.stib(link(0)+ii))then
jj=2*(amap(i,k)-nleg)
else if(i.lt.ij)then
jj=2*(amap(i,k)-nleg)-1
else if(i.gt.ij)then
jj=2*(amap(i,k)-nleg)
else if(mod(k-rdeg(i),2).ne.0)then
jj=2*(amap(i,k)-nleg)-1
else
jj=2*(amap(i,k)-nleg)
end if
if(ij.lt.0)then
nf1=nf1+1
end if
xli(nf)=jj
end if
end do
end do
266 continue
ii=0
do i1=1,nf
if(xli(i1).gt.ii)then
ii=xli(i1)
end if
end do
if(ii.gt.0)then
j1=0
j2=0
j3=nf
293 continue
if(xli(j3).gt.ii-2)then
j2=j1
j1=xli(j3)
if(j3.ne.nf)then
xli(j3)=xli(nf)
dis=-dis
end if
nf=nf-1
end if
if((j3.gt.1).and.(j2.eq.0))then
j3=j3-1
go to 293
end if
if(j1.gt.j2)then
dis=-dis
end if
go to 266
end if
do i1=1,inco
do i2=nf,1,-1
if(xli(i2).eq.1-2*i1)then
if(i2.ne.nf)then
xli(i2)=xli(nf)
dis=-dis
end if
nf=nf-1
go to 292
end if
end do
292 continue
end do
do i1=rho(1),inco+1,-1
do i2=nf,1,-1
if(xli(i2).eq.2*(inco-i1))then
if(i2.ne.nf)then
xli(i2)=xli(nf)
dis=-dis
end if
nf=nf-1
go to 302
end if
end do
302 continue
end do
if(nf.ne.0)then
mlin(1:srec)='gen43_5'
call mput(1,0,0,0)
end if
495 continue
if(cflag(1).gt.0)then
call compac
end if
go to 58
90 return
end subroutine
subroutine init0
use aski
use cbuffer
use intbuffer
use qintr
use wbuffer
use xyx
implicit none
save
character(len=1)::char0
integer::wztos
integer::fty(1:otype)
integer::i1,ii,jj,kk,ios
i1=0
diff0=max(128/storage_size(i1),1)
sibff(stibdst0)=sibuff
do i1=stibdst0,1,-1
sibff(i1-1)=sibff(i1)/2
if(sibff(i1).le.max(sibff(i1-1),diff0))then
call uput(9)
end if
end do
ios=1
allocate(xstib(sibff(0)+1),stat=ios)
if(ios.ne.0)then
call uput(0)
end if
stibdst(1)=0
stibas(1)=sibff(0)-diff0
stib=>xstib
stibs(1)=0
dcff0=max(128/storage_size(char0),1)
scbff(stcbdst0)=scbuff
do i1=stcbdst0,1,-1
scbff(i1-1)=scbff(i1)/2
if(scbff(i1).le.max(scbff(i1-1),dcff0))then
call uput(11)
end if
end do
ios=1
allocate(character(scbff(0)+1)::xstcb,stat=ios)
if(ios.ne.0)then
call uput(0)
end if
stcbdst(1)=0
stcbas(1)=scbff(0)-dcff0
stcb=>xstcb
stcbs(1)=0
wsint=15
ii=huge(i1)
jj=ii/10
kk=1
spten=0
do while(kk.le.jj)
spten=spten+1
kk=10*kk
end do
call aoib(spten+1)
stib(stibs(1))=eoa
kk=1
do i1=1,spten
kk=10*kk
stib(i1)=kk
end do
ii=1+(ii/2)
jj=0
kk=1
iref=1
do i1=1,4*spten
jj=1-jj
if(jj.eq.0)then
iref=2*iref
end if
kk=2*kk
if(kk.ge.ii)then
iref=iref-1
exit
end if
end do
if(iref.lt.32767)then
call uput(3)
end if
wiref=wztos(iref)
fty=[ctype,wtype,mtype,ltype,stype,otype]
do i1=1,size(fty)
if(fty(i1).ne.i1)then
call uput(18)
end if
end do
anull=0
aeq=iachar('=')
aminus=iachar('-')
anine=iachar('9')
aplus=iachar('+')
atimes=iachar('*')
azero=iachar('0')
ii=max(aplus,aminus,azero,anine,aeq)
jj=min(aplus,aminus,azero,anine,aeq)
aspace=iachar(' ')
dquote=iachar('"')
squote=iachar("'")
ii=max(ii,aspace,dquote,squote)
jj=min(jj,aspace,dquote,squote)
acomma=iachar(',')
ascol=iachar(';')
albra=iachar('[')
arbra=iachar(']')
alpar=iachar('(')
arpar=iachar(')')
ii=max(ii,acomma,ascol,albra,arbra,alpar,arpar)
jj=min(jj,acomma,ascol,albra,arbra,alpar,arpar)
alt=iachar('<')
agt=iachar('>')
aslash=iachar('/')
ausco=iachar('_')
ii=max(ii,alt,agt,aslash,ausco)
jj=min(jj,alt,agt,aslash,ausco)
abo(1)=aspace
abo(2)=126
abo(3)=65
abo(4)=90
abo(5)=97
abo(6)=122
ii=max(ii,abo(3),abo(4),abo(5),abo(6))
jj=min(jj,abo(3),abo(4),abo(5),abo(6))
if((jj.lt.abo(1)).or.(ii.gt.abo(2)))then
call uput(2)
end if
ii=0
if(anine-azero.ne.9)then
ii=1
else if(abo(4)-abo(3).ne.25)then
ii=1
else if(abo(6)-abo(5).ne.25)then
ii=1
else if((abo(4).ge.abo(5)).and.(abo(6).ge.abo(3)))then
ii=1
end if
if(ii.ne.0)then
call uput(2)
end if
abo(0)=abo(3)-abo(5)
alf=10
acr=13
acf(0:127)=[(-2,i1=0,127)]
acz(0:127)=[(-1,i1=0,127)]
acf(iachar('%'))=-1
acf(iachar('*'))=-1
acf(iachar('#'))=-1
acf(ausco)=0
do i1=azero,anine
acz(i1)=1
acf(i1)=1
end do
acz(aminus)=2
acz(aplus)=2
acz(atimes)=3
acz(alpar)=6
acz(arpar)=6
acz(acomma)=7
acz(aspace)=0
do i1=abo(3),abo(4)
acf(i1)=2
end do
do i1=abo(5),abo(6)
acz(i1)=5
acf(i1)=3
end do
stjbs(1)=stj0
stjb(1)=eoa
stjb(2)=nap
stjb(3)=nap
stjb(stj0)=eoa
punct1(0)=stibs(1)+1
ii=129
call aoib(ii)
stib(stibs(1))=eoa
do i1=0,127
stib(punct1(0)+i1)=0
end do
stib(punct1(0)+alf)=1
stib(punct1(0)+aspace)=1
stib(punct1(0)+acomma)=1
stib(punct1(0)+ascol)=1
stib(punct1(0)+aeq)=1
stib(punct1(0)+albra)=2
stib(punct1(0)+arbra)=2
stib(punct1(0)+alpar)=3
stib(punct1(0)+arpar)=3
stib(punct1(0)+aplus)=-7
stib(punct1(0)+aminus)=-8
stib(punct1(0)+atimes)=-9
return
end subroutine
subroutine initq
use aski
use cbuffer
use ikeys
use intbuffer
use qfiles
use qintr
use qmix
use qmodel
use qproc
use qsty
use wbuffer
use xyx
implicit none
save
integer::ii,ik,i1,jj,j1,kk,nxts,stibr,uc
integer::naop,nisk,nopt0,nopt1,nopt3,nopt5,nopt7,nopt8,nopt9
integer::weri(0:0),aopc(0:0),lsize(1:3),usize(1:4)
character(len=240)::coarg
lsize(1:3)=[2047,8184,2040]
usize(1:4)=[32767,134217720,131070,134217726]
if((scbuff.lt.lsize(2)).or.(scbuff.gt.usize(2)))then
call uput(11)
end if
if((swbuff.lt.lsize(2)).or.(swbuff.gt.usize(3)))then
call uput(12)
end if
if((sxbuff.lt.lsize(1)).or.(sxbuff.gt.usize(1)))then
call uput(13)
end if
if((sibuff.lt.lsize(3)).or.(sibuff.gt.usize(4)))then
call uput(9)
end if
if((sjbuff.lt.lsize(3)).or.(sjbuff.gt.usize(3)))then
call uput(10)
end if
if((srec.lt.81).or.(srec.gt.lsize(1)))then
call uput(14)
end if
if((sfrec.ge.min(srec,128)).or.(sfrec.le.48))then
call uput(15)
end if
if((ssrec.ge.min(srec,128)).or.(ssrec.le.48))then
call uput(16)
end if
if(maxpoint.ne.maxleg)then
call uput(17)
end if
ii=maxdeg
if(ii.lt.3)then
mlin(1:srec)="parameter 'maxdeg' not properly set"
call mput(1,0,0,0)
end if
ii=maxleg
if(ii.lt.3)then
mlin(1:srec)="parameter 'maxleg' not properly set"
call mput(1,0,0,0)
end if
ii=maxrho
if(ii.lt.3)then
mlin(1:srec)="parameter 'maxrho' not properly set"
call mput(1,0,0,0)
end if
ii=maxi
jj=max(maxleg,maxrho)
if(ii.lt.jj)then
mlin(1:srec)="parameter 'maxi' not properly set"
call mput(1,0,0,0)
end if
ii=maxn
jj=2*max(maxleg,maxrho)-2
if(ii.lt.jj)then
mlin(1:srec)="parameter 'maxn' not properly set"
call mput(1,0,0,0)
end if
ii=maxli
jj=2*max(maxleg,maxrho)+maxrho-3
if(ii.lt.jj)then
mlin(1:srec)="parameter 'maxli' not properly set"
call mput(1,0,0,0)
end if
do i1=1,size(iogp)
iogp(i1)=0
end do
do i1=1,size(cflag)
cflag(i1)=0
end do
do i1=1,size(dflag)
dflag(i1)=0
end do
do i1=1,size(jflag)
jflag(i1)=0
end do
do i1=1,size(mflag)
mflag(i1)=0
end do
j1=2*srec
do i1=1,j1
stxb(i1:i1)=achar(azero)
end do
j1=j1+1
stxb(j1:j1)=achar(ascol)
ii=0
call spak(stxb(1:j1),ii,0,0,0)
call spak('8171826570131914211416;',ii,1,0,0)
qvp=stib(stibs(1)-1)
qvl=stib(stibs(1))
call aoib(-2)
kpqs=[107,112,113,115]
call aocb(1)
stcb(stcbs(1):stcbs(1))=achar(kpqs(1))
momep(0)=stcbs(1)
momel(0)=1
jj=wsint+1
ndiagp=stcbs(1)
call aocb(jj)
ii=stcbs(1)
stcb(ii:ii)=achar(alf)
call sdiag(3,-1)
hhp=stcbs(1)
call aocb(jj)
ii=stcbs(1)
stcb(ii:ii)=achar(alf)
noffp=stcbs(1)
noffl=1
call aocb(jj)
ii=noffp+1
stcb(ii:ii)=achar(azero)
ii=stcbs(1)
stcb(ii:ii)=achar(alf)
doffp=stcbs(1)
doffl=1
call aocb(jj)
ii=doffp+1
stcb(ii:ii)=achar(azero)
ii=stcbs(1)
stcb(ii:ii)=achar(alf)
psym(0)=nap
dso=0
do i1=1,size(filesp)
filesp(i1)=nap
filesq(i1)=nap
filest(i1)=0
filesu(i1)=-1
end do
nxts=0
call spak('78797813808279806571658479828326000008;',nxts,0,0,0)
call spak('808279806571658479828326000008;',nxts,0,0,0)
call spak('4611;',nxts,0,0,0)
call spak('3511;',nxts,0,0,0)
call spak('4613;',nxts,0,0,0)
call spak('3513;',nxts,0,0,0)
call spak('866982847367698326000008;',nxts,0,0,0)
call spak('861368697182696983;',nxts,0,0,0)
call spak('036873657182657783;',nxts,0,0,0)
call spak('03718265807283;',nxts,0,0,0)
call spak('00000000000000847984657600290000;',nxts,0,0,0)
call spak('00677978786967846968006873657182657783;',nxts,0,0,0)
call spak('0067797878696784696800718265807283;',nxts,0,0,0)
call spak('0900;',nxts,0,0,0)
call spak('14141414;',nxts,0,0,0)
call spak('0000001010;',nxts,0,0,0)
call spak('00000008870109;',nxts,0,0,0)
call spak('141414;',nxts,0,0,0)
call spak('12007673786900;',nxts,0,0,0)
call spak('1200767378698300;',nxts,0,0,0)
call spak('000000876582787378712600;',nxts,0,0,0)
call spak('00000069828279822600;',nxts,0,0,0)
call spak('677978848279761370737669;',nxts,0,0,0)
call spak('776983836571691370737669;',nxts,0,0,0)
call spak('77796869761370737669;',nxts,0,0,0)
call spak('767366826582891370737669;',nxts,0,0,0)
call spak('83848976691370737669;',nxts,0,0,0)
call spak('7985848085841370737669;',nxts,0,0,0)
kk=2
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nxts+1
call trm(kk,ii)
xtstrl(0)=stibs(1)-ii
xtstrp(0)=xtstrl(0)-ii
ii=command_argument_count()
jj=0
if(ii.eq.1)then
call get_command_argument(ii,coarg,jj)
if(jj.lt.len(coarg))then
do i1=1,jj
if(iachar(coarg(i1:i1)).eq.aspace)then
jj=0
exit
end if
end do
end if
end if
if(jj.gt.0)then
filesp(1)=stcbs(1)+1
call aocb(jj+1)
filesq(1)=stcbs(1)-1
stcb(filesp(1):filesq(1))=coarg(1:jj)
stcb(stcbs(1):stcbs(1))=achar(alf)
else if(ii.gt.0)then
mlin(1:srec)='invalid program argument(s)'
call mput(1,0,0,0)
else
call spak('817182657014686584;',ii,1,0,0)
filesp(1)=stib(stibs(1)-1)
filesq(1)=filesp(1)-1+stib(stibs(1))
call aoib(-2)
end if
filest(1)=ctype
nfiles=1
uc=1
nisk=0
stibr=stibs(1)
call spak('677978707371,1,2,0,0;',nisk,0,uc,0)
call spak('7769838365716983,2,3,0,0;',nisk,0,uc,0)
call spak('798584808584,3,4,0,0;',nisk,0,uc,0)
call spak('8384897669,4,3,0,0;',nisk,0,uc,0)
call spak('767366,5,6,0,0;',nisk,0,uc,0)
call spak('7779686976,6,7,1,0;',nisk,0,uc,0)
call spak('7378,7,8,1,1;',nisk,0,uc,0)
call spak('798584,8,9,1,1;',nisk,0,uc,0)
call spak('7679798083,9,10,1,0;',nisk,0,uc,0)
call spak('76797980637779776978848577,10,11,0,0;',nisk,0,uc,0)
call spak('79808473797883,11,12,1,0;',nisk,0,uc,0)
call spak('737868698863797070836984,12,13,0,0;',nisk,0,uc,0)
call spak('84828569,13,14,0,1;',nisk,0,uc,0)
call spak('7065768369,14,13,0,1;',nisk,0,uc,0)
kk=6
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nisk+1
call trm(kk,ii)
pisk(0)=stibr
wisk(0)=pisk(0)+ii
aisk(0)=wisk(0)+ii
cisk(0)=aisk(0)+ii
jj=stibs(1)
call squiiz(aisk(0),jj,ii,kk-2,ik)
fisk(0)=cisk(0)+ik
oisk(0)=fisk(0)+ik
misk(0)=oisk(0)+ik
uc=1
nopt0=0
stibr=stibs(1)
call spak('787976738384,1,-1;',nopt0,0,uc,1)
call spak('73787079,3,1;',nopt0,0,uc,1)
call spak('86698266798369,3,2;',nopt0,0,uc,1)
call spak('787973787079,3,-1;',nopt0,0,uc,1)
call spak('7670,4,-1;',nopt0,0,uc,1)
call spak('7879667665787583,5,1;',nopt0,0,uc,1)
kk=4
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nopt0+1
call trm(kk,ii)
popt0(0)=stibr
wopt0(0)=popt0(0)+ii
aopt0(0)=wopt0(0)+ii
copt0(0)=aopt0(0)+ii
jj=stibs(1)
call squiiz(aopt0(0),jj,ii,kk-2,ik)
vopt0(0)=copt0(0)+ik
uc=1
nopt1=0
stibr=stibs(1)
call spak('787966827368716983,1,1;',nopt1,0,uc,1)
call spak('7978698073,1,1;',nopt1,0,uc,1)
call spak('66827368716983,1,-1;',nopt1,0,uc,1)
call spak('7978698082,1,-1;',nopt1,0,uc,1)
call spak('78798266827368716983,2,1;',nopt1,0,uc,1)
call spak('8266827368716983,2,-1;',nopt1,0,uc,1)
call spak('78798366827368716983,3,1;',nopt1,0,uc,1)
call spak('78798465688079766983,3,1;',nopt1,0,uc,1)
call spak('8366827368716983,3,-1;',nopt1,0,uc,1)
call spak('8465688079766983,3,-1;',nopt1,0,uc,1)
call spak('79788372697676,4,1;',nopt1,0,uc,1)
call spak('7970708372697676,4,-1;',nopt1,0,uc,1)
call spak('7978837269767688,5,1;',nopt1,0,uc,1)
call spak('797070837269767688,5,-1;',nopt1,0,uc,1)
call spak('7879837371776583,7,1;',nopt1,0,uc,1)
call spak('837371776583,7,-1;',nopt1,0,uc,1)
call spak('7879837865737683,8,1;',nopt1,0,uc,1)
call spak('837865737683,8,-1;',nopt1,0,uc,1)
call spak('6789677673,9,1;',nopt1,0,uc,1)
call spak('6789677682,9,-1;',nopt1,0,uc,1)
call spak('7978698673,10,1;',nopt1,0,uc,1)
call spak('7978698682,10,-1;',nopt1,0,uc,1)
call spak('667380658284,11,1;',nopt1,0,uc,1)
call spak('787978667380658284,11,-1;',nopt1,0,uc,1)
call spak('7879836976707679798083,12,1;',nopt1,0,uc,1)
call spak('836976707679798083,12,-1;',nopt1,0,uc,1)
call spak('787968737679798083,13,1;',nopt1,0,uc,1)
call spak('68737679798083,13,-1;',nopt1,0,uc,1)
call spak('78798065826576766976,14,1;',nopt1,0,uc,1)
call spak('8065826576766976,14,-1;',nopt1,0,uc,1)
call spak('837377807669,15,1;',nopt1,0,uc,1)
call spak('787984837377807669,15,-1;',nopt1,0,uc,1)
call spak('8479807976,16,1;',nopt1,0,uc,1)
call spak('707679798083,17,1;',nopt1,0,uc,1)
call spak('787984707679798083,17,-1;',nopt1,0,uc,1)
call spak('7879798084,25,1;',nopt1,0,uc,1)
kk=4
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nopt1+1
call trm(kk,ii)
popt1(0)=stibr
wopt1(0)=popt1(0)+ii
aopt1(0)=wopt1(0)+ii
copt1(0)=aopt1(0)+ii
jj=stibs(1)
call squiiz(aopt1(0),jj,ii,kk-2,ik)
vopt1(0)=copt1(0)+ik
uc=1
nopt3=0
stibr=stibs(1)
call spak('84828569,1;',nopt3,0,uc,0)
call spak('7065768369,-1;',nopt3,0,uc,0)
kk=3
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nopt3+1
call trm(kk,ii)
popt3(0)=stibr
wopt3(0)=popt3(0)+ii
aopt3(0)=wopt3(0)+ii
copt3(0)=aopt3(0)+ii
jj=stibs(1)
call squiiz(aopt3(0),jj,ii,kk-2,ik)
uc=1
nopt5=0
stibr=stibs(1)
call spak('7380827980,1;',nopt5,0,uc,0)
call spak('668273687169,2;',nopt5,0,uc,0)
call spak('83668273687169,3;',nopt5,0,uc,0)
call spak('82668273687169,4;',nopt5,0,uc,0)
call spak('6772798268,5;',nopt5,0,uc,0)
call spak('86838577,6;',nopt5,0,uc,0)
call spak('80838577,7;',nopt5,0,uc,0)
call spak('6976737875,11;',nopt5,0,uc,0)
call spak('8076737875,12;',nopt5,0,uc,0)
kk=3
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nopt5+1
call trm(kk,ii)
popt5(0)=stibr
wopt5(0)=popt5(0)+ii
aopt5(0)=wopt5(0)+ii
copt5(0)=aopt5(0)+ii
jj=stibs(1)
call squiiz(aopt5(0),jj,ii,kk-2,ik)
ii=stibs(1)-jj-1
mcopt5=0
ncopt5=0
do i1=1,ii
j1=stib(copt5(0)+i1)
if((j1.eq.0).or.(j1.lt.mcopt5))then
mlin(1:srec)='initq_1'
call mput(1,0,0,0)
else
if(j1.gt.mcopt5)then
ncopt5=ncopt5+1
end if
mcopt5=j1
end if
end do
uc=1
nopt7=0
stibr=stibs(1)
call spak('69886776,1;',nopt7,0,uc,0)
call spak('73786776,0;',nopt7,0,uc,0)
kk=3
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nopt7+1
call trm(kk,ii)
popt7(0)=stibr
wopt7(0)=popt7(0)+ii
aopt7(0)=wopt7(0)+ii
copt7(0)=aopt7(0)+ii
jj=stibs(1)
call squiiz(aopt7(0),jj,ii,kk-2,ik)
pot(0)=1
do i1=1,maxpot
pot(i1)=2*pot(i1-1)
end do
call spak('6885657613;',ii,1,0,0)
dprefp=stib(stibs(1)-1)
dprefl=stib(stibs(1))
call aoib(-2)
uc=0
nske=0
stibr=stibs(1)
call spak('8082797679718569,1,0,0,0,0;',nske,0,uc,0)
call spak('68736571826577,2,0,0,0,0;',nske,0,uc,0)
call spak('6980737679718569,3,0,0,0,0;',nske,0,uc,0)
call spak('69887384,4,0,0,0,0;',nske,0,uc,0)
call spak('677977776578686376797980,11,1,5,0,0;',nske,0,uc,0)
call spak('6779777765786863767378696376797980,12,1,5,1,0;',nske&
,0,uc,0)
call spak('73786376797980,13,1,2,0,0;',nske,0,uc,0)
call spak('736376797980,13,1,2,0,0;',nske,0,uc,0)
call spak('7985846376797980,14,1,2,0,0;',nske,0,uc,0)
call spak('796376797980,14,1,2,0,0;',nske,0,uc,0)
call spak('808279806571658479826376797980,15,1,2,0,0;',nske,0,&
uc,0)
call spak('806376797980,15,1,2,0,0;',nske,0,uc,0)
call spak('8669828469886376797980,16,1,2,0,0;',nske,0,uc,0)
call spak('866376797980,16,1,2,0,0;',nske,0,uc,0)
call spak('8265896376797980,17,1,2,8,0;',nske,0,uc,0)
call spak('826376797980,17,1,2,8,0;',nske,0,uc,0)
call spak('697868,19,1,7,31,0;',nske,0,uc,0)
call spak('66656775,22,2,7,0,0;',nske,0,uc,0)
call spak('78698776737869,29,5,7,0,0;',nske,0,uc,0)
call spak('7073697668,31,4,2,23,0;',nske,0,uc,0)
call spak('7779776978848577,32,4,2,23,0;',nske,0,uc,0)
call spak('68856576137073697668,33,4,2,23,0;',nske,0,uc,0)
call spak('68856576137779776978848577,34,4,2,23,0;',nske,0,uc,0)
call spak('70736976686383737178,35,4,2,23,0;',nske,0,uc,0)
call spak('70736976686384898069,40,4,2,23,0;',nske,0,uc,0)
call spak('80827980657165847982637378686988,41,4,2,20,0;',nske,&
0,uc,0)
call spak('80637378686988,41,4,2,20,0;',nske,0,uc,0)
call spak('7073697668637378686988,42,4,2,23,0;',nske,0,uc,0)
call spak('70637378686988,42,4,2,23,0;',nske,0,uc,0)
call spak('826589637378686988,43,4,2,23,0;',nske,0,uc,0)
call spak('82637378686988,43,4,2,23,0;',nske,0,uc,0)
call spak('866982846988637378686988,44,4,2,31,0;',nske,0,uc,0)
call spak('86637378686988,44,4,2,31,0;',nske,0,uc,0)
call spak('68856576137073697668637378686988,45,4,2,20,0;',nske,&
0,uc,0)
call spak('688565761370637378686988,45,4,2,20,0;',nske,0,uc,0)
call spak('6885657613826589637378686988,46,4,2,20,0;',nske,0,uc&
,0)
call spak('688565761382637378686988,46,4,2,20,0;',nske,0,uc,0)
call spak('6885657613866982846988637378686988,47,4,2,20,0;',&
nske,0,uc,0)
call spak('688565761386637378686988,47,4,2,20,0;',nske,0,uc,0)
call spak('86698284698863686971826969,48,4,2,31,0;',nske,0,uc,0)
call spak('8663686971826969,48,4,2,31,0;',nske,0,uc,0)
call spak('688565761386698284698863686971826969,49,4,2,20,0;',&
nske,0,uc,0)
call spak('68856576138663686971826969,49,4,2,20,0;',nske,0,uc,0)
call spak('766971637378686988,51,4,2,2,0;',nske,0,uc,0)
call spak('76637378686988,51,4,2,2,0;',nske,0,uc,0)
call spak('7378637378686988,52,4,2,1,0;',nske,0,uc,0)
call spak('73637378686988,52,4,2,1,0;',nske,0,uc,0)
call spak('798584637378686988,53,4,2,2,0;',nske,0,uc,0)
call spak('79637378686988,53,4,2,2,0;',nske,0,uc,0)
call spak('83737178,61,3,2,0,0;',nske,0,uc,0)
call spak('7773788583,62,3,2,0,0;',nske,0,uc,0)
call spak('68736571826577637378686988,71,3,6,0,0;',nske,0,uc,0)
call spak('838977776984828963706567847982,72,3,2,0,0;',nske,0,&
uc,0)
call spak('838977776984828963788577666982,73,3,2,0,0;',nske,0,&
uc,0)
call spak('8082798065716584798283,74,3,2,0,0;',nske,0,uc,0)
call spak('76697183,75,3,2,0,0;',nske,0,uc,0)
call spak('7679798083,76,3,2,0,0;',nske,0,uc,0)
call spak('8669828473676983,77,3,2,0,0;',nske,0,uc,0)
call spak('76697183637378,78,3,2,0,0;',nske,0,uc,0)
call spak('7669718363798584,79,3,2,0,0;',nske,0,uc,0)
call spak('80827971826577,81,3,5,0,0;',nske,0,uc,0)
call spak('677977776578686368658465,82,4,5,3,0;',nske,0,uc,0)
kk=7
jj=stibs(1)
if(jj-stibr.ne.kk*nske)then
mlin(1:srec)='initq_2'
call mput(1,0,0,0)
end if
call aoib(kk)
do i1=jj+1,stibs(1)
stib(i1)=eoa
end do
ii=nske+1
call trm(kk,ii)
pske(0)=stibr
wske(0)=pske(0)+ii
aske(0)=wske(0)+ii
kc(0)=aske(0)+ii
jj=stibs(1)
call squiiz(aske(0),jj,ii,kk-2,ik)
kla(0)=kc(0)+ik
kse(0)=kla(0)+ik
klo(0)=kse(0)+ik
bbc(0)=klo(0)+ik
uc=1
nopt8=0
stibr=stibs(1)
call spak('6988846982786576,5;',nopt8,0,uc,1)
call spak('78798465688079766983,1;',nopt8,0,uc,1)
kk=3
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nopt8+1
call trm(kk,ii)
popt8(0)=stibr
wopt8(0)=popt8(0)+ii
aopt8(0)=wopt8(0)+ii
copt8(0)=aopt8(0)+ii
jj=stibs(1)
call squiiz(aopt8(0),jj,ii,kk-2,ik)
uc=1
nopt9=0
stibr=stibs(1)
call spak('73788469716982,2;',nopt9,0,uc,0)
call spak('7378686988,3;',nopt9,0,uc,0)
kk=3
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nopt9+1
call trm(kk,ii)
popt9(0)=stibr
wopt9(0)=popt9(0)+ii
aopt9(0)=wopt9(0)+ii
copt9(0)=aopt9(0)+ii
jj=stibs(1)
call squiiz(aopt9(0),jj,ii,kk-2,ik)
aaf(0)=5
aaf(1)=6
aaf(2)=6
aaf(3)=5
aaf(4)=5
uc=0
nwer=0
call spak('777968697600676578006669008380767384007378847900687'&
//'38374797378840083856613777968697683,1;',nwer,0,0,0)
call spak('658400766965838400797869007073697668007383007879840'&
//'073780065788900866982846988,2;',nwer,0,0,0)
call spak('787900656784856576008082798065716584798283120065767'&
//'600707369766883008465717169680007698884698278657607,3;',&
nwer,0,0,0)
call spak('777968697613707376690072658300688580767367658469008'&
//'669828473676983,4;',nwer,0,0,0)
call spak('677978838465788400708578678473797800686984696784696'&
//'82600,5;',nwer,0,0,0)
call spak('787900866982846988007765890076737875138580008773847'&
//'200737867797773787100707369766800,6;',nwer,0,0,0)
call spak('787900866982846988007765890076737875138580008773847'&
//'200798584717973787100707369766800,7;',nwer,0,0,0)
call spak('698884698278657600707369766883006765787879840066690'&
//'0677978786967846968,8;',nwer,0,0,0)
call spak('796868007885776669820079700069888469827865760065788'&
//'47367797777858473787100707369766883,9;',nwer,0,0,0)
call spak('677269677500076779787073710700838465846977697884,10'&
//';',nwer,0,0,0)
call spak('67726967750007798084737978830700838465846977697884,'&
//'11;',nwer,0,0,0)
call spak('84827386736576000769767378750700838465846977697884,'&
//'12;',nwer,0,0,0)
call spak('737867797883738384697884000769767378750700838465846'&
//'977697884,13;',nwer,0,0,0)
call spak('107673787510008384658469776978848300826981857382690'&
//'0658400766965838400180076697183,14;',nwer,0,0,0)
call spak('766582716900737884697169820082696568007982007169786'&
//'98265846968,15;',nwer,0,0,0)
kk=3
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=nwer+1
call trm(kk,ii)
weri(0)=stibs(1)-ii
werb(0)=weri(0)-ii
wera(0)=werb(0)-ii
do i1=1,nwer
stib(werb(0)+i1)=stib(werb(0)+i1)-1+stib(wera(0)+i1)
if(stib(weri(0)+i1).ne.i1)then
mlin(1:srec)='initq_3'
call mput(1,0,0,0)
end if
end do
call aoib(-ii)
weri(0)=nap
uc=0
naop=0
call spak('656683,1,1,1;',naop,0,0,0)
call spak('8472698465,1,0,2;',naop,0,0,0)
call spak('6869768465,2,2,3;',naop,0,0,0)
call spak('777968,2,2,4;',naop,0,0,0)
call spak('777378,1,0,5;',naop,0,0,0)
call spak('776588,1,0,6;',naop,0,0,0)
call spak('8079876982,2,2,7;',naop,0,0,0)
kk=5
call aoib(kk)
jj=stibs(1)
do i1=1,kk
stib(jj)=eoa
jj=jj-1
end do
ii=naop+1
call trm(kk,ii)
aopc(0)=stibs(1)-ii
aopnb(0)=aopc(0)-ii
aopna(0)=aopnb(0)-ii
aopl(0)=aopna(0)-ii
aopp(0)=aopl(0)-ii
do i1=1,naop
if(stib(aopc(0)+i1).ne.i1)then
mlin(1:srec)='initq_4'
call mput(1,0,0,0)
end if
end do
call aoib(-ii)
aopc(0)=nap
nphi=0
nprop=0
npprop=0
nvert=0
nblok=0
nudk=0
ngmk=0
npmk=0
nvmk=0
return
end subroutine
subroutine emodel(jj,k1,k2,k3,k4)
use wbuffer
implicit none
save
integer,intent(in)::jj
integer::k1,k2,k3,k4
select case(jj)
case(1)
mlin(1:srec)='field appeared in previous propagator,'
case(2)
mlin(1:srec)='no propagators listed in'
case(3)
mlin(1:srec)='vertex degree is too small,'
case(4)
mlin(1:srec)='vertex degree is too large,'
case(5)
mlin(1:srec)='odd vertex,'
case(6)
mlin(1:srec)='unknown field in vertex,'
case(7)
mlin(1:srec)='no vertices listed in'
case(8)
mlin(1:srec)='multiply defined M-function,'
case(9)
mlin(1:srec)='wrong dimension for M-function,'
case(10)
mlin(1:srec)='unexpected M-function,'
case(11)
mlin(1:srec)='missing M-function,'
case(12)
mlin(1:srec)="M-constants cannot be prefixed with 'dual-'"
case(13)
mlin(1:srec)='M-functions cannot be used outside a loop,'
case(14)
mlin(1:srec)='f-functions cannot be used in the (strict) '&
//'vertex loop,'
case(15)
mlin(1:srec)='p-functions cannot be used in the (strict) '&
//'vertex loop,'
case(16)
mlin(1:srec)="p-functions cannot be prefixed with 'dual-'"
case(17)
mlin(1:srec)="v-functions cannot be prefixed with 'dual-' "&
//"except in the propagator_loop"
case(18)
mlin(1:srec)='M-function appearing in style-file was not '&
//'found in'
end select
call mput(k1,k2,k3,k4)
return
end subroutine
subroutine squiiz(ia,ib,jj,kk,uu)
use intbuffer
use qintr
use wbuffer
implicit none
save
integer,intent(in)::ia,ib,jj,kk
integer,intent(out)::uu
integer::i1,i2,i3,ii,j1,xp1,xp2,xp3
if((ia.le.0).or.(ia.ge.ib))then
go to 80
else if((jj.le.1).or.(kk.le.0))then
go to 80
else if(ib-ia.ne.jj*kk)then
go to 80
end if
ii=ia-jj
do i1=0,kk
ii=ii+jj
if(stib(ii).ne.eoa)then
go to 80
end if
end do
xp1=stibs(1)
call aoib(jj)
stib(stibs(1))=eoa
do i1=xp1+1,stibs(1)-1
stib(i1)=0
end do
i3=1
stib(xp1+1)=1
xp2=ia+1
do i1=2,jj-1
xp2=xp2+1
j1=xp2-jj
do i2=1,kk
j1=j1+jj
if(stib(j1).ne.stib(j1-1))then
i3=i3+1
stib(xp1+i1)=1
exit
end if
end do
end do
ii=i3+1
call aoib(ii*kk)
xp2=stibs(1)
do i1=kk-1,0,-1
stib(xp2)=eoa
xp2=xp2-ii
end do
uu=0
do i1=1,jj-1
if(stib(xp1+i1).ne.0)then
uu=uu+1
xp2=ia+i1-jj
xp3=xp1+jj+uu-ii
do i2=1,kk
xp2=xp2+jj
xp3=xp3+ii
stib(xp3)=stib(xp2)
end do
end if
stib(xp1+i1)=uu
end do
uu=uu+1
ii=xp1-ia
if(ii.gt.0)then
call xipht(xp1+1,stibs(1),-ii)
call aoib(-ii)
else
go to 80
end if
go to 90
80 continue
mlin(1:srec)='squiiz_1'
call mput(1,0,0,0)
90 return
end subroutine
subroutine stap(ia,ib,jf)
use aski
use cbuffer
use ikeys
use intbuffer
use qfiles
use qintr
use wbuffer
use xyx
implicit none
save
integer,intent(in)::ia,ib,jf
integer::i1,i2,id1,id2,ii,ij,ik,j1,j2,j3,j4,j5,j7,j8,j9,jj
integer::p0,p1,p2,sts
p0=stjbs(1)
call stpa(stcb,ia,ib)
p0=p0+1
jj=stjb(p0)
if(jj.le.0)then
go to 80
end if
p1=p0+1
p2=p1+3*(jj-1)
ii=p0-1
do i1=1,jj
ii=ii+3
end do
j7=stcbs(1)
ii=iachar(stcb(j7:j7))
if((ii.ne.alf).and.(ii.ne.0))then
mlin(1:srec)='stap_2'
call mput(1,0,0,0)
end if
j4=p1
j5=0
sts=0
j8=1
do i1=jj-2,0,-1
j3=j4
j4=j4+3
if((abs(stjb(j3)-4).eq.1).and.&
(abs(stjb(j4)-4).eq.1))then
if(stjb(j3).ne.stjb(j4))then
go to 80
end if
if(j5.eq.0)then
if(i1.ne.0)then
j5=j5+1
else
j5=j5-1
end if
j1=j3+1
j2=stjb(j1+1)
ii=j2-stjb(j1)
sts=sts+ii
call vaocb(sts)
if(ii-1.gt.0)then
j8=j8-1
end if
j9=j3
do i2=stjb(j1),j2-1
j7=j7+1
stcb(j7:j7)=stcb(i2:i2)
end do
end if
j2=stjb(j4+1)+1
ii=stjb(j4+2)-j2
if(ii.gt.0)then
j8=j8-1
j9=j4
sts=sts+ii
call vaocb(sts)
do i2=j2,stjb(j4+2)-1
j7=j7+1
stcb(j7:j7)=stcb(i2:i2)
end do
end if
stjb(j3)=0
else
j5=-j5
end if
if(j5.lt.0)then
if(j8.lt.0)then
sts=sts+2
j5=stcbs(1)+1
call aocb(sts)
j7=j7+1
stcb(j7:stcbs(1))=stcb(j5:j5)//achar(alf)
j2=j3+1
stjb(j2)=j5
stjb(j2+1)=j7
else
if(j3.ne.j9)then
stjb(j9)=stjb(j3)
stjb(j3)=0
end if
end if
j5=0
j7=stcbs(1)
j8=1
sts=0
end if
end do
j3=p1-3
j4=j3
do i1=1,jj
j4=j4+3
if(stjb(j4).ne.0)then
j3=j3+3
if(j3.ne.j4)then
stjb(j3)=stjb(j4)
stjb(j3+1)=stjb(j4+1)
stjb(j3+2)=stjb(j4+2)
end if
else
stjb(p0)=stjb(p0)-1
if(stjb(p0).le.0)then
go to 80
end if
end if
end do
if(stjb(p0).ne.jj)then
jj=stjb(p0)
p2=p1+3*(jj-1)
call aojb(-1)
ii=p2-p1+4
call aojb(ii)
end if
if(ib.lt.stcbs(1)-1)then
end if
do i1=1,jj
ii=p0-1+3*i1
end do
kpa(0)=1
kpa(1)=1
do i1=2,parkpa
kpa(i1)=0
end do
j4=p1
do i1=1,jj-1
j3=j4
j4=j4+3
j5=stjb(j3)
if((j5.le.0).or.(j5.gt.parkpa))then
go to 80
end if
kpa(0)=kpa(0)+1
kpa(j5)=kpa(j5)+1
if(stjb(j3).gt.1)then
if(stjb(j4).ne.1)then
go to 80
end if
end if
if(stjb(j4).gt.1)then
if(stjb(j3).ne.1)then
go to 80
end if
end if
end do
do i1=0,size(stapi)-1
stapi(i1)=0
end do
if(jf.eq.ctype)then
go to 100
else if(jf.eq.mtype)then
go to 200
end if
go to 80
100 continue
stapi(0)=ctype
if(kpa(0).lt.3)then
go to 80
else if(kpa(0)-2*kpa(1).gt.0)then
go to 80
end if
if(stjb(p1).ne.2)then
go to 80
else if(stjb(p1+3).ne.1)then
go to 80
else if(stjb(p1+4).ne.aeq)then
go to 80
else if(stjb(p2).ne.1)then
go to 80
else if(stjb(p2+1).ne.ascol)then
go to 80
end if
id1=stjb(p1+1)
id2=stjb(p1+2)
call mstr0(stcb,id1,id2,pisk(0),wisk(0),aisk(0),ij)
if(ij.le.0)then
go to 80
end if
ij=stib(cisk(0)+ij)
if(ij.le.0)then
go to 80
end if
stapi(2)=ij
call mstr0(stcb,id1,id2,popt3(0),wopt3(0),aopt3(0),ik)
if(stapi(1).eq.0)then
if((ik.eq.0).and.(jj.gt.6))then
if(jj.ne.3)then
j3=(jj-2)/5
if(jj-2.ne.5*j3)then
go to 110
end if
else
j3=0
end if
j4=p1+3
do i1=1,j3
j4=j4+6
if(stjb(j4-3).eq.1)then
go to 110
else if(stjb(j4).ne.1)then
go to 110
else if(stjb(j4+1).ne.albra)then
go to 110
end if
j4=j4+6
if(stjb(j4-3).eq.1)then
go to 110
else if(stjb(j4).ne.1)then
go to 110
else if(stjb(j4+1).ne.arbra)then
go to 110
end if
j4=j4+3
if(stjb(j4).ne.1)then
go to 110
else if(stjb(j4+1).ne.acomma)then
if(j4.ne.p2)then
go to 110
end if
end if
end do
stapi(1)=2
stapi(3)=j3
go to 90
end if
end if
110 continue
if(stapi(1).eq.0)then
if((ik.ne.0).and.(jj.gt.6))then
i1=p1+9
if(stjb(i1).ne.1)then
go to 120
else if(stjb(i1+1).ne.albra)then
go to 120
end if
i1=p2-3
if(stjb(i1).ne.1)then
go to 120
else if(stjb(i1+1).ne.arbra)then
go to 120
end if
do i1=p1+15,p2-9,6
if(stjb(i1).ne.1)then
go to 120
else if(stjb(i1+1).ne.acomma)then
go to 120
end if
end do
do i1=p1+12,p2-6,6
if(stjb(i1).eq.1)then
go to 120
end if
end do
if(mod(jj,2).eq.0)then
go to 120
end if
stapi(1)=2
stapi(3)=(jj-5)/2
go to 90
end if
end if
120 continue
if(stapi(1).eq.0)then
if((ik.eq.0).and.(jj.gt.2))then
do i1=p1+9,p2-6,6
if(stjb(i1).ne.1)then
go to 130
else if(stjb(i1+1).ne.acomma)then
go to 130
end if
end do
do i1=p1+6,p2-3,6
if(stjb(i1).eq.1)then
go to 130
end if
end do
j3=jj-2
if(j3-1.ne.0)then
if(mod(j3,2).ne.0)then
go to 130
end if
stapi(3)=j3/2
else
stapi(3)=0
end if
stapi(1)=2
go to 90
end if
end if
130 continue
if(stapi(1).eq.0)then
go to 80
else
go to 90
end if
200 continue
80 continue
stapi(0)=0
90 return
end subroutine
subroutine aocb(delta)
use cbuffer
use wbuffer
implicit none
save
integer,intent(in)::delta
integer::ii,jj,kk,ios
if(delta.gt.0)then
jj=(stcbas(1)-stcbs(1))-delta
kk=stcbdst(1)
do while ((jj.lt.0).and.(kk.lt.stcbdst0))
kk=kk+1
jj=(scbff(kk)-dcff0-stcbs(1))-delta
end do
if(jj.lt.0)then
call uput(6)
else if(kk.gt.stcbdst(1))then
stcbdst(1)=kk
ii=scbff(kk)+1
if(.not.allocated(ystcb))then
ios=1
allocate(character(ii)::ystcb,stat=ios)
if(ios.ne.0)then
call uput(0)
end if
ystcb(1:stcbas(1))=xstcb(1:stcbas(1))
ios=1
deallocate(xstcb,stat=ios)
stcb=>ystcb
else if(.not.allocated(xstcb))then
ios=1
allocate(character(ii)::xstcb,stat=ios)
if(ios.ne.0)then
call uput(0)
end if
xstcb(1:stcbas(1))=ystcb(1:stcbas(1))
ios=1
deallocate(ystcb,stat=ios)
stcb=>xstcb
else
mlin(1:srec)='aocb_1'
call mput(1,0,0,0)
end if
if(ios.ne.0)then
call uput(0)
end if
stcbas(1)=ii-dcff0
end if
stcbs(1)=stcbs(1)+delta
else if(delta.lt.0)then
stcbs(1)=stcbs(1)+delta
if(stcbs(1).lt.0)then
mlin(1:srec)='aocb_2'
call mput(1,0,0,0)
end if
end if
return
end subroutine
subroutine vaocb(delta)
use cbuffer
use wbuffer
implicit none
save
integer,intent(in)::delta
integer::ii
if((delta.lt.0).or.(stcbs(1).lt.0))then
mlin(1:srec)='vaocb_1'
call mput(1,0,0,0)
else if(stcbs(1).gt.stcbas(1)-delta)then
ii=delta
call aocb(ii)
call aocb(-ii)
end if
return
end subroutine
subroutine aoib(delta)
use intbuffer
use wbuffer
implicit none
save
integer,intent(in)::delta
integer::ii,jj,kk,ios
if(delta.gt.0)then
jj=(stibas(1)-stibs(1))-delta
kk=stibdst(1)
do while ((jj.lt.0).and.(kk.lt.stibdst0))
kk=kk+1
jj=(sibff(kk)-diff0-stibs(1))-delta
end do
if(jj.lt.0)then
call uput(4)
else if(kk.gt.stibdst(1))then
stibdst(1)=kk
ii=sibff(kk)+1
if(.not.allocated(ystib))then
ios=1
allocate(ystib(ii),stat=ios)
if(ios.ne.0)then
call uput(0)
end if
ystib(1:stibas(1))=xstib(1:stibas(1))
ios=1
deallocate(xstib,stat=ios)
stib=>ystib
else if(.not.allocated(xstib))then
ios=1
allocate(xstib(ii),stat=ios)
if(ios.ne.0)then
call uput(0)
end if
xstib(1:stibas(1))=ystib(1:stibas(1))
ios=1
deallocate(ystib,stat=ios)
stib=>xstib
else
mlin(1:srec)='aoib_1'
call mput(1,0,0,0)
end if
if(ios.ne.0)then
call uput(0)
end if
stibas(1)=ii-diff0
end if
stibs(1)=stibs(1)+delta
else if(delta.lt.0)then
stibs(1)=stibs(1)+delta
if(stibs(1).lt.0)then
mlin(1:srec)='aoib_2'
call mput(1,0,0,0)
end if
end if
return
end subroutine
subroutine aojb(delta)
use intbuffer
use qintr
use wbuffer
implicit none
save
integer,parameter::stj1=stj0-1
integer,parameter::sjb0=sjbuff-stj0
integer,intent(in)::delta
integer::dd,ii,jj,kk
jj=stjbs(1)
if(jj.lt.0)then
go to 80
else if(jj.lt.stj0)then
go to 80
else if(jj.gt.sjbuff)then
go to 80
end if
ii=stjb(jj)
if(ii.gt.0)then
go to 80
else if(ii.ne.eoa)then
go to 80
end if
ii=stjb(jj-1)
if(ii.gt.0)then
go to 80
else if(ii.ne.nap)then
go to 80
end if
ii=stjb(jj-stj1)
if(ii.gt.0)then
go to 80
else if(ii.ne.eoa)then
go to 80
end if
if(delta.gt.0)then
if(delta.le.sjb0)then
dd=delta+stj0
kk=(sjbuff-jj)-dd
if(kk.ge.0)then
go to 10
end if
end if
call uput(5)
10 continue
stjbs(1)=jj+dd
stjb(jj-1)=stjbs(1)
stjb(stjbs(1))=eoa
stjb(stjbs(1)-1)=nap
stjb(stjbs(1)-2)=jj
stjb(stjbs(1)-stj1)=eoa
go to 90
else if(delta+1.eq.0)then
kk=stjb(jj-2)
if(kk.lt.0)then
go to 80
else if(kk-stj0.lt.0)then
go to 80
else if(kk-sjb0.gt.0)then
go to 80
else if(kk-(jj-stj0).gt.0)then
go to 80
end if
ii=stjb(kk)
if(ii.gt.0)then
go to 80
else if(ii.ne.eoa)then
go to 80
end if
ii=stjb(kk-1)
if(ii.lt.0)then
go to 80
else if(ii.ne.stjbs(1))then
go to 80
end if
ii=stjb(kk-stj1)
if(ii.gt.0)then
go to 80
else if(ii.ne.eoa)then
go to 80
end if
stjbs(1)=kk
stjb(kk-1)=nap
go to 90
end if
80 continue
mlin(1:srec)='aojb_1'
call mput(1,0,0,0)
90 return
end subroutine
subroutine vaoib(delta)
use intbuffer
use wbuffer
implicit none
save
integer,intent(in)::delta
integer::ii
if((delta.gt.0).and.(stibs(1).ge.0))then
if((stibas(1)-delta).lt.stibs(1))then
ii=delta
call aoib(ii)
call aoib(-ii)
end if
else
mlin(1:srec)='vaoib_1'
call mput(1,0,0,0)
end if
return
end subroutine
subroutine vaojb(delta)
use intbuffer
use wbuffer
implicit none
save
integer,intent(in)::delta
if((delta.le.0).or.(stjbs(1).le.0))then
mlin(1:srec)='vaojb_1'
call mput(1,0,0,0)
end if
if(delta.gt.sjbuff-stjbs(1))then
call uput(5)
end if
return
end subroutine
subroutine mput(istop,nl1,nl2,nf1)
use aski
use cbuffer
use ikeys
use intbuffer
use qfiles
use qintr
use wbuffer
implicit none
save
integer,intent(in)::istop,nl1,nl2,nf1
integer::wztos
integer::cf2,cf6,jstop,slin1,slin2,slin3,stab
integer::i1,i2,j1,j2,j3,j4,j5,jj,f0
jstop=abs(istop)
if(jstop.gt.0)then
if(jflag(6).eq.1)then
call spp(0,0,0,0)
jflag(6)=2
end if
cf2=1
else
cf2=cflag(2)
end if
cf6=min(cflag(6),1)
if(cf6.gt.0)then
do i1=1,nfiles
if(filest(i1).eq.wtype)then
f0=filesu(i1)
exit
end if
end do
end if
slin1=ssrec-1
slin2=2*srec
slin3=(stcbas(1)-wiref)-stcbs(1)
stab=0
if(cf2.gt.0)then
call hrul(2,2)
if(jflag(7).eq.0)then
write(unit=*,fmt='(a)')
end if
write(unit=*,fmt='(a)')stxb(1:slin1)
end if
if(cf6*cflag(6).eq.1)then
call hrul(2,1)
write(unit=f0,fmt='(/,a)')stxb(1:sfrec)
end if
do j2=srec-1,1,-1
if(iachar(mlin(j2:j2)).ne.aspace)then
go to 30
end if
end do
j1=0
j2=0
go to 40
30 continue
do j1=1,j2
if(iachar(mlin(j1:j1)).ne.aspace)then
exit
end if
end do
40 continue
if(jflag(6).eq.0)then
if(cf2.gt.0)then
write(unit=*,fmt='(a)')"   error: "//mlin(j1:j2)
end if
go to 70
end if
j3=21+jstop
i1=stib(xtstrp(0)+j3)
i2=stib(xtstrl(0)+j3)
stab=i2-1
if(i2.ge.slin2)then
if(cf2.gt.0)then
write(unit=*,fmt='(/,a,/)')" error: mput_1"
end if
stop
end if
stxb(1:i2)=stcb(i1:i1-1+i2)
if(nf1.ge.0)then
if(j1.gt.0)then
j3=min(slin2-i2,j2-j1+1)
if(j3.gt.0)then
stxb(i2+1:i2+j3)=mlin(j1:j1-1+j3)
i2=i2+j3
end if
end if
end if
if(nf1.ne.0)then
j4=filest(abs(nf1))
if(j4.gt.otype)then
if(cf2.gt.0)then
write(unit=*,fmt='(/,a,/)')" error: mput_2"
end if
stop
end if
if(nf1.gt.0)then
if(i2.lt.slin2)then
i2=i2+1
stxb(i2:i2)=stcb(1:1)
end if
end if
j3=22+j4
i1=stib(xtstrl(0)+j3)
if(i2+i1.le.slin2)then
j3=stib(xtstrp(0)+j3)
stxb(i2+1:i2+i1)=stcb(j3:j3-1+i1)
end if
i2=i2+i1
if(nsfiles.gt.1)then
if((j4.eq.stype).or.(j4.eq.otype))then
if(i2.lt.slin2+1)then
i2=i2+2
stxb(i2-1:i2)=' #'
end if
j4=filesm(abs(nf1))
if(i2+wztos(j4).le.slin2)then
call dkar(j4,jj)
j5=stcbs(1)
call ctxb(i2,jj,j5)
end if
end if
end if
end if
if(nf1.lt.0)then
if(j1.gt.0)then
if(j2-j1+2.le.slin2-i2)then
stxb(i2+1:i2+2+(j2-j1))=stcb(1:1)//mlin(j1:j2)
i2=i2+(j2-j1)+2
end if
end if
end if
if(nl1.gt.0)then
if(nl1.eq.nl2)then
i1=stib(xtstrl(0)+19)
if(i2+i1.le.slin2)then
j3=stib(xtstrp(0)+19)
stxb(i2+1:i2+i1)=stcb(j3:j3-1+i1)
end if
i2=i2+i1
if(i2+wztos(nl1).le.slin2)then
if(slin3.ge.0)then
call dkar(nl1,jj)
j5=stcbs(1)
call ctxb(i2,jj,j5)
else
i1=stib(xtstrl(0)+18)
j3=stib(xtstrp(0)+18)
stxb(i2+1:i2+i1)=stcb(j3:j3-1+i1)
i2=i2+i1
end if
end if
else
i1=stib(xtstrl(0)+20)
if(i2+i1.le.slin2)then
j3=stib(xtstrp(0)+20)
stxb(i2+1:i2+i1)=stcb(j3:j3-1+i1)
end if
i2=i2+i1
if(i2+wztos(nl1).le.slin2)then
if(slin3.ge.0)then
call dkar(nl1,jj)
j5=stcbs(1)
call ctxb(i2,jj,j5)
else
i1=stib(xtstrl(0)+18)
j3=stib(xtstrp(0)+18)
stxb(i2+1:i2+i1)=stcb(j3:j3-1+i1)
i2=i2+i1
end if
end if
if(i2+1.le.slin2)then
stxb(i2+1:i2+1)=achar(aminus)
end if
i2=i2+1
if(i2+wztos(nl2).le.slin2)then
if(slin3.ge.0)then
call dkar(nl2,jj)
j5=stcbs(1)
call ctxb(i2,jj,j5)
else
i1=stib(xtstrl(0)+18)
j3=stib(xtstrp(0)+18)
stxb(i2+1:i2+i1)=stcb(j3:j3-1+i1)
i2=i2+i1
end if
end if
end if
end if
if(cf2.gt.0)then
if(i2.ge.slin1)then
j1=slin1
50 continue
if(j1.gt.0)then
if(iachar(stxb(j1:j1)).ne.aspace)then
j1=j1-1
go to 50
end if
end if
if(j1.gt.1)then
write(unit=*,fmt='(a)')stxb(1:j1-1)
end if
write(unit=*,fmt='(a)')stcb(1:stab)//stxb(j1:i2)
else
write(unit=*,fmt='(a)')stxb(1:i2)
end if
end if
if(cf6.gt.0)then
j2=0
do i1=1,i2
if(iachar(stxb(i1:i1)).eq.aspace)then
j2=j2+1
else
exit
end if
end do
j5=stib(xtstrl(0)+21+jstop)
do i1=j5+1,i2
if(iachar(stxb(i1:i1)).eq.aspace)then
j5=j5+1
else
exit
end if
end do
do i1=j5+1,i2
j2=j2+1
stxb(j2:j2)=stxb(i1:i1)
end do
if(j2.le.sfrec)then
write(unit=f0,fmt='(a)')stxb(2:j2)
else
j1=sfrec+1
60 continue
if(j1.gt.0)then
if(iachar(stxb(j1:j1)).ne.aspace)then
j1=j1-1
go to 60
end if
end if
if(j1.gt.2)then
write(unit=f0,fmt='(a)')stxb(2:j1-1)
end if
stab=min(3,srec)
write(unit=f0,fmt='(a)')stcb(1:stab)//stxb(j1:j2)
end if
end if
70 continue
if(cf2.gt.0)then
call hrul(2,2)
write(unit=*,fmt='(a,/)')stxb(1:slin1)
jflag(7)=10
end if
if(cf6.gt.0)then
call hrul(2,1)
write(unit=f0,fmt='(a)')stxb(1:sfrec)
cflag(6)=cflag(6)+1
end if
if(jstop.gt.0)then
if(istop.gt.0)then
call qclose(0,istop)
end if
stop
end if
return
end subroutine
subroutine hrul(ii,jj)
use aski
use wbuffer
implicit none
save
integer,intent(in)::ii,jj
integer::i1,j1
j1=max(0,jj)
j1=min(4,j1)
do i1=1,j1
stxb(i1:i1)=achar(aspace)
end do
if(ii.eq.1)then
do i1=j1+1,max(sfrec,ssrec)
stxb(i1:i1)=achar(aminus)
end do
else if(ii.eq.2)then
do i1=j1+1,max(sfrec,ssrec)
stxb(i1:i1)=achar(aeq)
end do
end if
return
end subroutine
subroutine uput(ind)
use aski
use wbuffer
implicit none
save
integer,intent(in)::ind
integer::i1,ii
select case(ind)
case(0)
mlin(1:srec)='memory allocation error'
case(1)
mlin(1:srec)='system/filesystem I/O error'
case(2)
mlin(1:srec)='invalid character set'
case(3)
mlin(1:srec)='largest available integer is too small'
case(4)
mlin(1:srec)="parameter 'sibuff' too small"
case(5)
mlin(1:srec)="parameter 'sjbuff' too small"
case(6)
mlin(1:srec)="parameter 'scbuff' too small"
case(7)
mlin(1:srec)="parameter 'swbuff0' too small"
case(8)
mlin(1:srec)="parameter 'sxbuff' too small"
case(9)
mlin(1:srec)="parameter 'sibuff' not properly set"
case(10)
mlin(1:srec)="parameter 'sjbuff' not properly set"
case(11)
mlin(1:srec)="parameter 'scbuff' not properly set"
case(12)
mlin(1:srec)="parameter 'swbuff' not properly set"
case(13)
mlin(1:srec)="parameter 'sxbuff' not properly set"
case(14)
mlin(1:srec)="parameter 'srec' not properly set"
case(15)
mlin(1:srec)="parameter 'sfrec' not properly set"
case(16)
mlin(1:srec)="parameter 'ssrec' not properly set"
case(17)
mlin(1:srec)="'maxpoint' should be equal to 'maxleg'"
case(18)
mlin(1:srec)="file-types not properly set"
case default
mlin(1:srec)='uput_1'
end select
ii=sxbuff-max(80,sfrec,ssrec)
do i1=srec,1,-1
if(iachar(mlin(i1:i1)).ne.aspace)then
if(ii.gt.0)then
call hrul(2,2)
write(unit=*,fmt='(/,a,/,a,/,a,/)')stxb(1:ssrec-1),&
"   error: "//mlin(1:i1),stxb(1:ssrec-1)
else
write(unit=*,fmt='(//,a,/)')"   error: "//mlin(1:i1)
end if
exit
end if
end do
stop
end subroutine
subroutine wput(sind,j1,j2)
use cbuffer
use intbuffer
use qintr
use wbuffer
implicit none
save
integer,intent(in)::sind,j1,j2
integer::i1,i2,ii,jj,kk,ll,aind
if(sind.gt.0)then
if(cflag(2).le.0)then
jflag(8)=min(jflag(8)+1,iref)
if(cflag(6).eq.0)then
go to 90
end if
end if
end if
aind=abs(sind)
ii=0
if(aind.gt.nwer)then
ii=1
else if(j1.lt.0)then
ii=1
else if(j1.eq.0)then
if(j2.ne.0)then
ii=1
end if
else
jj=j2-j1
if(jj.lt.0)then
ii=1
else if(jj.ge.srec-1)then
ii=1
end if
end if
if(ii.ne.0)then
mlin(1:srec)='wput_1'
call mput(1,0,0,0)
end if
i1=stib(wera(0)+aind)
i2=stib(werb(0)+aind)
ll=i2-i1
ii=0
if(i1.le.0)then
ii=1
else if(i1.ge.stcbs(1))then
ii=1
else if(ll.lt.0)then
ii=1
else if(ll.ge.srec)then
ii=1
end if
if(ii.ne.0)then
mlin(1:srec)='wput_2'
call mput(1,0,0,0)
end if
ll=ll+1
if(j1.ne.0)then
jj=(ll-j1)+(j2+1)
else
jj=0
end if
kk=srec-6
if(jj.gt.0)then
if(jj.lt.srec)then
mlin(1:srec)=stcb(i1:i2)//stcb(j1:j2)
else if(ll.le.kk)then
mlin(1:srec)=stcb(i1:i2)//stcb(j1:j1+(kk-ll))//' ...'
else
mlin(1:srec)=stcb(i1:i1+kk)//' ...'
end if
else
if(ll.lt.srec)then
mlin(1:srec)=stcb(i1:i2)
else
mlin(1:srec)=stcb(i1:i1+kk)//' ...'
end if
end if
if(sind.gt.0)then
call mput(0,0,0,0)
else
call mput(1,0,0,0)
end if
90 return
end subroutine
subroutine ccyc(xx,situ)
use qmix
use qproc
use wbuffer
implicit none
save
integer,intent(in)::xx
integer,intent(out)::situ
integer::i1,i2,i3,j1,j2,j3,jj,k1,k2,kk
integer::bb(1:maxli),cc(1:maxli)
if(xx.eq.1)then
if(nloop.le.1)then
situ=1
go to 90
end if
else
mlin(1:srec)='ccyc_2'
call mput(1,0,0,0)
end if
j1=0
do i1=rhop1,nli
if(flow(i1,0).lt.0)then
j1=j1+1
bb(j1)=j1
cc(j1)=i1
end if
end do
jj=1-net(-3)
if(jj.ge.0)then
go to 20
end if
k1=1
k2=net(-3)
do i1=1,net(-3)
j1=cc(i1)
do i2=i1+1,net(-3)
if(bb(i1).ne.bb(i2))then
kk=0
j2=cc(i2)
do i3=rhop1,rhop2
if(flow(j1,i3).ne.0)then
if(flow(j2,i3).ne.0)then
kk=1
go to 15
end if
end if
end do
15 continue
if(kk.ne.0)then
if(bb(k1).eq.1)then
k1=k1+1
end if
if(bb(k2).eq.1)then
k2=k2-1
end if
j2=min(bb(i1),bb(i2))
j3=max(bb(i1),bb(i2))
do i3=k1,k2
if(bb(i3).eq.j3)then
bb(i3)=j2
end if
end do
jj=jj+1
if(jj.eq.0)then
go to 20
end if
end if
end if
end do
end do
20 continue
if(jj.lt.0)then
situ=-1
else
situ=1
end if
90 return
end subroutine
subroutine model
use aski
use cbuffer
use ikeys
use intbuffer
use qfiles
use qintr
use qmix
use qmodel
use qproc
use qsty
use wbuffer
implicit none
save
integer::stdq,stds,stdw
integer::ii,ij,i1,i2,id1,id2,idin,ifile,is1,is2,ix,jj,j1
integer::dbl,dip,fpass,ibot,ic,itop,jbot,kid,kin,kk,knf,lastkp
integer::lastp,level,mpal,nest,newc,qc,quote,slin,top,vel,vin
integer::newid,nlin,off1,off2,pal,plm,psize,xfile
integer::apmkd(0:0),avmkd(0:0),llp(0:0)
integer::sucpal(0:11,0:11),acf0(0:127)
do i1=0,31
acf0(i1)=-1
end do
do i1=32,126
acf0(i1)=0
end do
acf0(127)=-1
acf0(alf)=1
acf0(aspace)=2
acf0(dquote)=3
acf0(squote)=4
acf0(iachar('('))=5
acf0(iachar(')'))=6
acf0(iachar(','))=7
acf0(iachar(';'))=8
acf0(aeq)=9
acf0(iachar('['))=10
acf0(iachar(']'))=11
do i1=0,11
do i2=0,11
sucpal(i1,i2)=-1
end do
end do
sucpal(0,2)=0
sucpal(0,10)=1
sucpal(1,0)=1
sucpal(1,1)=1
sucpal(1,2)=1
sucpal(1,7)=1
sucpal(1,8)=2
sucpal(1,9)=3
sucpal(1,11)=10
sucpal(2,0)=2
sucpal(2,1)=2
sucpal(2,2)=2
sucpal(2,9)=3
sucpal(3,0)=3
sucpal(3,1)=3
sucpal(3,2)=3
sucpal(3,3)=-1
sucpal(3,4)=5
sucpal(3,5)=6
sucpal(3,7)=2
sucpal(3,11)=10
sucpal(4,0)=4
sucpal(4,2)=4
sucpal(4,3)=3
sucpal(4,4)=4
sucpal(4,5)=4
sucpal(4,6)=4
sucpal(4,7)=4
sucpal(4,8)=4
sucpal(4,9)=4
sucpal(4,10)=4
sucpal(4,11)=4
sucpal(5,0)=5
sucpal(5,2)=5
sucpal(5,3)=5
sucpal(5,4)=3
sucpal(5,5)=5
sucpal(5,6)=5
sucpal(5,7)=5
sucpal(5,8)=5
sucpal(5,9)=5
sucpal(5,10)=5
sucpal(5,11)=5
sucpal(6,0)=6
sucpal(6,1)=6
sucpal(6,2)=6
sucpal(6,3)=-1
sucpal(6,4)=8
sucpal(6,6)=9
sucpal(6,7)=6
sucpal(7,0)=7
sucpal(7,2)=7
sucpal(7,3)=6
sucpal(7,4)=7
sucpal(7,5)=7
sucpal(7,6)=7
sucpal(7,7)=7
sucpal(7,8)=7
sucpal(7,9)=7
sucpal(7,10)=7
sucpal(7,11)=7
sucpal(8,0)=8
sucpal(8,2)=8
sucpal(8,3)=8
sucpal(8,4)=6
sucpal(8,5)=8
sucpal(8,6)=8
sucpal(8,7)=8
sucpal(8,8)=8
sucpal(8,9)=8
sucpal(8,10)=8
sucpal(8,11)=8
sucpal(9,1)=9
sucpal(9,2)=9
sucpal(9,7)=2
sucpal(9,11)=10
sucpal(10,1)=11
if(filesp(3).ne.nap)then
xfile=0
else
xfile=1
end if
05 continue
xfile=xfile+1
if(xfile.eq.1)then
do i1=1,nfiles
if(filest(i1).eq.ltype)then
if(filesp(i1).eq.nap)then
go to 05
end if
call qopen(i1)
ifile=i1
exit
end if
end do
else if(xfile.eq.2)then
do i1=1,nfiles
if(filest(i1).eq.mtype)then
call qopen(i1)
ifile=i1
exit
end if
end do
end if
nlin=0
dbl=0
newc=1
level=1
if(xfile.eq.1)then
lastp=0
lastkp=0
else
llp(0)=nap
nrho=0
end if
65 continue
dip=0
nest=0
70 continue
if(xfile.eq.1)then
go to 05
else if(xfile.eq.2)then
call qrr(ifile,nlin,slin,qc)
if(slin.eq.-1)then
go to 777
end if
end if
if(newc.eq.1)then
dbl=nlin
end if
jj=0
ii=stcbs(1)+1
if(slin.eq.0)then
jj=1
else if(stcb(ii:ii).eq.'#')then
jj=1
else if(stcb(ii:ii).eq.'%')then
jj=1
else if(stcb(ii:ii).eq.'*')then
jj=1
end if
if(jj.ne.0)then
if(newc.eq.1)then
go to 70
else
go to 521
end if
end if
ibot=stcbs(1)+1
itop=stcbs(1)+slin
do i1=ibot,itop
if(iachar(stcb(i1:i1)).ne.aspace)then
ibot=i1
go to 16
end if
end do
16 continue
ii=0
quote=0
do i1=ibot,itop
jj=iachar(stcb(i1:i1))
if(jj.eq.squote)then
if(nest.ne.1)then
go to 521
end if
if(quote.eq.0)then
quote=squote
end if
if(quote.eq.squote)then
ii=1-ii
end if
else if(jj.eq.dquote)then
if(nest.ne.1)then
go to 521
end if
if(quote.eq.0)then
quote=dquote
end if
if(quote.eq.dquote)then
ii=1-ii
end if
else if(ii.eq.0)then
if(stcb(i1:i1).eq.'[')then
if(nest.ne.0)then
go to 521
end if
nest=1
else if(stcb(i1:i1).eq.']')then
if(nest.ne.1)then
go to 521
end if
nest=2
else if(stcb(i1:i1).eq.',')then
if(nest.ne.1)then
go to 521
end if
quote=0
else if(jj.ne.aspace)then
if(nest.ne.1)then
go to 521
end if
end if
else
if(nest.ne.1)then
go to 521
end if
end if
end do
if(ii.ne.0)then
go to 521
end if
if(dbl.eq.nlin)then
jbot=ibot
end if
jj=slin+1
call aocb(jj)
if(stcb(itop:itop).ne.']')then
newc=0
go to 70
end if
if(nest.ne.2)then
go to 521
end if
newc=1
ibot=jbot
top=stcbs(1)
50 continue
pal=0
mpal=11
vel=0
vin=0
idin=0
kin=0
kid=0
knf=0
id1=0
id2=0
is1=0
is2=0
plm=0
ix=ibot
280 continue
ic=iachar(stcb(ix:ix))
if(sucpal(pal,acf0(ic)).lt.0)then
go to 521
end if
if(pal.lt.3)then
if(pal.eq.1)then
if(acf0(ic).eq.0)then
if(id1.eq.0)then
id1=ix
end if
id2=ix
else if(acf0(ic).gt.2)then
if(stcb(ix:ix).eq.',')then
if(level.eq.1)then
if(ngmk.eq.0)then
call aoib(1)
stib(stibs(1))=eoa
llp(0)=stibs(1)
end if
call rgmki(llp(0))
if(xfile.eq.1)then
go to 521
end if
level=2
fpass=1
call aoib(1)
stib(stibs(1))=eoa
llp(0)=stibs(1)
lastkp=0
off1=0
end if
else if(stcb(ix:ix).eq.';')then
if(level.lt.2)then
go to 521
end if
else if(stcb(ix:ix).eq.'=')then
if(level.ne.1.or.kin.ne.0)then
go to 521
end if
kin=1
go to 283
else if(stcb(ix:ix).eq.']')then
if(level.lt.2)then
go to 521
end if
end if
if(level.eq.2)then
idin=idin+1
if(idin.gt.4)then
go to 521
end if
go to 281
else if(level.eq.3)then
idin=idin+1
go to 282
end if
end if
else if(pal.eq.2)then
if(stcb(ix:ix).eq.'=')then
kin=kin+1
go to 283
else if(acf0(ic).eq.0)then
if(id1.eq.0)then
id1=ix
end if
id2=ix
end if
end if
else if(pal.lt.6)then
if(pal.eq.3)then
if(vel.ne.0.or.vin.ne.0)then
go to 521
end if
if(iachar(stcb(ix:ix)).eq.squote)then
plm=1-plm
if(is1.eq.0)then
is1=ix
end if
is2=ix
else
if(acf0(ic).eq.0)then
if(is1.eq.0)then
is1=ix
end if
is2=ix
else if(stcb(ix:ix).eq.'(')then
if(is1.ne.0)then
go to 521
end if
vel=1
else if(stcb(ix:ix).eq.','.or.stcb(ix:ix).eq.']')then
go to 285
end if
end if
else if(pal.eq.4)then
else if(pal.eq.5)then
if(vel.ne.0.or.vin.ne.0.or.plm.ne.1)then
go to 521
end if
if(iachar(stcb(ix:ix)).eq.squote)then
plm=1-plm
end if
is2=ix
end if
else if(pal.lt.9)then
if(pal.eq.6)then
if(vel.ne.1.or.plm.ne.0)then
go to 521
end if
if(iachar(stcb(ix:ix)).eq.squote)then
plm=1-plm
if(is1.eq.0)then
is1=ix
end if
is2=ix
else
if(acf0(ic).eq.0)then
if(is1.eq.0)then
is1=ix
end if
is2=ix
else if(stcb(ix:ix).eq.','.or.stcb(ix:ix).eq.')')then
vin=vin+1
go to 285
end if
end if
else if(pal.eq.7)then
else if(pal.eq.8)then
if(vel.ne.1.or.plm.ne.1)then
go to 521
end if
if(iachar(stcb(ix:ix)).eq.squote)then
plm=1-plm
end if
is2=ix
end if
else if(pal.lt.12)then
if(pal.eq.9)then
if(level.gt.2.or.level.le.0)then
go to 521
end if
if(stcb(ix:ix).eq.','.or.stcb(ix:ix).eq.']')then
vin=0
vel=0
end if
else if(pal.eq.10)then
else if(pal.eq.11)then
end if
else
go to 521
end if
287 continue
pal=sucpal(pal,acf0(ic))
if(ix.lt.top)then
ix=ix+1
go to 280
end if
if(vel.ne.0)then
go to 521
else if(pal.ne.mpal)then
go to 521
else if(plm.ne.0)then
go to 521
else if(id1.ne.0)then
go to 521
else if(is1.ne.0)then
go to 521
end if
if(level.eq.1)then
go to 65
else if(level.eq.2)then
if(fpass.eq.1)then
else
do i1=1,npmk
if(stib(apmkd(0)+i1).eq.3)then
if(stib(lastp+1).eq.0)then
call emodel(9,1,dbl,nlin,ifile)
end if
end if
if(stib(apmkd(0)+i1).ne.stib(pmkd(0)+i1))then
ii=1
if(stib(apmkd(0)+i1).eq.2)then
if(stib(pmkd(0)+i1).eq.3)then
ii=stib(lastp+1)
end if
end if
if(ii.ne.0)then
if(stib(apmkd(0)+i1).eq.0)then
call emodel(11,1,dbl,nlin,ifile)
else
call emodel(9,1,dbl,nlin,ifile)
end if
end if
end if
end do
nprop=nprop+1
end if
else if(level.eq.3)then
if(fpass.eq.0)then
do i1=1,nvmk
if(stib(avmkd(0)+i1).eq.0)then
call emodel(11,1,dbl,nlin,ifile)
end if
end do
jj=stib(lastp+1)
if(jj.lt.3)then
call emodel(3,1,dbl,nlin,ifile)
end if
ii=0
do i1=1,jj
if(stib(antiq(0)+stib(lastp+1+i1)).ne.0)then
ii=1-ii
end if
end do
if(ii.ne.0)then
call emodel(5,1,dbl,nlin,ifile)
end if
end if
end if
if(level.eq.2)then
if(fpass.eq.1)then
ii=stibs(1)+1
call aoib(4)
do i1=ii,stibs(1)
stib(i1)=eoa
end do
call trm(4,npmk+1)
ii=npmk+1
pmkd(0)=stibs(1)-ii
pmkl(0)=pmkd(0)-ii
pmkp(0)=pmkl(0)-ii
jj=pmkp(0)-llp(0)+1
call xipht(pmkp(0)+1,stibs(1),-jj)
call aoib(-jj)
pmkd(0)=pmkd(0)-jj
pmkl(0)=pmkl(0)-jj
pmkp(0)=pmkp(0)-jj
psize=6+2*npmk
ii=npmk+1
apmkd(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
end if
do i1=1,npmk
stib(apmkd(0)+i1)=0
end do
if(fpass.eq.1)then
fpass=0
if(idin.lt.3)then
go to 521
end if
go to 50
end if
else if(level.eq.3)then
if(fpass.eq.1)then
ii=stibs(1)+1
call aoib(3)
do i1=ii,stibs(1)
stib(i1)=eoa
end do
call trm(3,nvmk+1)
ii=nvmk+1
vmkl(0)=stibs(1)-ii
vmkp(0)=vmkl(0)-ii
avmkd(0)=vmkp(0)-ii
call xipht(vmkp(0),stibs(1),-1)
call aoib(-1)
vmkl(0)=vmkl(0)-1
vmkp(0)=vmkp(0)-1
avmkd(0)=avmkd(0)-1
else
nvert=nvert+1
end if
do i1=1,nvmk
stib(avmkd(0)+i1)=0
end do
if(fpass.eq.1)then
fpass=0
go to 50
end if
end if
go to 65
281 continue
if(idin.eq.3)then
if(stdw(stcb,id1,id2).eq.0)then
if(id1.ne.id2)then
go to 521
end if
ii=iachar(stcb(id1:id1))
if((ii.ne.aplus).and.(ii.ne.aminus))then
go to 521
end if
else
if(knf.ne.2)then
call emodel(6,1,dbl,nlin,ifile)
end if
knf=0
call rpi
level=3
fpass=1
lastp=0
lastkp=0
go to 50
end if
if(knf.ne.0)then
call emodel(1,1,dbl,nlin,ifile)
end if
if(fpass.eq.0)then
ii=iachar(stcb(id1:id1))
if(ii.eq.aplus)then
stib(off1+3)=0
else if(ii.eq.aminus)then
stib(off1+3)=1
else
go to 521
end if
stib(off1+4)=0
if(off2.ne.0)then
stib(off2+3)=stib(off1+3)
stib(off2+4)=0
end if
stib(lastp)=off1+1
stib(off1+1)=eoa
lastp=off1+1
if(off2.ne.0)then
stib(lastp)=off2+1
stib(off2+1)=eoa
lastp=off2+1
end if
end if
go to 284
else if(idin.eq.4)then
if(fpass.eq.0)then
call mstr0(stcb,id1,id2,popt8(0),wopt8(0),aopt8(0),ij)
if(ij.eq.0)then
go to 521
end if
stib(off1+4)=stib(copt8(0)+ij)
if(off2.ne.0)then
stib(off2+4)=stib(off1+4)
end if
end if
go to 284
end if
if(id1.le.0)then
go to 521
else if(id1.gt.id2)then
go to 521
else if(stdw(stcb,id1,id2).eq.0)then
mlin(1:srec)='unacceptable field name,'
call mput(1,dbl,nlin,2)
end if
if(fpass.eq.1)then
go to 284
end if
kk=id2-id1+1
if(kk.le.0)then
go to 521
end if
newid=1
if(nphi.gt.0)then
call mstr1(stcb,id1,id2,llp(0),4,5,ij)
if(ij.ne.0)then
newid=0
end if
end if
if(newid.eq.0)then
if(idin.eq.1)then
knf=1
else if(idin.eq.2)then
if(knf.eq.1)then
knf=2
else if(ij.ne.nphi)then
knf=1
end if
end if
end if
if(knf.ne.0)then
go to 284
end if
if(idin.eq.1)then
if(nprop.eq.0)then
call aoib(1)
stib(stibs(1))=eoa
llp(0)=stibs(1)
lastp=stibs(1)
end if
off1=stibs(1)
off2=0
call aoib(psize)
do i1=stibs(1)-psize+1,stibs(1)
stib(i1)=0
end do
stib(off1+5)=id1
stib(off1+6)=id2-id1+1
nphi=nphi+1
else if(idin.eq.2)then
newid=1
i1=stib(off1+5)
i2=stib(off1+6)
if(id2-id1+1.eq.i2)then
if(stcb(id1:id2).eq.stcb(i1:i1-1+i2))then
newid=0
end if
end if
if(newid.eq.0)then
stib(off1+2)=0
go to 284
end if
off2=stibs(1)
call aoib(psize)
do i1=stibs(1)-psize+1,stibs(1)
stib(i1)=0
end do
stib(off2+5)=id1
stib(off2+6)=id2-id1+1
stib(off1+2)=1
stib(off2+2)=-1
nphi=nphi+1
end if
284 continue
id1=0
go to 287
282 continue
if(id1.le.0)then
go to 521
else if(id1.gt.id2)then
go to 521
else if(stdw(stcb,id1,id2).eq.0)then
mlin(1:srec)='unacceptable field name,'
call mput(1,dbl,nlin,2)
end if
if(idin.gt.nrho)then
if(idin.gt.maxdeg)then
call emodel(4,1,dbl,nlin,ifile)
end if
nrho=idin
end if
if(fpass.eq.1)then
go to 286
end if
if(idin.eq.1)then
if(nvert.eq.0)then
call aoib(1)
stib(stibs(1))=eoa
llp(0)=stibs(1)
lastp=stibs(1)
end if
ii=stibs(1)+1
jj=2+2*nvmk
call aoib(jj)
stib(lastp)=ii
lastp=ii
stib(lastp)=eoa
do i1=lastp+1,stibs(1)
stib(i1)=0
end do
end if
call mstr0(stcb,id1,id2,namep(0),namel(0),nap,ij)
if(ij.eq.0)then
call emodel(6,1,dbl,nlin,ifile)
end if
call aoib(1)
stib(stibs(1))=0
stib(lastp+1+idin)=ij
stib(lastp+1)=stib(lastp+1)+1
286 continue
id1=0
go to 287
283 continue
if(id1.le.0)then
go to 521
else if(id1.gt.id2)then
go to 521
else if(stdw(stcb,id1,id2).eq.0)then
go to 521
end if
if(level.eq.1)then
if(kin.gt.1)then
go to 521
end if
if(ngmk.eq.0)then
call aoib(1)
stib(stibs(1))=eoa
llp(0)=stibs(1)
lastkp=stibs(1)
else
call mstr1(stcb,id1,id2,llp(0),1,2,ij)
if(ij.ne.0)then
call emodel(8,1,dbl,nlin,ifile)
end if
end if
ii=stibs(1)+1
call aoib(4)
call mstr0(stcb,id1,id2,udkp(0),udkl(0),nap,ij)
if(ij.eq.0)then
stib(stibs(1)-2)=id1
else
stib(stibs(1)-2)=stib(udkp(0)+ij)
end if
stib(stibs(1)-1)=id2-id1+1
stib(lastkp)=ii
lastkp=ii
stib(lastkp)=eoa
ngmk=ngmk+1
stib(stibs(1))=0
else if(level.eq.2)then
if(fpass.eq.1)then
call mstr0(stcb,id1,id2,gmkp(0),gmkl(0),nap,ij)
if(ij.ne.0)then
call emodel(8,1,dbl,nlin,ifile)
end if
if(npmk.eq.0)then
call aoib(1)
stib(stibs(1))=eoa
llp(0)=stibs(1)
lastkp=stibs(1)
else
call mstr1(stcb,id1,id2,llp(0),1,2,ij)
if(ij.ne.0)then
call emodel(8,1,dbl,nlin,ifile)
end if
end if
call mstr0(stcb,id1,id2,udkp(0),udkl(0),nap,ij)
ii=stibs(1)+1
call aoib(4)
if(ij.eq.0)then
stib(stibs(1)-2)=id1
stib(stibs(1)-1)=id2-id1+1
else
stib(stibs(1)-2)=stib(udkp(0)+ij)
stib(stibs(1)-1)=stib(udkl(0)+ij)
end if
stib(stibs(1))=0
stib(lastkp)=ii
lastkp=ii
stib(lastkp)=eoa
npmk=npmk+1
else
call mstr0(stcb,id1,id2,pmkp(0),pmkl(0),nap,kid)
if(kid.eq.0)then
call emodel(10,1,dbl,nlin,ifile)
end if
if(stib(apmkd(0)+kid).ne.0)then
call emodel(8,1,dbl,nlin,ifile)
end if
end if
else if(level.eq.3)then
if(fpass.eq.1)then
call mstr0(stcb,id1,id2,gmkp(0),gmkl(0),nap,ij)
if(ij.ne.0)then
call emodel(8,1,dbl,nlin,ifile)
end if
call mstr0(stcb,id1,id2,pmkp(0),pmkl(0),nap,ij)
if(ij.ne.0)then
call emodel(8,1,dbl,nlin,ifile)
end if
if(nvmk.eq.0)then
call aoib(1)
stib(stibs(1))=eoa
llp(0)=stibs(1)
lastkp=stibs(1)
else
call mstr1(stcb,id1,id2,llp(0),1,2,ij)
if(ij.ne.0)then
call emodel(8,1,dbl,nlin,ifile)
end if
end if
call mstr0(stcb,id1,id2,udkp(0),udkl(0),nap,ij)
ii=stibs(1)+1
call aoib(3)
if(ij.eq.0)then
stib(stibs(1)-1)=id1
stib(stibs(1))=id2-id1+1
else
stib(stibs(1)-1)=stib(udkp(0)+ij)
stib(stibs(1))=stib(udkl(0)+ij)
end if
stib(lastkp)=ii
lastkp=ii
stib(lastkp)=eoa
nvmk=nvmk+1
else
call mstr0(stcb,id1,id2,vmkp(0),vmkl(0),nap,kid)
if(kid.eq.0)then
call emodel(10,1,dbl,nlin,ifile)
end if
if(stib(avmkd(0)+kid).ne.0)then
call emodel(8,1,dbl,nlin,ifile)
end if
end if
end if
id1=0
go to 287
285 continue
if(is1.eq.0)then
go to 521
else if(is1.gt.is2)then
go to 521
end if
if(level.eq.1)then
call aoib(2)
j1=lastkp+3
if(vel.eq.0)then
stib(j1)=1
else
stib(j1)=vin+1
end if
if(vel.ne.0)then
call emodel(9,1,dbl,nlin,ifile)
end if
else if(level.eq.2)then
if(fpass.eq.1)then
j1=lastkp+3
if(vel.eq.0)then
stib(j1)=1
else
stib(j1)=3
end if
go to 184
else
j1=apmkd(0)+kid
if(vel.eq.0)then
stib(j1)=1
else
stib(j1)=vin+1
end if
if(stib(j1).gt.stib(pmkd(0)+kid))then
call emodel(9,1,dbl,nlin,ifile)
end if
end if
if(vin.gt.2)then
call emodel(9,1,dbl,nlin,ifile)
end if
else if(level.eq.3)then
if(vel.ne.0)then
go to 521
end if
if(fpass.eq.1)then
go to 184
else
stib(avmkd(0)+kid)=1
end if
end if
if(iachar(stcb(is1:is1)).eq.squote)then
kk=stds(stcb,is1,is2,1)
if(kk.lt.0)then
go to 521
else if(kk.gt.0)then
stcb(is1+1:is1+kk)=stcb(stcbs(1)+1:stcbs(1)+kk)
end if
stcb(is1:is1)=achar(anull)
stcb(is1+kk+1:is1+kk+1)=achar(anull)
is1=is1+1
ii=-(is2-is1-kk)
if(ii.lt.0)then
call cxipht(is2+1,stcbs(1),ii)
call aocb(ii)
ix=ix+ii
top=top+ii
if(level.eq.2)then
if(nprop.eq.0)then
do i1=1,npmk
if(stib(pmkp(0)+i1).gt.is2)then
stib(pmkp(0)+i1)=stib(pmkp(0)+i1)+ii
end if
end do
end if
else if(level.eq.3)then
if(nvert.eq.0)then
do i1=1,nvmk
if(stib(vmkp(0)+i1).gt.is2)then
stib(vmkp(0)+i1)=stib(vmkp(0)+i1)+ii
end if
end do
end if
end if
end if
else
if(stdw(stcb,is1,is2).eq.0)then
if(stdq(stcb,is1,is2).eq.0)then
go to 521
end if
end if
kk=is2-is1+1
end if
if(level.eq.1)then
stib(stibs(1)-1)=is1
stib(stibs(1))=kk
else if(level.eq.2)then
jj=5+2*kid
if(vel.ne.0)then
if(vin.eq.1)then
j1=off1+jj
else if(vin.eq.2)then
j1=off2+jj
end if
stib(j1)=is1
stib(j1+1)=kk
else
stib(off1+jj)=is1
stib(off1+jj+1)=kk
if(off2.ne.0)then
stib(off2+jj)=is1
stib(off2+jj+1)=kk
end if
end if
else if(level.eq.3)then
jj=lastp+stib(lastp+1)+2*kid
stib(jj)=is1
stib(jj+1)=kk
end if
184 continue
is1=0
go to 287
521 continue
mlin(1:srec)='wrong syntax,'
call mput(1,dbl,nlin,ifile)
777 continue
call rvi(llp(0))
return
end subroutine
subroutine rgmki(llpp)
use intbuffer
use qmodel
use qintr
use wbuffer
implicit none
save
integer,intent(in)::llpp
integer::ii,i1,j1,j2,j3,jj,tgmkd
if(ngmk.eq.0)then
gmkp(0)=nap
gmkl(0)=nap
gmkd(0)=nap
gmko(0)=nap
gmkvp(0)=nap
gmkvl(0)=nap
call aoib(-1)
go to 90
end if
ii=ngmk+1
gmkp(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
gmkl(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
gmkd(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
gmko(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
j1=0
tgmkd=0
jj=llpp
10 continue
jj=stib(jj)
if(jj.ne.eoa)then
j1=j1+1
stib(gmkp(0)+j1)=stib(jj+1)
stib(gmkl(0)+j1)=stib(jj+2)
stib(gmkd(0)+j1)=stib(jj+3)
stib(gmko(0)+j1)=tgmkd
tgmkd=tgmkd+max(1,stib(jj+3)-1)
go to 10
end if
ii=tgmkd+1
gmkvp(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
gmkvl(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
j1=gmkd(0)
j2=0
jj=llpp
20 continue
jj=stib(jj)
if(jj.ne.eoa)then
j1=j1+1
j3=jj+3
do i1=1,max(1,stib(j1)-1)
j2=j2+1
j3=j3+1
stib(gmkvp(0)+j2)=stib(j3)
j3=j3+1
stib(gmkvl(0)+j2)=stib(j3)
end do
go to 20
end if
ii=gmkp(0)-llpp+1
call xipht(gmkp(0)+1,stibs(1),-ii)
call aoib(-ii)
gmkp(0)=gmkp(0)-ii
gmkl(0)=gmkl(0)-ii
gmkd(0)=gmkd(0)-ii
gmko(0)=gmko(0)-ii
gmkvp(0)=gmkvp(0)-ii
gmkvl(0)=gmkvl(0)-ii
90 return
end subroutine
subroutine rpi
use cbuffer
use intbuffer
use qintr
use qmodel
use qproc
use wbuffer
implicit none
save
integer::stdw,stdz,stoz
integer::ii,ij,i1,i2,i3,jj,j1,j2,j3,j4,psize
if(nphi.eq.0)then
do i1=1,nfiles
if(filest(i1).eq.mtype)then
call emodel(2,1,0,0,i1)
exit
end if
end do
end if
ii=stibs(1)
psize=6+2*npmk
call aoib(psize)
do i1=ii+1,stibs(1)
stib(i1)=eoa
end do
jj=nphi+1
call trm(psize,jj)
blok(0)=stibs(1)-psize*jj
link(0)=blok(0)+jj
antiq(0)=link(0)+jj
tpc(0)=antiq(0)+jj
namep(0)=tpc(0)+jj
namel(0)=namep(0)+jj
if(stib(blok(0)).ne.eoa)then
stib(blok(0))=eoa
end if
do i1=1,nphi
j1=stib(tpc(0)+i1)
j2=stib(link(0)+i1)
stib(link(0)+i1)=j2+i1
if(j1.eq.5)then
mflag(5)=1
else
if(j1.eq.1)then
mflag(6)=1
end if
if(j2.ge.0)then
npprop=npprop+1
end if
end if
end do
if(npprop.eq.0)then
call wput(3,0,0)
end if
if(npmk.eq.0)then
pmkvpp(0)=nap
pmkvlp(0)=nap
pmkr(0)=nap
pmkvmi(0)=nap
pmkvma(0)=nap
go to 90
end if
ii=npmk+1
pmkvpp(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
pmkvlp(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
pmkr(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
ii=nphi+1
jj=namel(0)
do i1=1,npmk
jj=jj+ii
stib(pmkvpp(0)+i1)=jj
jj=jj+ii
stib(pmkvlp(0)+i1)=jj
end do
do i1=1,npmk
ii=stib(pmkvpp(0)+i1)
jj=stib(pmkvlp(0)+i1)
ij=0
do i2=4,2,-2
if(ij.eq.0)then
do i3=1,nphi
j1=stib(ii+i3)
j2=stib(ii+i3)-1+stib(jj+i3)
if(j1.gt.j2)then
ij=1
go to 40
else if(i2.eq.4)then
if(stdz(stcb,j1,j2).eq.0)then
go to 40
end if
else if(i2.eq.2)then
if(stdw(stcb,j1,j2).eq.0)then
go to 40
end if
end if
end do
ij=i2
40 continue
end if
end do
if(ij.eq.0)then
ij=1
end if
stib(pmkr(0)+i1)=ij
end do
ii=npmk+1
pmkvmi(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
pmkvma(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
do i1=1,npmk
if(stib(pmkr(0)+i1).eq.4)then
ii=stib(pmkvpp(0)+i1)
jj=stib(pmkvlp(0)+i1)
do i2=1,nphi
j1=stib(ii+i2)
j2=j1-1+stib(jj+i2)
ij=stoz(stcb,j1,j2)
if(i2.gt.1)then
if(ij.lt.j3)then
j3=ij
else if(ij.gt.j4)then
j4=ij
end if
else
j3=ij
j4=ij
end if
end do
if(j3.eq.j4)then
if(nphi.gt.1)then
j1=stib(pmkp(0)+i1)
j2=j1-1+stib(pmkl(0)+i1)
call wput(5,j1,j2)
end if
end if
else
j3=0
j4=0
end if
stib(pmkvmi(0)+i1)=j3
stib(pmkvma(0)+i1)=j4
end do
do i1=1,npmk
if(stib(pmkr(0)+i1).lt.3)then
ii=stib(pmkvpp(0)+i1)
jj=stib(pmkvlp(0)+i1)
do i2=1,nphi-1
if(stib(jj+i2).ne.stib(jj+i2+1))then
go to 85
else
j1=stib(ii+i2)
j2=stib(ii+i2+1)
j3=stib(jj+i2)-1
if(j3.gt.0)then
if(stcb(j1:j1+j3).ne.stcb(j2:j2+j3))then
go to 85
end if
end if
end if
end do
if(nphi.gt.1)then
j1=stib(pmkp(0)+i1)
j2=j1-1+stib(pmkl(0)+i1)
call wput(5,j1,j2)
end if
end if
85 continue
end do
90 return
end subroutine
subroutine rvi(llp)
use cbuffer
use intbuffer
use qintr
use qmix
use qmodel
use wbuffer
implicit none
save
integer::stdw,stdz,stoz
integer,intent(in)::llp
integer::bloka,h1,h2,hi,hj
integer::ii,ij,i1,i2,i3,i4,jj,jk,j1,j2,j3,j4,kk
integer::xtmp(1:maxdeg+1),nrot(1:maxdeg),rotvpo(1:maxdeg)
if(nvert.eq.0)then
do i1=1,nfiles
if(filest(i1).eq.mtype)then
call emodel(7,1,0,0,i1)
exit
end if
end do
end if
ii=nrho+1
nivd(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
ii=nvert+1
vval(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
vparto(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
jj=nvmk+1
vmkvpp(0)=stibs(1)
call aoib(jj)
stib(stibs(1))=eoa
vmkvlp(0)=stibs(1)
call aoib(jj)
stib(stibs(1))=eoa
j1=stibs(1)
call aoib(2*nvmk*ii)
do i1=1,nvmk
stib(vmkvpp(0)+i1)=j1
j1=j1+ii
stib(j1)=eoa
stib(vmkvlp(0)+i1)=j1
j1=j1+ii
stib(j1)=eoa
end do
if(j1.ne.stibs(1))then
mlin(1:srec)='rvi_4'
call mput(1,0,0,0)
end if
do i1=1,nrho
nrot(i1)=0
stib(nivd(0)+i1)=0
end do
j1=0
jj=llp
10 continue
jj=stib(jj)
if(jj.ne.eoa)then
j1=j1+1
j2=stib(jj+1)
stib(vval(0)+j1)=j2
j2=j2+nivd(0)
stib(j2)=stib(j2)+1
go to 10
end if
if((j1.ne.nvert).or.(nrho.lt.3))then
mlin(1:srec)='rvi_1'
call mput(1,0,0,0)
end if
j1=0
jj=llp
30 continue
jj=stib(jj)
if(jj.ne.eoa)then
j1=j1+1
j2=jj+stib(vval(0)+j1)
do i1=1,nvmk
j2=j2+2
stib(stib(vmkvpp(0)+i1)+j1)=stib(j2)
stib(stib(vmkvlp(0)+i1)+j1)=stib(j2+1)
end do
go to 30
end if
if(j1.ne.nvert)then
mlin(1:srec)='rvi_3'
call mput(1,0,0,0)
end if
kk=llp
if(llp.gt.1)then
if(stib(llp-1).eq.eoa)then
kk=llp-1
end if
end if
ij=stib(llp)
if(stib(llp).ne.eoa)then
stib(llp)=eoa
end if
j1=0
50 continue
jj=ij
if(jj.ne.eoa)then
j1=j1+1
ij=stib(ij)
j2=jj-kk+1
call xipht(jj+2,jj+1+stib(vval(0)+j1),-j2)
stib(vparto(0)+j1)=kk
kk=kk+stib(vval(0)+j1)
go to 50
end if
if(j1.ne.nvert)then
mlin(1:srec)='rvi_5'
call mput(1,0,0,0)
end if
kk=nivd(0)-kk-1
call xipht(nivd(0),stibs(1),-kk)
call aoib(-kk)
nivd(0)=nivd(0)-kk
vval(0)=vval(0)-kk
vparto(0)=vparto(0)-kk
vmkvpp(0)=vmkvpp(0)-kk
vmkvlp(0)=vmkvlp(0)-kk
do i1=1,nvmk
stib(vmkvpp(0)+i1)=stib(vmkvpp(0)+i1)-kk
stib(vmkvlp(0)+i1)=stib(vmkvlp(0)+i1)-kk
end do
stib(nivd(0))=eoa
jj=nvmk+1
vmkr(0)=stibs(1)
call aoib(jj)
stib(stibs(1))=eoa
vmks(0)=stibs(1)
call aoib(jj)
stib(stibs(1))=eoa
do i1=vmks(0)+1,vmks(0)+nvmk
stib(i1)=0
end do
do i1=1,nvmk
ii=stib(vmkvpp(0)+i1)
jj=stib(vmkvlp(0)+i1)
ij=0
do i2=4,2,-2
if(ij.eq.0)then
do i3=1,nvert
j1=stib(ii+i3)
j2=stib(ii+i3)-1+stib(jj+i3)
if(j1.gt.j2)then
ij=1
go to 90
else if(i2.eq.4)then
if(stdz(stcb,j1,j2).eq.0)then
go to 90
end if
else if(i2.eq.2)then
if(stdw(stcb,j1,j2).eq.0)then
go to 90
end if
end if
end do
ij=i2
90 continue
end if
end do
if(ij.eq.0)then
ij=1
end if
stib(vmkr(0)+i1)=ij
end do
do i1=1,nvmk
if(stib(vmkr(0)+i1).lt.3)then
ii=stib(vmkvpp(0)+i1)
jj=stib(vmkvlp(0)+i1)
do i2=1,nvert-1
if(stib(jj+i2).ne.stib(jj+i2+1))then
go to 23
else
j1=stib(ii+i2)
j2=stib(ii+i2+1)
j3=stib(jj+i2)-1
if(j3.gt.0)then
if(stcb(j1:j1+j3).ne.stcb(j2:j2+j3))then
go to 23
end if
end if
end if
end do
if(nvert.gt.1)then
j1=stib(vmkp(0)+i1)
j2=j1-1+stib(vmkl(0)+i1)
call wput(5,j1,j2)
end if
else if(stib(vmkr(0)+i1).eq.4)then
ii=stib(vmkvpp(0)+i1)
jj=stib(vmkvlp(0)+i1)
do i2=1,nvert
j1=stib(ii+i2)
j2=j1-1+stib(jj+i2)
if(nvert.gt.1)then
ij=stoz(stcb,j1,j2)
if(i2.gt.1)then
if(ij.lt.j3)then
j3=ij
else if(ij.gt.j4)then
j4=ij
end if
else
j3=ij
j4=ij
end if
end if
end do
if(j3.eq.j4)then
if(nvert.gt.1)then
j1=stib(vmkp(0)+i1)
j2=j1-1+stib(vmkl(0)+i1)
call wput(5,j1,j2)
end if
end if
end if
23 continue
end do
do 403 i1=1,nrho
if(stib(nivd(0)+i1).gt.0)then
rotvpo(i1)=stibs(1)
do i2=1,nvert
if(i1.eq.stib(vval(0)+i2))then
j1=stib(vparto(0)+i2)
do i3=1,i1
xtmp(i3)=stib(j1+i3)
end do
do i3=1,i1-1
do i4=i3+1,i1
if(xtmp(i3).gt.xtmp(i4))then
ii=xtmp(i3)
xtmp(i3)=xtmp(i4)
xtmp(i4)=ii
end if
end do
end do
go to 830
805 continue
do i3=i1-1,1,-1
if(xtmp(i3).lt.xtmp(i3+1))then
j1=i3
go to 810
end if
end do
go to 401
810 continue
do i3=j1+2,i1
if(xtmp(i3).le.xtmp(j1))then
j2=i3-1
go to 820
end if
end do
j2=i1
820 continue
ii=xtmp(j1)
xtmp(j1)=xtmp(j2)
xtmp(j2)=ii
jj=(i1-j1)/2
j1=j1+1
do i3=0,jj-1
ii=xtmp(j1+i3)
xtmp(j1+i3)=xtmp(i1-i3)
xtmp(i1-i3)=ii
end do
830 continue
j1=stibs(1)+1
call aoib(i1+1)
stib(j1)=i2
do i3=1,i1
stib(j1+i3)=xtmp(i3)
end do
nrot(i1)=nrot(i1)+1
go to 805
end if
401 continue
end do
j1=stibs(1)+1
call aoib(i1+1)
stib(j1)=0
do i2=1,i1
stib(j1+i2)=nphi+1
end do
end if
403 continue
call aoib(1)
stib(stibs(1))=eoa
do 790 i1=1,nrho
if((stib(nivd(0)+i1).gt.0).and.(nrot(i1).gt.1))then
h2=nrot(i1)
h1=(h2/2)+1
720 continue
if(h1.gt.1)then
h1=h1-1
ii=rotvpo(i1)+(i1+1)*(h1-1)
do i2=1,i1+1
xtmp(i2)=stib(ii+i2)
end do
else
ii=rotvpo(i1)+(i1+1)*(h2-1)
do i2=1,i1+1
xtmp(i2)=stib(ii+i2)
end do
do i2=1,i1+1
stib(ii+i2)=stib(rotvpo(i1)+i2)
end do
h2=h2-1
if(h2.eq.1)then
do i2=1,i1+1
stib(rotvpo(i1)+i2)=xtmp(i2)
end do
go to 790
end if
end if
hj=h1
740 continue
hi=hj
hj=hi+hi
if(hj.le.h2)then
if(hj.lt.h2)then
kk=0
jj=rotvpo(i1)+(i1+1)*(hj-1)
jk=jj+i1+1
j1=1
745 continue
if(j1.le.i1)then
j1=j1+1
if(stib(jj+j1).lt.stib(jk+j1))then
kk=-1
else if(stib(jj+j1).gt.stib(jk+j1))then
kk=1
else
go to 745
end if
end if
if(kk.eq.-1)then
hj=hj+1
else if(kk.eq.0)then
mflag(4)=1
end if
end if
kk=0
jj=rotvpo(i1)+(i1+1)*(hj-1)
j1=1
755 continue
if(j1.le.i1)then
j1=j1+1
if(xtmp(j1).lt.stib(jj+j1))then
kk=-1
else if(xtmp(j1).gt.stib(jj+j1))then
kk=1
else
go to 755
end if
end if
if(kk.eq.-1)then
ii=rotvpo(i1)+(i1+1)*(hi-1)
do i2=1,i1+1
stib(ii+i2)=stib(jj+i2)
end do
go to 740
else if(kk.eq.0)then
mflag(4)=1
end if
end if
ii=rotvpo(i1)+(i1+1)*(hi-1)
do i2=1,i1+1
stib(ii+i2)=xtmp(i2)
end do
go to 720
end if
790 continue
if(mflag(4).ne.0)then
call wput(4,0,0)
end if
do i1=1,nrho
if(nrot(i1).gt.0)then
ii=rotvpo(i1)
do i2=1,nrot(i1)
j1=ii+2
j2=j1+i1+1
jj=i1
84 continue
if(jj.gt.0)then
kk=stib(j2)-stib(j1)
if(kk.eq.0)then
jj=jj-1
j1=j1+1
j2=j2+1
go to 84
else if(kk.lt.0)then
mlin(1:srec)='rvi_2'
call mput(1,0,0,0)
end if
end if
ii=ii+i1+1
end do
end if
end do
ii=nrho+1
dpntro(0)=stibs(1)
call aoib(ii)
stib(stibs(1))=eoa
do i1=1,nrho
if(nrot(i1).gt.0)then
stib(dpntro(0)+i1)=stibs(1)
call aoib(nphi+1)
stib(stibs(1))=nap
ii=rotvpo(i1)+2
jj=0
do i2=1,nrot(i1)+1
if(stib(ii).ne.jj)then
if(stib(ii).le.nphi)then
kk=stib(ii)
else
kk=nphi
end if
do i3=jj+1,kk
stib(stib(dpntro(0)+i1)+i3)=ii-1
end do
jj=stib(ii)
end if
ii=ii+i1+1
end do
else
stib(dpntro(0)+i1)=nap
end if
end do
stib(stibs(1))=eoa
bloka=stibs(1)
ii=nphi
call vaoib(ii)
do i1=blok(0)+1,blok(0)+nphi
stib(i1)=0
end do
j1=0
j2=0
31 continue
if(j1.lt.nphi)then
nblok=nblok+1
j3=nblok
32 continue
if(stib(blok(0)+j3).gt.0)then
j3=j3+1
go to 32
end if
j1=j1+1
j2=j1
stib(bloka+j1)=j3
stib(blok(0)+j3)=nblok
ii=stib(link(0)+j3)
jj=blok(0)+ii
if(stib(jj).eq.0)then
j1=j1+1
stib(bloka+j1)=ii
stib(jj)=nblok
end if
33 continue
if(j2.le.j1)then
jj=stib(bloka+j2)
do i1=2,nrho
if(stib(dpntro(0)+i1).gt.0)then
j3=stib(stib(dpntro(0)+i1)+jj)
36 continue
if(stib(j3+1).eq.jj)then
ii=stib(j3+2)
if(stib(blok(0)+ii).eq.0)then
j1=j1+1
stib(bloka+j1)=ii
stib(blok(0)+ii)=nblok
end if
ii=stib(link(0)+ii)
if(stib(blok(0)+ii).eq.0)then
j1=j1+1
stib(bloka+j1)=ii
stib(blok(0)+ii)=nblok
end if
j3=j3+i1+1
go to 36
end if
end if
end do
j2=j2+1
go to 33
end if
go to 31
end if
if(nblok.gt.1)then
call wput(1,0,0)
end if
j1=0
34 continue
if(j1.lt.nphi)then
j1=j1+1
do i1=1,nrho
if(stib(nivd(0)+i1).gt.0)then
if(stib(stib(stib(dpntro(0)+i1)+j1)+1).eq.j1)then
go to 34
end if
end if
end do
call wput(2,0,0)
end if
return
end subroutine
