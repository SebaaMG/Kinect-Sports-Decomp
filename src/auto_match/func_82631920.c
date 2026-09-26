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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8264B4A0();
extern int fn_82F68CC0();
extern unsigned int uStack_30;


void fn_82631920(ulonglong *param_1,int param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ulonglong *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uStack_30;
  
  if (param_2 != 0) {
    param_1[2] = param_1[2] | 0x80000;
  }
  puVar9 = *(uint **)(param_1 + 0x649);
  if (puVar9 != (uint *)0x0) {
    if (*(uint *)((int)param_1 + 0x2a9c) == 0) {
      if ((*(uint *)(param_1 + 0x554) & *puVar9) != 0) {
        puVar4 = *(undefined8 **)(param_1 + 0x6b5);
        if (*(undefined8 **)((int)param_1 + 0x35ac) <= puVar4) {
          puVar4 = (undefined8 *)fn_8264B4A0(param_1);
        }
        *puVar4 = CONCAT44((uint)puVar9 >> 2 | uStack_30 & 0x80000000,0xffffffff);
        *(undefined8 **)(param_1 + 0x6b5) = puVar4 + 1;
      }
    }
    else {
      puVar9[2] = *(uint *)((int)param_1 + 0x2a9c);
    }
  }
  *(int *)(param_1 + 0x649) = param_2;
  *(byte *)((int)param_1 + 0x2abe) = *(byte *)((int)param_1 + 0x2abe) & 0x7f;
  if (((param_2 != 0) && (param_2 + 0x368 != 0)) && (*(int *)(param_2 + 0x37c) != 0)) {
    puVar6 = (ulonglong *)(*(int *)(param_2 + 0x37c) + param_2 + 0x368);
    *param_1 = *param_1 & ~*puVar6;
    if (puVar6[1] != 0) {
      param_1[4] = param_1[4] | 0x100000000000000;
    }
    puVar8 = (uint *)((int)puVar6 + 0x14);
    puVar9 = (uint *)(*(int *)(puVar6 + 2) + (int)puVar8);
    if (puVar8 < puVar9) {
      do {
        puVar10 = puVar8 + 1;
        if ((ushort)*puVar8 == 0) break;
        puVar8 = puVar8 + 2;
        puVar10 = puVar8;
      } while (puVar8 < puVar9);
      if (puVar10 < puVar9) {
        do {
          uVar7 = (uint)(ushort)*puVar10;
          uVar5 = *(ushort *)puVar10;
          puVar10 = puVar10 + 1;
          if (uVar7 == 0) break;
          fn_82F68CC0((int)param_1 + uVar5 + 0x480,puVar10,uVar7 * 4);
          puVar10 = puVar10 + uVar7;
        } while (puVar10 < puVar9);
        while( true ) {
          if (puVar9 <= puVar10) {
            return;
          }
          uVar5 = (ushort)*puVar10;
          uVar1 = *(ushort *)puVar10;
          puVar10 = puVar10 + 1;
          if (uVar5 == 0) break;
          puVar8 = (uint *)((int)param_1 + uVar1 + 0x47c);
          do {
            uVar7 = *puVar10;
            puVar2 = puVar8 + 1;
            puVar3 = puVar10 + 1;
            uVar5 = uVar5 - 2;
            puVar10 = puVar10 + 2;
            puVar8 = puVar8 + 1;
            *puVar8 = *puVar2 & uVar7 | *puVar3;
          } while (uVar5 != 0);
        }
        return;
      }
    }
  }
  return;
}

