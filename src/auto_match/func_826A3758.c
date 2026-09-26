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
extern unsigned int *auStack_50;
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_826A1F38();
extern int fn_826A2F80();
extern int fn_826A2FF8();
extern int fn_826A30B8();
extern int fn_826B32D0();
extern int fn_826EBE48();


void fn_826A3758(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar7;
  undefined8 uVar5;
  longlong lVar6;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  ulonglong auStack_50 [10];
  
  cVar7 = fn_82695468(param_1,7);
  if (cVar7 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    iVar8 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar8 = 0;
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
      puVar2 = *(undefined1 **)(param_1 + 4);
      fn_826959C8(puVar2);
      *puVar2 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = fn_826957D0(param_1,0);
      dVar13 = (double)fn_826972E0(uVar5,uVar3);
      uVar1 = (uint)dVar13;
      auStack_50[0] = (ulonglong)(int)uVar1;
      uVar12 = (ulonglong)uVar1;
      if ((int)uVar1 < 0) {
        uVar12 = *(uint *)(iVar8 + 0x38) + uVar12;
        uVar12 = ((uVar12 & 0xffffffff) >> 0x1f) - 1 & uVar12;
      }
      uVar1 = *(uint *)(iVar8 + 0x38);
      if ((int)uVar1 < (int)uVar12) {
        uVar12 = (ulonglong)uVar1;
      }
      uVar11 = uVar1 - uVar12;
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar3 = *(undefined4 *)(param_1 + 0x18);
        uVar5 = fn_826957D0(param_1,1);
        dVar13 = (double)fn_826972E0(uVar5,uVar3);
        uVar1 = (uint)dVar13;
        auStack_50[0] = (ulonglong)(int)uVar1;
        uVar11 = (ulonglong)(uVar1 >> 0x1f) - 1 & (ulonglong)uVar1;
        if ((int)*(uint *)(iVar8 + 0x38) <= (int)uVar11 + (int)uVar12) {
          uVar11 = *(uint *)(iVar8 + 0x38) - uVar12;
        }
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
      lVar6 = fn_826B32D0(*(int *)(param_1 + 0x18),*(undefined4 *)(iVar4 + 0x2a0),iVar4 + 0x10
                                ,0,0xffffffffffffffff);
      if (lVar6 != 0) {
        if (0 < (int)uVar11) {
          lVar10 = (uVar12 & 0x3fffffff) << 2;
          uVar9 = uVar11;
          do {
            if (*(int *)(*(int *)(iVar8 + 0x34) + (int)lVar10) == 0) {
              auStack_50[0] = auStack_50[0] & 0xffffffff;
              fn_826EBE48(lVar6 + 0x34,auStack_50);
            }
            else {
              fn_826A2F80(lVar6);
            }
            uVar9 = uVar9 - 1;
            lVar10 = lVar10 + 4;
          } while (uVar9 != 0);
        }
        fn_82696BC8(*(undefined4 *)(param_1 + 4),lVar6);
        if ((int)uVar11 != 0) {
          fn_826A2FF8(iVar8,uVar12,uVar11);
        }
        if (2 < (int)*(uint *)(param_1 + 0x1c)) {
          fn_826A30B8(iVar8,uVar12,(ulonglong)*(uint *)(param_1 + 0x1c) - 2);
          lVar10 = 2;
          if (2 < *(int *)(param_1 + 0x1c)) {
            do {
              uVar5 = fn_826957D0(param_1,lVar10);
              fn_826A1F38(iVar8,(uVar12 - 2) + lVar10,uVar5);
              lVar10 = lVar10 + 1;
            } while ((int)lVar10 < *(int *)(param_1 + 0x1c));
          }
        }
        fn_826824B0(lVar6);
      }
    }
  }
  return;
}

