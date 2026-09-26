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
extern int fn_82E50BE8();
extern int fn_82F38188();
extern int fn_82F691F0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


undefined8 fn_82F388B0(int param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)&lbl_8202E618;
  do {
    bVar1 = *pbVar6;
    bVar2 = *param_2;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar6 = pbVar6 + 1;
    param_2 = param_2 + 1;
  } while (pbVar6 != &lbl_8202E628);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    uVar4 = fn_82F38188(param_1,param_3);
  }
  else if ((param_3 & 0xffffffff) == 0) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x70);
    lVar5 = ((ulonglong)uVar3 & 0x3fffffff) << 2;
    if (0x3fffffff < uVar3) {
      lVar5 = -1;
    }
    lVar5 = fn_82E50BE8(lVar5,0,0,0,0);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar5,0,uVar3 << 2);
    }
    uVar4 = 0xffffffff8007000e;
  }
  return uVar4;
}

