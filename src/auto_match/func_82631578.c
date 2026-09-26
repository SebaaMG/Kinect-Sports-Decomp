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


void fn_82631578(int param_1,int param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uStack_30;
  
  puVar10 = *(uint **)(param_1 + 0x3244);
  if (puVar10 != (uint *)0x0) {
    if (*(uint *)(param_1 + 0x2a9c) == 0) {
      if ((*(uint *)(param_1 + 0x2aa0) & *puVar10) != 0) {
        puVar4 = *(undefined8 **)(param_1 + 0x35a8);
        if (*(undefined8 **)(param_1 + 0x35ac) <= puVar4) {
          puVar4 = (undefined8 *)fn_8264B4A0(param_1);
        }
        *puVar4 = CONCAT44((uint)puVar10 >> 2 | uStack_30 & 0x80000000,0xffffffff);
        *(undefined8 **)(param_1 + 0x35a8) = puVar4 + 1;
      }
    }
    else {
      puVar10[2] = *(uint *)(param_1 + 0x2a9c);
    }
  }
  *(int *)(param_1 + 0x3244) = param_2;
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  *(ulonglong *)(param_1 + 0x10) = uVar6 | 0x100000;
  *(ulonglong *)(param_1 + 0x10) = uVar6 | 0x120000;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x3c) != 0) {
      puVar7 = (ulonglong *)(*(int *)(param_2 + 0x3c) + param_2 + 0x28);
      *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) & ~*puVar7;
      if (puVar7[1] != 0) {
        *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | 0x100000000000000;
      }
      puVar9 = (uint *)((int)puVar7 + 0x14);
      puVar10 = (uint *)(*(int *)(puVar7 + 2) + (int)puVar9);
      if (puVar9 < puVar10) {
        do {
          puVar11 = puVar9 + 1;
          if ((ushort)*puVar9 == 0) break;
          puVar9 = puVar9 + 2;
          puVar11 = puVar9;
        } while (puVar9 < puVar10);
        if (puVar11 < puVar10) {
          do {
            uVar8 = (uint)(ushort)*puVar11;
            uVar5 = *(ushort *)puVar11;
            puVar11 = puVar11 + 1;
            if (uVar8 == 0) break;
            fn_82F68CC0((uint)uVar5 + param_1 + 0x480,puVar11,uVar8 * 4);
            puVar11 = puVar11 + uVar8;
          } while (puVar11 < puVar10);
          while( true ) {
            if (puVar10 <= puVar11) {
              return;
            }
            uVar5 = (ushort)*puVar11;
            uVar1 = *(ushort *)puVar11;
            puVar11 = puVar11 + 1;
            if (uVar5 == 0) break;
            puVar9 = (uint *)((uint)uVar1 + param_1 + 0x480 + -4);
            do {
              uVar8 = *puVar11;
              puVar2 = puVar9 + 1;
              puVar3 = puVar11 + 1;
              uVar5 = uVar5 - 2;
              puVar11 = puVar11 + 2;
              puVar9 = puVar9 + 1;
              *puVar9 = *puVar2 & uVar8 | *puVar3;
            } while (uVar5 != 0);
          }
          return;
        }
      }
    }
  }
  return;
}

