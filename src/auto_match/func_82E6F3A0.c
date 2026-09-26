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
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


longlong fn_82E6F3A0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte abStack_30 [4];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_2c = param_1[4];
  iStack_28 = param_1[5];
  iStack_24 = param_1[6];
  pbVar6 = (byte *)&lbl_8202E618;
  pbVar5 = abStack_30;
  do {
    bVar1 = *pbVar6;
    bVar2 = *pbVar5;
    if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar6 != &lbl_8202E628);
  if (((((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) ||
       (lVar3 = (**(code **)(*param_1 + 0x2c))(param_1,*(undefined8 *)(param_1 + 0x12)),
       -1 < (int)lVar3)) && (lVar3 = (**(code **)(*param_1 + 0x14))(param_1), -1 < lVar3)) &&
     (iVar4 = (**(code **)(*param_1 + 0x20))(param_1), iVar4 != 0)) {
    lVar3 = ((int (*)())fn_82E6F3A0)();
  }
  return lVar3;
}

