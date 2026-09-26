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


void fn_827CFDA8(int param_1,int param_2,int *param_3,int param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  ulonglong uVar9;
  
  param_5 = param_5 + -1;
  uVar1 = *(uint *)(param_1 + 0x1c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x150) + 8);
  if (-1 < param_5) {
    param_4 = param_4 << 2;
    piVar8 = (int *)(param_2 + -4);
    do {
      iVar6 = 0;
      piVar8 = piVar8 + 1;
      iVar3 = *(int *)(*param_3 + param_4);
      param_4 = param_4 + 4;
      if ((ulonglong)uVar1 != 0) {
        pbVar7 = (byte *)(*piVar8 + -1);
        uVar9 = (ulonglong)uVar1;
        do {
          pbVar4 = pbVar7 + 1;
          pbVar5 = pbVar7 + 2;
          pbVar7 = pbVar7 + 3;
          *(char *)(iVar6 + iVar3) =
               (char)((uint)(*(int *)((*pbVar7 + 0x200) * 4 + iVar2) +
                             *(int *)((*pbVar5 + 0x100) * 4 + iVar2) +
                            *(int *)((uint)*pbVar4 * 4 + iVar2)) >> 0x10);
          iVar6 = iVar6 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

