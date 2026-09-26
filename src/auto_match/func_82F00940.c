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


void fn_82F00940(int param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  
  pbVar5 = *(byte **)(param_1 + 0x1a90);
  pbVar4 = *(byte **)(param_1 + 0x5308);
  iVar2 = (int)param_2 * 2;
  iVar6 = 0;
  if (0 < (int)param_3) {
    do {
      if (0 < (int)param_2) {
        lVar7 = param_2;
        do {
          uVar3 = ((((((uint)pbVar5[iVar2] - (uint)pbVar4[iVar2]) - (uint)pbVar4[iVar2 + 1]) +
                    (uint)pbVar5[iVar2 + 1]) - (uint)*pbVar4) - (uint)pbVar4[1]) + (uint)*pbVar5 +
                  (uint)pbVar5[1];
          uVar1 = (int)uVar3 >> 0x1f;
          if ((int)((uVar3 ^ uVar1) - uVar1) < 8) {
            *(undefined1 *)(*(int *)(param_1 + 0x52e8) + iVar6) = 1;
          }
          else {
            *(undefined1 *)(*(int *)(param_1 + 0x52e8) + iVar6) = 0;
          }
          pbVar5 = pbVar5 + 2;
          pbVar4 = pbVar4 + 2;
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      param_3 = param_3 + -1;
      pbVar5 = pbVar5 + iVar2;
      pbVar4 = pbVar4 + iVar2;
    } while (param_3 != 0);
  }
  return;
}

