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
extern unsigned int lbl_820FDD78;


undefined8
fn_82C948D8(int param_1,uint *param_2,int param_3,longlong param_4,int param_5,int *param_6,
             uint *param_7,short *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  uVar5 = 0;
  psVar8 = (short *)0x0;
  iVar9 = 0;
  if (((param_5 != 0) && (*(int *)(*(int *)(param_1 + 0x55d0) + param_5 * 4) == 0)) &&
     ((*(short *)((int)(((longlong)(param_5 + -1) * (longlong)(int)*(uint *)(param_1 + 0x88) +
                         param_4 & 0xffffffffU) << 1) + *(int *)(param_1 + 0x6f8)) == 0x4000 ||
      ((*(int *)(param_1 + 0x120) == 0 || (*(int *)(param_1 + 0x120) == 4)))))) {
    iVar9 = *(int *)(param_1 + 0x78c);
    psVar8 = (short *)(param_3 + (*(uint *)(param_1 + 0x88) & 0x7ffffff) * -0x20);
  }
  psVar6 = psVar8;
  if ((int)param_4 != 0) {
    if (((*(short *)((int)(((longlong)*(int *)(param_1 + 0x88) * (longlong)param_5 + param_4 &
                           0xffffffffU) << 1) + *(int *)(param_1 + 0x6f8) + -2) == 0x4000) ||
        (*(int *)(param_1 + 0x120) == 0)) || (*(int *)(param_1 + 0x120) == 4)) {
      iVar9 = *(int *)(param_1 + 0x788);
      psVar6 = (short *)(param_3 + -0x20);
      if (psVar6 == (short *)0x0) goto LAB_82c94e44;
      if (psVar8 != (short *)0x0) {
        iVar10 = 0;
        if (((*(short *)((int)(((longlong)(param_5 + -1) * (longlong)*(int *)(param_1 + 0x88) +
                                param_4 & 0xffffffffU) << 1) + *(int *)(param_1 + 0x6f8) + -2) ==
              0x4000) || (*(int *)(param_1 + 0x120) == 0)) || (*(int *)(param_1 + 0x120) == 4)) {
          iVar10 = (int)psVar8[*(int *)(param_1 + 0x784) + -0x10];
        }
        iVar1 = *(int *)(param_1 + 0x19d0);
        iVar2 = *(int *)(&lbl_820FDD78 +
                        (*(uint *)((uint)*(byte *)(param_2 + 1) * 0x14 + iVar1 + 0x10) & 0x3f) * 4);
        iVar10 = *(int *)((uint)*(byte *)(param_2 + *(int *)(param_1 + 0x88) * -6 + -5) * 0x14 +
                          iVar1 + 0x10) * iVar2 * iVar10 + 0x20000 >> 0x12;
        uVar11 = iVar10 - (*(int *)((uint)*(byte *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                    0x14 + iVar1 + 0x10) * (int)psVar8[*(int *)(param_1 + 0x784)] *
                           iVar2 + 0x20000 >> 0x12);
        uVar3 = (int)uVar11 >> 0x1f;
        uVar7 = iVar10 - (*(int *)((uint)*(byte *)(param_2 + -5) * 0x14 + iVar1 + 0x10) *
                          (int)psVar6[*(int *)(param_1 + 0x780)] * iVar2 + 0x20000 >> 0x12);
        uVar4 = (int)uVar7 >> 0x1f;
        if ((int)((uVar7 ^ uVar4) - uVar4) < (int)((uVar11 ^ uVar3) - uVar3)) {
          iVar9 = *(int *)(param_1 + 0x78c);
          psVar6 = psVar8;
        }
      }
    }
  }
  if (psVar6 != (short *)0x0) {
    uVar3 = *param_2;
    uVar5 = 1;
    lVar12 = 3;
    psVar8 = param_8 + 2;
    if (iVar9 == *(int *)(param_1 + 0x788)) {
      iVar10 = (int)psVar6 - (int)param_8;
      *param_8 = (short)(*(int *)(&lbl_820FDD78 +
                                 (*(uint *)((uint)*(byte *)(param_2 + 1) * 0x14 +
                                            *(int *)(param_1 + 0x19d0) + 0x10) & 0x3f) * 4) *
                         *(int *)((uint)*(byte *)(param_2 + -5) * 0x14 + *(int *)(param_1 + 0x19d0)
                                 + 0x10) * (int)*psVar6 + 0x20000 >> 0x12);
      do {
        psVar8[-1] = (short)((int)(*(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                   (uint)*(byte *)(param_2 + -5) * (int)psVar6[1] + 0x20000) >> 0x12
                            );
        *psVar8 = (short)((int)(*(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                (int)*(short *)(iVar10 + (int)psVar8) *
                                (uint)*(byte *)(param_2 + -5) + 0x20000) >> 0x12);
        psVar8[1] = (short)((int)(*(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                  (uint)*(byte *)(param_2 + -5) * (int)psVar6[3] + 0x20000) >> 0x12)
        ;
        psVar8[2] = (short)((int)(*(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                  (uint)*(byte *)(param_2 + -5) * (int)psVar6[4] + 0x20000) >> 0x12)
        ;
        psVar6 = psVar6 + 5;
        psVar8[3] = (short)((int)(*(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                  (uint)*(byte *)(param_2 + -5) * (int)*psVar6 + 0x20000) >> 0x12);
        psVar8 = psVar8 + 5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    else {
      iVar10 = (int)psVar6 - (int)param_8;
      *param_8 = (short)(*(int *)((uint)*(byte *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                  0x14 + *(int *)(param_1 + 0x19d0) + 0x10) *
                         *(int *)(&lbl_820FDD78 +
                                 (*(uint *)((uint)*(byte *)(param_2 + 1) * 0x14 +
                                            *(int *)(param_1 + 0x19d0) + 0x10) & 0x3f) * 4) *
                         (int)*psVar6 + 0x20000 >> 0x12);
      do {
        psVar8[-1] = (short)((int)((uint)*(byte *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                   *(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                   (int)psVar6[1] + 0x20000) >> 0x12);
        *psVar8 = (short)((int)((uint)*(byte *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                *(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                (int)*(short *)(iVar10 + (int)psVar8) + 0x20000) >> 0x12);
        psVar8[1] = (short)((int)((uint)*(byte *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                  *(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                  (int)psVar6[3] + 0x20000) >> 0x12);
        psVar8[2] = (short)((int)((uint)*(byte *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                  *(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                  (int)psVar6[4] + 0x20000) >> 0x12);
        psVar6 = psVar6 + 5;
        psVar8[3] = (short)((int)((uint)*(byte *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                  *(int *)(&lbl_820FDD78 + (*(byte *)(param_2 + 1) & 0x3f) * 4) *
                                  (int)*psVar6 + 0x20000) >> 0x12);
        psVar8 = psVar8 + 5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    param_8[8] = *param_8;
    if ((uVar3 & 0x18) == 0) {
      iVar9 = -1;
    }
  }
LAB_82c94e44:
  *param_7 = (uint)LZCOUNT(*(int *)(param_1 + 0x78c) - iVar9) >> 5;
  *param_6 = iVar9;
  return uVar5;
}

