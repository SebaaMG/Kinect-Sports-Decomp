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
extern unsigned int fStack_94;
extern int fn_82AB15D0();
extern int fn_82B9CA30();
extern int fn_82B9D1D8();
extern int fn_82B9D5A8();
extern int fn_82B9E420();
extern int fn_82BA0C40();
extern int fn_82BAFE48();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC34D8();
extern int fn_82BC4A68();
extern int fn_82BC5538();
extern int fn_82BC6820();
extern int fn_82BC6E18();
extern unsigned int iStack_98;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820E4F24;
extern unsigned int lbl_820E4F48;
extern unsigned int uStack_9c;


void fn_82BC8C78(int param_1,undefined8 param_2,uint *param_3,undefined4 param_4,
                  undefined8 param_5,char param_6,uint *param_7)

{
  undefined8 uVar1;
  int iVar3;
  undefined8 uVar2;
  char cVar5;
  int iVar4;
  byte bVar6;
  undefined4 uVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  byte abStack_a4 [4];
  byte abStack_a0 [4];
  undefined4 uStack_9c;
  int iStack_98;
  float fStack_94;
  int aiStack_90 [36];
  
  sVar8 = (short)*param_3;
  if (*(int *)((*param_3 >> 0xd & 0x1f8) + *(int *)(param_1 + 0x5c) + 4) == 0x19) {
    iVar10 = *(int *)(param_1 + 0x838);
    if (sVar8 <= iVar10) {
      iVar10 = (int)sVar8;
    }
    *(int *)(param_1 + 0x838) = iVar10;
    iVar10 = *(int *)(param_1 + 0x83c);
    if (iVar10 <= sVar8) {
      iVar10 = sVar8 + 1;
    }
    *(int *)(param_1 + 0x83c) = iVar10;
  }
  uVar1 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac));
  if (param_6 == '\0') {
    uVar9 = (undefined2)*param_7;
    uVar7 = *(undefined4 *)((*param_7 >> 0xd & 0x1f8) + *(int *)(param_1 + 0x5c) + 4);
  }
  else {
    uVar9 = 0;
    uVar7 = 0x1e;
  }
  iVar10 = fn_82BAFE48(*(undefined4 *)(param_1 + 0xac),uVar7,uVar9);
  iVar3 = fn_82B9D5A8(*(undefined4 *)(param_1 + 0x10),param_2,&iStack_98,
                            *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x568),0xffffffff82b7c800,
                            *(int *)(param_1 + 0xc));
  if (iVar3 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7a58,0xffffffff820e74a8,0x435);
  }
  if ((int)param_2 != -1) {
    iVar3 = *(int *)(param_1 + 0xc);
    uVar2 = (**(code **)(**(int **)(iVar3 + 0x5d0) + 0x1c))();
    iVar3 = fn_82B9CA30(*(undefined4 *)(param_1 + 0x10),param_2,uVar2,0xffffffff82b7c800,iVar3
                             );
    if (iVar3 == 1) {
      fn_82B9E420(*(undefined4 *)(param_1 + 0x10),param_2,&fStack_94,0xffffffff82b7c800,
                      *(undefined4 *)(param_1 + 0xc));
      iVar3 = fn_82BC24F0(0x13,*(undefined4 *)(param_1 + 0xc));
      iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
      *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = iVar4;
      *(int *)(iVar3 + 0x38) = iVar4;
      *(undefined4 *)(iVar3 + 0x50) = 0;
      fn_82BC2958(iVar3,1,iVar10);
      dVar13 = (double)(lbl_82002AE0 / fStack_94);
      fn_82BC34D8(dVar13,dVar13,dVar13,dVar13,iVar3,param_1,2);
      fn_82BA0C40(param_1,iVar3);
      fn_82BC5538(param_5,iVar3);
      cVar5 = fn_82BC2580(iVar3);
      if (cVar5 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded0c,0xffffffff820e74a8,0x44e);
      }
      iVar10 = fn_82BC24F0(0x15,*(undefined4 *)(param_1 + 0xc));
      *(int *)(iVar10 + 0x38) = iVar4;
      *(undefined4 *)(iVar10 + 0x50) = 0;
      *(int *)(iVar10 + 0x3c) = iVar4;
      *(undefined4 *)(iVar10 + 0x54) = 0;
      fn_82BA0C40(param_1,iVar10);
      fn_82BC5538(param_5,iVar10);
      cVar5 = fn_82BC2580(iVar10);
      if (cVar5 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7a44,0xffffffff820e74a8,0x459);
      }
      iVar10 = *(int *)(iVar10 + 0x1c);
    }
  }
  lVar11 = 0;
  if (0 < iStack_98) {
    do {
      iVar3 = fn_82BC4A68(0x68,*(undefined4 *)(param_1 + 0xc),param_2,lVar11);
      fn_82BC2958(iVar3,0,uVar1);
      fn_82BC2958(iVar3,1,iVar10);
      if (param_6 == '\0') {
        uStack_9c = lbl_820E4F24;
        fn_82BC6E18(param_1,&uStack_9c,param_7,1,iVar3);
      }
      else {
        *(undefined4 *)(iVar3 + 0x84) = lbl_820E4F48;
      }
      iVar4 = *(int *)(param_1 + 0xc);
      iVar4 = fn_82B9D1D8(*(undefined4 *)(iVar4 + 0x600),param_2,lVar11,aiStack_90,
                              *(undefined4 *)(iVar4 + 0x568),0xffffffff82b7c800,iVar4);
      if (iVar4 != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e7a58,0xffffffff820e74a8,0x47a);
      }
      iVar4 = 0;
      uStack_9c = param_4;
      do {
        bVar6 = fn_82BC6820(*(undefined1 *)(iVar4 + aiStack_90[0]));
        abStack_a0[iVar4] = bVar6;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      iVar4 = 0;
      lVar12 = 4;
      do {
        bVar6 = *(byte *)((int)&uStack_9c + iVar4);
        if ((3 < bVar6) && (bVar6 < 8)) {
          bVar6 = abStack_a4[bVar6];
          if ((bVar6 < 4) || (7 < bVar6)) {
            bVar6 = abStack_a0[iVar4];
          }
          *(byte *)((int)&uStack_9c + iVar4) = bVar6;
        }
        iVar4 = iVar4 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      *(undefined4 *)(iVar3 + 0x80) = uStack_9c;
      fn_82BA0C40(param_1,iVar3);
      fn_82BC5538(param_5,iVar3);
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < iStack_98);
  }
  *(undefined1 *)(iVar10 + 0x1d) = 1;
  return;
}

