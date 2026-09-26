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
extern int fn_82A4C390();
extern unsigned int lbl_82089DA0;


undefined8 fn_82A4F578(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  pbVar4 = &lbl_82089DA0;
  pbVar3 = param_2 + 0x10;
  do {
    bVar1 = *param_2;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  } while (param_2 != pbVar3);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    piVar5 = param_1 + 8;
    if (param_1 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    *param_3 = piVar5;
    (**(code **)(*param_1 + 4))();
  }
  else {
    uVar6 = fn_82A4C390();
  }
  return uVar6;
}

