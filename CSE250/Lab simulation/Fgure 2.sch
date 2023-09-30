*version 9.1 7083920
u 51
R? 7
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
pageloc 1 0 2689 
@status
n 0 121:10:03:14:16:05;1635927365 e 
s 2832 121:10:03:14:16:05;1635927365 e 
*page 1 0 970 720 iA
@ports
port 9 GND_ANALOG 40 330 h
@parts
part 7 r 630 210 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R6
a 0 ap 9 0 15 0 hln 100 REFDES=R6
part 5 r 430 210 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R4
a 0 ap 9 0 15 0 hln 100 REFDES=R4
part 3 r 220 220 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R2
a 0 ap 9 0 15 0 hln 100 REFDES=R2
part 2 r 110 110 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
a 0 u 13 0 15 25 hln 100 VALUE=10k
part 4 r 310 110 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R3
a 0 ap 9 0 15 0 hln 100 REFDES=R3
a 0 u 13 0 15 25 hln 100 VALUE=10k
part 6 r 530 110 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R5
a 0 ap 9 0 15 0 hln 100 REFDES=R5
a 0 u 13 0 15 25 hln 100 VALUE=10k
part 8 VDC 40 190 h
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
w 11
s 40 190 40 110 10
s 40 110 110 110 12
w 15
s 150 110 220 110 14
s 220 110 220 180 19
s 220 110 310 110 29
w 32
s 350 110 430 110 31
s 430 110 430 170 33
s 430 110 530 110 39
w 42
s 570 110 630 110 41
s 630 110 630 170 43
w 46
s 630 210 630 300 45
s 430 210 430 300 35
s 220 220 220 300 23
s 220 300 40 300 25
s 40 300 40 230 27
s 430 300 220 300 37
s 630 300 430 300 47
s 40 300 40 330 49
@junction
j 40 190
+ p 8 +
+ w 11
j 110 110
+ p 2 1
+ w 11
j 150 110
+ p 2 2
+ w 15
j 220 180
+ p 3 2
+ w 15
j 310 110
+ p 4 1
+ w 15
j 220 110
+ w 15
+ w 15
j 350 110
+ p 4 2
+ w 32
j 430 170
+ p 5 2
+ w 32
j 220 300
+ w 46
+ w 46
j 530 110
+ p 6 1
+ w 32
j 430 110
+ w 32
+ w 32
j 570 110
+ p 6 2
+ w 42
j 630 170
+ p 7 2
+ w 42
j 630 210
+ p 7 1
+ w 46
j 430 210
+ p 5 1
+ w 46
j 220 220
+ p 3 1
+ w 46
j 40 230
+ p 8 -
+ w 46
j 430 300
+ w 46
+ w 46
j 40 330
+ s 9
+ w 46
j 40 300
+ w 46
+ w 46
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
