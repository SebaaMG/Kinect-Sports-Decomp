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
extern int fn_8223FD30();
extern int fn_8223FDB8();
extern int fn_82240070();


int * fn_828BB1F0(int *param_1,byte param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int *piStack_30;
  char cStack_2c;
  
  uVar8 = 0;
  fn_8223FD30(&piStack_30,param_1);
  if (cStack_2c != '\0') {
    lVar9 = 0;
    lVar7 = *(longlong *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
    if (1 < lVar7) {
      lVar9 = lVar7 + -1;
    }
    if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x14) & 0x1c0) == 0x40) {
LAB_828bb2f4:
      piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
      if ((*(int *)piVar2[9] == 0) || (piVar3 = (int *)piVar2[0xd], *piVar3 < 1)) {
        uVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2);
      }
      else {
        uVar5 = (uint)param_2;
        *piVar3 = *piVar3 + -1;
        pbVar4 = *(byte **)piVar2[9];
        *(byte **)piVar2[9] = pbVar4 + 1;
        *pbVar4 = param_2;
      }
      if (uVar5 == 0xffffffff) {
        uVar8 = 4;
      }
      else {
        do {
          if (lVar9 < 1) break;
          piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
          bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40);
          if ((*(int *)piVar2[9] == 0) || (piVar3 = (int *)piVar2[0xd], *piVar3 < 1)) {
            uVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,bVar1);
          }
          else {
            uVar5 = (uint)bVar1;
            *piVar3 = *piVar3 + -1;
            pbVar4 = *(byte **)piVar2[9];
            *(byte **)piVar2[9] = pbVar4 + 1;
            *pbVar4 = bVar1;
          }
          if (uVar5 == 0xffffffff) {
            uVar8 = 4;
          }
          lVar9 = lVar9 + -1;
        } while (uVar8 == 0);
      }
    }
    else {
      do {
        if (lVar9 < 1) {
          if (uVar8 == 0) goto LAB_828bb2f4;
          break;
        }
        piVar2 = *(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
        bVar1 = *(byte *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40);
        if ((*(int *)piVar2[9] == 0) || (piVar3 = (int *)piVar2[0xd], *piVar3 < 1)) {
          uVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,bVar1);
        }
        else {
          uVar5 = (uint)bVar1;
          *piVar3 = *piVar3 + -1;
          pbVar4 = *(byte **)piVar2[9];
          *(byte **)piVar2[9] = pbVar4 + 1;
          *pbVar4 = bVar1;
        }
        if (uVar5 == 0xffffffff) {
          uVar8 = 4;
        }
        lVar9 = lVar9 + -1;
      } while (uVar8 == 0);
    }
  }
  *(undefined8 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20) = 0;
  iVar6 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar8 != 0) {
    uVar8 = *(uint *)(iVar6 + 0xc) | uVar8;
    if (*(int *)(iVar6 + 0x38) == 0) {
      uVar8 = uVar8 | 4;
    }
    fn_82240070(iVar6,uVar8,0);
  }
  if ((*(uint *)((int)piStack_30 + *(int *)(*piStack_30 + 4) + 0x14) & 2) != 0) {
    fn_8223FDB8(piStack_30);
  }
  piVar2 = *(int **)((int)piStack_30 + *(int *)(*piStack_30 + 4) + 0x38);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  return param_1;
}

