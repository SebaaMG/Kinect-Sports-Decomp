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
extern int fn_82643A48();
extern int fn_82645110();
extern int fn_8264D6C0();
extern int fn_82F68CC0();


void fn_82642CC8(int param_1,int param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if (*(int *)(param_2 + 0x14) != 0) {
    param_2 = *(int *)(param_2 + 0x14) + param_2;
    puVar8 = (ushort *)(param_2 + 0x14);
    puVar7 = (ushort *)(*(int *)(param_2 + 0x10) + (int)puVar8);
    while (puVar8 < puVar7) {
      uVar1 = puVar8[1];
      uVar9 = (ulonglong)uVar1;
      puVar6 = (uint *)(puVar8 + 2);
      uVar2 = *puVar8;
      if (uVar9 == 0) {
        return;
      }
      puVar8 = puVar8 + 4;
      uVar11 = (ulonglong)*puVar6 + param_3;
      if (((*(byte *)(param_1 + 0x2abc) & 0x80) == 0) ||
         (iVar4 = KeGetCurrentProcessType(), iVar4 != 2)) {
        uVar5 = *(uint *)(param_1 + 0x30);
        if (*(uint *)(param_1 + 0x38) < uVar5) {
          uVar5 = fn_82645110(param_1);
        }
        *(undefined4 *)(uVar5 + 4) = 0xc0022f00;
        *(uint *)(uVar5 + 8) =
             ((int)((uVar11 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((uint)uVar11 & 0x1fffffff);
        *(uint *)(uVar5 + 0xc) = (uint)uVar2 << 2;
        *(uint *)(uVar5 + 0x10) = (uint)uVar1;
        *(uint **)(param_1 + 0x30) = (uint *)(uVar5 + 0x10);
      }
      else {
        iVar4 = fn_82643A48(param_1,uVar9 + 1);
        if (iVar4 != 0) {
          sync(0);
          *(uint *)(iVar4 + 4) = (uVar2 + 0x1000) * 4 | (uint)((uVar9 - 1 & 0xffffffff) << 0x10);
          lVar3 = uVar9 * 4;
          lVar10 = (((uVar11 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar11 & 0x1fffffff) +
                   -0x40000000;
          fn_82F68CC0(iVar4 + 8,lVar10,lVar3);
          fn_8264D6C0(lVar10,lVar3 + lVar10,0);
          *(int *)(param_1 + 0x30) = (int)lVar3 + iVar4 + 4;
        }
      }
    }
  }
  return;
}

