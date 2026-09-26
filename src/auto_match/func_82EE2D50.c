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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82EE2D50(uint *param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0xffffffff) {
    param_1[3] = param_3;
  }
  if ((param_2 & 0xffffffff) == 0) {
    if (*param_1 != 0) {
      fn_82E4FE40();
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
LAB_82ee2ed8:
    uVar3 = 1;
  }
  else {
    if ((ulonglong)*param_1 == 0) {
      lVar4 = (param_2 & 0x3fffffff) << 2;
      uVar2 = fn_82E50BE8(lVar4,0,0,0,0);
      *param_1 = (uint)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar2,0,lVar4);
      }
    }
    else {
      if ((param_2 & 0xffffffff) <= (ulonglong)param_1[2]) {
        uVar1 = param_1[1];
        if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(((ulonglong)uVar1 & 0x3fffffff) * 4 + (ulonglong)*param_1,0,
                       (param_2 - uVar1 & 0x3fffffff) << 2);
        }
        param_1[1] = (uint)param_2;
        goto LAB_82ee2ed8;
      }
      uVar2 = (ulonglong)param_1[3];
      if (uVar2 == 0) {
        uVar2 = (ulonglong)(param_1[1] >> 3);
        if (uVar2 < 4) {
LAB_82ee2e54:
          uVar2 = 4;
        }
        else if (uVar2 < 0x401) {
          if (uVar2 < 4) goto LAB_82ee2e54;
        }
        else {
          uVar2 = 0x400;
        }
      }
      uVar2 = param_1[2] + uVar2;
      if ((uVar2 & 0xffffffff) <= (param_2 & 0xffffffff)) {
        uVar2 = param_2;
      }
      lVar4 = fn_82E50BE8((uVar2 & 0x3fffffff) << 2,0,0,0,0);
      if (lVar4 != 0) {
        fn_82F68CC0(lVar4,*param_1,param_1[1] << 2);
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(((ulonglong)param_1[1] & 0x3fffffff) * 4 + lVar4,0,
                     (param_2 - param_1[1] & 0x3fffffff) << 2);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

