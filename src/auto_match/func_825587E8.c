typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern char cRam83297848;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_82526C70();
extern int fn_82530948();
extern int fn_8256BC38();
extern int fn_825B71D0();
extern int fn_82631488();
extern int fn_82631830();
extern int fn_82631BF8();
extern int fn_82A1BB18();
extern int fn_82F68CC0();
extern int iRam8327f93c;
extern unsigned int lbl_82190414;
extern unsigned int lbl_821906DC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831C1CEC;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;
extern unsigned int lbl_831D450C;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296BB0;
extern unsigned int uRam831c1104;
extern unsigned int uRam831c1108;
extern unsigned int uRam831c110c;
extern unsigned int uRam8327f8ac;


void fn_825587E8(void)

{
  undefined4 uVar3;
  int iVar4;
  longlong lVar1;
  undefined8 uVar2;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [192];
  
  iVar4 = lbl_8320A898;
  if (cRam83297848 == '\0') {
    if (*(int *)(lbl_8320A898 + 0x2a88) != 0) {
      fn_82A1BB18();
    }
    uVar3 = fn_82A1BB18();
    *(undefined4 *)(iVar4 + 0x2a88) = uVar3;
    uRam831c1104 = 0x3f800000;
    uRam831c1108 = 0x3f800000;
    uRam831c110c = 0x3f800000;
    lbl_831D44F8 = lbl_821CA460;
    lbl_831D450C = 0xffffffff;
    lbl_831D4508 = 0;
    iVar4 = fn_82520158(0xffffffff821c84e8,auStack_d0,0);
    if ((iVar4 != 0) && (lVar1 = fn_8251F720(auStack_d0,0), lVar1 != 0)) {
      fn_82F68CC0(0xffffffff8326fa08,lVar1,0x18);
      fn_825B71D0();
      fn_8251FA58(lVar1);
    }
    puVar7 = (undefined4 *)0x8327f8ac;
    ppuVar5 = &lbl_821906DC;
    do {
      fn_82526C70(auStack_c0,0x80,0xffffffff821c4580,*ppuVar5);
      fn_82520158(auStack_c0,auStack_d0,0);
      uVar2 = fn_8251F720(auStack_d0,0);
      uVar3 = fn_82631830();
      puVar7 = puVar7 + 1;
      *puVar7 = uVar3;
      fn_8251FA58(uVar2);
      ppuVar5 = ppuVar5 + 2;
    } while ((int)ppuVar5 < -0x7de6f80c);
    puVar7 = (undefined4 *)0x8327f93c;
    puVar6 = (undefined4 *)&lbl_82190414;
    do {
      fn_82526C70(auStack_c0,0x80,0xffffffff821c4bc0,*puVar6);
      fn_82520158(auStack_c0,auStack_d0,0);
      uVar2 = fn_8251F720(auStack_d0,0);
      uVar3 = fn_82631488();
      puVar7 = puVar7 + 1;
      *puVar7 = uVar3;
      fn_8251FA58(uVar2);
      puVar6 = puVar6 + 2;
    } while ((int)puVar6 < -0x7de6f924);
    uRam8327f8ac = 1;
    if (iRam8327f93c == 0) {
      puVar7 = &lbl_831C1CEC;
      do {
        uVar3 = fn_82631BF8(puVar7[-1]);
        *puVar7 = uVar3;
        puVar7 = puVar7 + 2;
      } while ((int)puVar7 < -0x7ce3e244);
      iRam8327f93c = 1;
    }
    lbl_83296BB0 = 1;
    fn_82530948(0);
    fn_8256BC38();
    cRam83297848 = '\x01';
  }
  return;
}

