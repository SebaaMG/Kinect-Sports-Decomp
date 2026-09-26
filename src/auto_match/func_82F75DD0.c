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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82F71E30();
extern int fn_82F72318();
extern int fn_82F727A0();
extern int fn_82F72D78();
extern int fn_82F73228();
extern int fn_82F73368();
extern int fn_82F73558();
extern int fn_82F735D8();
extern int fn_82F73680();
extern int fn_82F738A0();
extern int fn_82F73928();
extern int fn_82F73988();
extern int fn_82F739E8();
extern int fn_82F73A48();
extern int fn_82F73D20();
extern int fn_82F73E68();
extern int fn_82F74400();
extern int fn_82F75CD0();
extern int fn_82F78848();
extern unsigned int lbl_832635D0;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


ulonglong * fn_82F75DD0(ulonglong *param_1,ulonglong *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar6;
  undefined8 uVar5;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [112];
  
  uStack_b0 = (ulonglong)(((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 0xffffffff0000ffff;
  uVar6 = fn_82F71E30();
  if ((*(int *)param_2 == 0) || (bVar3 = true, (*param_2 & 0x400000) == 0)) {
    bVar3 = false;
  }
  if (uVar6 == 0xffff) {
    *(undefined1 *)((int)param_1 + 5) = 0;
    *(int *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 4) = 2;
    return param_1;
  }
  if (uVar6 == 0xfffe) {
    fn_82F73988(param_1,1,param_2);
    return param_1;
  }
  if (uVar6 == 0xfffd) {
    *(int *)param_1 = *(int *)param_2;
    *(int *)((int)param_1 + 4) = (int)*param_2;
    return param_1;
  }
  uVar11 = uVar6 & 0x8000;
  if (uVar11 == 0) {
LAB_82f76528:
    fn_82F73228(&uStack_b0,param_2);
    if (uVar11 == 0) {
      if (((uVar6 & 0x7c00) == 0x6800) || ((uVar6 & 0x7c00) == 0x7000)) {
        fn_82F74400(param_1,&uStack_b0);
        return param_1;
      }
      if ((uVar6 & 0x7c00) == 0x6000) {
        fn_82F73A48(&uStack_98,0);
        uStack_88 = uStack_b0;
        fn_82F735D8(&uStack_88,0x7b);
        uStack_90 = uStack_88;
        fn_82F73228(&uStack_90,&uStack_98);
        *param_1 = uStack_90;
        fn_82F73680(param_1,0xffffffff82169fec);
        return param_1;
      }
      if ((uVar6 & 0x7c00) == 0x7c00) {
        fn_82F738A0(param_1,&uStack_b0);
        return param_1;
      }
      uVar9 = uVar6 & 0x6000;
    }
    else {
      uVar9 = (uVar6 & 0x1800) - 0x800;
    }
    uVar1 = uVar6 & 0x400;
    if ((uint)LZCOUNT(uVar9) >> 5 == 0) {
      uVar1 = uVar6 & 0x1000;
    }
    if (uVar1 == 0) {
LAB_82f76660:
      if (uVar11 == 0) {
        uVar9 = uVar6 & 0x6000;
      }
      else {
        uVar9 = (uVar6 & 0x1800) - 0x800;
      }
      uVar1 = uVar6 & 0x400;
      if ((uint)LZCOUNT(uVar9) >> 5 == 0) {
        uVar1 = uVar6 & 0x1000;
      }
      if (uVar1 != 0) {
        if (uVar11 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)LZCOUNT((uVar6 & 0x1b00) - 0x1100) >> 5;
        }
        if (uVar9 != 0) {
          uVar5 = 0xffffffff82169f6c;
          goto LAB_82f76734;
        }
      }
      if (uVar11 == 0) {
        uVar9 = uVar6 & 0x6000;
      }
      else {
        uVar9 = (uVar6 & 0x1800) - 0x800;
      }
      uVar1 = uVar6 & 0x400;
      if ((uint)LZCOUNT(uVar9) >> 5 == 0) {
        uVar1 = uVar6 & 0x1000;
      }
      if (uVar1 != 0) {
        if (uVar11 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)LZCOUNT((uVar6 & 0x1b00) - 0x1200) >> 5;
        }
        if (uVar9 != 0) {
          uVar5 = 0xffffffff82169f3c;
          goto LAB_82f76734;
        }
      }
      if (uVar11 == 0) {
        if ((uVar6 & 0x7c00) == 0x7800) {
LAB_82f762e0:
          *param_1 = uStack_b0;
          return param_1;
        }
        goto LAB_82f76754;
      }
LAB_82f7675c:
      uVar9 = (uVar6 & 0x1800) - 0x800;
    }
    else {
      if (uVar11 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)LZCOUNT((uVar6 & 0x1b00) - 0x1000) >> 5;
      }
      if (uVar9 == 0) goto LAB_82f76660;
      uVar5 = 0xffffffff82169fa0;
LAB_82f76734:
      fn_82F73680(&uStack_b0,uVar5);
LAB_82f76754:
      if (uVar11 != 0) goto LAB_82f7675c;
      uVar9 = uVar6 & 0x6000;
    }
    uVar1 = uVar6 & 0x400;
    if ((uint)LZCOUNT(uVar9) >> 5 == 0) {
      uVar1 = uVar6 & 0x1000;
    }
    if (uVar1 == 0) {
LAB_82f767fc:
      puVar7 = (ulonglong *)fn_82F78848(auStack_70,&uStack_b0);
    }
    else {
      if (uVar11 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)LZCOUNT((uVar6 & 0x1b00) - 0x1100) >> 5;
      }
      if (uVar9 == 0) {
        if (uVar11 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (uint)LZCOUNT((uVar6 & 0x1b00) - 0x1200) >> 5;
        }
        if (uVar9 == 0) goto LAB_82f767fc;
      }
      puVar7 = (ulonglong *)fn_82F739E8(auStack_78,0xffffffff821aa89c,&uStack_b0);
    }
    uStack_b0 = *puVar7;
  }
  else {
    bVar2 = (uVar6 & 0x1800) == 0x800;
    uVar9 = uVar6 & 0x400;
    if (!bVar2) {
      uVar9 = uVar6 & 0x1000;
    }
    if ((uVar9 != 0) && ((uVar6 & 0x1b00) == 0x1000)) goto LAB_82f76528;
    uVar9 = uVar6 & 0x400;
    if (!bVar2) {
      uVar9 = uVar6 & 0x1000;
    }
    if ((uVar9 != 0) && (((uVar6 & 0x1b00) == 0x1100 || ((uVar6 & 0x1b00) == 0x1200))))
    goto LAB_82f76528;
    if ((uVar6 & 0x4000) != 0) {
      if ((((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 1 & 1) == 0) ||
         (((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 3 & 1) == 0)) {
        iVar10 = fn_82F75CD0(&uStack_88);
        if ((((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 0xff000000) != 0x3000000) && ('\x01' < *(char *)(iVar10 + 4))) {
          uStack_b0 = CONCAT44((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF),
                               (int)*(char *)(iVar10 + 4) << 0x18 | (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 0xffffff);
        }
      }
      else {
        uVar5 = fn_82F75CD0(&uStack_88);
        puVar7 = (ulonglong *)fn_82F73928(&uStack_90,0x20,uVar5);
        uStack_b0 = *puVar7;
      }
    }
    uVar9 = uVar6 & 0x400;
    if (!bVar2) {
      uVar9 = uVar6 & 0x1000;
    }
    if ((uVar9 == 0) || ((uVar6 & 0x1800) != 0x1800)) {
      uVar9 = (((U64)(uStack_a0) >> 32) & 0xFFFFFFFF) & 0xffff;
      uStack_98 = (ulonglong)((((U64)(uStack_98) >> 32) & 0xFFFFFFFF) & 0xffff);
      uVar1 = uVar6 & 0x400;
      uStack_90 = uStack_90 & 0xffff;
      uStack_a8 = uStack_a8 & 0xffff;
      uStack_88 = uStack_88 & 0xffff;
      uStack_a0 = (ulonglong)uVar9;
      if (!bVar2) {
        uVar1 = uVar6 & 0x1000;
      }
      if (uVar1 != 0) {
        if (bVar2) {
          if ((uVar6 & 0x700) == 0x600) {
            fn_82F73A48(&uStack_88,1);
            uStack_98 = uStack_88;
            fn_82F73A48(&uStack_90,1);
          }
          else if ((uVar6 & 0x700) != 0x500) goto LAB_82f7615c;
          fn_82F73A48(&uStack_88,1);
          uStack_a8 = uStack_88;
        }
LAB_82f7615c:
        fn_82F73A48(&uStack_88,1);
      }
      uVar4 = uStack_88;
      if ((bVar2) && ((uVar6 & 0x700) != 0x200)) {
        if ((lbl_832635D0 & 0x60) == 0x60) {
          iVar10 = fn_82F727A0(&uStack_88);
          if ('\x01' < *(char *)(iVar10 + 4)) {
            uStack_a0 = CONCAT44((((U64)(uStack_a0) >> 0) & 0xFFFFFFFF),(int)*(char *)(iVar10 + 4) << 0x18 | uVar9);
          }
        }
        else {
          puVar7 = (ulonglong *)fn_82F727A0(&uStack_88);
          uStack_a0 = *puVar7;
        }
      }
      if ((((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 1 & 1) == 0) ||
         (((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 4 & 1) == 0)) {
        iVar10 = fn_82F73368(auStack_80);
        if ((((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 0xff000000) != 0x3000000) && ('\x01' < *(char *)(iVar10 + 4))) {
          uStack_b0 = CONCAT44((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF),
                               (int)*(char *)(iVar10 + 4) << 0x18 | (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 0xffffff);
        }
      }
      else {
        puVar7 = (ulonglong *)fn_82F73368(auStack_80);
        uStack_88 = *puVar7;
        fn_82F73228(&uStack_88,&uStack_b0);
        uStack_b0 = uStack_88;
      }
      if (*(int *)param_2 != 0) {
        if (((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF) == 0) || ((lbl_832635D0 & 0x1000) != 0)) {
          uStack_b0 = *param_2;
        }
        else {
          uVar5 = fn_82F73928(auStack_80,0x20,param_2);
          fn_82F73228(&uStack_b0,uVar5);
        }
      }
      puVar7 = (ulonglong *)0x0;
      uStack_88 = uStack_88 & 0xffff;
      if (bVar3) {
        uVar5 = fn_82F72D78(auStack_80,0);
        uVar5 = fn_82F739E8(auStack_78,0xffffffff821aa89c,uVar5);
        fn_82F73228(&uStack_b0,uVar5);
        uVar12 = uStack_88;
        if ((lbl_832635D0 & 0x1000) != 0) goto LAB_82f762e0;
      }
      else {
        puVar7 = (ulonglong *)fn_82F72318(0xffffffff832635a0,8,0);
        if (puVar7 == (ulonglong *)0x0) {
          puVar7 = (ulonglong *)0x0;
        }
        else {
          *(undefined4 *)puVar7 = 0;
          *(undefined1 *)((int)puVar7 + 4) = 0;
          *(undefined1 *)((int)puVar7 + 5) = 0;
        }
        puVar8 = (ulonglong *)fn_82F72D78(auStack_78,puVar7);
        uVar12 = *puVar8;
      }
      uVar9 = uVar6 & 0x400;
      if (!bVar2) {
        uVar9 = uVar6 & 0x1000;
      }
      if (uVar9 != 0) {
        if (bVar2) {
          if ((uVar6 & 0x700) == 0x600) {
            puVar8 = (ulonglong *)fn_82F739E8(auStack_78,0xffffffff82169fdc,&uStack_98);
            uStack_88 = *puVar8;
            fn_82F735D8(&uStack_88,0x2c);
            uStack_98 = uStack_88;
            fn_82F73228(&uStack_98,&uStack_90);
            uStack_88 = uStack_98;
            fn_82F735D8(&uStack_88,0x2c);
            uStack_90 = uStack_88;
            fn_82F73228(&uStack_90,&uStack_a8);
            uStack_88 = uStack_90;
          }
          else {
            if ((uVar6 & 0x700) != 0x500) goto LAB_82f76424;
            puVar8 = (ulonglong *)fn_82F739E8(auStack_78,0xffffffff82169fd0,&uStack_a8);
            uStack_88 = *puVar8;
          }
          fn_82F735D8(&uStack_88,0x2c);
          fn_82F73228(&uStack_b0,&uStack_88);
        }
        else {
LAB_82f76424:
          fn_82F73680(&uStack_b0,0xffffffff82169fc4);
        }
        uStack_88 = uVar4;
        fn_82F73680(&uStack_88,0xffffffff82169ff0);
        fn_82F73228(&uStack_b0,&uStack_88);
      }
      uVar5 = fn_82F73D20(auStack_78);
      puVar8 = (ulonglong *)fn_82F73928(auStack_80,0x28,uVar5);
      uStack_88 = *puVar8;
      fn_82F735D8(&uStack_88,0x29);
      fn_82F73228(&uStack_b0,&uStack_88);
      if ((bVar2) && ((uVar6 & 0x700) != 0x200)) {
        fn_82F73228(&uStack_b0,&uStack_a0);
      }
      if (((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 8 & 1) == 0) {
        iVar10 = fn_82F73E68(auStack_78);
        if ((((((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 0xff000000) != 0x3000000) && ('\x01' < *(char *)(iVar10 + 4))) {
          uStack_b0 = CONCAT44((((U64)(uStack_b0) >> 0) & 0xFFFFFFFF),
                               (int)*(char *)(iVar10 + 4) << 0x18 | (((U64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 0xffffff);
        }
      }
      else {
        uVar5 = fn_82F73E68(auStack_78);
        fn_82F73228(&uStack_b0,uVar5);
      }
      if ((((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 2 & 1) != 0) && (puVar7 != (ulonglong *)0x0))
      {
        *puVar7 = uStack_b0;
        uStack_b0 = uVar12;
      }
    }
    else {
      fn_82F73A48(&uStack_98,0);
      uStack_88 = *param_2;
      fn_82F735D8(&uStack_88,0x7b);
      uStack_90 = uStack_88;
      fn_82F73228(&uStack_90,&uStack_98);
      fn_82F73228(&uStack_b0,&uStack_90);
      fn_82F73558(&uStack_88);
      if ((lbl_832635D0 & 0x1000) == 0) {
        puVar7 = (ulonglong *)fn_82F73928(&uStack_90,0x2c,&uStack_88);
        uStack_88 = *puVar7;
        fn_82F73680(&uStack_88,0xffffffff82169ff0);
        fn_82F73228(&uStack_b0,&uStack_88);
      }
      fn_82F73680(&uStack_b0,0xffffffff82169fec);
      fn_82F73368(&uStack_88);
      if (((((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 1 & 1) != 0) &&
          (((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 4 & 1) != 0)) &&
         ((lbl_832635D0 & 0x1000) == 0)) {
        puVar7 = (ulonglong *)fn_82F73928(&uStack_98,0x20,&uStack_88);
        uStack_88 = *puVar7;
        fn_82F735D8(&uStack_88,0x20);
        uStack_90 = uStack_88;
        fn_82F73228(&uStack_90,&uStack_b0);
        uStack_b0 = uStack_90;
      }
    }
  }
  if (uVar11 == 0) {
    uVar9 = uVar6 & 0x6000;
  }
  else {
    uVar9 = (uVar6 & 0x1800) - 0x800;
  }
  if ((uint)LZCOUNT(uVar9) >> 5 == 0) goto LAB_82f76aec;
  if (((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 9 & 1) != 0) {
    if (uVar11 == 0) {
      uVar9 = uVar6 & 0x6000;
    }
    else {
      uVar9 = (uVar6 & 0x1800) - 0x800;
    }
    if ((uint)LZCOUNT(uVar9) >> 5 != 0) {
      if (uVar11 == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = (uint)LZCOUNT((uVar6 & 0x700) - 0x200) >> 5;
      }
      if (uVar9 != 0) {
        puVar7 = (ulonglong *)fn_82F739E8(auStack_78,0xffffffff82169f34,&uStack_b0);
        uStack_b0 = *puVar7;
      }
    }
    if (uVar11 == 0) {
LAB_82f768dc:
      uVar9 = uVar6 & 0x6000;
LAB_82f768e0:
      uVar1 = uVar6 & 0x400;
      if ((uint)LZCOUNT(uVar9) >> 5 == 0) {
        uVar1 = uVar6 & 0x1000;
      }
      if (uVar1 == 0) goto LAB_82f769b8;
      if (uVar11 == 0) {
        uVar9 = uVar6 & 0x6000;
      }
      else {
        uVar9 = (uVar6 & 0x1800) - 0x800;
      }
      if (((uint)LZCOUNT(uVar9) >> 5 == 0) || ((uVar6 & 0x700) != 0x500)) {
        if (uVar11 == 0) {
          uVar9 = uVar6 & 0x6000;
        }
        else {
          uVar9 = (uVar6 & 0x1800) - 0x800;
        }
        if (((uint)LZCOUNT(uVar9) >> 5 == 0) || ((uVar6 & 0x700) != 0x600)) {
          if (uVar11 == 0) {
            uVar9 = uVar6 & 0x6000;
          }
          else {
            uVar9 = (uVar6 & 0x1800) - 0x800;
          }
          if (((uint)LZCOUNT(uVar9) >> 5 == 0) || ((uVar6 & 0x700) != 0x400)) goto LAB_82f769b8;
        }
      }
    }
    else if ((uVar6 & 0x700) != 0x100) {
      if (uVar11 == 0) goto LAB_82f768dc;
      uVar9 = (uVar6 & 0x1800) - 0x800;
      goto LAB_82f768e0;
    }
    puVar7 = (ulonglong *)fn_82F739E8(auStack_78,0xffffffff82169f28,&uStack_b0);
    uStack_b0 = *puVar7;
  }
LAB_82f769b8:
  if (((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 7 & 1) == 0) goto LAB_82f76aec;
  if (uVar11 == 0) {
    uVar9 = uVar6 & 0x6000;
  }
  else {
    uVar9 = (uVar6 & 0x1800) - 0x800;
  }
  if ((uint)LZCOUNT(uVar9) >> 5 == 0) {
LAB_82f76a28:
    if (uVar11 == 0) {
      uVar9 = uVar6 & 0x6000;
    }
    else {
      uVar9 = (uVar6 & 0x1800) - 0x800;
    }
    if ((uint)LZCOUNT(uVar9) >> 5 != 0) {
      if (uVar11 == 0) {
        iVar10 = (uVar6 & 0x1800) - 0x1000;
      }
      else {
        iVar10 = (uVar6 & 0xc0) - 0x80;
      }
      if ((uint)LZCOUNT(iVar10) >> 5 != 0) {
        uVar5 = 0xffffffff82169f10;
        goto LAB_82f76ad8;
      }
    }
    if (uVar11 == 0) {
      uVar9 = uVar6 & 0x6000;
    }
    else {
      uVar9 = (uVar6 & 0x1800) - 0x800;
    }
    if ((uint)LZCOUNT(uVar9) >> 5 == 0) goto LAB_82f76aec;
    uVar9 = uVar6 & 0xc0;
    if (uVar11 == 0) {
      uVar9 = uVar6 & 0x1800;
    }
    if ((uint)LZCOUNT(uVar9) >> 5 == 0) goto LAB_82f76aec;
    uVar5 = 0xffffffff82169f04;
  }
  else {
    if (uVar11 == 0) {
      iVar10 = (uVar6 & 0x1800) - 0x800;
    }
    else {
      iVar10 = (uVar6 & 0xc0) - 0x40;
    }
    if ((uint)LZCOUNT(iVar10) >> 5 == 0) goto LAB_82f76a28;
    uVar5 = 0xffffffff82169f1c;
  }
LAB_82f76ad8:
  puVar7 = (ulonglong *)fn_82F739E8(auStack_78,uVar5,&uStack_b0);
  uStack_b0 = *puVar7;
LAB_82f76aec:
  if (uVar11 == 0) {
    uVar11 = uVar6 & 0x6000;
  }
  else {
    uVar11 = (uVar6 & 0x1800) - 0x800;
  }
  uVar9 = uVar6 & 0x400;
  if ((uint)LZCOUNT(uVar11) >> 5 == 0) {
    uVar9 = uVar6 & 0x1000;
  }
  if ((uVar9 != 0) && ((lbl_832635D0 & 0x1000) == 0)) {
    puVar7 = (ulonglong *)fn_82F739E8(auStack_78,0xffffffff82169ef8,&uStack_b0);
    uStack_b0 = *puVar7;
  }
  if ((uVar6 & 0x10000) != 0) {
    puVar7 = (ulonglong *)fn_82F739E8(auStack_78,0xffffffff82169eec,&uStack_b0);
    uStack_b0 = *puVar7;
  }
  *param_1 = uStack_b0;
  return param_1;
}

