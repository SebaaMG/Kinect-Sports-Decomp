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
extern int fn_827C25F0();


undefined8 fn_827C2650(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar7;
  undefined8 uVar6;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  
  iVar1 = *(int *)(param_1 + 0x188);
  uVar9 = *(int *)(param_1 + 0x138) - 1;
  iVar2 = *(int *)(param_1 + 0x11c);
  iVar13 = *(int *)(iVar1 + 0x18);
  if (iVar13 < *(int *)(iVar1 + 0x1c)) {
    do {
      for (uVar14 = *(uint *)(iVar1 + 0x14); uVar14 <= uVar9; uVar14 = uVar14 + 1) {
        fn_827C1B68(*(undefined4 *)(iVar1 + 0x20),*(int *)(param_1 + 0x140) << 7);
        cVar7 = (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1,iVar1 + 0x20);
        if (cVar7 == '\0') {
          *(int *)(iVar1 + 0x18) = iVar13;
          *(uint *)(iVar1 + 0x14) = uVar14;
          return 0;
        }
        iVar12 = 0;
        iVar10 = 0;
        if (0 < *(int *)(param_1 + 0x124)) {
          piVar11 = (int *)(param_1 + 0x128);
          do {
            iVar3 = *piVar11;
            if (*(char *)(iVar3 + 0x30) == '\0') {
              iVar12 = *(int *)(iVar3 + 0x3c) + iVar12;
            }
            else {
              iVar19 = *(int *)(iVar3 + 4) * 4;
              pcVar4 = *(code **)(*(int *)(param_1 + 0x19c) + iVar19 + 4);
              if (uVar14 < uVar9) {
                iVar15 = *(int *)(iVar3 + 0x34);
              }
              else {
                iVar15 = *(int *)(iVar3 + 0x44);
              }
              iVar16 = 0;
              uVar8 = (ulonglong)*(uint *)(iVar3 + 0x24);
              iVar5 = *(int *)(iVar3 + 0x40);
              lVar17 = ((longlong)(int)*(uint *)(iVar3 + 0x24) * (longlong)iVar13 & 0x3fffffffU) * 4
                       + (ulonglong)*(uint *)(iVar19 + param_2);
              if (0 < *(int *)(iVar3 + 0x38)) {
                do {
                  if (((*(uint *)(param_1 + 0x80) < iVar2 - 1U) ||
                      (iVar16 + iVar13 < *(int *)(iVar3 + 0x48))) && (iVar19 = 0, 0 < iVar15)) {
                    lVar18 = (longlong)iVar5 * (longlong)(int)uVar14;
                    do {
                      (*pcVar4)(param_1,iVar3,*(undefined4 *)((iVar12 + 8 + iVar19) * 4 + iVar1),
                                lVar17,lVar18);
                      uVar8 = (ulonglong)*(uint *)(iVar3 + 0x24);
                      iVar19 = iVar19 + 1;
                      lVar18 = uVar8 + lVar18;
                    } while (iVar19 < iVar15);
                  }
                  iVar16 = iVar16 + 1;
                  iVar12 = *(int *)(iVar3 + 0x34) + iVar12;
                  lVar17 = (uVar8 & 0x3fffffff) * 4 + lVar17;
                } while (iVar16 < *(int *)(iVar3 + 0x38));
              }
            }
            iVar10 = iVar10 + 1;
            piVar11 = piVar11 + 1;
          } while (iVar10 < *(int *)(param_1 + 0x124));
        }
      }
      iVar13 = iVar13 + 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
    } while (iVar13 < *(int *)(iVar1 + 0x1c));
  }
  uVar9 = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  *(uint *)(param_1 + 0x80) = uVar9;
  if (uVar9 < *(uint *)(param_1 + 0x11c)) {
    fn_827C25F0(param_1);
    uVar6 = 3;
  }
  else {
    (**(code **)(*(int *)(param_1 + 400) + 0xc))(param_1);
    uVar6 = 4;
  }
  return uVar6;
}

