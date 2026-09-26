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
extern int fn_827C1B68();


void fn_827CD1E8(int param_1,int param_2,int *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 100);
  uVar13 = (ulonglong)*(uint *)(param_1 + 0x5c);
  if (0 < (int)param_4) {
    param_2 = param_2 - (int)param_3;
    do {
      fn_827C1B68(*param_3,uVar13);
      iVar12 = 0;
      iVar3 = *(int *)(iVar1 + 0x30);
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          uVar11 = 0;
          iVar4 = *(int *)(iVar1 + 0x34 + iVar8);
          iVar5 = *(int *)(*(int *)(iVar1 + 0x18) + iVar8);
          if (uVar13 != 0) {
            pcVar10 = (char *)(*param_3 + -1);
            pbVar9 = (byte *)((iVar12 + *(int *)(param_2 + (int)param_3)) - iVar2);
            uVar14 = uVar13;
            do {
              iVar6 = uVar11 * 4;
              pbVar9 = pbVar9 + iVar2;
              pcVar7 = pcVar10 + 1;
              uVar11 = uVar11 + 1 & 0xf;
              pcVar10 = pcVar10 + 1;
              *pcVar10 = *(char *)(*(int *)(iVar6 + iVar4 + iVar3 * 0x40) + (uint)*pbVar9 + iVar5) +
                         *pcVar7;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          iVar12 = iVar12 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar12 < iVar2);
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 1;
      *(uint *)(iVar1 + 0x30) = iVar3 + 1U & 0xf;
    } while (param_4 != 0);
  }
  return;
}

