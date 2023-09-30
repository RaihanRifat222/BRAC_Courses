*version 9.1 730506432
u 60
R? 5
V? 2
@libraries
@analysis
@targets
@attributes
@translators
a 0 u 13 0 0 0 hln 100 PCBOARDS=PCB
a 0 u 13 0 0 0 hln 100 PSPICE=PSPICE
a 0 u 13 0 0 0 hln 100 XILINX=XILINX
@setup
unconnectedPins 0
connectViaLabel 0
connectViaLocalLabels 0
NoStim4ExtIFPortsWarnings 1
AutoGenStim4ExtIFPorts 1
@index
pageloc 1 0 2041 
@status
n 0 121:10:03:14:08:22;1635926902 e 
s 2832 121:10:03:14:08:22;1635926902 e 
*page 1 0 970 720 iA
@ports
port 7 GND_ANALOG 70 210 h
@parts
part 4 r 330 130 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R3
a 0 ap 9 0 15 0 hln 100 REFDES=R3
part 5 r 330 190 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R4
a 0 ap 9 0 15 0 hln 100 REFDES=R4
part 2 r 140 50 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
a 0 u 13 0 15 25 hln 100 VALUE=10k
part 3 r 140 110 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R2
a 0 ap 9 0 15 0 hln 100 REFDES=R2
a 0 u 13 0 15 25 hln 100 VALUE=10k
part 6 VDC 70 110 h
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V1
a 1 ap 9 0 24 7 hcn 100 REFDES=V1
a 1 u 13 0 -11 18 hcn 100 DC=12V
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 300 95 hrn 100 PAGENO=1
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
@conn
w 13
s 110 50 140 50 16
s 110 50 110 90 20
s 110 110 140 110 22
s 110 90 110 110 26
s 70 90 110 90 24
s 70 110 70 90 29
w 48
s 330 150 330 130 47
w 32
s 180 50 210 50 31
s 210 50 210 90 37
s 210 110 180 110 39
s 210 90 210 110 51
s 210 90 330 90 49
w 53
s 330 190 70 190 52
s 70 190 70 150 54
s 70 190 70 210 58
@junction
j 140 50
+ p 2 1
+ w 13
j 110 90
+ w 13
+ w 13
j 70 110
+ p 6 +
+ w 13
j 140 110
+ p 3 1
+ w 13
j 180 50
+ p 2 2
+ w 32
j 180 110
+ p 3 2
+ w 32
j 330 150
+ p 5 2
+ w 48
j 330 130
+ p 4 1
+ w 48
j 330 90
+ p 4 2
+ w 32
j 210 90
+ w 32
+ w 32
j 330 190
+ p 5 1
+ w 53
j 70 150
+ p 6 -
+ w 53
j 70 210
+ s 7
+ w 53
j 70 190
+ w 53
+ w 53
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
