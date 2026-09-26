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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8265C9E0();
extern int fn_82B8F788();
extern int fn_82B8FAE0();
extern int fn_82B98258();
extern int fn_82B98C40();
extern unsigned int lbl_28280086;
extern unsigned int lbl_820DC758;
extern unsigned int lbl_820DC768;
extern unsigned int lbl_820DC778;
extern unsigned int lbl_820DC788;
extern unsigned int lbl_820DC798;
extern unsigned int lbl_820DC7A8;
extern unsigned int lbl_820DC7B8;
extern unsigned int lbl_820DC7C8;
extern unsigned int lbl_820DC7D8;
extern unsigned int lbl_820DC7E8;
extern unsigned int lbl_820DC7F8;
extern unsigned int lbl_820DC808;
extern unsigned int lbl_820DC818;
extern unsigned int lbl_820DC828;
extern unsigned int lbl_820DC838;
extern unsigned int lbl_820DC848;
extern unsigned int lbl_820DC858;
extern unsigned int lbl_820DC868;
extern unsigned int lbl_820DC878;
extern unsigned int lbl_820DC888;
extern unsigned int lbl_820DC898;
extern unsigned int lbl_820DC8A8;
extern unsigned int lbl_820DC8B8;
extern unsigned int lbl_820DC8C8;
extern unsigned int lbl_820DC8D8;
extern unsigned int lbl_820DC8E8;
extern unsigned int lbl_820DC8F8;
extern unsigned int lbl_820DC908;
extern unsigned int lbl_820DC918;
extern unsigned int lbl_820DC928;
extern unsigned int lbl_820DC938;
extern unsigned int lbl_820DC948;


