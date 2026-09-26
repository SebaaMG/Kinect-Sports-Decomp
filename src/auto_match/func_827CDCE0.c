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
extern int fn_827CDA40();
extern unsigned int uStack_64;


undefined8 fn_827CDCE0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  undefined4 uStack_64;
  int aiStack_60 [24];
  
  iVar1 = *(int *)(param_1 + 0x148);
  iVar18 = 0;
  if (0 < *(int *)(param_1 + 0xe4)) {
    piVar16 = (int *)(param_1 + 0xe4);
    puVar14 = &uStack_64;
    do {
      piVar16 = piVar16 + 1;
      iVar12 = *(int *)(*piVar16 + 0xc);
      uVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)((*(int *)(*piVar16 + 4) + 0x10) * 4 + iVar1),
                         (longlong)*(int *)(iVar1 + 8) * (longlong)iVar12,iVar12,0);
      iVar12 = *(int *)(param_1 + 0xe4);
      puVar14 = puVar14 + 1;
      *puVar14 = uVar3;
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar12);
  }
  iVar18 = *(int *)(iVar1 + 0x10);
  if (iVar18 < *(int *)(iVar1 + 0x14)) {
    iVar12 = iVar18 << 2;
    do {
      uVar15 = *(uint *)(iVar1 + 0xc);
      if (uVar15 < *(uint *)(param_1 + 0xf8)) {
        do {
          iVar17 = 0;
          iVar13 = 0;
          if (0 < *(int *)(param_1 + 0xe4)) {
            piVar19 = aiStack_60;
            piVar16 = (int *)(param_1 + 0xe8);
            do {
              iVar2 = *piVar16;
              iVar5 = 0;
              iVar11 = *(int *)(iVar2 + 0x34);
              iVar9 = iVar11 * uVar15;
              if (0 < *(int *)(iVar2 + 0x38)) {
                piVar6 = (int *)(iVar12 + *piVar19);
                do {
                  iVar10 = 0;
                  iVar8 = *piVar6 + iVar9 * 0x80;
                  if (0 < iVar11) {
                    piVar7 = (int *)((iVar17 + 5) * 4 + iVar1);
                    do {
                      iVar10 = iVar10 + 1;
                      piVar7 = piVar7 + 1;
                      *piVar7 = iVar8;
                      iVar11 = *(int *)(iVar2 + 0x34);
                      iVar17 = iVar17 + 1;
                      iVar8 = iVar8 + 0x80;
                    } while (iVar10 < iVar11);
                  }
                  iVar5 = iVar5 + 1;
                  piVar6 = piVar6 + 1;
                } while (iVar5 < *(int *)(iVar2 + 0x38));
              }
              iVar13 = iVar13 + 1;
              piVar16 = piVar16 + 1;
              piVar19 = piVar19 + 1;
            } while (iVar13 < *(int *)(param_1 + 0xe4));
          }
          cVar4 = (**(code **)(*(int *)(param_1 + 0x15c) + 4))(param_1,iVar1 + 0x18);
          if (cVar4 == '\0') {
            *(int *)(iVar1 + 0x10) = iVar18;
            *(uint *)(iVar1 + 0xc) = uVar15;
            return 0;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(param_1 + 0xf8));
      }
      iVar18 = iVar18 + 1;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar12 = iVar12 + 4;
    } while (iVar18 < *(int *)(iVar1 + 0x14));
  }
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  fn_827CDA40(param_1);
  return 1;
}

