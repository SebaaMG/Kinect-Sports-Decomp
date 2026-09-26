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
extern int fn_82F68B7C();
extern int fn_82FA5060();
extern int fn_8302B7D0();
extern int fn_8302BB20();
extern int fn_8303D2A8();
extern int fn_8304CC68();
extern int fn_8304CCB8();
extern unsigned int lbl_8217D3F0;
extern unsigned int lbl_8217D4C4;
extern unsigned int lbl_8217D4F0;
extern unsigned int lbl_8217D540;
extern unsigned int lbl_8217D590;
extern unsigned int lbl_8217D5E0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;


int * fn_8302B840(ulonglong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  param_1 = param_1 & 0xff000;
  uVar4 = (uint)param_1;
  if (0xd000 < uVar4) {
    if (0x60000 < uVar4) {
      if (0x80000 < uVar4) {
        if (uVar4 == 0x90000) {
          piVar3 = (int *)fn_82F68B7C();
          return piVar3;
        }
        if (uVar4 == 0xa0000) {
          uVar1 = fn_82F68B7C();
          piVar3 = (int *)fn_82FA5060(lbl_831BC768,0x1c);
          if (piVar3 == (int *)0x0) {
            return (int *)0x0;
          }
          fn_8302B7D0(piVar3,uVar1,param_2);
          *piVar3 = (int)&lbl_8217D3F0;
          fn_8302BB20(piVar3);
          return piVar3;
        }
        return (int *)0x0;
      }
      if (uVar4 != 0x80000) {
        if (param_1 - 0x61000 == 0) {
          piVar3 = (int *)fn_82F68B7C();
          return piVar3;
        }
        if ((param_1 - 0x61000 & 0xffffffff) != 0xf000) {
          return (int *)0x0;
        }
      }
      piVar3 = (int *)fn_82F68B7C();
      return piVar3;
    }
    if (uVar4 == 0x60000) {
      piVar3 = (int *)fn_82F68B7C();
      return piVar3;
    }
    if (uVar4 < 0x10001) {
      if (uVar4 != 0x10000) {
        if ((param_1 != 0xe000) && (param_1 != 0xf000)) {
          return (int *)0x0;
        }
        uVar1 = fn_82F68B7C();
        piVar3 = (int *)fn_82FA5060(lbl_831BC768,0x38);
        if (piVar3 != (int *)0x0) {
          fn_8304CC68(piVar3,uVar1,param_2);
          *piVar3 = (int)&lbl_8217D4F0;
          iVar2 = lbl_821AAD20;
          piVar3[10] = lbl_821AAD20;
          piVar3[0xb] = iVar2;
          piVar3[0xc] = iVar2;
          piVar3[0xd] = 2;
          iVar2 = fn_8304CCB8(piVar3);
          if (iVar2 == 1) {
            return piVar3;
          }
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        return (int *)0x0;
      }
    }
    else if (param_1 - 0x11000 != 0) {
      if ((param_1 - 0x11000 & 0xffffffff) != 0x1000) {
        return (int *)0x0;
      }
      uVar1 = fn_82F68B7C();
      piVar3 = (int *)fn_82FA5060(lbl_831BC768,0x24);
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      fn_8302B7D0(piVar3,uVar1,param_2);
      piVar3[7] = 0;
      *piVar3 = (int)&lbl_8217D4C4;
      piVar3[8] = 0;
      fn_8302BB20(piVar3);
      return piVar3;
    }
    piVar3 = (int *)fn_82F68B7C();
    return piVar3;
  }
  if (param_1 == 0xd000) {
fn_8303D2A8:
    uVar1 = fn_82F68B7C();
    piVar3 = (int *)fn_82FA5060(lbl_831BC768,0x38);
    if (piVar3 != (int *)0x0) {
      fn_8304CC68(piVar3,uVar1,param_2);
      *piVar3 = (int)&lbl_8217D590;
      iVar2 = lbl_821AAD20;
      piVar3[10] = lbl_821AAD20;
      piVar3[0xb] = iVar2;
      piVar3[0xc] = iVar2;
      piVar3[0xd] = 2;
      iVar2 = fn_8304CCB8(piVar3);
      if (iVar2 == 1) {
        return piVar3;
      }
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  else {
    if (uVar4 < 0x7001) {
      if (uVar4 != 0x7000) {
        if (uVar4 < 0x3001) {
          if (uVar4 == 0x3000) {
            piVar3 = (int *)fn_82F68B7C();
            return piVar3;
          }
          if (uVar4 == 0x1000) {
            piVar3 = (int *)fn_82F68B7C();
            return piVar3;
          }
          if (uVar4 == 0x2000) {
            piVar3 = (int *)fn_82F68B7C();
            return piVar3;
          }
          return (int *)0x0;
        }
        if (uVar4 == 0x4000) {
          piVar3 = (int *)fn_82F68B7C();
          return piVar3;
        }
        if (uVar4 != 0x6000) {
          return (int *)0x0;
        }
      }
      piVar3 = (int *)fn_82F68B7C();
      return piVar3;
    }
    if (uVar4 < 0xa001) {
      if (param_1 != 0xa000) {
        if ((param_1 != 0x8000) && (param_1 != 0x9000)) {
          return (int *)0x0;
        }
        uVar1 = fn_82F68B7C();
        piVar3 = (int *)fn_82FA5060(lbl_831BC768,0x38);
        if (piVar3 != (int *)0x0) {
          fn_8304CC68(piVar3,uVar1,param_2);
          *piVar3 = (int)&lbl_8217D5E0;
          iVar2 = lbl_821AAD20;
          piVar3[10] = lbl_821AAD20;
          piVar3[0xb] = iVar2;
          piVar3[0xc] = iVar2;
          piVar3[0xd] = 2;
          iVar2 = fn_8304CCB8(piVar3);
          if (iVar2 == 1) {
            return piVar3;
          }
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        return (int *)0x0;
      }
    }
    else if (param_1 != 0xb000) {
      if (param_1 != 0xc000) {
        return (int *)0x0;
      }
      goto fn_8303D2A8;
    }
    uVar1 = fn_82F68B7C();
    piVar3 = (int *)fn_82FA5060(lbl_831BC768,0x38);
    if (piVar3 != (int *)0x0) {
      fn_8304CC68(piVar3,uVar1,param_2);
      *piVar3 = (int)&lbl_8217D540;
      iVar2 = lbl_821AAD20;
      piVar3[10] = lbl_821AAD20;
      piVar3[0xb] = iVar2;
      piVar3[0xc] = iVar2;
      piVar3[0xd] = 2;
      iVar2 = fn_8304CCB8(piVar3);
      if (iVar2 == 1) {
        return piVar3;
      }
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  return (int *)0x0;
}

