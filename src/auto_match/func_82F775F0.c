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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82F728D0();
extern int fn_82F72DD0();
extern int fn_82F72F40();
extern int fn_82F73228();
extern int fn_82F73308();
extern int fn_82F735D8();
extern int fn_82F73928();
extern int fn_82F73988();
extern int fn_82F739E8();
extern int fn_82F73F48();
extern int fn_82F75CD0();
extern int fn_82F76E68();
extern unsigned int lbl_82169BB0;
extern unsigned int lbl_82169BB4;
extern unsigned int lbl_82169BB8;
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_98;


/* WARNING: Removing unreachable block (ram,0x82f77920) */
/* WARNING: Removing unreachable block (ram,0x82f77774) */
/* WARNING: Removing unreachable block (ram,0x82f77780) */
/* WARNING: Removing unreachable block (ram,0x82f77778) */
/* WARNING: Removing unreachable block (ram,0x82f77788) */
/* WARNING: Removing unreachable block (ram,0x82f77bfc) */
/* WARNING: Removing unreachable block (ram,0x82f77800) */
/* WARNING: Removing unreachable block (ram,0x82f7780c) */
/* WARNING: Removing unreachable block (ram,0x82f77804) */
/* WARNING: Removing unreachable block (ram,0x82f776fc) */
/* WARNING: Removing unreachable block (ram,0x82f77708) */
/* WARNING: Removing unreachable block (ram,0x82f7770c) */
/* WARNING: Removing unreachable block (ram,0x82f77700) */
/* WARNING: Removing unreachable block (ram,0x82f77710) */
/* WARNING: Removing unreachable block (ram,0x82f778ec) */

