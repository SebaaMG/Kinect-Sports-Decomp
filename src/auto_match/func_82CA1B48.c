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
extern int fn_82C9DC48();


void fn_82CA1B48(int param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = 0;
  if (0 < param_5) {
    pbVar4 = (byte *)(param_6 + -1);
    iVar2 = *(int *)(param_1 + 0xb4) + 0x1f >> 5;
    do {
      iVar5 = 0;
      lVar6 = ((longlong)*(int *)(param_1 + 0xcc) * (longlong)iVar3 & 0x1fffffffU) * 8 + param_2;
      if (0 < iVar2) {
        do {
          pbVar4 = pbVar4 + 1;
          bVar1 = *pbVar4;
          fn_82C9DC48(param_1,lVar6,bVar1 >> 4,*(undefined4 *)(param_1 + 0xcc),
                        *(undefined4 *)(param_1 + 0xf8));
          fn_82C9DC48(param_1,lVar6 + 0x10,bVar1 & 0xf,*(undefined4 *)(param_1 + 0xcc),
                        *(undefined4 *)(param_1 + 0xf8));
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x20;
          iVar2 = *(int *)(param_1 + 0xb4) + 0x1f >> 5;
        } while (iVar5 < iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_5);
  }
  param_5 = param_5 >> 1;
  iVar3 = 0;
  if (0 < param_5) {
    pbVar4 = (byte *)(param_7 + -1);
    iVar2 = *(int *)(param_1 + 0xc0) + 0x1f >> 5;
    do {
      iVar5 = 0;
      lVar6 = ((longlong)*(int *)(param_1 + 0xd0) * (longlong)iVar3 & 0x1fffffffU) * 8 + param_3;
      if (0 < iVar2) {
        do {
          pbVar4 = pbVar4 + 1;
          bVar1 = *pbVar4;
          fn_82C9DC48(param_1,lVar6,bVar1 >> 4,*(undefined4 *)(param_1 + 0xd0),
                        *(undefined4 *)(param_1 + 0xf8));
          fn_82C9DC48(param_1,lVar6 + 0x10,bVar1 & 0xf,*(undefined4 *)(param_1 + 0xd0),
                        *(undefined4 *)(param_1 + 0xf8));
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x20;
          iVar2 = *(int *)(param_1 + 0xc0) + 0x1f >> 5;
        } while (iVar5 < iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_5);
  }
  iVar3 = 0;
  if (0 < param_5) {
    pbVar4 = (byte *)(param_8 + -1);
    iVar2 = *(int *)(param_1 + 0xc0) + 0x1f >> 5;
    do {
      iVar5 = 0;
      lVar6 = ((longlong)*(int *)(param_1 + 0xd0) * (longlong)iVar3 & 0x1fffffffU) * 8 + param_4;
      if (0 < iVar2) {
        do {
          pbVar4 = pbVar4 + 1;
          bVar1 = *pbVar4;
          fn_82C9DC48(param_1,lVar6,bVar1 >> 4,*(undefined4 *)(param_1 + 0xd0),
                        *(undefined4 *)(param_1 + 0xf8));
          fn_82C9DC48(param_1,lVar6 + 0x10,bVar1 & 0xf,*(undefined4 *)(param_1 + 0xd0),
                        *(undefined4 *)(param_1 + 0xf8));
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x20;
          iVar2 = *(int *)(param_1 + 0xc0) + 0x1f >> 5;
        } while (iVar5 < iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_5);
  }
  return;
}

