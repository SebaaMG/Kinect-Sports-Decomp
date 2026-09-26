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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern int fn_826861C8();
extern int fn_82686CA8();
extern int fn_82687270();
extern int fn_826874B8();
extern int fn_82687570();
extern int fn_82687AB8();
extern int fn_8268B330();
extern int fn_8268C590();
extern int fn_826D90B0();
extern int fn_826E4198();
extern int fn_826E4218();
extern int fn_826E4408();
extern int fn_826E4608();
extern int fn_826E47B0();
extern int fn_826E57D8();
extern int fn_826F3420();
extern int fn_826F3458();
extern int fn_826F35B0();
extern int fn_826F35E8();
extern int fn_826F3630();
extern int fn_826F4C88();
extern unsigned int iStack_a0;
extern unsigned int iStack_ac;
extern unsigned int iStack_b4;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern U64 storeWordConditionalIndexed();


/* WARNING: Removing unreachable block (ram,0x826e5f74) */

undefined8
fn_826E5AE8(int param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5
             )

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar7;
  int iVar8;
  ulonglong uVar6;
  int *piVar9;
  char cVar11;
  int *piVar10;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  char in_RESERVE;
  byte bVar18;
  char acStack_c0 [4];
  uint uStack_bc;
  uint uStack_b8;
  int iStack_b4;
  uint uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  
  fn_8268B330(&uStack_bc);
  fn_826F35B0(param_1,&uStack_bc,param_2);
  iStack_a0 = 0;
  iVar14 = 0;
  uStack_9c = 0;
  uVar17 = 0;
  uStack_a8 = 0;
  bVar1 = false;
  iStack_ac = 0;
  piVar9 = (int *)0x0;
  iStack_b4 = 0;
  uVar15 = 0;
  uVar16 = (ulonglong)*(uint *)(param_1 + 0xc);
  if (*(int *)(*(int *)(param_1 + 8) + 0x28) != 0) {
    param_3 = param_3 | 0x11;
  }
  if (((param_3 & 0x20) != 0) || (bVar3 = false, (param_3 & 0x10) == 0)) {
    bVar3 = true;
  }
  uVar4 = fn_826F3420(param_1,param_3);
  piVar10 = *(int **)(*(int *)(param_1 + 8) + 8);
  if (piVar10 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*piVar10 + 8))(piVar10,((ulonglong)uStack_bc & 0xfffffffc) + 8);
  }
  fn_826D90B0(&piStack_98,((ulonglong)uStack_bc & 0xfffffffc) + 8,uVar5,piVar10,uVar4,
                    *(undefined4 *)(*(int *)(param_1 + 8) + 0x20));
  iVar7 = fn_82687AB8(*(undefined4 *)(param_1 + 0x38),&iStack_a0,&piStack_98);
  if (iVar7 == 3) {
    fn_8268B330(&uStack_b8);
    uVar15 = fn_826E4408(((ulonglong)uStack_bc & 0xfffffffc) + 8,param_3,param_1,&uStack_a8,
                           &iStack_ac,&uStack_b8);
    iVar7 = iStack_ac;
    bVar18 = (uVar15 == 0) << 1;
    if (uVar15 == 0) {
      if (uVar16 != 0) {
        fn_82683F88(uVar16 + 0xc,0xffffffff821c4da8,((ulonglong)uStack_b8 & 0xfffffffc) + 8);
      }
      fn_82687570(uStack_9c,((ulonglong)uStack_b8 & 0xfffffffc) + 8);
      lVar12 = ((ulonglong)uStack_b8 & 0xfffffffc) + 4;
      do {
        puVar13 = (uint *)lVar12;
        uVar17 = (ulonglong)*puVar13;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
          *puVar13 = uVar2;
          bVar18 = 2;
        }
      } while (!(bool)(bVar18 >> 1 & 1));
      bVar18 = (uVar17 == 1) << 1;
      if (uVar17 == 1) {
        fn_8267BE38();
      }
      if (piStack_98 != (int *)0x0) {
        (**(code **)(*piStack_98 + 8))(piStack_98,uStack_94);
      }
      if (iStack_a0 == 1) {
        fn_82687270(uStack_9c);
      }
      else if (1 < iStack_a0) {
        fn_8267C4F0(uStack_9c);
      }
      lVar12 = ((ulonglong)uStack_bc & 0xfffffffc) + 4;
      do {
        puVar13 = (uint *)lVar12;
        uVar17 = (ulonglong)*puVar13;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
          *puVar13 = uVar2;
          bVar18 = 2;
        }
      } while (!(bool)(bVar18 >> 1 & 1));
      goto LAB_826e5d28;
    }
    iVar8 = fn_826E4198(&piStack_98,iStack_ac,((ulonglong)uStack_bc & 0xfffffffc) + 8,0,
                          (param_3 & 0xffffffff) >> 0x1c & 1,param_5);
    bVar18 = (iVar8 == 0) << 1;
    if (iVar8 != 0) {
      fn_826F3458(param_1,iVar8);
      if (iVar7 == 1) {
        uVar6 = fn_8267B890(lbl_831E7E64,0x318,0);
        bVar1 = (uVar6 & 0xffffffff) == 0;
        bVar18 = bVar1 << 1;
        if (bVar1) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)fn_826F4C88(uVar6,iVar8,param_1,param_3);
        }
        if (piVar9 != (int *)0x0) {
          cVar11 = fn_826F3630(piVar9,uVar15);
          bVar18 = (cVar11 == '\0') << 1;
          if (cVar11 != '\0') goto LAB_826e5df0;
          fn_8267C4F0(piVar9);
        }
        piVar9 = (int *)0x0;
        fn_82687270(iVar8);
        iVar8 = 0;
      }