ulonglong *
fn_82F775F0(ulonglong *param_1,ulonglong *param_2,char *param_3,ulonglong *param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  char *pcStack00000024;
  undefined8 uStack_98;
  ulonglong uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  
  uVar4 = ZEXT48(&stack0x00000000);
  uStack_80 = (ulonglong)(((U64)(uStack_80) >> 32) & 0xFFFFFFFF) & 0xffffffff0000ffff;
  iVar10 = (int)param_5;
  pcStack00000024 = param_3;
  if (*lbl_832635C0 != '\0') {
    if (*lbl_832635C0 == '$') {
      fn_82F73F48(uVar4 - 0x88,uVar4 + 0x24,uVar4 - 0xa0,param_5);
      uStack_98 = uStack_88;
      if ((((U64)(uStack_88) >> 0) & 0xFFFFFFFF) != 0) {
LAB_82f77668:
        *param_1 = uStack_98;
        return param_1;
      }
    }
    iVar7 = (int)*lbl_832635C0;
    iVar8 = 0x41;
    if (*lbl_832635C0 < 'A') {
      iVar8 = 0x16;
    }
    uVar11 = iVar7 - iVar8;
    uVar9 = (ulonglong)lbl_832635D0;
    do {
      pcVar3 = pcStack00000024;
      if (uVar11 == 4) {
        if ((((~uVar9 & 0xffffffff) >> 1 & 1) != 0) && (((~uVar9 & 0xffffffff) >> 0x11 & 1) != 0)) {
          puVar2 = lbl_82169BB0;
          if ((~uVar9 & 1) == 0) {
LAB_82f77824:
            uVar9 = ZEXT48(puVar2) + 2;
          }
          else {
            uVar9 = ZEXT48(lbl_82169BB0);
          }
LAB_82f77828:
          lVar5 = uVar4 - 0x90;
LAB_82f7782c:
          fn_82F73308(lVar5,uVar9);
          uVar9 = (ulonglong)lbl_832635D0;
        }
      }
      else if (uVar11 == 5) {
        if (((~uVar9 & 0xffffffff) >> 1 & 1) != 0) {
          if ((~uVar9 & 1) == 0) {
            uVar9 = ZEXT48(lbl_82169BB8) + 2;
          }
          else {
            uVar9 = ZEXT48(lbl_82169BB8);
          }
          lVar5 = uVar4 - 0x88;
          goto LAB_82f7782c;
        }
      }
      else {
        if (uVar11 != 8) {
          if (iVar7 != 0) {
            lbl_832635C0 = lbl_832635C0 + 1;
          }
          if (0x1f < uVar11) {
LAB_82f77964:
            *(undefined1 *)((int)param_1 + 5) = 0;
            *(undefined4 *)param_1 = 0;
            *(undefined1 *)((int)param_1 + 4) = 2;
            return param_1;
          }
          fn_82F72F40(uVar4 - 0x98,pcStack00000024);
          fn_82F73228(uVar4 - 0x78,uVar4 - 0x98);
          uStack_98 = uStack_80;
          uVar9 = uStack_98;
          if ((uVar11 & 0x10) != 0) {
            if (iVar10 != 0) goto LAB_82f77964;
            if (*pcVar3 == '\0') {
              if (*lbl_832635C0 != '\0') {
                iVar7 = fn_82F76E68(uVar4 - 0x78);
                uStack_98 = ((((U64)(uStack_98)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uStack_80)) & ((U64)0xFFFFFFFF)) << 32));
                if ('\x01' < *(char *)(iVar7 + 4)) {
                  uStack_98 = (ulonglong)((int)*(char *)(iVar7 + 4) << 0x18 | (((U64)(uStack_98) >> 32) & 0xFFFFFFFF));
                  uVar9 = uStack_98;
                }
              }
            }
            else {
              fn_82F739E8(uVar4 - 0x78,0xffffffff8214b5d8,uVar4 - 0x98);
              if (*lbl_832635C0 == '\0') {
                puVar6 = (ulonglong *)fn_82F73988(uVar4 - 0x78,1,uVar4 - 0x98);
                uVar9 = *puVar6;
              }
              else {
                puVar6 = (ulonglong *)fn_82F76E68(uVar4 - 0x80);
                uVar9 = *puVar6;
                fn_82F73228(uVar4 - 0x78,uVar4 - 0x98);
              }
            }
            uStack_98 = uVar9;
            cVar1 = *lbl_832635C0;
            if (cVar1 == '\0') {
              fn_82F72DD0(uVar4 - 0x98,1);
            }
            else {
              lbl_832635C0 = lbl_832635C0 + 1;
              if (cVar1 != '@') goto LAB_82f77964;
            }
          }
          if ((uVar11 & 0xc) == 0xc) {
            if (((~(ulonglong)lbl_832635D0 & 0xffffffff) >> 1 & 1) == 0) {
              iVar7 = fn_82F75CD0(uVar4 - 0x78);
              if ((((((U64)(uStack_98) >> 32) & 0xFFFFFFFF) & 0xff000000) != 0x3000000) && ('\x01' < *(char *)(iVar7 + 4)))
              {
                uStack_98 = CONCAT44((((U64)(uStack_98) >> 0) & 0xFFFFFFFF),
                                     (int)*(char *)(iVar7 + 4) << 0x18 | (((U64)(uStack_98) >> 32) & 0xFFFFFFFF) & 0xffffff)
                ;
              }
            }
            else {
              if (iVar10 != 0) goto LAB_82f77964;
              puVar6 = (ulonglong *)fn_82F75CD0(uVar4 - 0x80);
              uStack_98 = *puVar6;
              fn_82F73228(uVar4 - 0x78,uVar4 - 0x98);
            }
          }
          if ((uVar11 & 2) != 0) {
            puVar6 = (ulonglong *)fn_82F739E8(uVar4 - 0x78,0xffffffff82169ff4,uVar4 - 0x98);
            uStack_98 = *puVar6;
          }
          if ((uVar11 & 1) != 0) {
            puVar6 = (ulonglong *)fn_82F739E8(uVar4 - 0x78,0xffffffff8204e208,uVar4 - 0x98);
            uStack_98 = *puVar6;
          }
          if (iVar10 == 0) {
            if (*(int *)param_2 == 0) {
              param_2 = param_4;
              if (*(int *)param_4 != 0) {
LAB_82f77bcc:
                lVar5 = fn_82F73928(uVar4 - 0x78,0x20,param_2);
                goto LAB_82f77bdc;
              }
            }
            else if (((*param_2 & 0x800000) == 0) && (*(int *)param_4 != 0)) {
              fn_82F73928(uVar4 - 0x88,0x20,param_4);
              fn_82F735D8(uVar4 - 0x78,0x20);
              fn_82F73228(uVar4 - 0x80,param_2);
              lVar5 = uVar4 - 0x80;
LAB_82f77bdc:
              fn_82F73228(uVar4 - 0x98,lVar5);
            }
            else {
              if ((*param_2 & 0x100000) == 0) goto LAB_82f77bcc;
              uStack_98 = *param_2;
            }
          }
          uStack_98 = uStack_98 | 0x800000;
          goto LAB_82f77668;
        }
        if (((~uVar9 & 0xffffffff) >> 1 & 1) != 0) {
          puVar2 = lbl_82169BB4;
          if ((~uVar9 & 1) == 0) goto LAB_82f77824;
          uVar9 = ZEXT48(lbl_82169BB4);
          goto LAB_82f77828;
        }
      }
      lbl_832635C0 = lbl_832635C0 + 1;
      if (*lbl_832635C0 == '$') {
        fn_82F73F48(uVar4 - 0x78,uVar4 + 0x24,uVar4 - 0xa0,param_5);
        uStack_98 = uStack_78;
        if ((((U64)(uStack_78) >> 0) & 0xFFFFFFFF) != 0) goto LAB_82f77668;
        uVar9 = (ulonglong)lbl_832635D0;
      }
      iVar7 = (int)*lbl_832635C0;
      iVar8 = 0x41;
      if (*lbl_832635C0 < 'A') {
        iVar8 = 0x16;
      }
      uVar11 = iVar7 - iVar8;
    } while( true );
  }
  if (iVar10 == 0) {
    if (*(int *)param_2 == 0) {
      param_2 = param_4;
      if (*(int *)param_4 == 0) goto LAB_82f77ca0;
    }
    else if (((*param_2 & 0x800000) == 0) && (*(int *)param_4 != 0)) {
      puVar6 = (ulonglong *)fn_82F73988(uVar4 - 0x80,1,param_4);
      uVar9 = *puVar6;
      fn_82F735D8(uVar4 - 0x78,0x20);
      *param_1 = uVar9;
      fn_82F73228(param_1,param_2);
      return param_1;
    }
    fn_82F73988(param_1,1,param_2);
  }
  else {
LAB_82f77ca0:
    fn_82F728D0(param_1,1);
  }
  return param_1;
}

