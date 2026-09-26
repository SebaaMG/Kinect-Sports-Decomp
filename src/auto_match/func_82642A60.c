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


void fn_82642A60(int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar9;
  longlong lVar8;
  ulonglong uVar10;
  
  if ((((*(byte *)(param_1 + 8) & 7) != 7) && ((*(uint *)(param_1 + 0x14) & 0x40000) == 0)) &&
     ((param_2 == 0 || ((*(uint *)(param_2 + 0x14) & 0x20000) == 0)))) {
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x14) >> 5) & 0x1f;
    uVar6 = 0;
    uVar1 = *(uint *)(param_2 + 0x14) >> 5;
    uVar7 = (ulonglong)uVar1 & 0x1f;
    puVar4 = (uint *)(param_2 + 0x20);
    puVar9 = (uint *)((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
    uVar2 = 0;
    uVar10 = uVar7;
    puVar5 = puVar9;
    if ((uVar1 & 0x1f) != 0) {
      do {
        for (; ((uVar6 & 0xffffffff) < uVar3 && ((uint)(byte)*puVar9 < (*puVar4 & 0xff)));
            puVar9 = puVar9 + 1) {
          uVar6 = uVar6 + 1;
        }
        puVar9 = puVar9 + 1;
        *puVar5 = *puVar4 & 0xffff;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 + 1;
        uVar10 = uVar10 - 1;
        uVar2 = uVar7;
      } while (uVar10 != 0);
    }
    if (uVar2 < uVar3) {
      puVar5 = puVar5 + -1;
      for (lVar8 = uVar3 - uVar2; lVar8 != 0; lVar8 = lVar8 + -1) {
        puVar5 = puVar5 + 1;
        *puVar5 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(uint *)(param_1 + 0x14) =
         *(uint *)(param_2 + 0x14) & 0x7ffff | *(uint *)(param_1 + 0x14) & 0xfff80000;
  }
  return;
}

