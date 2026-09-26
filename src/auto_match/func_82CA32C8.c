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
extern int fn_82C45138();


undefined8 fn_82CA32C8(int param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar14;
  longlong lVar13;
  uint uVar16;
  longlong lVar15;
  
  uVar14 = *(uint *)(param_1 + 0x80);
  uVar16 = *(uint *)(param_1 + 0x84);
  if (*(int *)(param_1 + 0xebc) == 0) {
    uVar3 = 0xfffffffffffffff7;
  }
  else {
    puVar1 = *(uint **)(param_1 + 0xebc);
    param_2 = (ulonglong)*(uint *)(param_1 + 0x3d4c) + param_2;
    lVar10 = (ulonglong)*(uint *)(param_1 + 0xdc) + (ulonglong)*puVar1;
    lVar11 = (ulonglong)puVar1[1] + (ulonglong)*(uint *)(param_1 + 0xe0);
    lVar9 = (ulonglong)puVar1[2] + (ulonglong)*(uint *)(param_1 + 0xe0);
    if (*(int *)(param_1 + 0x3e54) == 0) {
      uVar8 = 0;
      if (uVar16 != 0) {
        do {
          uVar12 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar14 - 1;
            lVar6 = param_2;
            lVar13 = lVar10;
            lVar15 = lVar11;
            do {
              if ((uVar12 == uVar7) || (uVar8 == uVar16 - 1)) {
                iVar4 = fn_82C45138(param_1);
                if (iVar4 == 0) {
                  if (uVar12 == uVar7) {
                    lVar5 = ((ulonglong)*(uint *)(param_1 + 0x9c) -
                            (ulonglong)*(uint *)(param_1 + 0xb4)) + 0x10;
                  }
                  else {
                    lVar5 = 0x10;
                  }
                }
                else if (uVar12 == uVar7) {
                  lVar5 = ((ulonglong)*(uint *)(param_1 + 0x3c0c) -
                          (ulonglong)*(uint *)(param_1 + 0x3c14)) + 0x10;
                }
                else {
                  lVar5 = 0x10;
                }
                (**(code **)(param_1 + 0x3e44))
                          (param_1,lVar6,lVar13,lVar15,(lVar9 - lVar11) + lVar15,
                           *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c),lVar5);
              }
              else {
                (**(code **)(param_1 + 0x3e40))
                          (param_1,lVar6,lVar13,lVar15,(lVar9 - lVar11) + lVar15,
                           *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c),
                           *(undefined4 *)(param_1 + 0x3d44));
              }
              uVar12 = uVar12 + 1;
              lVar13 = lVar13 + 0x10;
              lVar15 = lVar15 + 8;
              lVar6 = (ulonglong)*(uint *)(param_1 + 0x3d50) + lVar6;
            } while (uVar12 < uVar14);
          }
          uVar8 = uVar8 + 1;
          lVar11 = (ulonglong)*(uint *)(param_1 + 0x70) + lVar11;
          lVar10 = lVar10 + (ulonglong)*(uint *)(param_1 + 100);
          lVar9 = (ulonglong)*(uint *)(param_1 + 0x70) + lVar9;
          param_2 = (ulonglong)*(uint *)(param_1 + 0x3d5c) + param_2;
        } while (uVar8 < uVar16);
      }
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x9c);
      uVar14 = *(uint *)(param_1 + 0xa0);
      iVar4 = fn_82C45138(param_1);
      if (iVar4 != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x3c0c);
        uVar14 = *(uint *)(param_1 + 0x3c10);
      }
      uVar16 = 0;
      if (uVar14 != 0) {
        do {
          (**(code **)(param_1 + 0x3e54))(param_2,lVar10,lVar11,lVar9,uVar2);
          uVar8 = uVar16 & 1;
          uVar16 = uVar16 + 1;
          lVar6 = (longlong)(int)uVar8 * (longlong)*(int *)(param_1 + 0x6c);
          lVar10 = (ulonglong)*(uint *)(param_1 + 0x60) + lVar10;
          param_2 = (ulonglong)*(uint *)(param_1 + 0x3d44) + param_2;
          lVar11 = lVar6 + lVar11;
          lVar9 = lVar6 + lVar9;
        } while (uVar16 < uVar14);
        return 0;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

