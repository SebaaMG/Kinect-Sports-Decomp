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
extern unsigned int *auStack_90;
extern int fn_827BFBB0();
extern unsigned int iStack_94;
extern unsigned int uStack_a4;


/* WARNING: Type propagation algorithm not settling */

undefined8 fn_827BFC68(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uStack_a4;
  int aiStack_a0 [3];
  int iStack_94;
  undefined4 auStack_90 [36];
  
  iVar1 = *(int *)(param_1 + 0xe0);
  iVar21 = 0;
  iVar2 = *(int *)(param_1 + 0xf8);
  iVar3 = *(int *)(param_1 + 0x148);
  if (0 < *(int *)(param_1 + 0xe4)) {
    piVar19 = (int *)(param_1 + 0xe4);
    puVar12 = &uStack_a4;
    do {
      piVar19 = piVar19 + 1;
      iVar10 = *(int *)(*piVar19 + 0xc);
      uVar7 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)
                                  (*(int *)(*piVar19 + 4) * 4 + *(int *)(iVar3 + 0x18)),
                         (longlong)*(int *)(iVar3 + 8) * (longlong)iVar10,iVar10,0);
      iVar10 = *(int *)(param_1 + 0xe4);
      puVar12 = puVar12 + 1;
      *puVar12 = uVar7;
      iVar21 = iVar21 + 1;
    } while (iVar21 < iVar10);
  }
  iVar21 = *(int *)(iVar3 + 0x10);
  do {
    if (*(int *)(iVar3 + 0x14) <= iVar21) {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      fn_827BFBB0(param_1);
      return 1;
    }
    for (uVar17 = *(uint *)(iVar3 + 0xc); uVar17 < *(uint *)(param_1 + 0xf8); uVar17 = uVar17 + 1) {
      iVar10 = 0;
      iVar16 = 0;
      if (0 < *(int *)(param_1 + 0xe4)) {
        piVar18 = aiStack_a0;
        piVar19 = (int *)(param_1 + 0xe8);
        do {
          iVar4 = *piVar19;
          iVar5 = *(int *)(iVar4 + 0x34);
          iVar20 = iVar5 * uVar17;
          if (iVar2 - 1U <= uVar17) {
            iVar5 = *(int *)(iVar4 + 0x44);
          }
          iVar22 = 0;
          if (0 < *(int *)(iVar4 + 0x38)) {
            iVar8 = iVar21 << 2;
            iVar23 = iVar10;
            do {
              iVar10 = iVar23;
              if ((*(uint *)(iVar3 + 8) < iVar1 - 1U) || (iVar22 + iVar21 < *(int *)(iVar4 + 0x48)))
              {
                iVar11 = *(int *)(*piVar18 + iVar8) + iVar20 * 0x80;
                iVar15 = 0;
                if (0 < iVar5) {
                  iVar10 = iVar5 + iVar23;
                  piVar13 = &iStack_94 + iVar23;
                  iVar23 = iVar5;
                  do {
                    piVar13 = piVar13 + 1;
                    *piVar13 = iVar11;
                    iVar11 = iVar11 + 0x80;
                    iVar23 = iVar23 + -1;
                    iVar15 = iVar5;
                  } while (iVar23 != 0);
                }
              }
              else {
                iVar15 = 0;
              }
              if (iVar15 < *(int *)(iVar4 + 0x34)) {
                puVar14 = auStack_90 + iVar10 + -2;
                puVar12 = (undefined4 *)((iVar10 + 6) * 4 + iVar3);
                do {
                  puVar12 = puVar12 + 1;
                  puVar6 = (undefined2 *)*puVar12;
                  iVar15 = iVar15 + 1;
                  iVar10 = iVar10 + 1;
                  puVar14[2] = puVar6;
                  puVar14 = puVar14 + 1;
                  *puVar6 = *(undefined2 *)*puVar14;
                } while (iVar15 < *(int *)(iVar4 + 0x34));
              }
              iVar22 = iVar22 + 1;
              iVar8 = iVar8 + 4;
              iVar23 = iVar10;
            } while (iVar22 < *(int *)(iVar4 + 0x38));
          }
          iVar16 = iVar16 + 1;
          piVar19 = piVar19 + 1;
          piVar18 = piVar18 + 1;
        } while (iVar16 < *(int *)(param_1 + 0xe4));
      }
      cVar9 = (**(code **)(*(int *)(param_1 + 0x15c) + 4))(param_1,auStack_90);
      if (cVar9 == '\0') {
        *(int *)(iVar3 + 0x10) = iVar21;
        *(uint *)(iVar3 + 0xc) = uVar17;
        return 0;
      }
    }
    iVar21 = iVar21 + 1;
    *(undefined4 *)(iVar3 + 0xc) = 0;
  } while( true );
}