LAB_826e5df0:
      if (iVar8 != 0) {
        if (iVar7 == 1) {
          bVar18 = !bVar3 << 1;
          if (bVar3) {
            piVar10 = &iStack_b4;
            goto LAB_826e5e14;
          }
        }
        else {
          piVar10 = (int *)0x0;
LAB_826e5e14:
          uVar17 = fn_826E47B0(param_1,iVar8,param_3,piVar10,1,param_4,param_5,0);
          iVar14 = iStack_b4;
        }
        fn_826874B8(uStack_9c,iVar8);
        bVar1 = true;
        lVar12 = ((ulonglong)uStack_b8 & 0xfffffffc) + 4;
        do {
          puVar13 = (uint *)lVar12;
          uVar6 = (ulonglong)*puVar13;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed(uVar6 - 1,0,lVar12);
            *puVar13 = uVar2;
            bVar18 = 2;
          }
        } while (!(bool)(bVar18 >> 1 & 1));
        if (uVar6 == 1) {
          fn_8267BE38();
        }
        goto LAB_826e60a4;
      }
    }
    fn_8268C590(&uStack_a4,0xffffffff8200d638,((ulonglong)uStack_bc & 0xfffffffc) + 8,
                      0xffffffff8200d338);
    fn_82687570(uStack_9c,((ulonglong)uStack_a4 & 0xfffffffc) + 8);
    lVar12 = ((ulonglong)uStack_a4 & 0xfffffffc) + 4;
    do {
      puVar13 = (uint *)lVar12;
      uVar17 = (ulonglong)*puVar13;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
        *puVar13 = uVar2;
        bVar18 = 2;
      }
    } while (!(bool)(bVar18 >> 1 & 1));
    bVar18 = (uVar17 == 1) << 1;
    if (uVar17 == 1) {
      fn_8267BE38();
    }
    lVar12 = ((ulonglong)uStack_b8 & 0xfffffffc) + 4;
    do {
      puVar13 = (uint *)lVar12;
      uVar17 = (ulonglong)*puVar13;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
        *puVar13 = uVar2;
        bVar18 = 2;
      }
    } while (!(bool)(bVar18 >> 1 & 1));
    bVar18 = (uVar17 == 1) << 1;
    if (uVar17 == 1) {
      fn_8267BE38();
    }
    if (piStack_98 != (int *)0x0) {
      (**(code **)(*piStack_98 + 8))(piStack_98,uStack_94);
    }
    fn_8267C4F0(uVar15);
    if (piVar9 != (int *)0x0) {
      fn_8267C4F0(piVar9);
    }
    if (iStack_a0 == 1) {
      fn_82687270(uStack_9c);
    }
    else if (1 < iStack_a0) {
      fn_8267C4F0(uStack_9c);
    }
    lVar12 = ((ulonglong)uStack_bc & 0xfffffffc) + 4;
    do {
      puVar13 = (uint *)lVar12;
      uVar17 = (ulonglong)*puVar13;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
        *puVar13 = uVar2;
        bVar18 = 2;
      }
    } while (!(bool)(bVar18 >> 1 & 1));
    goto LAB_826e5d28;
  }
  iVar8 = fn_82686CA8(&iStack_a0);
  bVar18 = (iVar8 == 0) << 1;
  if (iVar8 == 0) {
    if (uVar16 != 0) {
      if (iStack_a0 < 2) {
        uVar4 = 0xffffffff82196582;
      }
      else {
        uVar4 = fn_826861C8(uStack_9c);
      }
      fn_82683F88(uVar16 + 0xc,0xffffffff8200d370,uVar4);
    }
    if (piStack_98 != (int *)0x0) {
      (**(code **)(*piStack_98 + 8))(piStack_98,uStack_94);
    }
    if (iStack_a0 == 1) {
      fn_82687270(uStack_9c);
    }
    else if (1 < iStack_a0) {
      fn_8267C4F0(uStack_9c);
    }
    lVar12 = ((ulonglong)uStack_bc & 0xfffffffc) + 4;
    do {
      puVar13 = (uint *)lVar12;
      uVar17 = (ulonglong)*puVar13;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
        *puVar13 = uVar2;
        bVar18 = 2;
      }
    } while (!(bool)(bVar18 >> 1 & 1));
    goto LAB_826e5d28;
  }
  iVar7 = *(int *)(iVar8 + 0x1c);
  fn_826F3458(param_1,iVar8);
