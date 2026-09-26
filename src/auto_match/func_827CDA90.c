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
extern int fn_827C1B68();
extern int fn_827CDA40();


undefined8 fn_827CDA90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  
  iVar1 = *(int *)(param_1 + 0x148);
  iVar2 = *(int *)(param_1 + 0xe0);
  uVar11 = *(int *)(param_1 + 0xf8) - 1;
  uVar14 = (ulonglong)*(uint *)(iVar1 + 0x10);
  do {
    iVar15 = (int)uVar14;
    if (*(int *)(iVar1 + 0x14) <= iVar15) {
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      fn_827CDA40(param_1);
      return 1;
    }
    uVar16 = *(uint *)(iVar1 + 0xc);
    if (uVar16 <= uVar11) {
      do {
        lVar19 = 0;
        iVar12 = 0;
        if (0 < *(int *)(param_1 + 0xe4)) {
          piVar13 = (int *)(param_1 + 0xe8);
          do {
            iVar3 = *piVar13;
            if (uVar16 < uVar11) {
              uVar4 = *(uint *)(iVar3 + 0x34);
            }
            else {
              uVar4 = *(uint *)(iVar3 + 0x44);
            }
            uVar20 = (ulonglong)uVar4;
            iVar5 = *(int *)(iVar3 + 0x40);
            iVar17 = 0;
            if (0 < *(int *)(iVar3 + 0x38)) {
              uVar9 = (ulonglong)*(uint *)(iVar3 + 0x34);
              lVar18 = (uVar14 & 0x1fffffff) << 3;
              do {
                if ((*(uint *)(iVar1 + 8) < iVar2 - 1U) ||
                   (iVar17 + iVar15 < *(int *)(iVar3 + 0x48))) {
                  (**(code **)(*(int *)(param_1 + 0x158) + 4))
                            (param_1,iVar3,*(undefined4 *)(*(int *)(iVar3 + 4) * 4 + param_2),
                             *(undefined4 *)((int)((lVar19 + 6U & 0xffffffff) << 2) + iVar1),lVar18,
                             (longlong)iVar5 * (longlong)(int)uVar16,uVar20);
                  uVar9 = (ulonglong)*(uint *)(iVar3 + 0x34);
                  if ((int)uVar4 < (int)*(uint *)(iVar3 + 0x34)) {
                    fn_827C1B68(*(undefined4 *)
                                     ((int)((uVar20 + lVar19 + 6 & 0xffffffff) << 2) + iVar1),
                                    (uVar9 - uVar20 & 0x1ffffff) << 7);
                    uVar9 = (ulonglong)*(uint *)(iVar3 + 0x34);
                    if ((int)uVar4 < (int)*(uint *)(iVar3 + 0x34)) {
                      uVar8 = uVar20;
                      do {
                        uVar10 = lVar19 + 5 + uVar8;
                        uVar9 = lVar19 + 6U + uVar8;
                        uVar8 = uVar8 + 1;
                        **(undefined2 **)((int)((uVar9 & 0xffffffff) << 2) + iVar1) =
                             **(undefined2 **)((int)((uVar10 & 0xffffffff) << 2) + iVar1);
                        uVar9 = (ulonglong)*(uint *)(iVar3 + 0x34);
                      } while ((int)uVar8 < (int)*(uint *)(iVar3 + 0x34));
                    }
                  }
                }
                else {
                  fn_827C1B68(*(undefined4 *)((int)((lVar19 + 6U & 0xffffffff) << 2) + iVar1),
                                  (uVar9 & 0x1ffffff) << 7);
                  uVar9 = (ulonglong)*(uint *)(iVar3 + 0x34);
                  lVar7 = 0;
                  if (0 < (int)*(uint *)(iVar3 + 0x34)) {
                    do {
                      uVar9 = lVar19 + 6U + lVar7;
                      lVar7 = lVar7 + 1;
                      **(undefined2 **)((int)((uVar9 & 0xffffffff) << 2) + iVar1) =
                           **(undefined2 **)((int)((lVar19 + 5U & 0xffffffff) << 2) + iVar1);
                      uVar9 = (ulonglong)*(uint *)(iVar3 + 0x34);
                    } while ((int)lVar7 < (int)*(uint *)(iVar3 + 0x34));
                  }
                }
                iVar17 = iVar17 + 1;
                lVar19 = uVar9 + lVar19;
                lVar18 = lVar18 + 8;
              } while (iVar17 < *(int *)(iVar3 + 0x38));
            }
            iVar12 = iVar12 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar12 < *(int *)(param_1 + 0xe4));
        }
        cVar6 = (**(code **)(*(int *)(param_1 + 0x15c) + 4))(param_1,iVar1 + 0x18);
        if (cVar6 == '\0') {
          *(int *)(iVar1 + 0x10) = iVar15;
          *(uint *)(iVar1 + 0xc) = uVar16;
          return 0;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 <= uVar11);
    }
    uVar14 = uVar14 + 1;
    *(undefined4 *)(iVar1 + 0xc) = 0;
  } while( true );
}

