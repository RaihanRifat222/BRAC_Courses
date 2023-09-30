*version 9.1 610037216
u 45
R? 7
V? 4
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
pageloc 1 0 2718 
@status
n 0 121:10:20:03:55:31;1637358931 e 
s 2832 121:10:20:03:55:35;1637358935 e 
*page 1 0 970 720 iA
@ports
port 44 GND_ANALOG 310 260 h
@parts
part 2 r 300 100 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R1
a 0 ap 9 0 15 0 hln 100 REFDES=R1
a 0 u 13 0 15 25 hln 100 VALUE=12
part 3 r 240 170 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R2
a 0 ap 9 0 15 0 hln 100 REFDES=R2
a 0 u 13 0 15 25 hln 100 VALUE=12
part 4 r 340 170 h
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R3
a 0 ap 9 0 15 0 hln 100 REFDES=R3
a 0 u 13 0 15 25 hln 100 VALUE=8
part 10 VDC 450 170 d
a 0 sp 0 0 22 37 hln 100 PART=VDC
a 0 a 0:13 0 0 0 hln 100 PKGREF=V3
a 1 ap 9 0 24 7 hcn 100 REFDES=V3
a 1 u 13 0 -11 18 hcn 100 DC=20V
part 6 r 310 260 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R5
a 0 ap 9 0 15 0 hln 100 REFDES=R5
a 0 u 13 0 15 25 hln 100 VALUE=4
part 7 r 190 250 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R6
a 0 ap 9 0 15 0 hln 100 REFDES=R6
a 0 u 13 0 15 25 hln 100 VALUE=6
part 5 r 480 260 v
a 0 sp 0 0 0 10 hlb 100 PART=r
a 0 s 0:13 0 0 0 hln 100 PKGTYPE=RC05
a 0 s 0:13 0 0 0 hln 100 GATE=
a 0 a 0:13 0 0 0 hln 100 PKGREF=R4
a 0 ap 9 0 15 0 hln 100 REFDES=R4
a 0 u 13 0 15 25 hln 100 VALUE=10
part 1 titleblk 970 720 h
a 1 s 13 0 350 10 hcn 100 PAGESIZE=A
a 1 s 13 0 180 60 hcn 100 PAGETITLE=
a 1 s 13 0 300 95 hrn 100 PAGENO=1
a 1 s 13 0 340 95 hrn 100 PAGECOUNT=1
@conn
w 17
s 300 100 190 100 16
s 190 100 190 170 18
s 190 170 190 210 22
s 240 170 190 170 20
w 26
s 380 170 410 170 25
w 28
s 450 170 480 170 27
s 480 170 480 220 29
s 480 170 480 100 31
s 480 100 340 100 33
w 24
s 280 170 310 170 23
s 310 170 340 170 37
s 310 220 310 170 35
w 39
s 310 260 190 260 38
s 190 260 190 250 40
s 480 260 310 260 42
@junction
j 300 100
+ p 2 1
+ w 17
j 240 170
+ p 3 1
+ w 17
j 190 170
+ w 17
+ w 17
j 340 170
+ p 4 1
+ w 24
j 280 170
+ p 3 2
+ w 24
j 410 170
+ p 10 -
+ w 26
j 380 170
+ p 4 2
+ w 26
j 450 170
+ p 10 +
+ w 28
j 480 220
+ p 5 2
+ w 28
j 480 170
+ w 28
+ w 28
j 340 100
+ p 2 2
+ w 28
j 310 220
+ p 6 2
+ w 24
j 310 170
+ w 24
+ w 24
j 310 260
+ p 6 1
+ w 39
j 480 260
+ p 5 1
+ w 39
j 310 260
+ s 44
+ p 6 1
j 310 260
+ s 44
+ w 39
j 190 210
+ p 7 2
+ w 17
j 190 250
+ p 7 1
+ w 39
@attributes
a 0 s 0:13 0 0 0 hln 100 PAGETITLE=
a 0 s 0:13 0 0 0 hln 100 PAGENO=1
a 0 s 0:13 0 0 0 hln 100 PAGESIZE=A
a 0 s 0:13 0 0 0 hln 100 PAGECOUNT=1
@graphics
