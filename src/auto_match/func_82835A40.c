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
extern int fn_8265C9E0();
extern int fn_82835CF8();
extern int fn_82835E98();
extern int fn_82836048();
extern int fn_828365A8();
extern int fn_828366F8();
extern int fn_82836958();
extern unsigned int lbl_8201F2BC;


undefined4 * fn_82835A40(undefined8 param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 2) == 0) {
          if ((uVar1 & 4) == 0) {
            if ((uVar1 & 0x10) == 0) {
              puVar3 = (undefined4 *)fn_8265C9E0(0x14);
              if (puVar3 != (undefined4 *)0x0) {
                puVar3[1] = (int)param_1;
                puVar3[4] = param_2;
                puVar3[2] = 0;
                *puVar3 = &lbl_8201F2BC;
                puVar3[3] = 0;
                return puVar3;
              }
            }
            else {
              uVar2 = fn_8265C9E0(0x14);
              if ((uVar2 & 0xffffffff) != 0) {
                puVar3 = (undefined4 *)fn_82835CF8(uVar2,param_1,param_2);
                return puVar3;
              }
            }
          }
          else {
            uVar2 = fn_8265C9E0(0x14);
            if ((uVar2 & 0xffffffff) != 0) {
              puVar3 = (undefined4 *)fn_82835E98(uVar2,param_1,param_2);
              return puVar3;
            }
          }
        }
        else {
          uVar2 = fn_8265C9E0(0x14);
          if ((uVar2 & 0xffffffff) != 0) {
            puVar3 = (undefined4 *)fn_82836048(uVar2,param_1,param_2);
            return puVar3;
          }
        }
      }
      else {
        uVar2 = fn_8265C9E0(0x14);
        if ((uVar2 & 0xffffffff) != 0) {
          puVar3 = (undefined4 *)fn_828365A8(uVar2,param_1,param_2);
          return puVar3;
        }
      }
    }
    else {
      uVar2 = fn_8265C9E0(0x14);
      if ((uVar2 & 0xffffffff) != 0) {
        puVar3 = (undefined4 *)fn_828366F8(uVar2,param_1,param_2);
        return puVar3;
      }
    }
  }
  else {
    uVar2 = fn_8265C9E0(0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      puVar3 = (undefined4 *)fn_82836958(uVar2,param_1,param_2);
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}