int * fn_82B99908(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  uVar4 = ZEXT48(puVar1);
  if ((int)puVar1 < 0x1a20ab5b) {
    if (puVar1 == (undefined1 *)0x1a20ab5a) {
LAB_82b99e40:
      piVar2 = (int *)fn_8265C9E0(0x80);
      if (piVar2 != (int *)0x0) {
        fn_82B8F788(piVar2,param_1,0x40,3);
        ppuVar5 = &lbl_820DC8C8;
        goto LAB_82b9a3c4;
      }
      goto LAB_82b9a3cc;
    }
    if ((int)puVar1 < 0x1a200055) {
      if (puVar1 == (undefined1 *)0x1a200054) {
LAB_82b99cc4:
        piVar2 = (int *)fn_8265C9E0(0x100);
        if (piVar2 != (int *)0x0) {
          fn_82B98C40(piVar2,param_1);
          ppuVar5 = &lbl_820DC938;
          goto LAB_82b9a3c4;
        }
      }
      else if ((int)puVar1 < 0x18280144) {
        if (puVar1 == (undefined1 *)0x18280143) {
LAB_82b999ac:
          piVar2 = (int *)fn_8265C9E0(0x80);
          if (piVar2 != (int *)0x0) {
            fn_82B8F788(piVar2,param_1,0x10,1);
            ppuVar5 = &lbl_820DC798;
            goto LAB_82b9a3c4;
          }
        }
        else if ((int)puVar1 < 0x1828004c) {
          if (puVar1 == (undefined1 *)0x1828004b) goto LAB_82b99b50;
          if ((uVar4 - 0x4900002 == 0) || ((uVar4 - 0x4900002 & 0xffffffff) == 0x100)) {
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,8,1);
              ppuVar5 = &lbl_820DC7B8;
              goto LAB_82b9a3c4;
            }
          }
          else {
            uVar4 = uVar4 - 0x800004a;
            if ((uVar4 != 0) && ((uVar4 & 0xffffffff) != 0x100)) {
              if ((uVar4 & 0xffffffff) != 0x1027fff9) {
                return (int *)0x0;
              }
              goto LAB_82b999ac;
            }
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,0x10,1);
              ppuVar5 = &lbl_820DC848;
              goto LAB_82b9a3c4;
            }
          }
        }
        else {
          uVar4 = uVar4 - 0x1828004c;
          if (uVar4 == 0) {
LAB_82b99b28:
            piVar2 = (int *)fn_8265C9E0(0xb0);
            if (piVar2 != (int *)0x0) {
              fn_82B98258(piVar2,param_1);
              ppuVar5 = &lbl_820DC948;
              goto LAB_82b9a3c4;
            }
          }
          else if ((uVar4 & 0xffffffff) == 3) {
LAB_82b99af8:
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,0x10,1);
              ppuVar5 = &lbl_820DC7A8;
              goto LAB_82b9a3c4;
            }
          }
          else {
            if ((uVar4 & 0xffffffff) != 0x3a) {
              if ((uVar4 & 0xffffffff) != 0x6a) {
                return (int *)0x0;
              }
              goto LAB_82b99a60;
            }
LAB_82b99ac8:
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,0x20,1);
              ppuVar5 = &lbl_820DC758;
              goto LAB_82b9a3c4;
            }
          }
        }
      }
      else if ((int)puVar1 < 0x182801b7) {
        if (puVar1 == (undefined1 *)0x182801b6) {
LAB_82b99a60:
          piVar2 = (int *)fn_8265C9E0(0x80);
          if (piVar2 != (int *)0x0) {
            fn_82B8F788(piVar2,param_1,0x20,1);
            ppuVar5 = &lbl_820DC818;
            goto LAB_82b9a3c4;
          }
          goto LAB_82b9a3cc;
        }
        uVar4 = uVar4 - 0x1828014b;
        if (uVar4 != 0) {
          if ((uVar4 & 0xffffffff) != 1) {
            if ((uVar4 & 0xffffffff) != 4) {
              if ((uVar4 & 0xffffffff) != 0x3b) {
                return (int *)0x0;
              }
              goto LAB_82b99ac8;
            }
            goto LAB_82b99af8;
          }
          goto LAB_82b99b28;
        }
LAB_82b99b50:
        piVar2 = (int *)fn_8265C9E0(0xb0);
        if (piVar2 != (int *)0x0) {
          fn_82B98258(piVar2,param_1);
          ppuVar5 = &lbl_820DC948;
          goto LAB_82b9a3c4;
        }
      }
      else {
        uVar4 = uVar4 - 0x1a20004b;
LAB_82b99b80:
        if (uVar4 == 0) {
          piVar2 = (int *)fn_8265C9E0(0xb0);
          if (piVar2 != (int *)0x0) {
            fn_82B98258(piVar2,param_1);
            ppuVar5 = &lbl_820DC948;
            goto LAB_82b9a3c4;
          }
        }
        else if ((uVar4 & 0xffffffff) == 1) {
          piVar2 = (int *)fn_8265C9E0(0xb0);
          if (piVar2 != (int *)0x0) {
            fn_82B98258(piVar2,param_1);
            ppuVar5 = &lbl_820DC948;
            goto LAB_82b9a3c4;
          }
        }
        else if ((uVar4 & 0xffffffff) == 7) {
          piVar2 = (int *)fn_8265C9E0(0x100);
          if (piVar2 != (int *)0x0) {
            fn_82B98C40(piVar2,param_1);
            ppuVar5 = &lbl_820DC938;
            goto LAB_82b9a3c4;
          }
        }
        else {
          if ((uVar4 & 0xffffffff) != 8) {
            return (int *)0x0;
          }
          piVar2 = (int *)fn_8265C9E0(0x100);
          if (piVar2 != (int *)0x0) {
            fn_82B98C40(piVar2,param_1);
            ppuVar5 = &lbl_820DC938;
            goto LAB_82b9a3c4;
          }
        }
      }
    }
    else if ((int)puVar1 < 0x1a200155) {
      if (puVar1 == (undefined1 *)0x1a200154) goto LAB_82b99cc4;
      if (0x1a2000b6 < (int)puVar1) {
        uVar4 = uVar4 - 0x1a20014b;
        goto LAB_82b99b80;
      }
      if (puVar1 == (undefined1 *)0x1a2000b6) goto LAB_82b99d8c;
      uVar4 = uVar4 - 0x1a20005a;
LAB_82b99bf4:
      if (uVar4 == 0) {
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,0x40,1);
          ppuVar5 = &lbl_820DC828;
          goto LAB_82b9a3c4;
        }
      }
      else if ((uVar4 & 0xffffffff) == 0x20) {
        piVar2 = (int *)fn_8265C9E0(0x100);
        if (piVar2 != (int *)0x0) {
          fn_82B98C40(piVar2,param_1);
          ppuVar5 = &lbl_820DC938;
          goto LAB_82b9a3c4;
        }
      }
      else if ((uVar4 & 0xffffffff) == 0x21) {
        piVar2 = (int *)fn_8265C9E0(0x100);
        if (piVar2 != (int *)0x0) {
          fn_82B98C40(piVar2,param_1);
          ppuVar5 = &lbl_820DC938;
          goto LAB_82b9a3c4;
        }
      }
      else {
        if ((uVar4 & 0xffffffff) != 0x2c) {
          return (int *)0x0;
        }
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,0x20,1);
          ppuVar5 = &lbl_820DC7E8;
          goto LAB_82b9a3c4;
        }
      }
    }
    else if ((int)puVar1 < 0x1a2001b7) {
      if (puVar1 != (undefined1 *)0x1a2001b6) {
        uVar4 = uVar4 - 0x1a20015a;
        goto LAB_82b99bf4;
      }
LAB_82b99d8c:
      piVar2 = (int *)fn_8265C9E0(0x80);
      if (piVar2 != (int *)0x0) {
        fn_82B8F788(piVar2,param_1,0x20,1);
        ppuVar5 = &lbl_820DC7D8;
        goto LAB_82b9a3c4;
      }
    }
    else {
      uVar4 = uVar4 - 0x1a202ab6;
      if ((uVar4 == 0) || ((uVar4 & 0xffffffff) == 0x100)) {
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,0x20,2);
          ppuVar5 = &lbl_820DC8B8;
          goto LAB_82b9a3c4;
        }
      }
      else {
        if ((uVar4 & 0xffffffff) == 0x7fa4) goto LAB_82b99e40;
        if ((uVar4 & 0xffffffff) != 0x7fd0) {
          return (int *)0x0;
        }
LAB_82b99de0:
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,0x20,3);
          ppuVar5 = &lbl_820DC898;
          goto LAB_82b9a3c4;
        }
      }
    }
    goto LAB_82b9a3cc;
  }
  if ((int)puVar1 < 0x2a200087) {
    if (puVar1 == (undefined1 *)0x2a200086) {
LAB_82b9a190:
      piVar2 = (int *)fn_8265C9E0(0x80);
      if (piVar2 != (int *)0x0) {
        fn_82B8F788(piVar2,param_1,0x20,1);
        ppuVar5 = &lbl_820DC7F8;
        goto LAB_82b9a3c4;
      }
      goto LAB_82b9a3cc;
    }
    if ((int)puVar1 < 0x28000103) {
      if (puVar1 == (undefined1 *)0x28000102) {
LAB_82b99fc0:
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,8,1);
          ppuVar5 = &lbl_820DC838;
          goto LAB_82b9a3c4;
        }
      }
      else {
        if ((int)puVar1 < 0x1a22aaa7) {
          if (puVar1 == (undefined1 *)0x1a22aaa6) {
LAB_82b99f90:
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,0x80,4);
              ppuVar5 = &lbl_820DC928;
              goto LAB_82b9a3c4;
            }
            goto LAB_82b9a3cc;
          }
          if (puVar1 == (undefined1 *)0x1a20ab86) goto LAB_82b99de0;
          uVar4 = uVar4 - 0x1a220058;
          if ((uVar4 == 0) || ((uVar4 & 0xffffffff) == 0x100)) {
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,0x10,1);
              ppuVar5 = &lbl_820DC858;
              goto LAB_82b9a3c4;
            }
            goto LAB_82b9a3cc;
          }
          if ((uVar4 & 0xffffffff) != 0xaa08) {
            return (int *)0x0;
          }
        }
        else if (uVar4 - 0x1a22ab60 != 0) {
          if ((uVar4 - 0x1a22ab60 & 0xffffffff) == 0x46) goto LAB_82b99f90;
          if (uVar4 - 0x28000002 != 0) {
            if ((uVar4 - 0x28000002 & 0xffffffff) != 0x56) {
              return (int *)0x0;
            }
            goto LAB_82b99f60;
          }
          goto LAB_82b99fc0;
        }
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,0x40,4);
          ppuVar5 = &lbl_820DC8F8;
