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


longlong fn_825B5718(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x18);
  lVar1 = 0x10;
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    iVar5 = 0;
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + 4);
    do {
      uVar2 = 0;
      lVar7 = (longlong)(*(int *)(iVar5 + *(int *)(param_1 + 0x1c)) * *piVar3) * (longlong)piVar3[1]
      ;
      if (0 < lVar7) {
        iVar4 = 0;
        do {
          if (*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x18) + iVar4 + 4) != -1) {
            uVar2 = uVar2 + 1;
          }
          iVar4 = iVar4 + 0x20;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar8 = (uVar2 & 0x3ffffff) * 0x40;
      lVar7 = lVar8 + ((ulonglong)(uint)((int)lVar8 >> 4) & 0xfffffff) * -0x10;
      if (lVar7 < 1) {
        if ((int)lVar7 < 0) {
          lVar8 = lVar8 - lVar7;
        }
      }
      else {
        lVar8 = (lVar8 - lVar7) + 0x10;
      }
      uVar6 = uVar6 - 1;
      lVar1 = lVar8 + lVar1;
      iVar5 = iVar5 + 0x1c;
      piVar3 = piVar3 + 7;
    } while (uVar6 != 0);
  }
  return lVar1;
}

