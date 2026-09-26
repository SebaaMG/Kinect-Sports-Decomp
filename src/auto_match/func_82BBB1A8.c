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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_70;
extern int fn_82AB15D0();
extern int fn_82B7BEB0();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BA0450();
extern int fn_82BA04B8();
extern int fn_82BA05E8();
extern int fn_82BB9EC0();
extern int fn_82BB9F48();
extern int fn_82BBA368();
extern int fn_82BBA760();
extern int fn_82BBFFC8();
extern int fn_82BC0088();
extern unsigned int iStack_6c;
extern unsigned int lbl_820E0814;
extern unsigned int lbl_820E082C;
extern unsigned int uStack_64;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82BBB1A8(int param_1)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar10;
  ulonglong uVar9;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int aiStack_78 [2];
  undefined1 auStack_70 [4];
  int iStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  
  fn_82BA03B8(auStack_70,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  fn_82BA02A8(*(undefined4 *)(param_1 + 0xc),0xffffffff820e0a1c);
  iVar12 = 0;
  for (uVar5 = 1; uVar5 <= *(uint *)(*(int *)(param_1 + 0x814) + 4); uVar5 = uVar5 + 1) {
    iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x814) + 8) + iVar12);
    if ((*(uint *)(iVar6 + 0xe4) & 1) != 0) {
      iVar7 = *(int *)(iVar6 + 0x80);
      uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)((uint)iVar7 >> 0x10))) & ((U64)0xFF)) << 8));
      uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 16))) | ((((U64)((byte)((uint)iVar7 >> 8))) & ((U64)0xFF)) << 16));
      uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 24))) | ((((U64)((byte)iVar7)) & ((U64)0xFF)) << 24));
      uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)((uint)iVar7 >> 0x18))) & ((U64)0xFF)) << 0));
      uStack_80 = CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1) -
                                             (((((U64)(uStack_7c) >> 0) & 0xFF) - 2) +
                                             ((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1 == 0)),
                                             (char)((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1) -
                                             (((((U64)(uStack_7c) >> 8) & 0xFF) - 2) +
                                             ((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1 == 0))),
                                    (char)((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1) -
                                    (((((U64)(uStack_7c) >> 16) & 0xFF) - 2) + ((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1 == 0)))
                           ,(char)((ulonglong)(byte)uStack_7c - 1) -
                            (((byte)uStack_7c - 2) + ((ulonglong)(byte)uStack_7c - 1 == 0)));
      *(uint *)(iVar6 + 0xc) = uStack_80;
      uStack_7c = iVar7;
      piVar2 = (int *)fn_82BC0088(auStack_70,iStack_6c);
      *piVar2 = iVar6;
    }
    iVar12 = iVar12 + 4;
  }
  while (iStack_6c != 0) {
    iVar12 = *piStack_68;
    fn_82BBFFC8(auStack_70,0);
    fn_82BBA760(iVar12);
    if ((*(uint *)(iVar12 + 0xe4) >> 9 & 1) == 0) {
      iVar6 = *(int *)(iVar12 + 0x14);
    }
    else {
      iVar6 = *(int *)(iVar12 + 0x14) + -1;
    }
    lVar11 = 1;
    if (0 < iVar6) {
      piVar2 = (int *)(iVar12 + 0xec);
      do {
        iVar7 = *piVar2;
        uVar3 = fn_82BBA368(iVar12,lVar11,param_1);
        uVar5 = *(uint *)(iVar7 + 0xc);
        if ((uVar5 | uVar3) != uVar5) {
          *(uint *)(iVar7 + 0xc) = uVar5 | uVar3;
          piVar4 = (int *)fn_82BC0088(auStack_70,iStack_6c);
          *piVar4 = iVar7;
        }
        lVar11 = lVar11 + 1;
        piVar2 = piVar2 + 1;
      } while ((int)lVar11 <= iVar6);
    }
    if ((*(uint *)(iVar12 + 0xe4) >> 9 & 1) != 0) {
      iVar7 = fn_82BA0450(iVar12);
      iVar6 = *(int *)(iVar12 + 0x80);
      uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)((uint)iVar6 >> 0x10))) & ((U64)0xFF)) << 8));
      uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 16))) | ((((U64)((byte)((uint)iVar6 >> 8))) & ((U64)0xFF)) << 16));
      uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 24))) | ((((U64)((byte)iVar6)) & ((U64)0xFF)) << 24));
      uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)((uint)iVar6 >> 0x18))) & ((U64)0xFF)) << 0));
      uStack_80 = CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1) -
                                             (((((U64)(uStack_7c) >> 0) & 0xFF) - 2) +
                                             ((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1 == 0)),
                                             (char)((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1) -
                                             (((((U64)(uStack_7c) >> 8) & 0xFF) - 2) +
                                             ((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1 == 0))),
                                    (char)((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1) -
                                    (((((U64)(uStack_7c) >> 16) & 0xFF) - 2) + ((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1 == 0)))
                           ,(char)((ulonglong)(byte)uStack_7c - 1) -
                            (((byte)uStack_7c - 2) + ((ulonglong)(byte)uStack_7c - 1 == 0)));
      uVar9 = (ulonglong)uStack_80;
      uStack_7c = iVar6;
      uVar5 = fn_82BB9EC0(uVar9,*(undefined4 *)(iVar12 + 0xc));
      uVar3 = fn_82BB9F48(uVar9);
      if (uVar5 != uVar3) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e09d8,0xffffffff820e0950,0x34b);
      }
      uVar3 = *(uint *)(iVar7 + 0xc);
      if ((uVar3 | uVar5) != uVar3) {
        *(uint *)(iVar7 + 0xc) = uVar3 | uVar5;
        piVar2 = (int *)fn_82BC0088(auStack_70,iStack_6c);
        *piVar2 = iVar7;
      }
    }
  }
  for (iVar12 = *(int *)(param_1 + 0x88); *(int *)(iVar12 + 8) != 0; iVar12 = *(int *)(iVar12 + 8))
  {
    for (iVar6 = *(int *)(iVar12 + 0x1c); *(int *)(iVar6 + 8) != 0; iVar6 = *(int *)(iVar6 + 8)) {
      if ((*(uint *)(iVar6 + 0xe4) & 1) != 0) {
        uStack_80 = *(uint *)(iVar6 + 0xc);
        uStack_7c = *(int *)(iVar6 + 0x80);
        iVar7 = 0;
        lVar11 = 4;
        do {
          if (*(char *)((int)&uStack_80 + iVar7) == '\x01') {
            uVar10 = *(undefined1 *)((int)aiStack_78 + iVar7 + -4);
          }
          else {
            uVar10 = 1;
          }
          *(undefined1 *)((int)aiStack_78 + iVar7 + -4) = uVar10;
          iVar7 = iVar7 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        *(int *)(iVar6 + 0x80) = uStack_7c;
      }
    }
  }
  iVar12 = *(int *)(param_1 + 0x88);
  iVar6 = *(int *)(iVar12 + 8);
  while (iVar6 != 0) {
    for (piVar2 = *(int **)(iVar12 + 0x1c); piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      if ((piVar2[0x39] & 1U) != 0) {
        if (piVar2[0x20] != lbl_820E082C) {
          lVar11 = 1;
          iVar6 = (**(code **)(*piVar2 + 4))(piVar2);
          if (0 < iVar6) {
            piVar4 = piVar2 + 0x21;
            do {
              iVar6 = piVar4[0x1a];
              aiStack_78[0] = *piVar4;
              uVar5 = 0;
              iVar8 = 0;
              iVar7 = *(int *)(iVar6 + 0x80);
              lVar13 = 4;
              uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 16))) | ((((U64)((byte)((uint)iVar7 >> 8))) & ((U64)0xFF)) << 16));
              uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)((uint)iVar7 >> 0x10))) & ((U64)0xFF)) << 8));
              uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)((uint)iVar7 >> 0x18))) & ((U64)0xFF)) << 0));
              uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 24))) | ((((U64)((byte)iVar7)) & ((U64)0xFF)) << 24));
              uStack_80 = CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1) -
                                                     (((((U64)(uStack_7c) >> 0) & 0xFF) - 2) +
                                                     ((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1 == 0)),
                                                     (char)((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1) -
                                                     (((((U64)(uStack_7c) >> 8) & 0xFF) - 2) +
                                                     ((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1 == 0))),
                                            (char)((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1) -
                                            (((((U64)(uStack_7c) >> 16) & 0xFF) - 2) +
                                            ((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1 == 0))),
                                   (char)((ulonglong)(byte)uStack_7c - 1) -
                                   (((byte)uStack_7c - 2) + ((ulonglong)(byte)uStack_7c - 1 == 0)));
              do {
                pbVar1 = (byte *)((int)aiStack_78 + iVar8);
                iVar8 = iVar8 + 1;
                uVar5 = *(uint *)(&lbl_820E0814 + (uint)*pbVar1 * 4) | uVar5;
                lVar13 = lVar13 + -1;
                uStack_7c = iVar7;
              } while (lVar13 != 0);
              while ((uStack_80 == 0 || (uVar5 == 0))) {
                iVar6 = fn_82BA0450();
                iVar7 = *(int *)(iVar6 + 0x80);
                uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 16))) | ((((U64)((byte)((uint)iVar7 >> 8))) & ((U64)0xFF)) << 16));
                uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)((uint)iVar7 >> 0x18))) & ((U64)0xFF)) << 0));
                uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)((uint)iVar7 >> 0x10))) & ((U64)0xFF)) << 8));
                uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 24))) | ((((U64)((byte)iVar7)) & ((U64)0xFF)) << 24));
                uStack_80 = CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1) -
                                                       (((((U64)(uStack_7c) >> 0) & 0xFF) - 2) +
                                                       ((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1 == 0)),
                                                       (char)((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1) -
                                                       (((((U64)(uStack_7c) >> 8) & 0xFF) - 2) +
                                                       ((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1 == 0))),
                                              (char)((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1) -
                                              (((((U64)(uStack_7c) >> 16) & 0xFF) - 2) +
                                              ((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1 == 0))),
                                     (char)((ulonglong)(byte)uStack_7c - 1) -
                                     (((byte)uStack_7c - 2) + ((ulonglong)(byte)uStack_7c - 1 == 0))
                                    );
                uStack_7c = iVar7;
              }
              fn_82BA05E8(piVar2,lVar11,iVar6);
              lVar11 = lVar11 + 1;
              piVar4 = piVar4 + 1;
              iVar6 = (**(code **)(*piVar2 + 4))(piVar2);
            } while ((int)lVar11 <= iVar6);
          }
          if (((uint)piVar2[0x39] >> 9 & 1) != 0) {
            fn_82BA0450(piVar2);
            iVar6 = piVar2[0x20];
            uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 8))) | ((((U64)((byte)((uint)iVar6 >> 0x10))) & ((U64)0xFF)) << 8));
            uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)((uint)iVar6 >> 0x18))) & ((U64)0xFF)) << 0));
            uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 24))) | ((((U64)((byte)iVar6)) & ((U64)0xFF)) << 24));
            uStack_7c = ((((U64)(uStack_7c)) & (~(((U64)0xFF) << 16))) | ((((U64)((byte)((uint)iVar6 >> 8))) & ((U64)0xFF)) << 16));
            uStack_80 = CONCAT31(CONCAT21(CONCAT11((char)((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1) -
                                                   (((((U64)(uStack_7c) >> 0) & 0xFF) - 2) +
                                                   ((ulonglong)(((U64)(uStack_7c) >> 0) & 0xFF) - 1 == 0)),
                                                   (char)((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1) -
                                                   (((((U64)(uStack_7c) >> 8) & 0xFF) - 2) +
                                                   ((ulonglong)(((U64)(uStack_7c) >> 8) & 0xFF) - 1 == 0))),
                                          (char)((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1) -
                                          (((((U64)(uStack_7c) >> 16) & 0xFF) - 2) +
                                          ((ulonglong)(((U64)(uStack_7c) >> 16) & 0xFF) - 1 == 0))),
                                 (char)((ulonglong)(byte)uStack_7c - 1) -
                                 (((byte)uStack_7c - 2) + ((ulonglong)(byte)uStack_7c - 1 == 0)));
            uVar9 = (ulonglong)uStack_80;
            uStack_7c = iVar6;
            iVar6 = fn_82BB9EC0(uVar9,piVar2[3]);
            iVar7 = fn_82BB9F48(uVar9);
            if (iVar6 != iVar7) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e09d8,0xffffffff820e0950,0x381);
            }
            if (iVar6 == 0) {
              fn_82BA04B8(piVar2);
            }
          }
        }
        piVar2[3] = 0;
      }
    }
    iVar12 = *(int *)(iVar12 + 8);
    iVar6 = *(int *)(iVar12 + 8);
  }
  fn_82B7BEB0(uStack_64,piStack_68);
  return;
}

