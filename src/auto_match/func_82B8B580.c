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
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82AEB338();
extern int fn_82AF4968();
extern int fn_82B4B048();


undefined8 fn_82B8B580(int param_1,int *param_2,uint param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  char cVar9;
  int iVar8;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  int *piVar16;
  
  iVar1 = param_2[7];
  puVar6 = (uint *)fn_82ABE250(param_1,8,0x26);
  puVar5 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)puVar5 | 1;
  puVar7 = (uint *)fn_82ABE250(param_1,8,0x26);
  puVar4 = puVar7 + 1;
  puVar7[1] = (uint)puVar7 | 1;
  *puVar7 = (uint)puVar4 | 1;
  uVar14 = 1;
  uVar15 = 0;
  piVar16 = param_2;
  do {
    for (iVar2 = *piVar16; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      uVar12 = *(uint *)(iVar2 + 0xc);
      if (uVar12 == param_3) {
        if ((piVar16 != param_2) || (param_4 != '\0')) {
          uVar14 = 0;
          fn_82B4B048(puVar6);
          goto LAB_82b8b630;
        }
      }
      else {
        cVar9 = fn_82AEB338(uVar12);
        if ((cVar9 != '\0') && (*(int *)(uVar12 + 0x1c) == iVar1)) {
          uVar13 = uVar12;
          if (param_5 == '\0') {
            do {
              uVar13 = *(uint *)((uVar13 & 0xfffffffe) + 0x24);
              if (((uVar13 & 1) != 0) || (uVar13 = (uVar13 & 0xfffffffe) - 0x28, uVar13 == 0)) {
                cVar9 = '\0';
                goto LAB_82b8b714;
              }
            } while (uVar13 != param_3);
            cVar9 = '\x01';
          }
          else {
            cVar9 = fn_82AF4968(uVar12,param_3);
          }
LAB_82b8b714:
          if ((cVar9 != '\0') && ((*(uint *)(uVar12 + 8) & 0x20000000) == 0)) {
            *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) | 0x20000000;
            if ((*puVar5 & 1) == 0) {
              uVar13 = *puVar6 & 0xfffffffe;
              iVar8 = uVar13 - 4;
              if ((iVar8 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b8b760;
            }
            else {
LAB_82b8b760:
              iVar8 = fn_82AD6090(puVar6,1);
            }
            iVar3 = *(int *)(iVar8 + 8);
            *(int *)(iVar8 + 8) = iVar3 + 1;
            *(uint *)((iVar3 + 4) * 4 + iVar8) = uVar12;
            if ((*puVar4 & 1) == 0) {
              uVar13 = *puVar7 & 0xfffffffe;
              iVar8 = uVar13 - 4;
              if ((iVar8 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
              goto LAB_82b8b7b4;
            }
            else {
LAB_82b8b7b4:
              iVar8 = fn_82AD6090(puVar7,1);
            }
            iVar3 = *(int *)(iVar8 + 8);
            *(int *)(iVar8 + 8) = iVar3 + 1;
            *(uint *)((iVar3 + 4) * 4 + iVar8) = uVar12;
          }
        }
      }
    }
    if (((*puVar5 & 1) != 0) || (*puVar5 == 0)) {
LAB_82b8b630:
      while (((*puVar4 & 1) == 0 && (*puVar4 != 0))) {
        puVar5 = (uint *)(*puVar7 & 0xfffffffe);
        puVar10 = puVar5 + -1;
        uVar12 = puVar5[1] - 1;
        uVar15 = puVar10[puVar5[1] + 3];
        puVar5[1] = uVar12;
        if (uVar12 == 0) {
          *(uint *)(*puVar5 & 0xfffffffe) = *puVar10;
          *(uint *)(*puVar10 & 0xfffffffe) = *puVar5;
          fn_82AA6648(puVar7,puVar10,((ulonglong)puVar5[2] + 4 & 0x3fffffff) << 2);
        }
        *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) & 0xdfffffff;
      }
      *puVar7 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar7;
      *puVar6 = (uint)puVar7;
      *(uint **)(param_1 + 0x3d0) = puVar6;
      return uVar14;
    }
    puVar10 = (uint *)(*puVar6 & 0xfffffffe);
    puVar11 = puVar10 + -1;
    uVar12 = puVar10[1] - 1;
    piVar16 = (int *)puVar11[puVar10[1] + 3];
    puVar10[1] = uVar12;
    if (uVar12 == 0) {
      *(uint *)(*puVar10 & 0xfffffffe) = *puVar11;
      *(uint *)(*puVar11 & 0xfffffffe) = *puVar10;
      fn_82AA6648(puVar6,puVar11,((ulonglong)puVar10[2] + 4 & 0x3fffffff) << 2);
    }
    uVar15 = uVar15 + 1;
    if (10000 < uVar15) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
  } while( true );
}

