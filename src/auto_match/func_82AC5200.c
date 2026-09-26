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
extern int fn_82AC5088();
extern int fn_82AC50E0();
extern unsigned int uStack_30;


undefined8 fn_82AC5200(undefined4 *param_1,longlong param_2,ulonglong param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uStack_30;
  
  uVar5 = param_3;
  uVar4 = fn_82AC5088(param_2,*param_1,param_3,0xf0);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  uVar2 = param_1[3];
  if ((uVar5 & 0xffffffff) < (ulonglong)uVar2) {
    return 0xffffffff80004005;
  }
  if ((uVar5 & 0xffffffff) < (ulonglong)uVar2 + 0x10) {
    return 0xffffffff80004005;
  }
  uVar3 = param_1[4];
  uVar8 = (ulonglong)uVar3;
  uVar4 = fn_82AC50E0((ulonglong)uVar2 + param_2,param_2,param_3,0);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  uVar1 = *(ushort *)(param_1 + 1);
  if (uVar1 == 0) {
    uVar7 = 0x100;
    uVar6 = 4;
  }
  else {
    if (uVar1 == 1) {
      uVar7 = 0x40;
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) {
          return 0xffffffff80004005;
        }
        uVar7 = 0x20;
        if (uVar8 != 0) {
          return 0xffffffff80004005;
        }
        uVar6 = (ulonglong)uStack_30;
        goto LAB_82ac52b0;
      }
      uVar7 = 0x100;
    }
    uVar6 = 0x10;
  }
LAB_82ac52b0:
  if (((ulonglong)*(ushort *)(param_1 + 2) + (ulonglong)*(ushort *)((int)param_1 + 6) <= uVar7) &&
     ((uVar8 == 0 ||
      ((uVar8 <= (param_3 & 0xffffffff) &&
       (*(ushort *)(param_1 + 2) * uVar6 + (ulonglong)uVar3 <= (uVar5 & 0xffffffff))))))) {
    return 0;
  }
  return 0xffffffff80004005;
}