LAB_82b9a3c4:
          *piVar2 = (int)ppuVar5;
          goto LAB_82b9a3d0;
        }
      }
    }
    else {
      if ((int)puVar1 < 0x28280087) {
        if (puVar1 == &lbl_28280086) {
LAB_82b9a084:
          piVar2 = (int *)fn_8265C9E0(0x80);
          if (piVar2 != (int *)0x0) {
            fn_82B8F788(piVar2,param_1,0x20,1);
            ppuVar5 = &lbl_820DC768;
            goto LAB_82b9a3c4;
          }
          goto LAB_82b9a3cc;
        }
        if (puVar1 == (undefined1 *)0x28000158) {
LAB_82b99f60:
          piVar2 = (int *)fn_8265C9E0(0x80);
          if (piVar2 != (int *)0x0) {
            fn_82B8F788(piVar2,param_1,0x10,1);
            ppuVar5 = &lbl_820DC858;
            goto LAB_82b9a3c4;
          }
          goto LAB_82b9a3cc;
        }
        uVar4 = uVar4 - 0x28280043;
        if (uVar4 != 0) {
          if ((uVar4 & 0xffffffff) != 1) {
            if ((uVar4 & 0xffffffff) != 0xc) {
              return (int *)0x0;
            }
            goto LAB_82b9a030;
          }
          goto LAB_82b9a0b4;
        }
      }
      else {
        uVar4 = uVar4 - 0x28280143;
        if (uVar4 != 0) {
          if ((uVar4 & 0xffffffff) == 1) {
LAB_82b9a0b4:
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,0x10,1);
              ppuVar5 = &lbl_820DC778;
              goto LAB_82b9a3c4;
            }
            goto LAB_82b9a3cc;
          }
          if ((uVar4 & 0xffffffff) == 0xc) {
LAB_82b9a030:
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,0x10,1);
              ppuVar5 = &lbl_820DC7C8;
              goto LAB_82b9a3c4;
            }
            goto LAB_82b9a3cc;
          }
          if ((uVar4 & 0xffffffff) != 0x43) {
            return (int *)0x0;
          }
          goto LAB_82b9a084;
        }
      }
      piVar2 = (int *)fn_8265C9E0(0x80);
      if (piVar2 != (int *)0x0) {
        fn_82B8F788(piVar2,param_1,0x10,1);
        ppuVar5 = &lbl_820DC788;
        goto LAB_82b9a3c4;
      }
    }
  }
  else {
    if ((int)puVar1 < 0x2d20ab4b) {
      if (puVar1 != (undefined1 *)0x2d20ab4a) {
        if ((int)puVar1 < 0x2a200b87) {
          if (puVar1 == (undefined1 *)0x2a200b86) {
LAB_82b9a1c0:
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,0x20,2);
              ppuVar5 = &lbl_820DC888;
              goto LAB_82b9a3c4;
            }
          }
          else {
            uVar4 = uVar4 - 0x2a200186;
            if (uVar4 == 0) goto LAB_82b9a190;
            if ((uVar4 & 0xffffffff) != 0x8bf) {
              if ((uVar4 & 0xffffffff) == 0x900) goto LAB_82b9a1c0;
              if ((uVar4 & 0xffffffff) != 0x9bf) {
                return (int *)0x0;
              }
            }
            piVar2 = (int *)fn_8265C9E0(0x80);
            if (piVar2 != (int *)0x0) {
              fn_82B8F788(piVar2,param_1,0x10,2);
              ppuVar5 = &lbl_820DC878;
              goto LAB_82b9a3c4;
            }
          }
          goto LAB_82b9a3cc;
        }
        uVar4 = uVar4 - 0x2d200099;
        if ((uVar4 == 0) || ((uVar4 & 0xffffffff) == 0x100)) {
          piVar2 = (int *)fn_8265C9E0(0x80);
          if (piVar2 != (int *)0x0) {
            fn_82B8F788(piVar2,param_1,0x20,1);
            ppuVar5 = &lbl_820DC808;
            goto LAB_82b9a3c4;
          }
          goto LAB_82b9a3cc;
        }
        if ((uVar4 & 0xffffffff) != 0xa9b1) {
          if ((uVar4 & 0xffffffff) != 0xaa00) {
            return (int *)0x0;
          }
          goto LAB_82b9a214;
        }
      }
      piVar2 = (int *)fn_8265C9E0(0x80);
      if (piVar2 != (int *)0x0) {
        fn_82B8F788(piVar2,param_1,0x10,2);
        ppuVar5 = &lbl_820DC868;
        goto LAB_82b9a3c4;
      }
      goto LAB_82b9a3cc;
    }
    if ((int)puVar1 < 0x2d22aba6) {
      if (puVar1 == (undefined1 *)0x2d22aba5) {
LAB_82b9a314:
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,0x40,4);
          ppuVar5 = &lbl_820DC918;
          goto LAB_82b9a3c4;
        }
      }
      else {
        if (puVar1 == (undefined1 *)0x2d20ab99) {
LAB_82b9a214:
          piVar2 = (int *)fn_8265C9E0(0x80);
          if (piVar2 != (int *)0x0) {
            fn_82B8F788(piVar2,param_1,0x20,2);
            ppuVar5 = &lbl_820DC8A8;
            goto LAB_82b9a3c4;
          }
          goto LAB_82b9a3cc;
        }
        uVar4 = uVar4 - 0x2d22aa9f;
        if (uVar4 != 0) {
          if ((uVar4 & 0xffffffff) == 6) goto LAB_82b9a314;
          if ((uVar4 & 0xffffffff) != 0x100) {
            return (int *)0x0;
          }
        }
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,0x20,4);
          ppuVar5 = &lbl_820DC8E8;
          goto LAB_82b9a3c4;
        }
      }
    }
    else {
      uVar4 = uVar4 - 0x2da2aa5e;
      if (uVar4 == 0) {
LAB_82b9a398:
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,0x10,4);
          ppuVar5 = &lbl_820DC8D8;
          goto LAB_82b9a3c4;
        }
      }
      else {
        if ((uVar4 & 0xffffffff) != 0x46) {
          if ((uVar4 & 0xffffffff) == 0x100) goto LAB_82b9a398;
          if ((uVar4 & 0xffffffff) != 0x146) {
            return (int *)0x0;
          }
        }
        piVar2 = (int *)fn_8265C9E0(0x80);
        if (piVar2 != (int *)0x0) {
          fn_82B8F788(piVar2,param_1,0x20,4);
          ppuVar5 = &lbl_820DC908;
          goto LAB_82b9a3c4;
        }
      }
    }
  }
LAB_82b9a3cc:
  piVar2 = (int *)0x0;
LAB_82b9a3d0:
  if (piVar2 != (int *)0x0) {
    if ((piVar2[7] == 0) || (iVar3 = fn_82B8FAE0(piVar2,param_1), -1 < iVar3)) {
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

