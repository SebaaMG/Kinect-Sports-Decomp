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
#define ZEXT48(x) ((U64)((U32)(x)))
#define BADSPACEBASE char
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_827F3A60();
extern int fn_827F3AE8();
extern int fn_827F3B30();
extern int fn_827F3B90();
extern int fn_827F3BA8();
extern int fn_827F3C08();
extern int fn_827F3C18();
extern int fn_827F40B8();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_827F09C8(longlong param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar13;
  longlong lVar12;
  char cVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 auStack_f0 [16];
  undefined4 auStack_b0 [44];
  
  uVar6 = ZEXT48(&stack0x00000000);
  iVar19 = (int)(uVar6 - 0x180);
  *(BADSPACEBASE **)iVar19 = register0x0000000c;
  piVar5 = (int *)param_1;
  if (*(char *)(piVar5 + 0x62) == '\0') {
    (**(code **)(*piVar5 + 4))((double)lbl_821AAD20);
  }
  uVar3 = piVar5[0x3c];
  if (uVar3 == 0xffff) {
    fn_827F40B8(param_1);
  }
  else if ((*(ushort *)(((uVar3 >> 4 & 0xfff) + 0x77) * 2 + (int)piVar5) >> (uVar3 & 0xf) & 1) == 0)
  {
    lVar10 = fn_827F3C08(param_1);
    lVar11 = fn_827F3A60(param_1);
    lVar20 = (longlong)(int)(*(ushort *)((int)piVar5 + 0xe6) - 1) * (longlong)(int)lVar11 + lVar10;
    iVar13 = fn_827F3C18(param_1);
    uVar21 = (ulonglong)
             (uint)((iVar13 + ((int)lVar10 - (int)lVar20)) / (int)(uint)*(ushort *)(piVar5 + 0x39))
             & 0xfffffff0;
    lVar12 = (**(code **)(*(int *)piVar5[1] + 8))((int *)piVar5[1]);
    lVar12 = uVar21 - (lVar12 + 0xfU & 0xfffffff0);
    uVar7 = fn_827F3BA8(param_1);
    fn_827F3B30(piVar5[piVar5[0x3c] + 0x28],uVar7);
    uVar18 = 1;
    *(undefined4 *)(iVar19 + 0x50) = 0;
    uVar15 = (ulonglong)*(ushort *)(piVar5 + 0x39);
    uVar16 = uVar15 - 1;
    if (-1 < (longlong)uVar16) {
      lVar20 = (longlong)(int)uVar16 * (longlong)(int)uVar21 + lVar20;
      lVar17 = (uVar16 & 0x3fffffff) << 2;
      do {
        iVar13 = (int)lVar20;
        *(int *)((int)lVar17 + iVar19 + 0xd0) = iVar13;
        lVar20 = lVar20 - uVar21;
        *(int *)((int)lVar17 + iVar19 + 0x90) = iVar13 + (int)lVar12;
        lVar17 = lVar17 + -4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    uVar21 = (ulonglong)*(ushort *)(piVar5 + 0x38) - 1;
    if (-1 < (longlong)((ulonglong)*(ushort *)(piVar5 + 0x38) - 1)) {
      do {
        lVar20 = 0;
        sVar1 = *(short *)((int)piVar5 + (int)((uVar21 & 0xffffffff) << 2) + 0x22);
        uVar15 = uVar21;
        if (-1 < (int)uVar21) {
          lVar17 = (uVar18 & 0x3fffffff) * 4 + (uVar6 - 0x180) + 0x4c;
          lVar22 = (uVar21 + 9 & 0x3fffffff) * 4 + param_1;
          iVar19 = 0;
          do {
            iVar13 = (int)lVar22;
            if ((*(short *)(iVar13 + -2) != sVar1) ||
               ((int)(uint)*(ushort *)(piVar5 + 0x39) <= (int)lVar20)) break;
            cVar14 = fn_827F3AE8(piVar5[*(ushort *)(iVar13 + -4) + 0x28]);
            if (cVar14 == '\0') {
              uVar2 = *(ushort *)(iVar13 + -4);
              lVar17 = lVar17 + 4;
              *(undefined4 *)lVar17 = (int)uVar15;
              uVar18 = uVar18 + 1;
              fn_827F3B30(piVar5[uVar2 + 0x28],lVar10);
              lVar10 = lVar11 + lVar10;
            }
            fn_827F3B90(piVar5[*(ushort *)(iVar13 + -4) + 0x28],
                         *(undefined4 *)((int)auStack_b0 + iVar19),lVar12);
            lVar22 = lVar22 + -4;
            piVar4 = *(int **)((int)auStack_f0 + iVar19);
            (**(code **)(*(int *)piVar5[1] + 0xc))
                      ((int *)piVar5[1],piVar4,piVar5[*(ushort *)lVar22 + 0x28]);
            (**(code **)(*piVar4 + 4))(piVar4);
            uVar15 = uVar15 - 1;
            lVar20 = lVar20 + 1;
            iVar19 = iVar19 + 4;
          } while (-1 < (longlong)uVar15);
        }
        uVar16 = lVar20 - 1;
        if (-1 < (longlong)uVar16) {
          lVar20 = (uVar16 & 0x3fffffff) * 4 + (uVar6 - 0xec);
          lVar17 = ((uVar21 - uVar16) + 7 & 0x3fffffff) * 4 + param_1;
          do {
            lVar20 = lVar20 + -4;
            piVar4 = (int *)*(undefined4 *)lVar20;
            (**(code **)(*piVar4 + 8))(piVar4);
            (**(code **)(*piVar4 + 0xc))(piVar4);
            lVar17 = lVar17 + 4;
            fn_827F3B90(piVar5[*(ushort *)lVar17 + 0x28],0,0);
            uVar16 = uVar16 - 1;
          } while (-1 < (longlong)uVar16);
        }
        uVar21 = uVar15;
      } while (-1 < (int)uVar15);
    }
    uVar18 = uVar18 - 1;
    if (-1 < (longlong)uVar18) {
      lVar10 = (uVar18 & 0x3fffffff) * 4 + (uVar6 - 300);
      do {
        lVar10 = lVar10 + -4;
        fn_827F3B30(piVar5[*(ushort *)(piVar5 + *(int *)lVar10 + 8) + 0x28],0);
        uVar18 = uVar18 - 1;
      } while (-1 < (longlong)uVar18);
    }
  }
  else {
    uVar7 = fn_827F3A60(piVar5[uVar3 + 0x28]);
    uVar8 = fn_827F3BA8(piVar5[piVar5[0x3c] + 0x28]);
    uVar9 = fn_827F3BA8(param_1);
    fn_82F68CC0(uVar9,uVar8,uVar7);
  }
  return;
}

