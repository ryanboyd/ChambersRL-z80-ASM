_htimesl             equ      4382h
usermemoff           equ      8565h
progstart            equ      9327h
libstart             equ      0002h
saferam1             equ      8265h
saferam2             equ      858Fh
saferam3             equ      80C9h
saferam4             equ      8039h
_zeroop1             equ      428Eh
_getcsc              equ      4014h
_homeup              equ      4775h
_newline             equ      473Dh
_darkline            equ      4AE0h
_indicatorOff        equ      4795h
_indicatorOn         equ      4791h
_cleargbuf           equ      515Bh
_copygbuf            equ      4B9Ch
_clrlcdf             equ      4755h
_cleartextshad       equ      4765h
_clrscr              equ      4759h
_clrscrf             equ      475Dh
_cline               equ      4A84h
_iline               equ      4AE4h
_ipoint              equ      4AE8h
_ldhlind             equ      4000h
_divhlby10           equ      4008h
_cphlde              equ      4004h
_disphl              equ      4709h
_divhlbya            equ      400Ch
_hltimes9            equ      4146h
_vputmap             equ      477Dh
_vputs               equ      4781h
_vputsn              equ      4785h
_putmap              equ      4701h
_puts                equ      470Dh
_putps               equ      4715h
_parseinp            equ      4E8Ch
_putc                equ      4705h
_getkey              equ      4CFEh
_getk                equ      4A18h
_rcly                equ      4EE0h
_rclx                equ      4EE8h
_memfree             equ      441Ah
_chksysvar           equ      442Ah
_findsym             equ      442Eh
_creategdb           equ      4486h
_createprog          equ      448Ah
_createreal          equ      4452h
_createstring        equ      4472h
_delvar              equ      44AAh
_insertmem           equ      4432h
_deletemem           equ      44B2h
_lcdbusy             equ      4066h
ptemp                equ      9317h
op1                  equ      8039h
op2                  equ      8044h
op3                  equ      804Fh
op4                  equ      805Ah
op5                  equ      8065h
op6                  equ      8070h
imathptr1            equ      8094h
imathptr2            equ      8096h
imathptr3            equ      8098h
imathptr4            equ      809Ah
imathptr5            equ      809Ch
progptr              equ      9319h
cmdshad              equ      9157h
plotsscreen          equ      8E29h
symtable             equ      FE6Eh
currow               equ      800Ch
curcol               equ      800Dh
pencol               equ      8252h
penrow               equ      8253h
curgy                equ      886Dh
curgx                equ      886Eh
_op1toop2            equ      418Eh
_op1toop3            equ      417Eh
_op1toop4            equ      416Eh
_op1toop5            equ      41BEh
_op1toop6            equ      41BAh
_op2toop1            equ      41C2h
_op2toop3            equ      41F6h
_op2toop4            equ      4172h
_op2toop5            equ      41B2h
_op2toop6            equ      41B6h
_op3toop1            equ      41A2h
_op3toop2            equ      417Ah
_op3toop4            equ      416Ah
_op3toop5            equ      41AEh
_op4toop1            equ      419Ah
_op4toop2            equ      4176h
_op4toop3            equ      41FAh
_op4toop5            equ      41AAh
_op4toop6            equ      4202h
_op5toop1            equ      419Eh
_op5toop2            equ      4182h
_op5toop3            equ      41FEh
_op5toop4            equ      418Ah
_op5toop6            equ      4186h
_op6toop1            equ      4196h
_op6toop2            equ      4192h
_op6toop5            equ      41A6h
_op1exop2            equ      4306h
_op1exop3            equ      42FEh
_op1exop4            equ      4302h
_op1exop5            equ      42EEh
_op1exop6            equ      42F2h
_op2exop4            equ      42F6h
_op2exop5            equ      42FAh
_op2exop6            equ      42E6h
_op5exop6            equ      42EAh
_PUSHREALO1          _PU      4536h
_PUSHREALO4          _PU      452Ah
_POPREALO2           _PO      44FAh
_POPREALO5           _PO      44EEh
_PUSHREALO2          _PU      4532h
_PUSHREALO5          _PU      4526h
_POPREALO3           _PO      44F6h
_POPREALO6           _PO      44EAh
_PUSHREALO3          _PU      452Eh
_PUSHREALO6          _PU      4522h
_POPREALO1           _PO      44FEh
_POPREALO4           _PO      44F2h
_FPMULT              _FP      40AAh
_FPADD               _FP      4092h
_OP1SET0             _OP      4286h
_SIN                 _SI      40F6h
_op1set1             equ      4232h
_op1set2             equ      4242h
_op1set3             equ      423Ah
_op1set4             equ      4236h
_op2set0             equ      4282h
_op2set1             equ      4252h
_op2set2             equ      4246h
_op2set3             equ      422Eh
_op2set4             equ      422Ah
_op2set5             equ      4222h
_op2set8             equ      421Eh
_op2set60            equ      4EA8h
_op2setA             equ      4226h
_op3set0             equ      427Eh
_op3set1             equ      421Ah
_op3set2             equ      423Eh
_op4set0             equ      427Ah
_op4set1             equ      4216h
_op5set0             equ      4276h
_pushop1             equ      454Ah
_pushop3             equ      4542h
_popop1              equ      44E6h
_popop3              equ      44E2h
_setxxop1            equ      4A74h
_setxxop2            equ      4A78h
_setxxxxop2          equ      4A7Ch
_dispop1a            equ      51D4h
_mov9toop1           equ      4206h
_convop1             equ      4EFCh
_cpyto2fpst          equ      45BEh
_scrollDown          equ      4751h
contrast             equ      8008h
ionVersion           equ      91A7h
ionRandom            equ      91AAh
ionPutSprite         equ      91ADh
ionLargeSprite       equ      91B0h
ionGetPixel          equ      91B3h
ionFastCopy          equ      91B6h
ionDetect            equ      91B9h
ionDecompress        equ      91BCh