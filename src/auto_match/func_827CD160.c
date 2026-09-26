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


void fn_827CD160(int param_1,int param_2,int *param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  byte *pbVar10;
  ulonglong uVar11;
  
  uVar4 = *(uint *)(param_1 + 0x5c);
  piVar5 = *(int **)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar6 = *piVar5;
  iVar7 = piVar5[1];
  iVar8 = piVar5[2];
  if (0 < (int)param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      pbVar10 = *(byte **)(param_2 + (int)param_3);
      if ((ulonglong)uVar4 != 0) {
        pcVar9 = (char *)(*param_3 + -1);
        uVar11 = (ulonglong)uVar4;
        do {
          bVar3 = *pbVar10;
          pbVar1 = pbVar10 + 1;
          pbVar2 = pbVar10 + 2;
          pbVar10 = pbVar10 + 3;
          pcVar9 = pcVar9 + 1;
          *pcVar9 = *(char *)((uint)*pbVar2 + iVar8) +
                    *(char *)((uint)*pbVar1 + iVar7) + *(char *)((uint)bVar3 + iVar6);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}

