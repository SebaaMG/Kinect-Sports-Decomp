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
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;


undefined8 fn_82CA36D0(int param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar20;
  longlong lVar19;
  uint uStack_bc;
  uint uStack_b4;
  uint uStack_b0;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar2 = *(uint *)(param_1 + 0x84);
  uVar11 = *(uint *)(param_1 + 0x9c);
  uVar10 = *(uint *)(param_1 + 0xa0);
  if (*(int *)(param_1 + 0xebc) == 0) {
    uVar5 = 1;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0xebc);
    uVar8 = (ulonglong)puVar3[2] + (ulonglong)*(uint *)(param_1 + 0xe0);
    lVar9 = (ulonglong)*(uint *)(param_1 + 0xdc) + (ulonglong)*puVar3;
    lVar15 = (ulonglong)puVar3[1] + (ulonglong)*(uint *)(param_1 + 0xe0);
    uStack_b0 = (uint)uVar8;
    if (*(int *)(param_1 + 0x5680) == 1) {
      iVar4 = *(int *)(param_1 + 0x5690);
      iVar18 = *(int *)(param_1 + 0x5698);
      uStack_bc = iVar4 << 4;
      uStack_b4 = iVar18 << 3;
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x5684);
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x5688);
      uVar12 = (ulonglong)*(uint *)(param_1 + 0x568c);
      iVar20 = *(int *)(param_1 + 0x5694);
      uVar7 = *(int *)(param_1 + 0x5694) << 3;
    }
    else {
      uStack_b4 = *(uint *)(param_1 + 0x3d64);
      uStack_bc = *(uint *)(param_1 + 0x3d5c);
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x3d4c) + param_2;
      iVar18 = *(int *)(param_1 + 0x3d48);
      iVar4 = *(int *)(param_1 + 0x3d44);
      uVar13 = *(uint *)(param_1 + 0x3d18) + uVar14;
      uVar12 = *(uint *)(param_1 + 0x3d1c) + uVar14;
      iVar20 = iVar18;
      uVar7 = uStack_b4;
    }
    iVar6 = fn_82C45138(param_1);
    if (iVar6 != 0) {
      uVar11 = *(uint *)(param_1 + 0x3c0c);
      uVar10 = *(uint *)(param_1 + 0x3c10);
    }
    if (*(code **)(param_1 + 0x3e58) == (code *)0x0) {
      uVar11 = 0;
      if (uVar2 != 0) {
        do {
          uVar10 = 0;
          if (uVar1 != 0) {
            lVar16 = uVar8 - lVar15;
            lVar17 = lVar9;
            lVar19 = lVar15;
            do {
              if ((uVar10 == uVar1 - 1) || (uVar11 == uVar2 - 1)) {
                fn_82C45138(param_1);
                (**(code **)(param_1 + 0x3e50))
                          (param_1,(uVar14 - lVar9) + lVar17,(uVar13 - lVar15) + lVar19,
                           (uVar12 - lVar15) + lVar19,lVar17,lVar19,lVar16 + lVar19,
                           *(undefined4 *)(param_1 + 0x60));
                uVar8 = (ulonglong)uStack_b0;
              }
              else {
                (**(code **)(param_1 + 0x3e4c))
                          (param_1,(uVar14 - lVar9) + lVar17,(uVar13 - lVar15) + lVar19,
                           (uVar12 - lVar15) + lVar19,lVar17,lVar19,lVar16 + lVar19,
                           *(undefined4 *)(param_1 + 0x60));
              }
              uVar10 = uVar10 + 1;
              lVar17 = lVar17 + 0x10;
              lVar19 = lVar19 + 8;
            } while (uVar10 < uVar1);
          }
          uVar11 = uVar11 + 1;
          uVar8 = *(uint *)(param_1 + 0x70) + uVar8;
          lVar15 = (ulonglong)*(uint *)(param_1 + 0x70) + lVar15;
          uVar14 = uStack_bc + uVar14;
          lVar9 = (ulonglong)*(uint *)(param_1 + 100) + lVar9;
          uStack_b0 = (uint)uVar8;
          uVar13 = uVar7 + uVar13;
          uVar12 = uStack_b4 + uVar12;
        } while (uVar11 < uVar2);
      }
      uVar5 = 0;
    }
    else {
      (**(code **)(param_1 + 0x3e58))
                (uVar14,lVar9,uVar10,uVar11,*(undefined4 *)(param_1 + 0x60),iVar4);
      (**(code **)(param_1 + 0x3e58))
                (uVar12,uVar8,uVar10 >> 1,uVar11 >> 1,*(undefined4 *)(param_1 + 0x6c),iVar20);
      (**(code **)(param_1 + 0x3e58))
                (uVar13,lVar15,uVar10 >> 1,uVar11 >> 1,*(undefined4 *)(param_1 + 0x6c),iVar18);
      uVar5 = 0;
    }
  }
  return uVar5;
}

