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
extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_826A2F80();
extern int fn_826B32D0();
extern int fn_826EBE48();


void fn_826A35B0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar7;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  double dVar13;
  ulonglong auStack_40 [8];
  
  cVar7 = fn_82695468(param_1,7);
  if (cVar7 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    iVar8 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar8 = 0;
    }
    uVar2 = *(uint *)(iVar8 + 0x38);
    uVar11 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar3 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = fn_826957D0(param_1,0);
      dVar13 = (double)fn_826972E0(uVar5,uVar3);
      uVar1 = (uint)dVar13;
      auStack_40[0] = (ulonglong)(int)uVar1;
      uVar11 = (ulonglong)uVar1;
      if ((int)uVar1 < 0) {
        uVar11 = *(uint *)(iVar8 + 0x38) + uVar11;
        uVar11 = ((uVar11 & 0xffffffff) >> 0x1f) - 1 & uVar11;
      }
      if ((int)*(uint *)(iVar8 + 0x38) < (int)uVar11) {
        uVar11 = (ulonglong)*(uint *)(iVar8 + 0x38);
      }
    }
    uVar10 = (ulonglong)uVar2;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar3 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = fn_826957D0(param_1,1);
      dVar13 = (double)fn_826972E0(uVar5,uVar3);
      uVar2 = (uint)dVar13;
      auStack_40[0] = (ulonglong)(int)uVar2;
      uVar10 = (ulonglong)uVar2;
      if ((int)uVar2 < 0) {
        uVar10 = *(uint *)(iVar8 + 0x38) + uVar10;
        uVar10 = ((uVar10 & 0xffffffff) >> 0x1f) - 1 & uVar10;
      }
      if ((int)*(uint *)(iVar8 + 0x38) < (int)uVar10) {
        uVar10 = (ulonglong)*(uint *)(iVar8 + 0x38);
      }
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
    uVar6 = fn_826B32D0(*(int *)(param_1 + 0x18),*(undefined4 *)(iVar4 + 0x2a0),iVar4 + 0x10,0
                              ,0xffffffffffffffff);
    if ((uVar6 != 0) && ((int)uVar11 < (int)uVar10)) {
      lVar9 = (uVar11 & 0x3fffffff) << 2;
      lVar12 = uVar10 - uVar11;
      do {
        if (*(int *)((int)lVar9 + *(int *)(iVar8 + 0x34)) == 0) {
          auStack_40[0] = auStack_40[0] & 0xffffffff;
          fn_826EBE48(uVar6 + 0x34,auStack_40);
        }
        else {
          fn_826A2F80(uVar6);
        }
        lVar12 = lVar12 + -1;
        lVar9 = lVar9 + 4;
      } while (lVar12 != 0);
    }
    fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar6);
    if ((uVar6 & 0xffffffff) != 0) {
      fn_826824B0(uVar6);
    }
  }
  return;
}

