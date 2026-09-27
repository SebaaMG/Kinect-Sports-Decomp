extern unsigned int *puRam8322b1e0;
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
extern unsigned int *auStack_30;
extern int fn_82BE5A48();
extern int fn_82BE5B38();
extern int fn_82BE5B70();
extern int fn_82BE6638();
extern int fn_82BE72C0();
extern int fn_82BE7908();
extern int fn_82BE79F0();
extern int fn_82BE7F48();
extern int fn_82BE7C48();
extern int fn_82BE7D10();
extern int fn_82BE7F48();
extern int fn_82BE80F8();
extern int fn_82BE81A8();
extern int fn_82BE82F0();
extern int fn_82BE8E38();
extern int fn_82BE8EA0();
extern int fn_82BEE7D0();
extern int fn_82BF2A50();
extern int fn_82BE81A8();
extern int fn_82F65350();
extern unsigned int lbl_8317523C;
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D8;
extern unsigned int lbl_8322B224;


void fn_82BE8600(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar4;
  undefined8 uVar3;
  short sVar5;
  ulonglong uVar6;
  int aiStack_40 [4];
  undefined1 auStack_30 [16];

  *(undefined4 *)(param_1 + 4) = 0;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    fn_82BE8E38();
    lVar2 = fn_82BE8EA0();
    *(longlong *)(param_1 + 0x40) = lVar2;
  }
  else {
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
    fn_82BE8E38();
    lVar2 = fn_82BE8EA0();
  }
  *(longlong *)(param_1 + 0x38) = lVar2;
  if (lbl_8322B1C8 != 0) {
    if (((0 < *(longlong *)(param_1 + 0x68)) &&
        (lVar2 = (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x40)) + lVar2,
        *(longlong *)(param_1 + 0x60) = lVar2, *(longlong *)(param_1 + 0x68) < lVar2)) &&
       (*(int *)(param_1 + 0x84) == 0)) {
      fn_82BE7C48(param_1);
    }
    if (((lbl_8322B1C8 != 0) && (0 < *(longlong *)(param_1 + 0x78))) &&
       ((lVar2 = (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x40)) +
                 *(longlong *)(param_1 + 0x70), *(longlong *)(param_1 + 0x70) = lVar2,
        *(longlong *)(param_1 + 0x78) < lVar2 && (*(int *)(param_1 + 0x88) == 0)))) {
      if ((lbl_8322B224 != 0) && (*(int *)(lbl_8322B224 + 0x5c) != 0)) {
        fn_82BE7D10(param_1);
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (lbl_8322B224 != 0) {
        *(undefined4 *)(lbl_8322B224 + 0x5c) = 0;
      }
    }
  }
  if ((puRam8322b1e0 != (undefined4 *)0x0) && (lbl_8317523C == 0)) {
    (**(code **)*puRam8322b1e0)(puRam8322b1e0,1);
    puRam8322b1e0 = (undefined4 *)0x0;
  }
  if ((*(int *)(param_1 + 0x80) == 0) || (iVar4 = fn_82BE5B70(), iVar4 != 0)) {
    iVar4 = fn_82BE72C0(lbl_8322B1D8);
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(int *)(param_1 + 0x80) = iVar4;
    if (iVar4 != 0) {
      iVar4 = fn_82BE5A48();
      if (iVar4 == 0) {
        fn_82BE6638(*(undefined4 *)(param_1 + 0x80),7);
        *(undefined4 *)(param_1 + 0x80) = 0;
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x8c) + 4))
                  (*(int **)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x80));
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x9c);
  if (uVar1 == 0) {
    lVar2 = (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x38)) +
            *(longlong *)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x58) = lVar2;
    if (*(int *)(param_1 + 0x80) == 0) {
      return;
    }
    if (0 < lVar2) {
      return;
    }
    fn_82BE82F0(param_1);
    *(undefined8 *)(param_1 + 0x50) = 0;
    return;
  }
  if (uVar1 == 1) {
    *(longlong *)(param_1 + 0x50) =
         (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x40)) +
         *(longlong *)(param_1 + 0x50);
    iVar4 = fn_82BF2A50(param_1 + 0xa0);
    if (iVar4 == 0) {
      if (*(ulonglong *)(param_1 + 0x50) < 0x7531) {
        return;
      }
      fn_82BE7F48(param_1);
      fn_82BE81A8(*(ulonglong *)(param_1 + 0x38) & 0xffffffff);
      uVar6 = fn_82F65350();
      *(ulonglong *)(param_1 + 0x58) = uVar6 + ((uVar6 & 0xffffffff) / 30000) * -30000 & 0xffffffff;
      return;
    }
    aiStack_40[0] = *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x90) = aiStack_40[0];
    *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)(param_1 + 0xbc);
    fn_82BEE7D0(2,aiStack_40,auStack_30,0x10);
LAB_82be8900:
    *(undefined4 *)(param_1 + 0x9c) = 3;
  }
  else {
    if (2 < uVar1) {
      if (uVar1 == 3) {
        if (*(int *)(param_1 + 0x80) == 0) {
          return;
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        (**(code **)(**(int **)(param_1 + 0x8c) + 8))();
        fn_82BE7F48(param_1);
        fn_82BE80F8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x1c),
                      *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x24));
        iVar4 = *(int *)(*(int *)(param_1 + 0x80) + 0x14);
        if (iVar4 == 0x54) {
          return;
        }
        if (iVar4 == 0x1011) {
          return;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        return;
      }
      if (4 < uVar1) {
        return;
      }
      if (*(int *)(param_1 + 0x80) == 0) {
        return;
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
      fn_82BE7F48(param_1);
      fn_82BE81A8(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar6 = (*(longlong *)(param_1 + 0x48) - *(longlong *)(param_1 + 0x40)) +
              *(longlong *)(param_1 + 0x38);
      *(ulonglong *)(param_1 + 0x48) = uVar6;
      if (uVar6 < 0x1d4c1) {
        return;
      }
    }
    else {
      uVar3 = fn_82BE5B38();
      iVar4 = fn_82BE7908(uVar3,aiStack_40);
      if (iVar4 == 0) {
        return;
      }
      if (((*(int *)(param_1 + 0x90) == aiStack_40[0]) &&
          (sVar5 = fn_82BE79F0(*(undefined4 *)(param_1 + 0x80)),
          *(short *)(param_1 + 0x94) == sVar5)) &&
         (((*(uint *)(*(int *)(param_1 + 0x80) + 0x14) & 0xf000) != 0x1000 ||
          (*(int *)(param_1 + 0xc0) != 0)))) goto LAB_82be8900;
    }
    fn_82BE7F48(param_1);
  }
  return;
}
