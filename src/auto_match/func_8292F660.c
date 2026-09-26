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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8265C940();
extern int fn_82924CD8();
extern int fn_82925058();
extern int fn_8292DF98();
extern int fn_8292E978();
extern unsigned int lbl_8202EE9C;
extern unsigned int lbl_8202EEAC;
extern unsigned int lbl_8202EEBC;
extern unsigned int lbl_8202EECC;
extern unsigned int lbl_8202EEDC;
extern unsigned int lbl_8202EEEC;
extern unsigned int lbl_8202EEFC;
extern unsigned int lbl_8202EF0C;
extern unsigned int lbl_8202EF1C;
extern unsigned int lbl_8202EF2C;
extern unsigned int lbl_8202EF3C;
extern unsigned int lbl_8202EF4C;
extern unsigned int lbl_8202EF5C;
extern unsigned int lbl_8202EF6C;
extern unsigned int lbl_8202EF7C;
extern unsigned int lbl_8202EF8C;
extern unsigned int lbl_8202EF9C;
extern unsigned int lbl_8202EFAC;
extern unsigned int lbl_8202EFBC;
extern unsigned int lbl_8202EFCC;
extern unsigned int lbl_8202EFDC;
extern unsigned int lbl_8202EFEC;
extern unsigned int lbl_8202EFFC;
extern unsigned int lbl_8202F00C;
extern unsigned int lbl_8202F01C;
extern unsigned int lbl_8202F02C;
extern unsigned int lbl_8202F03C;
extern unsigned int lbl_8202F04C;
extern unsigned int lbl_8202F05C;
extern unsigned int lbl_8202F06C;
extern unsigned int lbl_8202F07C;
extern unsigned int lbl_8202F08C;
extern unsigned int lbl_8202F09C;
extern unsigned int lbl_8202F0AC;


