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
extern unsigned int *auStack_10e0;
extern unsigned int *auStack_115e;
extern unsigned int *auStack_116c;
extern char cRam832766f1;
extern int fn_8226D2A8();
extern int fn_8226D6A0();
extern int fn_8226D810();
extern int fn_8226FDB8();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_825200A8();
extern int fn_82520158();
extern int fn_82F691F0();
extern int iRam831d12c8;
extern unsigned int iStack_1170;
extern unsigned int lbl_820E975C;
extern unsigned int lbl_831D1298;
extern unsigned int lbl_831D129C;
extern unsigned int lbl_831D12AC;
extern unsigned int lbl_831D12B4;
extern unsigned int lbl_831D12CC;
extern unsigned int lbl_831D12D0;
extern unsigned int lbl_831D12D4;
extern unsigned int lbl_831D12D8;
extern unsigned int lbl_831D12DC;
extern unsigned int lbl_831D12E8;
extern unsigned int *lbl_831D12F8;
extern unsigned int lbl_831D1300;
extern unsigned int *lbl_831D1310;
extern unsigned int lbl_831D1318;
extern unsigned int lbl_831D131C;
extern unsigned int lbl_831D1320;
extern unsigned int uStack_1160;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822A2468(void)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  int iStack_1170;
  undefined1 auStack_116c [12];
  undefined2 uStack_1160;
  undefined1 auStack_115e [126];
  undefined1 auStack_10e0 [4320];
  
  if (iRam831d12c8 == 0) {
LAB_822a24cc:
    if ((0 < lbl_831D1298) && (lbl_831D129C == 0)) {
      if ((lbl_831D12B4 != 0) && (lbl_831D1318 != 0)) {
        iVar2 = fn_825200A8(0xffffffff8326597c,0xffffffff832960a0);
        if ((iVar2 == 0) || (uVar1 = 1, cRam832766f1 != '\0')) {
          uVar1 = 0;
        }
        fn_82292BC0(uVar1,0,0);
        if (lbl_831D1318 == 1) {
          uVar1 = 3;
        }
        else if (lbl_831D1318 == 2) {
          uVar1 = 1;
        }
        else {
          if (lbl_831D1318 != 3) goto LAB_822a256c;
          uVar1 = 2;
        }
        fn_82292C30(uVar1);
      }
LAB_822a256c:
      if ((lbl_831D12AC != 0) && (iVar2 = fn_8226FDB8(lbl_831D12AC,1), iVar2 == 0)) {
        lbl_831D12DC = 0;
        lbl_831D12AC = 0;
      }
      if (lbl_831D12F8 != (int *)0x0) {
        iStack_1170 = 1;
        lbl_831D12AC = (**(code **)(*lbl_831D12F8 + 4))(lbl_831D12F8,&iStack_1170);
        if (iStack_1170 != 0) {
          fn_8226D810();
        }
        if (lbl_831D12F8 != (int *)0x0) {
          iVar2 = (int)&lbl_831D12E8 + -(int)lbl_831D12F8;
          (**(code **)(*lbl_831D12F8 + 0xc))
                    (lbl_831D12F8,iVar2 - (-(int)lbl_831D12F8 + -0x7ce2ed19 + (uint)(iVar2 == 0)));
        }
        lbl_831D129C = lbl_831D1298;
        iRam831d12c8 = 0;
        lbl_831D12CC = 0;
        lbl_831D12D0 = 0;
        lbl_831D12D4 = 0;
        lbl_831D12D8 = -(uint)(lbl_831D12B4 != 0) & 4;
        lbl_831D12F8 = (int *)0x0;
        return;
      }
      fn_8226D2A8(auStack_10e0);
      fn_82520158(0xffffffff821abf74,auStack_116c,0);
      uStack_1160 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_115e,0,0x7e);
    }
  }
  else if (0 < lbl_831D1298) {
    if (0 < lbl_831D129C) {
      lbl_831D129C = lbl_831D1298;
      iRam831d12c8 = 0;
      lbl_831D12D8 = -(uint)(lbl_831D12B4 != 0) & 4;
    }
    goto LAB_822a24cc;
  }
  if (iRam831d12c8 == 0) {
    if ((lbl_831D1298 != 0) || (lbl_831D129C < 1)) {
      uVar3 = 0;
      iRam831d12c8 = 0;
      goto LAB_822a2860;
    }
    iRam831d12c8 = 1;
  }
  uVar3 = (uint)LZCOUNT(lbl_831D12D8) >> 5;
LAB_822a2860:
  if (uVar3 == 0) {
    if ((lbl_831D12AC != 0) && (iVar2 = fn_8226FDB8(lbl_831D12AC,0), iVar2 == 0)) {
      lbl_831D12DC = 0;
      lbl_831D12AC = 0;
    }
  }
  else {
    lbl_831D129C = lbl_831D1298;
    lbl_831D1320 = 0;
    lbl_831D131C = 0;
    lbl_831D1318 = 1;
    lbl_831D12B4 = 0;
    iRam831d12c8 = 0;
    if (lbl_831D1310 == (int *)0x0) {
      fn_8226D6A0(lbl_831D12AC);
    }
    else {
      (**(code **)(*lbl_831D1310 + 4))(lbl_831D1310,lbl_831D12AC);
      if (lbl_831D1310 != (int *)0x0) {
        iVar2 = (int)&lbl_831D1300 + -(int)lbl_831D1310;
        (**(code **)(*lbl_831D1310 + 0xc))
                  (lbl_831D1310,iVar2 - (-(int)lbl_831D1310 + -0x7ce2ed01 + (uint)(iVar2 == 0)));
      }
      lbl_831D1310 = (int *)0x0;
      lbl_831D12DC = 0;
      lbl_831D12AC = 0;
    }
  }
  return;
}

