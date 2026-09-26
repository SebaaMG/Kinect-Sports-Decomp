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
extern unsigned int lbl_8202F1FC;
extern unsigned int lbl_82153178;
extern unsigned int lbl_82153238;
extern unsigned int lbl_82153D7C;


undefined8 fn_82E495F0(int param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  if (param_3 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  pbVar4 = &lbl_82153238;
  *param_3 = 0;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    bVar2 = *pbVar4;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar3 != param_2 + 0x10);
  if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
    pbVar4 = &lbl_8202F1FC;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar2 = *pbVar4;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar3 != param_2 + 0x10);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
      pbVar4 = &lbl_82153178;
      pbVar3 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar2 = *pbVar4;
        if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar3 != param_2 + 0x10);
      if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
        iVar5 = param_1 + 8;
      }
      else {
        pbVar4 = &lbl_82153D7C;
        pbVar3 = param_2 + 0x10;
        do {
          bVar1 = *param_2;
          bVar2 = *pbVar4;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          param_2 = param_2 + 1;
          pbVar4 = pbVar4 + 1;
        } while (param_2 != pbVar3);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          return 0xffffffff80004002;
        }
        iVar5 = param_1 + 4;
      }
      if (param_1 == 0) {
        iVar5 = 0;
      }
      *param_3 = iVar5;
      goto LAB_82e4972c;
    }
  }
  *param_3 = param_1;
LAB_82e4972c:
  (**(code **)(*(int *)*param_3 + 4))();
  return 0;
}

