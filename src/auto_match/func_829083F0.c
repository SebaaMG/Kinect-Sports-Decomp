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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82904070();
extern int fn_82908248();
extern unsigned int iStack_80;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;


bool fn_829083F0(int param_1,int param_2,ulonglong param_3,undefined4 *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  int iStack_80;
  undefined4 uStack_7c;
  double dStack_78;
  ulonglong uStack_70;
  
  dVar11 = lbl_82005758;
  if (param_2 == -1) {
    return false;
  }
  do {
    iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + param_2 * 4) + 0x48);
    if (iVar5 == -1) {
      return false;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x18);
    piVar2 = *(int **)(iVar5 * 4 + iVar1);
    iVar5 = *piVar2;
    if (iVar5 == 0x10000001) {
LAB_829084c8:
      param_2 = *(int *)piVar2[2];
    }
    else {
      if (iVar5 != 0x20500001) {
        if (iVar5 == 0x20200001) {
          iVar5 = fn_82904070(param_1,*(undefined4 *)piVar2[2],&dStack_78);
          if (iVar5 < 0) {
            return false;
          }
          if ((double)(param_3 & 0xffffffff) != dStack_78) {
            return false;
          }
          iStack_80 = *(int *)(piVar2[2] + 4);
          dStack_78 = (double)(param_3 & 0xffffffff);
          iVar5 = fn_82908248(param_1,0,&iStack_80,1);
          if (iVar5 < 0) {
            return false;
          }
          if (*param_5 != -1) {
            return *param_5 == iStack_80;
          }
          iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x14);
          puVar3 = *(uint **)(iStack_80 * 4 + iVar7);
          if ((*puVar3 & 2) == 0) {
            return false;
          }
          uVar9 = *(uint *)(*(int *)(puVar3[1] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x10)) + 4);
          if ((uVar9 & 0x100) != 0) {
            return false;
          }
          if ((uVar9 & 0x10) == 0) {
            return false;
          }
          if ((uVar9 & 0x200) == 0) {
            return false;
          }
          if (param_4 == (undefined4 *)0x0) goto LAB_829085e4;
          iVar1 = *(int *)piVar2[2];
          goto LAB_829085d8;
        }
        if (iVar5 != 0x30000001) {
          return false;
        }
        piVar2 = (int *)piVar2[2];
        iVar5 = *(int *)(piVar2[1] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
        if ((*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(*(int *)(param_1 + 8) + 0x10)) +
                      4) & 0x100) == 0) {
          return false;
        }
        if (*(int *)(iVar5 + 8) != -1) {
          return false;
        }
        if (*(double *)(iVar5 + 0x20) != lbl_82005710) {
          return false;
        }
        iVar5 = *(int *)(piVar2[2] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
        if ((*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(*(int *)(param_1 + 8) + 0x10)) +
                      4) & 0x100) == 0) {
          return false;
        }
        if (*(int *)(iVar5 + 8) != -1) {
          return false;
        }
        if (*(double *)(iVar5 + 0x20) != dVar11) {
          return false;
        }
        iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar2 * 4);
        if ((*(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(*(int *)(param_1 + 8) + 0x10)) +
                      4) & 2) == 0) {
          return false;
        }
        if (*(int *)(iVar5 + 8) != -1) {
          return false;
        }
        puVar3 = *(uint **)(*(int *)(iVar5 + 0x48) * 4 + iVar1);
        if ((*puVar3 & 0xfff00000) != 0x20400000) {
          return false;
        }
        uVar10 = 0;
        if (puVar3[3] == 0) goto LAB_8290872c;
        iVar5 = 0;
        break;
      }
      iVar5 = fn_82904070(param_1,*(undefined4 *)piVar2[2],&iStack_80);
      if ((iVar5 < 0) || ((double)CONCAT44(iStack_80,uStack_7c) != dVar11)) {
        iVar5 = fn_82904070(param_1,*(undefined4 *)(piVar2[2] + 4),&iStack_80);
        if (iVar5 < 0) {
          return false;
        }
        if ((double)CONCAT44(iStack_80,uStack_7c) != dVar11) {
          return false;
        }
        goto LAB_829084c8;
      }
      param_2 = *(int *)(piVar2[2] + 4);
    }
    if (param_2 == -1) {
      return false;
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 + 1;
    iVar5 = iVar5 + 4;
    if ((ulonglong)puVar3[3] <= (uVar10 & 0xffffffff)) break;
    if (*(int *)(iVar5 + puVar3[4]) == *piVar2) break;
  }
LAB_8290872c:
  uVar9 = 0;
  iVar5 = 1;
  do {
    iVar1 = *(int *)((int)(((longlong)(int)puVar3[3] * (longlong)(int)uVar9 + uVar10 & 0xffffffff)
                          << 2) + puVar3[2]);
    iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar1 * 4);
    if ((((*(uint *)(*(int *)(*(int *)(iVar7 + 4) * 4 + *(int *)(*(int *)(param_1 + 8) + 0x10)) + 4)
          & 2) != 0) && (*(int *)(iVar7 + 8) == -1)) &&
       (puVar4 = *(uint **)(*(int *)(iVar7 + 0x48) * 4 + *(int *)(*(int *)(param_1 + 8) + 0x18)),
       (*puVar4 & 0xfff00000) == 0x10100000)) {
      uVar8 = 0;
      if (puVar4[3] != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(iVar7 + puVar4[4]) == iVar1) break;
          uVar8 = uVar8 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar8 < puVar4[3]);
      }
      iVar7 = *(int *)(uVar8 * 4 + puVar4[2]);
      iVar1 = *(int *)((int)(((longlong)(int)puVar3[3] * (longlong)iVar5 + uVar10 & 0xffffffff) << 2
                            ) + puVar3[2]);
      iVar6 = fn_82904070(param_1,iVar1,&dStack_78);
      if (((-1 < iVar6) && (uStack_70 = param_3 & 0xffffffff, (double)uStack_70 == dStack_78)) &&
         (iStack_80 = iVar7, iVar7 = fn_82908248(param_1,0,&iStack_80,1), -1 < iVar7)) {
        if (*param_5 == -1) {
          iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x14);
          puVar4 = *(uint **)(iStack_80 * 4 + iVar7);
          if ((((*puVar4 & 2) != 0) &&
              (uVar8 = *(uint *)(*(int *)(puVar4[1] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x10)) +
                                4), (uVar8 & 0x100) == 0)) &&
             (((uVar8 & 0x10) != 0 && ((uVar8 & 0x200) != 0)))) {
            if (param_4 != (undefined4 *)0x0) {
LAB_829085d8:
              *param_4 = *(undefined4 *)(*(int *)(iVar1 * 4 + iVar7) + 0x30);
            }
LAB_829085e4:
            *param_5 = iStack_80;
            return true;
          }
        }
        else if (iStack_80 == *param_5) {
          return true;
        }
      }
    }
    uVar9 = uVar9 + 1;
    iVar5 = iVar5 + -1;
    if (1 < uVar9) {
      return false;
    }
  } while( true );
}

