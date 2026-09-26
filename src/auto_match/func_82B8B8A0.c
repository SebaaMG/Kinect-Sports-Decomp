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
extern int fn_82AF8720();
extern int fn_82B24700();
extern unsigned int iStack_78;
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


/* WARNING: Removing unreachable block (ram,0x82b8b8f4) */
/* WARNING: Removing unreachable block (ram,0x82b8b900) */

void fn_82B8B8A0(int param_1,int *param_2,uint param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  char cVar11;
  uint *puVar10;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  int iStack_80;
  uint uStack_7c;
  int iStack_78;
  
  iVar1 = param_2[7];
  puVar8 = (uint *)fn_82ABE250(param_1,8,0x26);
  puVar12 = puVar8 + 1;
  puVar8[1] = (uint)puVar8 | 1;
  *puVar8 = (uint)puVar12 | 1;
  iVar9 = fn_82AD6090(puVar8,1);
  iVar2 = *(int *)(iVar9 + 8);
  *(int *)(iVar9 + 8) = iVar2 + 1;
  *(int **)((iVar2 + 4) * 4 + iVar9) = param_2;
  piVar15 = param_2;
LAB_82b8b938:
  iVar2 = *piVar15;
  bVar6 = false;
  do {
    if (iVar2 == 0) {
      if (bVar6) goto LAB_82b8bb80;
      uVar3 = (uint)piVar15 & 0xfffffffe;
      puVar14 = (uint *)(uVar3 + 0x24);
      puVar10 = (uint *)((param_3 & 0xfffffffe) + 0x24);
      *(uint *)((*(uint *)(uVar3 + 0x28) & 0xfffffffe) + 0x24) = *puVar14;
      *(undefined4 *)(*puVar14 & 0xfffffffe) = *(undefined4 *)(uVar3 + 0x28);
      *puVar14 = *puVar10;
      *(uint *)(*puVar10 & 0xfffffffe) = uVar3;
      *(uint *)(uVar3 + 0x28) = param_3 & 0xfffffffe;
      *puVar10 = uVar3 + 0x28;
      piVar15[2] = piVar15[2] & 0xbfffffff;
      if ((*puVar12 & 1) == 0) {
        puVar10 = (uint *)((*puVar8 & 0xfffffffe) - 4);
      }
      else {
        puVar10 = (uint *)0x0;
      }
      uVar3 = puVar10[2];
      puVar10[2] = (uint)((ulonglong)uVar3 - 1);
      if ((ulonglong)uVar3 - 1 != 0) goto LAB_82b8bb80;
      *(uint *)(puVar10[1] & 0xfffffffe) = *puVar10;
      *(uint *)(*puVar10 & 0xfffffffe) = puVar10[1];
      do {
        fn_82AA6648(puVar8,puVar10,((ulonglong)puVar10[3] + 4 & 0x3fffffff) << 2);
LAB_82b8bb80:
        do {
          uVar3 = *puVar12;
          piVar7 = piVar15;
          if (((uVar3 & 1) != 0) || (uVar3 == 0)) {
LAB_82b8bbf4:
            piVar15 = piVar7;
            if (((uVar3 & 1) != 0) || (uVar3 == 0)) {
              uVar3 = (uint)param_2 & 0xfffffffe;
              puVar10 = (uint *)(uVar3 + 0x24);
              *(uint *)((*(uint *)(uVar3 + 0x28) & 0xfffffffe) + 0x24) = *puVar10;
              *(undefined4 *)(*puVar10 & 0xfffffffe) = *(undefined4 *)(uVar3 + 0x28);
              param_3 = param_3 & 0xfffffffe;
              puVar12 = (uint *)(param_3 + 0x24);
              if (param_4 == '\0') {
                *(undefined4 *)(uVar3 + 0x28) = *(undefined4 *)(param_3 + 0x28);
                *(uint *)((*(uint *)(param_3 + 0x28) & 0xfffffffe) + 0x24) = uVar3 + 0x28;
                *puVar10 = param_3 + 0x28;
                *(uint *)(param_3 + 0x28) = uVar3;
              }
              else {
                *puVar10 = *puVar12;
                *(uint *)(*puVar12 & 0xfffffffe) = uVar3;
                *(uint *)(uVar3 + 0x28) = param_3;
                *puVar12 = uVar3 + 0x28;
              }
              param_2[2] = param_2[2] & 0xbfffffff;
              *puVar8 = *(uint *)(param_1 + 0x3d0);
              *(uint **)(param_1 + 0x3d0) = puVar8;
              return;
            }
            goto LAB_82b8b938;
          }
          puVar14 = (uint *)(*puVar8 & 0xfffffffe);
          puVar10 = puVar14 + -1;
          piVar7 = (int *)puVar10[puVar14[1] + 3];
          if ((puVar10[puVar14[1] + 3] & 1) == 0) goto LAB_82b8bbf4;
          uVar3 = puVar14[1];
          puVar14[1] = (uint)((ulonglong)uVar3 - 1);
        } while ((ulonglong)uVar3 - 1 != 0);
        *(uint *)(*puVar14 & 0xfffffffe) = *puVar10;
        *(uint *)(*puVar10 & 0xfffffffe) = *puVar14;
      } while( true );
    }
    uVar3 = *(uint *)(iVar2 + 0xc);
    if (uVar3 == param_3) {
      if ((piVar15 != param_2) || (param_4 != '\0')) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    }
    else {
      cVar11 = fn_82AEB338(uVar3);
      if ((cVar11 != '\0') && (*(int *)(uVar3 + 0x1c) == iVar1)) {
        uVar13 = uVar3;
        if (param_5 == '\0') {
          do {
            uVar13 = *(uint *)((uVar13 & 0xfffffffe) + 0x24);
            if (((uVar13 & 1) != 0) || (uVar13 = (uVar13 & 0xfffffffe) - 0x28, uVar13 == 0)) {
              cVar11 = '\0';
              goto LAB_82b8b9d0;
            }
          } while (uVar13 != param_3);
          cVar11 = '\x01';
        }
        else {
          cVar11 = fn_82AF4968(uVar3,param_3);
        }
LAB_82b8b9d0:
        if (cVar11 != '\0') {
          bVar6 = true;
          fn_82B24700(&iStack_80,puVar8);
          do {
            if ((iStack_78 != 0) ||
               (bVar5 = true,
               uStack_7c !=
               (-(uint)((*(uint *)(iStack_80 + 4) & 1) == 0) & *(uint *)(iStack_80 + 4)))) {
              bVar5 = false;
            }
            if (bVar5) goto LAB_82b8ba48;
            puVar10 = (uint *)fn_82AF8720(&iStack_80);
          } while ((*puVar10 & 0xfffffffe) != uVar3);
          *puVar10 = uVar3 | 1;
LAB_82b8ba48:
          if ((*puVar12 & 1) == 0) {
            uVar13 = *puVar8 & 0xfffffffe;
            iVar9 = uVar13 - 4;
            if ((iVar9 == 0) || (*(uint *)(uVar13 + 8) < *(int *)(uVar13 + 4) + 1U))
            goto LAB_82b8ba78;
          }
          else {
LAB_82b8ba78:
            iVar9 = fn_82AD6090(puVar8,1);
          }
          iVar4 = *(int *)(iVar9 + 8);
          *(int *)(iVar9 + 8) = iVar4 + 1;
          *(uint *)((iVar4 + 4) * 4 + iVar9) = uVar3;
        }
      }
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