int * fn_8292F660(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = CONCAT44(uVar1,uVar1) & 0xfffffffffffffe3f;
  iVar3 = (int)uVar4;
  if (iVar3 < 0x1a22aa21) {
    if (iVar3 == 0x1a22aa20) {
      piVar2 = (int *)fn_8265C940(0x80,0x24810000);
      if (piVar2 == (int *)0x0) goto LAB_8293005c;
      fn_82924CD8(piVar2,param_1,0x40,4);
      ppuVar5 = &lbl_8202F03C;
    }
    else if (iVar3 < 0x1a20000d) {
      if (iVar3 == 0x1a20000c) {
        piVar2 = (int *)fn_8265C940(0xb0,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_8292DF98(piVar2,param_1);
        ppuVar5 = &lbl_8202F0AC;
      }
      else if (iVar3 < 0x1828000d) {
        if (iVar3 == 0x1828000c) {
          piVar2 = (int *)fn_8265C940(0xb0,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_8292DF98(piVar2,param_1);
          ppuVar5 = &lbl_8202F0AC;
        }
        else if ((uVar1 & 0xfffffe3f) == 0x4900002) {
          piVar2 = (int *)fn_8265C940(0x80,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_82924CD8(piVar2,param_1,8,1);
          ppuVar5 = &lbl_8202EEFC;
        }
        else if ((uVar1 & 0xfffffe3f) == 0x800000a) {
          piVar2 = (int *)fn_8265C940(0x80,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_82924CD8(piVar2,param_1,0x10,1);
          ppuVar5 = &lbl_8202EF8C;
        }
        else {
          uVar4 = uVar4 - 0x18280003;
          if (uVar4 == 0) {
            piVar2 = (int *)fn_8265C940(0x80,0x24810000);
            if (piVar2 == (int *)0x0) goto LAB_8293005c;
            fn_82924CD8(piVar2,param_1,0x10,1);
            ppuVar5 = &lbl_8202EEDC;
          }
          else if ((uVar4 & 0xffffffff) == 3) {
            piVar2 = (int *)fn_8265C940(0x80,0x24810000);
            if (piVar2 == (int *)0x0) goto LAB_8293005c;
            fn_82924CD8(piVar2,param_1,0x20,1);
            ppuVar5 = &lbl_8202EE9C;
          }
          else {
            if ((uVar4 & 0xffffffff) != 8) {
              return (int *)0x0;
            }
            piVar2 = (int *)fn_8265C940(0xb0,0x24810000);
            if (piVar2 == (int *)0x0) goto LAB_8293005c;
            fn_8292DF98(piVar2,param_1);
            ppuVar5 = &lbl_8202F0AC;
          }
        }
      }
      else if (uVar4 - 0x1828000f == 0) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x10,1);
        ppuVar5 = &lbl_8202EEEC;
      }
      else if ((uVar4 - 0x1828000f & 0xffffffff) == 0x27) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x20,1);
        ppuVar5 = &lbl_8202EF5C;
      }
      else if (uVar4 - 0x1a200006 == 0) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x20,1);
        ppuVar5 = &lbl_8202EF2C;
      }
      else {
        if ((uVar4 - 0x1a200006 & 0xffffffff) != 5) {
          return (int *)0x0;
        }
        piVar2 = (int *)fn_8265C940(0xb0,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_8292DF98(piVar2,param_1);
        ppuVar5 = &lbl_8202F0AC;
      }
    }
    else if (iVar3 < 0x1a200037) {
      if (iVar3 == 0x1a200036) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x20,1);
        ppuVar5 = &lbl_8202EF1C;
      }
      else {
        uVar4 = uVar4 - 0x1a200012;
        if (uVar4 == 0) {
          piVar2 = (int *)fn_8265C940(0x100,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_8292E978(piVar2,param_1);
          ppuVar5 = &lbl_8202F09C;
        }
        else if ((uVar4 & 0xffffffff) == 1) {
          piVar2 = (int *)fn_8265C940(0x100,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_8292E978(piVar2,param_1);
          ppuVar5 = &lbl_8202F09C;
        }
        else if ((uVar4 & 0xffffffff) == 2) {
          piVar2 = (int *)fn_8265C940(0x100,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_8292E978(piVar2,param_1);
          ppuVar5 = &lbl_8202F09C;
        }
        else {
          if ((uVar4 & 0xffffffff) != 8) {
            return (int *)0x0;
          }
          piVar2 = (int *)fn_8265C940(0x80,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_82924CD8(piVar2,param_1,0x40,1);
          ppuVar5 = &lbl_8202EF6C;
        }
      }
    }
    else {
      uVar4 = uVar4 - 0x1a202a36;
      if (uVar4 == 0) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x20,2);
        ppuVar5 = &lbl_8202EFEC;
      }
      else if ((uVar4 & 0xffffffff) == 0x7fd0) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x20,3);
        ppuVar5 = &lbl_8202EFCC;
      }
      else if ((uVar4 & 0xffffffff) == 0x7fe4) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x40,3);
        ppuVar5 = &lbl_8202EFFC;
      }
      else {
        if ((uVar4 & 0xffffffff) != 0x1d5e2) {
          return (int *)0x0;
        }
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x10,1);
        ppuVar5 = &lbl_8202F00C;
      }
    }
  }
  else if (iVar3 < 0x2a200a07) {
    if (iVar3 == 0x2a200a06) {
      piVar2 = (int *)fn_8265C940(0x80,0x24810000);
      if (piVar2 == (int *)0x0) goto LAB_8293005c;
      fn_82924CD8(piVar2,param_1,0x20,2);
      ppuVar5 = &lbl_8202EFBC;
    }
    else if (iVar3 < 0x28280005) {
      if (iVar3 == 0x28280004) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x10,1);
        ppuVar5 = &lbl_8202EEBC;
      }
      else if ((uVar1 & 0xfffffe3f) == 0x1a22aa26) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x80,4);
        ppuVar5 = &lbl_8202F06C;
      }
      else {
        uVar4 = uVar4 - 0x28000002;
        if (uVar4 == 0) {
          piVar2 = (int *)fn_8265C940(0x80,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_82924CD8(piVar2,param_1,8,1);
          ppuVar5 = &lbl_8202EF7C;
        }
        else if ((uVar4 & 0xffffffff) == 0x16) {
          piVar2 = (int *)fn_8265C940(0x80,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_82924CD8(piVar2,param_1,0x10,1);
          ppuVar5 = &lbl_8202F00C;
        }
        else {
          if ((uVar4 & 0xffffffff) != 0x280001) {
            return (int *)0x0;
          }
          piVar2 = (int *)fn_8265C940(0x80,0x24810000);
          if (piVar2 == (int *)0x0) goto LAB_8293005c;
          fn_82924CD8(piVar2,param_1,0x10,1);
          ppuVar5 = &lbl_8202EECC;
        }
      }
    }
    else if (uVar4 - 0x28280006 == 0) {
      piVar2 = (int *)fn_8265C940(0x80,0x24810000);
      if (piVar2 == (int *)0x0) goto LAB_8293005c;
      fn_82924CD8(piVar2,param_1,0x20,1);
      ppuVar5 = &lbl_8202EEAC;
    }
    else if ((uVar4 - 0x28280006 & 0xffffffff) == 9) {
      piVar2 = (int *)fn_8265C940(0x80,0x24810000);
      if (piVar2 == (int *)0x0) goto LAB_8293005c;
      fn_82924CD8(piVar2,param_1,0x10,1);
      ppuVar5 = &lbl_8202EF0C;
    }
    else if ((uVar4 - 0x2a200006 & 0xffffffff) == 0) {
      piVar2 = (int *)fn_8265C940(0x80,0x24810000);
      if (piVar2 == (int *)0x0) goto LAB_8293005c;
      fn_82924CD8(piVar2,param_1,0x20,1);
      ppuVar5 = &lbl_8202EF3C;
    }
    else {
      if ((uVar4 - 0x2a200006 & 0xffffffff) != 0x9ff) {
        return (int *)0x0;
      }
      piVar2 = (int *)fn_8265C940(0x80,0x24810000);
      if (piVar2 == (int *)0x0) goto LAB_8293005c;
      fn_82924CD8(piVar2,param_1,0x10,2);
      ppuVar5 = &lbl_8202EFAC;
    }
  }
  else if (iVar3 < 0x2d22aa26) {
    if (iVar3 == 0x2d22aa25) {
      piVar2 = (int *)fn_8265C940(0x80,0x24810000);
      if (piVar2 == (int *)0x0) goto LAB_8293005c;
      fn_82924CD8(piVar2,param_1,0x40,4);
      ppuVar5 = &lbl_8202F05C;
    }
    else {
      uVar4 = uVar4 - 0x2d200019;
      if (uVar4 == 0) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x20,1);
        ppuVar5 = &lbl_8202EF4C;
      }
      else if ((uVar4 & 0xffffffff) == 0xa9f1) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x10,2);
        ppuVar5 = &lbl_8202EF9C;
      }
      else if ((uVar4 & 0xffffffff) == 0xaa00) {
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x20,2);
        ppuVar5 = &lbl_8202EFDC;
      }
      else {
        if ((uVar4 & 0xffffffff) != 0x2aa06) {
          return (int *)0x0;
        }
        piVar2 = (int *)fn_8265C940(0x80,0x24810000);
        if (piVar2 == (int *)0x0) goto LAB_8293005c;
        fn_82924CD8(piVar2,param_1,0x20,4);
        ppuVar5 = &lbl_8202F02C;
      }
    }
  }
  else if (uVar4 - 0x2da2aa1e == 0) {
    piVar2 = (int *)fn_8265C940(0x80,0x24810000);
    if (piVar2 == (int *)0x0) goto LAB_8293005c;
    fn_82924CD8(piVar2,param_1,0x10,4);
    ppuVar5 = &lbl_8202F01C;
  }
  else if ((uVar4 - 0x2da2aa1e & 0xffffffff) == 6) {
    piVar2 = (int *)fn_8265C940(0x80,0x24810000);
    if (piVar2 == (int *)0x0) goto LAB_8293005c;
    fn_82924CD8(piVar2,param_1,0x20,4);
    ppuVar5 = &lbl_8202F04C;
  }
  else if (uVar4 - 0x36314c41 == 0) {
    piVar2 = (int *)fn_8265C940(0x80,0x24810000);
    if (piVar2 == (int *)0x0) goto LAB_8293005c;
    fn_82924CD8(piVar2,param_1,0x20,1);
    ppuVar5 = &lbl_8202F07C;
  }
  else {
    if ((uVar4 - 0x36314c41 & 0xffffffff) != 0x5df) {
      return (int *)0x0;
    }
    piVar2 = (int *)fn_8265C940(0x80,0x24810000);
    if (piVar2 == (int *)0x0) {
LAB_8293005c:
      piVar2 = (int *)0x0;
      goto LAB_82930060;
    }
    fn_82924CD8(piVar2,param_1,0x30,1);
    ppuVar5 = &lbl_8202F08C;
  }
  *piVar2 = (int)ppuVar5;
LAB_82930060:
  if (piVar2 != (int *)0x0) {
    if ((piVar2[7] == 0) || (iVar3 = fn_82925058(piVar2,param_1), -1 < iVar3)) {
      if (piVar2[6] != 0) {
        (**(code **)(*piVar2 + 0xc))(piVar2);
        return piVar2;
      }
      return piVar2;
    }
    (**(code **)*piVar2)(piVar2,1);
  }
  return (int *)0x0;
}

