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
extern int fn_822315A0();
extern int fn_8229F618();
extern int fn_822ABA88();
extern int fn_823588D0();
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_82371B58();
extern int fn_823739A0();
extern int fn_82373B70();
extern int fn_82374968();
extern int fn_82375880();
extern int fn_823760D0();
extern int fn_82376360();
extern int fn_82376508();
extern int fn_82378558();
extern int fn_82380548();
extern int fn_82384660();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern unsigned int iStack_3c;


undefined8 fn_82374658(double param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  int *piStack_40;
  int iStack_3c;
  
  fn_823588D0();
  fn_82376360(param_2);
  fn_823760D0(param_2);
  iVar4 = (int)param_2;
  uVar1 = *(uint *)(iVar4 + 0x54);
  if ((uVar1 < 5) || ((6 < uVar1 && ((uVar1 < 0xb || (0xf < uVar1)))))) {
    if (*(int *)(iVar4 + 0xac) != 1) {
      iVar5 = fn_8249ABC0();
      if (*(int *)(iVar4 + 0xb4) != -1) {
        fn_8249D980(*(undefined4 *)(iVar5 + 0x110));
        *(undefined4 *)(iVar4 + 0xb4) = 0xffffffff;
      }
      *(undefined4 *)(iVar4 + 0xac) = 1;
    }
    uVar6 = 1;
  }
  else {
    fn_823598B0(param_2,0);
    uVar6 = 0;
  }
  fn_82359928(param_2,uVar6);
  fn_82374968(param_2);
  *(float *)(iVar4 + 0x208) = (float)((double)*(float *)(iVar4 + 0x208) + param_1);
  *(float *)(iVar4 + 0x210) = (float)((double)*(float *)(iVar4 + 0x210) + param_1);
  fn_82375880(param_2);
  puVar2 = *(undefined4 **)(iVar4 + 0x188);
  for (puVar12 = *(undefined4 **)(iVar4 + 0x184); puVar12 != puVar2; puVar12 = puVar12 + 2) {
    fn_82378558(param_1,*puVar12);
  }
  fn_82373B70(param_2);
  fn_82384660(*(undefined4 *)(iVar4 + 0x54c));
  fn_82380548(param_1,*(undefined4 *)(iVar4 + 0x664));
  uVar9 = 0;
  if (((*(int **)(iVar4 + 8))[1] - **(int **)(iVar4 + 8) & 0xfffffffcU) != 0) {
    do {
      lVar8 = param_2 + 0x5ec;
      piVar3 = *(int **)((int)((uVar9 & 0xffffffff) << 2) + **(int **)(iVar4 + 8));
      if ((int)uVar9 != 0) {
        lVar8 = param_2 + 0x5f0;
      }
      if (*(int *)lVar8 == 0) {
        uVar7 = 0;
        uVar1 = *(uint *)(piVar3[4] * 4 + *piVar3);
        uVar11 = (ulonglong)uVar1;
        uVar10 = (ulonglong)*(uint *)(uVar1 + 8);
        if (uVar10 != 0) {
          do {
            iVar5 = fn_822ABA88(uVar11);
            if (*(int *)(iVar5 + 0x24) != 0) {
              *(undefined4 *)lVar8 = 1;
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (*(int **)(iVar4 + 8))[1] - **(int **)(iVar4 + 8) >> 2);
  }
  *(float *)(iVar4 + 0x5e8) = (float)((double)*(float *)(iVar4 + 0x5e8) + param_1);
  fn_823739A0(&piStack_40,param_2);
  if ((piStack_40 == (int *)0x0) || (iVar5 = (**(code **)(*piStack_40 + 0x28))(), iVar5 == 0)) {
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    uVar6 = 0;
  }
  else {
    if (*(int *)(iVar4 + 0x204) == 0) {
      fn_82376508(param_2);
    }
    *(undefined4 *)(iVar4 + 0x344) = 0;
    if (*(int *)(*(int *)(*(int *)(iVar4 + 0xd4) + 0xc) + 0x58) != 0) {
      fn_8229F618();
    }
    fn_82371B58(param_2);
    *(undefined4 *)(iVar4 + 0x9f8) = 1;
    if (iStack_3c != 0) {
      fn_822315A0();
    }
    uVar6 = 2;
  }
  return uVar6;
}

