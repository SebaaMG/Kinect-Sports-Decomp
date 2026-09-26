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
extern int fn_82631400();
extern unsigned int uStack00000024;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;


undefined8 fn_82ABD710(undefined8 param_1,undefined8 param_2,uint param_3,code *param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ushort uVar9;
  int iVar8;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  ulonglong uVar18;
  int iVar19;
  uint uStack00000024;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint *apuStack_b0 [44];
  
  uStack00000024 = param_3;
  fn_82631400(param_1,apuStack_b0);
  if ((((apuStack_b0[0] == (uint *)0x0) || (apuStack_b0[0][4] == 0)) ||
      (iVar10 = apuStack_b0[0][4] + (int)apuStack_b0[0], iVar10 == 0)) ||
     (iVar14 = iVar10 + 4, iVar14 == 0)) {
    uVar6 = 1;
  }
  else {
    uVar2 = *apuStack_b0[0];
    uVar3 = *(uint *)(iVar10 + 0x10);
    uVar13 = 0;
    piVar17 = (int *)(*(int *)(iVar10 + 0x14) + iVar14);
    if (uVar3 != 0) {
      uVar5 = param_3 & 1;
      do {
        iVar10 = *piVar17;
        sVar1 = *(short *)(piVar17 + 1);
        uVar9 = *(ushort *)((int)piVar17 + 6);
        uVar11 = (ulonglong)*(ushort *)(piVar17 + 2);
        if (((uVar2 & 1) == 0) && ((param_3 & 0x10) != 0)) {
          if (sVar1 == 0) {
            uVar9 = uVar9 ^ 0x80;
          }
          if (sVar1 == 1) {
            uVar9 = uVar9 ^ 0x10;
          }
        }
        if (uVar5 == 0) {
          uVar6 = (*param_4)(param_2,iVar10 + iVar14,uVar11,sVar1,uVar9,0);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
        }
        else if (uVar5 == 1) {
          iVar4 = piVar17[4];
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uVar18 = 0;
          uStack_b4 = 0;
          iVar15 = (-(uint)(sVar1 != 0) & 3) + 1;
          if (uVar11 != 0) {
            iVar16 = 0;
            do {
              if (iVar4 == 0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                iVar12 = 0;
                if (iVar15 != 0) {
                  puVar7 = &uStack_c4;
                  iVar19 = iVar15;
                  do {
                    iVar8 = iVar16 + iVar12;
                    iVar12 = iVar12 + 1;
                    puVar7 = puVar7 + 1;
                    *puVar7 = *(undefined4 *)(iVar8 * 4 + iVar4 + iVar14);
                    iVar19 = iVar19 + -1;
                  } while (iVar19 != 0);
                }
                puVar7 = &uStack_c0;
              }
              uVar6 = (*param_4)(param_2,iVar10 + iVar14,uVar18,sVar1,uVar9,puVar7);
              if ((int)uVar6 < 0) {
                return uVar6;
              }
              uVar18 = uVar18 + 1;
              iVar16 = iVar16 + iVar15;
              param_3 = uStack00000024;
            } while ((uVar18 & 0xffffffff) < uVar11);
          }
        }
        uVar13 = uVar13 + 1;
        piVar17 = piVar17 + 5;
      } while (uVar13 < uVar3);
    }
    uVar6 = 0;
  }
  return uVar6;
}