LAB_826e60a4:
  bVar18 = !bVar1 << 1;
  if ((!bVar1) || (bVar18 = !bVar3 << 1, !bVar3)) {
    if ((uVar17 & 0xffffffff) == 0) {
      acStack_c0[0] = '\0';
      uVar17 = fn_826E47B0(param_1,iVar8,param_3,-(uint)(iVar7 == 1) & (uint)&iStack_b4,0,param_4,
                             param_5,acStack_c0);
      iVar14 = iStack_b4;
      if ((iVar7 == 2) && (bVar18 = (acStack_c0[0] == '\0') << 1, acStack_c0[0] != '\0')) {
        bVar1 = true;
      }
      goto LAB_826e6114;
    }
  }
  else {
LAB_826e6114:
    if ((uVar17 & 0xffffffff) == 0) {
      if (piStack_98 != (int *)0x0) {
        (**(code **)(*piStack_98 + 8))(piStack_98,uStack_94);
      }
      if ((uVar15 & 0xffffffff) != 0) {
        fn_8267C4F0(uVar15);
      }
      if (piVar9 != (int *)0x0) {
        fn_8267C4F0(piVar9);
      }
      if (iVar14 != 0) {
        fn_8267C4F0(iVar14);
      }
      fn_82687270(iVar8);
      if (iStack_a0 == 1) {
        fn_82687270(uStack_9c);
      }
      else if (1 < iStack_a0) {
        fn_8267C4F0(uStack_9c);
      }
      lVar12 = ((ulonglong)uStack_bc & 0xfffffffc) + 4;
      do {
        puVar13 = (uint *)lVar12;
        uVar17 = (ulonglong)*puVar13;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
          *puVar13 = uVar2;
          bVar18 = 2;
        }
      } while (!(bool)(bVar18 >> 1 & 1));
      goto LAB_826e5d28;
    }
  }
  bVar18 = !bVar1 << 1;
  if (!bVar1) goto LAB_826e6534;
  if (iVar7 != 1) {
    if ((uVar15 & 0xffffffff) == 0) {
      fn_8268B330(&uStack_b0);
      uVar15 = fn_826E4408(((ulonglong)uStack_bc & 0xfffffffc) + 8,param_3,param_1,&uStack_a8,
                             &iStack_ac,&uStack_b0);
      bVar18 = (uVar15 == 0) << 1;
      if (uVar15 == 0) {
        if (uVar16 != 0) {
          fn_82683F88(uVar16 + 0xc,0xffffffff821c4da8,((ulonglong)uStack_b0 & 0xfffffffc) + 8)
          ;
        }
        fn_82687270(uVar17);
        lVar12 = ((ulonglong)uStack_b0 & 0xfffffffc) + 4;
        do {
          puVar13 = (uint *)lVar12;
          uVar17 = (ulonglong)*puVar13;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
            *puVar13 = uVar2;
            bVar18 = 2;
          }
        } while (!(bool)(bVar18 >> 1 & 1));
        bVar18 = (uVar17 == 1) << 1;
        if (uVar17 == 1) {
          fn_8267BE38();
        }
        if (piStack_98 != (int *)0x0) {
          (**(code **)(*piStack_98 + 8))(piStack_98,uStack_94);
        }
        if (piVar9 != (int *)0x0) {
          fn_8267C4F0(piVar9);
        }
        if (iVar14 != 0) {
          fn_8267C4F0(iVar14);
        }
        fn_82687270(iVar8);
        if (iStack_a0 == 1) {
          fn_82687270(uStack_9c);
        }
        else if (1 < iStack_a0) {
          fn_8267C4F0(uStack_9c);
        }
        lVar12 = ((ulonglong)uStack_bc & 0xfffffffc) + 4;
        do {
          puVar13 = (uint *)lVar12;
          uVar17 = (ulonglong)*puVar13;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
            *puVar13 = uVar2;
            bVar18 = 2;
          }
        } while (!(bool)(bVar18 >> 1 & 1));
        goto LAB_826e5d28;
      }
      lVar12 = ((ulonglong)uStack_b0 & 0xfffffffc) + 4;
      bVar1 = false;
      do {
        puVar13 = (uint *)lVar12;
        uVar16 = (ulonglong)*puVar13;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed(uVar16 - 1,0,lVar12);
          *puVar13 = uVar2;
          bVar1 = true;
        }
      } while (!bVar1);
      if (uVar16 == 1) {
        fn_8267BE38();
      }
    }
    uVar16 = fn_8267B890(lbl_831E7E64,0x28,0);
    if ((uVar16 & 0xffffffff) == 0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = (int *)fn_826E57D8(uVar16,iVar8,uVar17,uVar15,uStack_a8,param_1);
    }
    bVar1 = (param_3 & 0x11) == 0;
    bVar18 = bVar1 << 1;
    if (bVar1) {
      cVar11 = fn_826F35E8(param_1,piVar10);
      bVar18 = (cVar11 == '\0') << 1;
      if (cVar11 == '\0') goto LAB_826e6440;
    }
    else {
LAB_826e6440:
      (**(code **)(*piVar10 + 4))(piVar10);
      if (piVar10[9] == 0) {
        if ((uVar17 & 0xffffffff) != 0) {
          fn_82687270(uVar17);
        }
        fn_8267C4F0(piVar10);
        if (piStack_98 != (int *)0x0) {
          (**(code **)(*piStack_98 + 8))(piStack_98,uStack_94);
        }
        if ((uVar15 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar15);
        }
        if (piVar9 != (int *)0x0) {
          fn_8267C4F0(piVar9);
        }
        if (iVar14 != 0) {
          fn_8267C4F0(iVar14);
        }
        fn_82687270(iVar8);
        if (iStack_a0 == 1) {
          fn_82687270(uStack_9c);
        }
        else if (1 < iStack_a0) {
          fn_8267C4F0(uStack_9c);
        }
        lVar12 = ((ulonglong)uStack_bc & 0xfffffffc) + 4;
        do {
          puVar13 = (uint *)lVar12;
          uVar17 = (ulonglong)*puVar13;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
            *puVar13 = uVar2;
            bVar18 = 2;
          }
        } while (!(bool)(bVar18 >> 1 & 1));
LAB_826e5d28:
        if (uVar17 == 1) {
          fn_8267BE38();
        }
        return 0;
      }
    }
    if (piVar10 != (int *)0x0) {
      fn_8267C4F0(piVar10);
    }
    goto LAB_826e6534;
  }
  if ((param_3 & 0x30) == 0) {
    iVar7 = iVar14;
    if (iVar14 != 0) {
      fn_826E4218(piVar9,iVar14);
    }
  }
  else {
    iVar7 = 0;
  }
  bVar1 = (param_3 & 1) == 0;
  bVar18 = bVar1 << 1;
  piVar9[0xb0] = *(int *)(iVar14 + 0x30);
  if (bVar1) {
    cVar11 = fn_826F35E8(param_1,piVar9);
    bVar18 = (cVar11 == '\0') << 1;
    if (cVar11 == '\0') goto LAB_826e6224;
  }
  else {
LAB_826e6224:
    (**(code **)(*piVar9 + 4))(piVar9);
  }
  if (iVar7 != 0) {
    fn_8267C4F0(iVar14);
    iVar14 = 0;
  }
  fn_8267C4F0(piVar9);
  piVar9 = (int *)0x0;
  if ((uVar15 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar15);
  }
  uVar15 = 0;
LAB_826e6534:
  uVar4 = fn_826E4608(uVar17,iVar14,param_1,param_3,param_4);
  if (piStack_98 != (int *)0x0) {
    (**(code **)(*piStack_98 + 8))(piStack_98,uStack_94);
  }
  if ((uVar15 & 0xffffffff) != 0) {
    fn_8267C4F0(uVar15);
  }
  if (piVar9 != (int *)0x0) {
    fn_8267C4F0(piVar9);
  }
  if (iVar14 != 0) {
    fn_8267C4F0(iVar14);
  }
  fn_82687270(iVar8);
  if (iStack_a0 == 1) {
    fn_82687270(uStack_9c);
  }
  else if (1 < iStack_a0) {
    fn_8267C4F0(uStack_9c);
  }
  lVar12 = ((ulonglong)uStack_bc & 0xfffffffc) + 4;
  do {
    puVar13 = (uint *)lVar12;
    uVar17 = (ulonglong)*puVar13;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar17 - 1,0,lVar12);
      *puVar13 = uVar2;
      bVar18 = 2;
    }
  } while (!(bool)(bVar18 >> 1 & 1));
  if (uVar17 != 1) {
    return uVar4;
  }
  fn_8267BE38();
  return uVar4;
}

