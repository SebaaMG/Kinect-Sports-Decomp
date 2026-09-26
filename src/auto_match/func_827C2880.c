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
extern int fn_827C25F0();
extern unsigned int uStack_64;


undefined8 fn_827C2880(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar3;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  undefined4 uStack_64;
  int aiStack_60 [24];
  
  iVar1 = *(int *)(param_1 + 0x188);
  iVar19 = 0;
  if (0 < *(int *)(param_1 + 0x124)) {
    piVar17 = (int *)(param_1 + 0x124);
    puVar15 = &uStack_64;
    do {
      piVar17 = piVar17 + 1;
      iVar13 = *(int *)(*piVar17 + 0xc);
      uVar4 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                        (param_1,*(undefined4 *)((*(int *)(*piVar17 + 4) + 0x12) * 4 + iVar1),
                         (longlong)*(int *)(param_1 + 0x80) * (longlong)iVar13,iVar13,1);
      iVar13 = *(int *)(param_1 + 0x124);
      puVar15 = puVar15 + 1;
      *puVar15 = uVar4;
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar13);
  }
  iVar19 = *(int *)(iVar1 + 0x18);
  if (iVar19 < *(int *)(iVar1 + 0x1c)) {
    iVar13 = iVar19 << 2;
    do {
      uVar16 = *(uint *)(iVar1 + 0x14);
      if (uVar16 < *(uint *)(param_1 + 0x138)) {
        do {
          iVar18 = 0;
          iVar14 = 0;
          if (0 < *(int *)(param_1 + 0x124)) {
            piVar20 = aiStack_60;
            piVar17 = (int *)(param_1 + 0x128);
            do {
              iVar2 = *piVar17;
              iVar6 = 0;
              iVar12 = *(int *)(iVar2 + 0x34);
              iVar10 = iVar12 * uVar16;
              if (0 < *(int *)(iVar2 + 0x38)) {
                piVar7 = (int *)(iVar13 + *piVar20);
                do {
                  iVar11 = 0;
                  iVar9 = *piVar7 + iVar10 * 0x80;
                  if (0 < iVar12) {
                    piVar8 = (int *)((iVar18 + 7) * 4 + iVar1);
                    do {
                      iVar11 = iVar11 + 1;
                      piVar8 = piVar8 + 1;
                      *piVar8 = iVar9;
                      iVar12 = *(int *)(iVar2 + 0x34);
                      iVar18 = iVar18 + 1;
                      iVar9 = iVar9 + 0x80;
                    } while (iVar11 < iVar12);
                  }
                  iVar6 = iVar6 + 1;
                  piVar7 = piVar7 + 1;
                } while (iVar6 < *(int *)(iVar2 + 0x38));
              }
              iVar14 = iVar14 + 1;
              piVar17 = piVar17 + 1;
              piVar20 = piVar20 + 1;
            } while (iVar14 < *(int *)(param_1 + 0x124));
          }
          cVar5 = (**(code **)(*(int *)(param_1 + 0x198) + 4))(param_1,iVar1 + 0x20);
          if (cVar5 == '\0') {
            *(int *)(iVar1 + 0x18) = iVar19;
            *(uint *)(iVar1 + 0x14) = uVar16;
            return 0;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(uint *)(param_1 + 0x138));
      }
      iVar19 = iVar19 + 1;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      iVar13 = iVar13 + 4;
    } while (iVar19 < *(int *)(iVar1 + 0x1c));
  }
  uVar16 = *(int *)(param_1 + 0x80) + 1;
  *(uint *)(param_1 + 0x80) = uVar16;
  if (uVar16 < *(uint *)(param_1 + 0x11c)) {
    fn_827C25F0(param_1);
    uVar3 = 3;
  }
  else {
    (**(code **)(*(int *)(param_1 + 400) + 0xc))(param_1);
    uVar3 = 4;
  }
  return uVar3;
}

