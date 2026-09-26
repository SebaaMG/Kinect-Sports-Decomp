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
extern unsigned int lbl_82089DB0;


undefined8 fn_82A4C6F0(int *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  
  pbVar4 = &lbl_82089DB0;
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != param_2 + 0x10);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
    piVar6 = param_1 + 8;
  }
  else {
    pbVar4 = &lbl_82089DA0;
    pbVar5 = param_2 + 0x10;
    do {
      bVar1 = *param_2;
      bVar2 = *pbVar4;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      param_2 = param_2 + 1;
      pbVar4 = pbVar4 + 1;
    } while (param_2 != pbVar5);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      uVar3 = fn_82A4C390();
      return uVar3;
    }
    piVar6 = param_1 + 9;
  }
  if (param_1 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  *param_3 = piVar6;
  (**(code **)(*param_1 + 4))();
  return 0;
}

