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
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern int fn_82683270();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_82697210();
extern int fn_826972E0();
extern int fn_826ABE30();
extern int fn_826AE1D8();
extern int fn_826AF618();
extern int fn_826F9000();
extern unsigned int iStack_50;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4c;


void fn_826AFD68(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined4 *apuStack_60 [4];
  int iStack_50;
  undefined1 uStack_4c;
  char cStack_4b;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  uVar1 = *param_1;
  iStack_50 = 0;
  uStack_4c = 0;
  cStack_4b = 0;
  fStack_44 = lbl_821AAD20;
  fStack_48 = lbl_821AAD20;
  fStack_3c = lbl_821AAD20;
  fStack_40 = lbl_821AAD20;
  fStack_34 = lbl_821AAD20;
  fStack_38 = lbl_821AAD20;
  uVar2 = (ulonglong)*(uint *)(uVar1 + 8) - 0x10;
  if ((ulonglong)*(uint *)(uVar1 + 8) <= (ulonglong)*(uint *)(uVar1 + 0xc)) {
    uVar2 = (ulonglong)*(uint *)(uVar1 + 0x14);
  }
  uVar3 = fn_82695608(uVar2);
  iStack_50 = fn_826AE1D8(*param_1,*(undefined4 *)(*param_1 + 8));
  if ((iStack_50 == 0) && ((*(byte *)((int)param_1 + 0x36) & 0x80) != 0)) {
    fn_82697210(apuStack_60,*(undefined4 *)(*param_1 + 8),*param_1);
    fn_826ABE30(param_1 + 9,0xffffffff820077b8,*apuStack_60[0]);
    uVar1 = apuStack_60[0][2];
    apuStack_60[0][2] = (int)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      fn_826944C8(apuStack_60[0]);
    }
  }
  uVar1 = *param_1;
  lVar4 = 0;
  uVar2 = (longlong)(*(int *)(uVar1 + 8) - *(int *)(uVar1 + 0xc) >> 4) +
          ((ulonglong)*(uint *)(uVar1 + 0x1c) - 1 & 0x7ffffff) * 0x20;
  if (1 < (uVar2 & 0xffffffff)) {
    uVar2 = uVar2 - 2;
    lVar4 = (ulonglong)
            *(uint *)(((uint)((uVar2 & 0xffffffff) >> 3) & 0x1ffffffc) + *(int *)(uVar1 + 0x18)) +
            (uVar2 & 0x1f) * 0x10;
  }
  cStack_4b = fn_82695608(lVar4);
  if (cStack_4b != '\0') {
    uVar1 = *param_1;
    lVar4 = 0;
    uVar2 = (longlong)(*(int *)(uVar1 + 8) - *(int *)(uVar1 + 0xc) >> 4) +
            ((ulonglong)*(uint *)(uVar1 + 0x1c) - 1 & 0x7ffffff) * 0x20;
    if (5 < (uVar2 & 0xffffffff)) {
      uVar2 = uVar2 - 6;
      lVar4 = (ulonglong)
              *(uint *)(((uint)((uVar2 & 0xffffffff) >> 3) & 0x1ffffffc) + *(int *)(uVar1 + 0x18)) +
              (uVar2 & 0x1f) * 0x10;
    }
    dVar6 = (double)fn_826972E0(lVar4);
    uVar1 = *param_1;
    lVar4 = 0;
    dVar7 = (double)lbl_8200571C;
    fStack_48 = (float)((double)(float)dVar6 * dVar7);
    uVar2 = (longlong)(*(int *)(uVar1 + 8) - *(int *)(uVar1 + 0xc) >> 4) +
            ((ulonglong)*(uint *)(uVar1 + 0x1c) - 1 & 0x7ffffff) * 0x20;
    if (4 < (uVar2 & 0xffffffff)) {
      uVar2 = uVar2 - 5;
      lVar4 = (ulonglong)
              *(uint *)(((uint)((uVar2 & 0xffffffff) >> 3) & 0x1ffffffc) + *(int *)(uVar1 + 0x18)) +
              (uVar2 & 0x1f) * 0x10;
    }
    dVar6 = (double)fn_826972E0(lVar4);
    uVar1 = *param_1;
    lVar4 = 0;
    fStack_44 = (float)((double)(float)dVar6 * dVar7);
    uVar2 = (longlong)(*(int *)(uVar1 + 8) - *(int *)(uVar1 + 0xc) >> 4) +
            ((ulonglong)*(uint *)(uVar1 + 0x1c) - 1 & 0x7ffffff) * 0x20;
    if (3 < (uVar2 & 0xffffffff)) {
      uVar2 = uVar2 - 4;
      lVar4 = (ulonglong)*(uint *)(((uint)uVar2 >> 3 & 0x1ffffffc) + *(int *)(uVar1 + 0x18)) +
              (uVar2 & 0x1f) * 0x10;
    }
    dVar6 = (double)fn_826972E0(lVar4);
    uVar1 = *param_1;
    lVar4 = 0;
    fStack_40 = (float)((double)(float)dVar6 * dVar7);
    uVar2 = (longlong)(*(int *)(uVar1 + 8) - *(int *)(uVar1 + 0xc) >> 4) +
            ((ulonglong)*(uint *)(uVar1 + 0x1c) - 1 & 0x7ffffff) * 0x20;
    if (2 < (uVar2 & 0xffffffff)) {
      uVar2 = uVar2 - 3;
      lVar4 = (ulonglong)
              *(uint *)(((uint)((uVar2 & 0xffffffff) >> 3) & 0x1ffffffc) + *(int *)(uVar1 + 0x18)) +
              (uVar2 & 0x1f) * 0x10;
    }
    dVar6 = (double)fn_826972E0(lVar4);
    fStack_3c = (float)((double)(float)dVar6 * dVar7);
    fn_82683270((ulonglong)*param_1 + 8,4);
  }
  if (iStack_50 != 0) {
    fn_826F9000(&iStack_50,uVar3);
    iVar5 = (**(code **)(**(int **)(*param_1 + 0x74) + 0x40))();
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0xa08) = iStack_50;
      *(undefined1 *)(iVar5 + 0xa0c) = uStack_4c;
      *(char *)(iVar5 + 0xa0d) = cStack_4b;
      *(float *)(iVar5 + 0xa14) = fStack_44;
      *(float *)(iVar5 + 0xa10) = fStack_48;
      *(float *)(iVar5 + 0xa18) = fStack_40;
      *(float *)(iVar5 + 0xa1c) = fStack_3c;
      *(float *)(iVar5 + 0xa20) = fStack_38;
      *(float *)(iVar5 + 0xa24) = fStack_34;
    }
  }
  fn_826AF618((ulonglong)*param_1 + 8);
  return;
}

