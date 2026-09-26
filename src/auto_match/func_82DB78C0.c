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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D00FB0();
extern int fn_82DB6398();
extern int fn_83080BC0();
extern unsigned int iStack_cc;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_d0;


/* WARNING: Removing unreachable block (ram,0x82db7a88) */

void fn_82DB78C0(double param_1,int param_2,undefined8 param_3,undefined8 param_4,int *param_5,
                  int *param_6,uint *param_7,uint *param_8)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined1 uStack_d0;
  int iStack_cc;
  
  puVar8 = (uint *)fn_82CE5410();
  uVar2 = *puVar8;
  iVar15 = 0;
  *puVar8 = uVar2 + 0x1000;
  if (0 < param_5[1]) {
    iVar13 = 0;
    do {
      iVar14 = *(int *)(*param_5 + iVar13);
      if (*(char *)((uint)*(ushort *)(iVar14 + 0xa8) + *param_6) == '\0') {
        *(undefined1 *)((uint)*(ushort *)(iVar14 + 0xa8) + *param_6) = 1;
        fn_83080BC0(param_1,iVar14 + 0x130);
      }
      *(undefined1 *)((uint)*(ushort *)(iVar14 + 0xa8) + *param_6) = 8;
      fn_82DB6398(param_1,iVar14,param_3);
      iVar15 = iVar15 + 1;
      iVar13 = iVar13 + 4;
    } while (iVar15 < param_5[1]);
  }
  fVar1 = (float)(param_1 - (double)*(float *)(param_2 + 0x50));
  uVar11 = *(undefined8 *)(param_2 + 0x50);
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  *(float *)(param_2 + 0x54) = (float)param_1;
  *(float *)(param_2 + 0x58) = fVar1;
  fVar7 = lbl_821AAD20;
  if (lbl_821AAD20 < fVar1) {
    fVar7 = lbl_82002AE0 / fVar1;
  }
  *(float *)(param_2 + 0x5c) = fVar7;
  piVar3 = *(int **)(*(int *)(*(int *)*param_5 + 8) + 8);
  (**(code **)(*piVar3 + 0x48))
            (piVar3,uVar2,0,param_2,*(undefined4 *)(*(int *)*param_5 + 0xcc),uStack_d0);
  *(undefined8 *)(param_2 + 0x50) = uVar11;
  *(undefined8 *)(param_2 + 0x58) = uVar10;
  puVar8 = (uint *)fn_82CE5410(-((ulonglong)uVar2 - (ulonglong)uVar2));
  *puVar8 = uVar2;
  fn_82CE5410();
  iStack_cc = 0;
  if (0 < param_5[1]) {
    iVar15 = 0;
    do {
      iVar13 = 0;
      uVar2 = *(uint *)(iVar15 + *param_5);
      *(undefined1 *)((uint)*(ushort *)(uVar2 + 0xa8) + *param_6) = 0x10;
      if (*(short *)(uVar2 + 0xb0) != 0) {
        iVar14 = 0;
        do {
          puVar16 = (undefined4 *)(iVar14 + *(int *)(uVar2 + 0xac));
          if ((int)param_3 <= (int)(uint)*(byte *)(*(int *)(iVar14 + *(int *)(uVar2 + 0xac)) + 0x1c)
             ) {
            uVar4 = puVar16[2] ^ puVar16[1] ^ uVar2;
            if (*(char *)(uVar4 + 0xe8) == '\x05') {
              iVar9 = fn_82CE5410();
              if (param_8[1] == (param_8[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_8,4);
              }
              *(undefined4 *)(param_8[1] * 4 + *param_8) = *puVar16;
              param_8[1] = param_8[1] + 1;
            }
            else if (*(char *)((uint)*(ushort *)(uVar4 + 0xa8) + *param_6) != '\x10') {
              iVar9 = fn_82CE5410();
              if (param_8[1] == (param_8[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_8,4);
              }
              *(undefined4 *)(param_8[1] * 4 + *param_8) = *puVar16;
              param_8[1] = param_8[1] + 1;
              if (*(byte *)((uint)*(ushort *)(uVar4 + 0xa8) + *param_6) < 2) {
                iVar9 = fn_82CE5410();
                if (param_7[1] == (param_7[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_7,4);
                }
                *(uint *)(param_7[1] * 4 + *param_7) = uVar4;
                param_7[1] = param_7[1] + 1;
                if (*(char *)((uint)*(ushort *)(uVar4 + 0xa8) + *param_6) == '\0') {
                  *(undefined1 *)((uint)*(ushort *)(uVar4 + 0xa8) + *param_6) = 1;
                  fn_83080BC0(param_1,uVar4 + 0x130);
                }
                *(undefined1 *)((uint)*(ushort *)(uVar4 + 0xa8) + *param_6) = 2;
              }
            }
          }
          iVar13 = iVar13 + 1;
          iVar14 = iVar14 + 0x30;
        } while (iVar13 < (int)(uint)*(ushort *)(uVar2 + 0xb0));
      }
      uVar4 = param_8[1];
      iVar13 = 0;
      uVar5 = param_7[1];
      if (0 < *(int *)(uVar2 + 0xb8)) {
        iVar14 = 0;
        do {
          piVar3 = *(int **)(*(int *)(iVar14 + *(int *)(uVar2 + 0xb4)) + 0x30);
          if ((int)param_3 <= (int)(uint)*(byte *)(*piVar3 + 0x1c)) {
            uVar6 = piVar3[2] ^ piVar3[1] ^ uVar2;
            if (*(char *)(uVar6 + 0xe8) == '\x05') {
              iVar9 = fn_82CE5410();
              if (param_8[1] == (param_8[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_8,4);
              }
              *(int *)(param_8[1] * 4 + *param_8) = *piVar3;
              param_8[1] = param_8[1] + 1;
            }
            else if (*(char *)((uint)*(ushort *)(uVar6 + 0xa8) + *param_6) != '\x10') {
              iVar9 = fn_82CE5410();
              if (param_8[1] == (param_8[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_8,4);
              }
              *(int *)(param_8[1] * 4 + *param_8) = *piVar3;
              param_8[1] = param_8[1] + 1;
              if (*(byte *)((uint)*(ushort *)(uVar6 + 0xa8) + *param_6) < 2) {
                iVar9 = fn_82CE5410();
                if (param_7[1] == (param_7[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
                  fn_82CE63B0(*(undefined4 *)(iVar9 + 0x10),param_7,4);
                }
                *(uint *)(param_7[1] * 4 + *param_7) = uVar6;
                param_7[1] = param_7[1] + 1;
                if (*(char *)((uint)*(ushort *)(uVar6 + 0xa8) + *param_6) == '\0') {
                  *(undefined1 *)((uint)*(ushort *)(uVar6 + 0xa8) + *param_6) = 1;
                  fn_83080BC0(param_1,uVar6 + 0x130);
                }
                *(undefined1 *)((uint)*(ushort *)(uVar6 + 0xa8) + *param_6) = 2;
              }
            }
          }
          iVar13 = iVar13 + 1;
          iVar14 = iVar14 + 4;
        } while (iVar13 < *(int *)(uVar2 + 0xb8));
      }
      lVar12 = (ulonglong)param_8[1] - (ulonglong)uVar4;
      if (1 < (int)lVar12) {
        fn_82D00FB0(((ulonglong)uVar4 & 0x3fffffff) * 4 + (ulonglong)*param_8,0,lVar12 + -1,
                          0xffffffff82db4970);
      }
      lVar12 = (ulonglong)param_7[1] - (ulonglong)uVar5;
      if (1 < (int)lVar12) {
        fn_82D00FB0(((ulonglong)uVar5 & 0x3fffffff) * 4 + (ulonglong)*param_7,0,lVar12 + -1,
                          0xffffffff82db4950);
      }
      iVar15 = iVar15 + 4;
      iStack_cc = iStack_cc + 1;
    } while (iStack_cc < param_5[1]);
  }
  return;
}

