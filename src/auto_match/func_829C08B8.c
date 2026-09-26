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


void fn_829C08B8(int param_1,int param_2,ulonglong param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = (param_3 & 0x7fffffff) << 1;
  iVar4 = *(int *)((int)((param_3 + 0x2d5 & 0xffffffff) << 2) + param_1);
  if ((int)uVar7 <= *(int *)(param_1 + 0x1448)) {
    bVar1 = (int)uVar7 < *(int *)(param_1 + 0x1448);
    do {
      uVar8 = uVar7;
      if (bVar1) {
        iVar5 = *(int *)((int)((uVar7 + 0x2d6 & 0xffffffff) << 2) + param_1);
        iVar6 = *(int *)((int)((uVar7 + 0x2d5 & 0xffffffff) << 2) + param_1);
        uVar2 = *(ushort *)(iVar5 * 4 + param_2);
        uVar3 = *(ushort *)(iVar6 * 4 + param_2);
        if ((uVar2 < uVar3) ||
           ((uVar2 == uVar3 &&
            (*(byte *)(iVar5 + param_1 + 0x1450) <= *(byte *)(iVar6 + param_1 + 0x1450))))) {
          uVar8 = uVar7 + 1;
        }
      }
      uVar2 = *(ushort *)(iVar4 * 4 + param_2);
      iVar5 = *(int *)((int)((uVar8 + 0x2d5 & 0xffffffff) << 2) + param_1);
      uVar3 = *(ushort *)(iVar5 * 4 + param_2);
      if ((uVar2 < uVar3) ||
         ((uVar2 == uVar3 &&
          (*(byte *)(iVar4 + param_1 + 0x1450) <= *(byte *)(iVar5 + param_1 + 0x1450))))) break;
      uVar7 = (uVar8 & 0x7fffffff) << 1;
      *(int *)((int)((param_3 + 0x2d5 & 0xffffffff) << 2) + param_1) = iVar5;
      bVar1 = (int)uVar7 < *(int *)(param_1 + 0x1448);
      param_3 = uVar8;
    } while ((int)uVar7 <= *(int *)(param_1 + 0x1448));
  }
  *(int *)((int)((param_3 + 0x2d5 & 0xffffffff) << 2) + param_1) = iVar4;
  return;
}

