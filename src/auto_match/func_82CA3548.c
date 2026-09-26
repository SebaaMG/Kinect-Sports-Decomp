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


undefined8 fn_82CA3548(int param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  puVar1 = *(uint **)(param_1 + 0xebc);
  uVar7 = 0;
  param_2 = (ulonglong)*(uint *)(param_1 + 0x3d4c) + param_2;
  uVar2 = *(uint *)(param_1 + 0x84);
  lVar6 = (ulonglong)*(uint *)(param_1 + 0xdc) + (ulonglong)*puVar1;
  uVar3 = *(uint *)(param_1 + 0x80);
  lVar8 = (ulonglong)puVar1[1] + (ulonglong)*(uint *)(param_1 + 0xe0);
  lVar5 = (ulonglong)puVar1[2] + (ulonglong)*(uint *)(param_1 + 0xe0);
  if (uVar2 != 0) {
    do {
      uVar9 = 0;
      if (uVar3 != 0) {
        lVar10 = param_2;
        lVar11 = lVar6;
        lVar12 = lVar8;
        do {
          if (uVar9 == uVar3 - 1) {
            lVar4 = ((ulonglong)*(uint *)(param_1 + 0x9c) - (ulonglong)*(uint *)(param_1 + 0xb4)) +
                    0x10;
LAB_82ca3614:
            (**(code **)(param_1 + 0x3e44))
                      (param_1,lVar10,lVar11,lVar12,(lVar5 - lVar8) + lVar12,
                       *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c),lVar4);
          }
          else {
            if (uVar7 == uVar2 - 1) {
              lVar4 = 0x10;
              goto LAB_82ca3614;
            }
            (**(code **)(param_1 + 0x3e40))
                      (param_1,lVar10,lVar11,lVar12,(lVar5 - lVar8) + lVar12,
                       *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c),
                       *(undefined4 *)(param_1 + 0x3d44));
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 0x10;
          lVar12 = lVar12 + 4;
          lVar10 = lVar10 + (ulonglong)*(uint *)(param_1 + 0x3d50);
        } while (uVar9 < uVar3);
      }
      uVar7 = uVar7 + 1;
      lVar10 = ((ulonglong)*(uint *)(param_1 + 0x6c) & 0xfffffff) * 0x10;
      lVar6 = (ulonglong)*(uint *)(param_1 + 100) + lVar6;
      lVar8 = lVar10 + lVar8;
      lVar5 = lVar10 + lVar5;
      param_2 = (ulonglong)*(uint *)(param_1 + 0x3d5c) + param_2;
    } while (uVar7 < uVar2);
  }
  return 0;
}

