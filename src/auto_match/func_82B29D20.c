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
extern unsigned int *auStack_6c;
extern int fn_82ABDBE8();
extern int fn_82AC68F0();
extern int fn_82AD20C0();
extern int fn_82B1A4E0();
extern int fn_82B22850();
extern int fn_82B26E08();
extern int fn_82B41D68();


void fn_82B29D20(int param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar5;
  ulonglong uVar3;
  char cVar6;
  ulonglong uVar4;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int *piVar13;
  uint *puStack_70;
  uint auStack_6c [27];
  
  for (piVar1 = *(int **)(param_2 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    iVar11 = *piVar1;
    if (iVar11 != param_3) goto LAB_82b29d60;
  }
  iVar11 = 0;
LAB_82b29d60:
  uVar2 = *(uint *)(param_1 + 0x5c);
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = (int)uVar12;
  iVar9 = param_3;
  puStack_70 = (uint *)((uint)auStack_6c | 1);
  auStack_6c[0] = (uint)&puStack_70 | 1;
LAB_82b29d8c:
  iVar10 = iVar9;
  uVar5 = fn_82AC68F0(param_1);
  *(int *)(uVar5 + 0x50) = iVar10;
  *(uint *)(iVar10 + 0x50) = uVar5;
  puVar8 = (uint *)(uVar5 & 0xfffffffe);
  *puVar8 = (uint)puStack_70;
  puVar7 = puVar8 + 1;
  *(uint **)((uint)puStack_70 & 0xfffffffe) = puVar8;
  puVar8[1] = (uint)&puStack_70 | 1;
  iVar9 = *(int *)(iVar10 + 0x38);
  *(int *)(iVar10 + 0x2c) = (int)uVar12;
  puStack_70 = puVar7;
  if (iVar9 != 0) goto LAB_82b29dd0;
  goto LAB_82b29df8;
LAB_82b29dd0:
  do {
    if ((*(uint *)(iVar9 + 0x30) >> 0x13 & 1) == 0) break;
    iVar9 = *(int *)(iVar9 + 0x3c);
  } while (iVar9 != 0);
  if (iVar9 == 0) {
LAB_82b29df8:
    do {
      while( true ) {
        if (iVar10 == param_3) {
          fn_82B22850(param_1,&puStack_70,uVar12,0);
          fn_82B1A4E0(param_2,&puStack_70);
          uVar5 = *(uint *)(param_3 + 0x14);
          if (((uVar5 & 1) != 0) || (uVar5 == 0)) goto LAB_82b29f50;
          goto LAB_82b29e60;
        }
        iVar9 = *(int *)(iVar10 + 0x3c);
        if (iVar9 != 0) break;
        iVar10 = *(int *)(iVar10 + 0x34);
      }
      iVar10 = iVar9;
    } while ((*(uint *)(iVar9 + 0x30) >> 0x13 & 1) != 0);
  }
  goto LAB_82b29d8c;
LAB_82b29e60:
  do {
    if (((*(uint *)(uVar5 + 8) & 0x3f80) == 0x3800) &&
       (uVar3 = fn_82B41D68(param_1,uVar5,param_2,0,1), uVar3 != 0)) {
      piVar1 = *(int **)(uVar5 + 0x20);
      piVar13 = piVar1;
      while (iVar9 = *piVar13, iVar9 != 0) {
        cVar6 = fn_82ABDBE8(iVar9,uVar3);
        if (cVar6 == '\0') {
          fn_82AD20C0(piVar1,iVar9,param_1);
        }
        if (*piVar13 == iVar9) {
          piVar13 = (int *)(iVar9 + 4);
        }
      }
      for (iVar9 = *(int *)(param_3 + 8); iVar9 != 0; iVar9 = *(int *)(iVar9 + 0xc)) {
        iVar10 = *(int *)(iVar9 + 4);
        if ((iVar10 != param_2) &&
           (uVar4 = fn_82B41D68(param_1,uVar5,iVar10,0,1),
           (uVar4 & 0xffffffff) == (uVar3 & 0xffffffff))) {
          if (iVar10 != 0) goto LAB_82b29f34;
          break;
        }
      }
      fn_82AD20C0(uVar5,uVar3,param_1);
    }
LAB_82b29f34:
    uVar5 = *(uint *)((uVar5 & 0xfffffffe) + 0x28);
  } while (((uVar5 & 1) == 0) && (uVar5 != 0));
LAB_82b29f50:
  for (piVar1 = *(int **)(iVar11 + 0x14); (((uint)piVar1 & 1) == 0 && (piVar1 != (int *)0x0));
      piVar1 = *(int **)(((uint)piVar1 & 0xfffffffe) + 0x28)) {
    piVar13 = piVar1;
    if ((piVar1[2] & 0x3f80U) == 0x3800) {
      while (iVar9 = *piVar13, iVar9 != 0) {
        if ((ulonglong)*(uint *)(*(int *)(*(int *)(iVar9 + 0xc) + 0x1c) + 0x2c) ==
            (uVar12 & 0xffffffff)) {
          fn_82AD20C0(piVar1,iVar9,param_1);
        }
        if (*piVar13 == iVar9) {
          piVar13 = (int *)(iVar9 + 4);
        }
      }
    }
  }
  iVar9 = *(int *)(param_3 + 8);
  do {
    if (iVar9 == 0) {
      fn_82B26E08(param_1,param_2,param_3,param_4,iVar11,uVar12);
      return;
    }
    if (*(int *)(iVar9 + 4) != param_2) {
      for (piVar1 = *(int **)(*(int *)(iVar9 + 4) + 0xc); piVar1 != (int *)0x0;
          piVar1 = (int *)piVar1[2]) {
        iVar10 = *piVar1;
        if ((*(uint *)(iVar10 + 0x30) >> 0x15 & 1) != 0) goto LAB_82b2a01c;
      }
      iVar10 = 0;
LAB_82b2a01c:
      for (piVar1 = *(int **)(iVar10 + 0x14); (((uint)piVar1 & 1) == 0 && (piVar1 != (int *)0x0));
          piVar1 = *(int **)(((uint)piVar1 & 0xfffffffe) + 0x28)) {
        piVar13 = piVar1;
        if ((piVar1[2] & 0x3f80U) == 0x3800) {
          while (iVar10 = *piVar13, iVar10 != 0) {
            if (uVar2 <= (*(uint *)(*(int *)(*(int *)(iVar10 + 0xc) + 0x1c) + 0x30) & 0x7ffff)) {
              fn_82AD20C0(piVar1,iVar10,param_1);
            }
            if (*piVar13 == iVar10) {
              piVar13 = (int *)(iVar10 + 4);
            }
          }
        }
      }
    }
    iVar9 = *(int *)(iVar9 + 0xc);
  } while( true );
}

