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
extern unsigned int *auStack_b0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE6768();
extern int fn_82D8BC78();
extern int fn_82D94918();


void fn_825A4198(undefined8 param_1,int param_2,int param_3,int *param_4,int param_5)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar7;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_b0 [176];
  
  iVar2 = *(int *)(param_2 + 0x7c);
  iVar7 = 0;
  if (0 < iVar2) {
    iVar11 = 0;
    do {
      if (*(int *)(iVar11 + *(int *)(param_2 + 0x78)) == 0x2004) {
        bVar3 = true;
        goto LAB_825a41ec;
      }
      iVar7 = iVar7 + 1;
      iVar11 = iVar11 + 0x10;
    } while (iVar7 < iVar2);
  }
  bVar3 = false;
LAB_825a41ec:
  if (bVar3) {
    iVar7 = 0;
    if (0 < iVar2) {
      iVar11 = 0;
      do {
        if (*(int *)(iVar11 + *(int *)(param_2 + 0x78)) == 0x2004) {
          uVar5 = *(ulonglong *)(iVar7 * 0x10 + *(int *)(param_2 + 0x78) + 8);
          goto LAB_825a4228;
        }
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 0x10;
      } while (iVar7 < iVar2);
    }
    uVar5 = 0;
LAB_825a4228:
    iVar7 = 0;
    if (0 < iVar2) {
      iVar11 = 0;
      do {
        if (*(int *)(iVar11 + *(int *)(param_2 + 0x78)) == 0x2005) {
          uVar6 = *(ulonglong *)(iVar7 * 0x10 + *(int *)(param_2 + 0x78) + 8);
          goto LAB_825a4260;
        }
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 0x10;
      } while (iVar7 < iVar2);
    }
    uVar6 = 0;
LAB_825a4260:
    if ((*(int *)(param_3 + 0x14) != 0) && ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff))) {
      lVar8 = (uVar6 & 0xffffffff) - (uVar5 & 0xffffffff);
      lVar9 = (uVar5 & 0x3fffffff) << 2;
      do {
        iVar2 = *(int *)((int)lVar9 + *(int *)(param_3 + 0x10));
        if (iVar2 != 0xfffff) {
          iVar7 = iVar2 * 0x60 + *(int *)(param_3 + 0x1c);
          if (*(int *)(*(int *)(iVar7 + 0x50) + 8) == 0) {
            cVar1 = *(char *)(*(int *)(iVar7 + 0x50) + 0xe8);
            if ((cVar1 == '\x05') || (bVar3 = false, cVar1 == '\x04')) {
              bVar3 = true;
            }
            if (!bVar3) {
              fn_82CE6768(auStack_b0,iVar7,(ulonglong)*(uint *)(param_3 + 0xc) + 0xf0);
              fn_82D8BC78(*(undefined4 *)(iVar7 + 0x50),auStack_b0);
              iVar11 = 0;
              if (0 < *(int *)(iVar7 + 0x44)) {
                iVar12 = 0;
                do {
                  puVar10 = (undefined4 *)(iVar12 + *(int *)(iVar7 + 0x40));
                  iVar4 = fn_82CE5410();
                  if (param_4[1] == (param_4[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
                    fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),param_4,4);
                  }
                  iVar11 = iVar11 + 1;
                  iVar12 = iVar12 + 4;
                  *(undefined4 *)(param_4[1] * 4 + *param_4) = *puVar10;
                  param_4[1] = param_4[1] + 1;
                } while (iVar11 < *(int *)(iVar7 + 0x44));
              }
              iVar11 = 0;
              if (0 < *(int *)(param_5 + 0xc)) {
                iVar12 = 0;
                do {
                  if (*(int *)(iVar12 + *(int *)(param_5 + 8)) == *(int *)(iVar7 + 0x50))
                  goto LAB_825a43ac;
                  iVar11 = iVar11 + 1;
                  iVar12 = iVar12 + 4;
                } while (iVar11 < *(int *)(param_5 + 0xc));
              }
              iVar11 = -1;
LAB_825a43ac:
              if (iVar11 == -1) {
                fn_82D94918(param_5,*(undefined4 *)(iVar7 + 0x50));
              }
              iVar11 = 0;
              if (0 < *(int *)(param_3 + 0x14)) {
                iVar12 = 0;
                do {
                  if (*(int *)(iVar12 + *(int *)(param_3 + 0x10)) == iVar2) {
                    *(undefined4 *)(iVar12 + *(int *)(param_3 + 0x10)) = 0xfffff;
                  }
                  iVar11 = iVar11 + 1;
                  iVar12 = iVar12 + 4;
                } while (iVar11 < *(int *)(param_3 + 0x14));
              }
              fn_825A4198(param_1,*(undefined4 *)(iVar7 + 0x50),param_3,param_4,param_5);
            }
          }
        }
        lVar8 = lVar8 + -1;
        lVar9 = lVar9 + 4;
      } while (lVar8 != 0);
    }
  }
  return;
}

