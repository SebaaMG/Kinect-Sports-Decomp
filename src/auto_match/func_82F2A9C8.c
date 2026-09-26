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


longlong fn_82F2A9C8(undefined8 param_1,ulonglong param_2,ulonglong param_3,int *param_4,
                      uint *param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar3 = (ulonglong)((int)param_3 >> 0x1f);
  lVar4 = 0;
  uVar3 = (param_3 ^ uVar3) - uVar3;
  iVar1 = param_4[3];
  iVar5 = param_4[6];
  if ((ulonglong)(uint)param_4[4] < (param_2 & 0xffffffff)) {
    if ((uVar3 & 0xffffffff) <= (ulonglong)(uint)param_4[5]) {
      uVar2 = *(uint *)((int)((uVar3 & 0xffffffff) << 2) + param_4[1]);
      if ((param_2 & 0xffffffff) <= ((ulonglong)uVar2 & 0x7fffffff) << 1) {
        param_2 = (param_2 - uVar2) - 1;
        lVar4 = (ulonglong)*(uint *)(iVar5 * 8 + iVar1 + 4) + 2;
        goto LAB_82f2aa70;
      }
    }
    iVar5 = iVar5 << 3;
LAB_82f2aa9c:
    uVar2 = *(uint *)(iVar5 + iVar1 + 4);
    if ((ulonglong)*param_5 < (param_2 & 0xffffffff)) {
      *param_5 = (uint)param_2;
    }
    if ((ulonglong)*param_6 < (uVar3 & 0xffffffff)) {
      *param_6 = (uint)uVar3;
    }
    lVar4 = (ulonglong)uVar2 + 0x11;
  }
  else {
    uVar2 = *(uint *)((int)((param_2 & 0xffffffff) << 2) + *param_4);
    if ((ulonglong)uVar2 < (uVar3 & 0xffffffff)) {
      iVar5 = iVar5 * 8;
      if (((ulonglong)uVar2 & 0x7fffffff) << 1 < (uVar3 & 0xffffffff)) goto LAB_82f2aa9c;
      uVar3 = uVar3 - uVar2;
      lVar4 = (ulonglong)*(uint *)(iVar5 + iVar1 + 4) + 1;
    }
LAB_82f2aa70:
    lVar4 = (ulonglong)
            *(uint *)((int)((*(uint *)((int)((param_2 & 0xffffffff) << 2) + param_4[2]) + uVar3 +
                             (ulonglong)(uint)param_4[7] & 0xffffffff) << 3) + iVar1 + 4) + lVar4 +
            1;
  }
  return lVar4;
}

