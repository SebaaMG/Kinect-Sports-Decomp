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
extern int fn_82AB15D0();
extern int fn_82BAAC50();
extern int fn_82BD09F0();
extern unsigned int lbl_820E3014;
extern unsigned int lbl_820E30A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BAD058(int param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar4;
  ulonglong uVar3;
  uint uVar5;
  longlong lVar6;
  
  piVar4 = (int *)((((int)param_3 - *(int *)(param_2 + 4)) / 0xc) * 8 + *(int *)(param_2 + 0x34));
  if (*piVar4 == 0) {
    *piVar4 = param_1;
  }
  else {
    piVar4[1] = param_1;
  }
  fn_82BAAC50(param_1,param_3,1,1);
  fn_82BAAC50(param_1,param_3,1,2);
  uVar5 = 0;
  lVar6 = 4;
  param_3[2] = (lbl_820E3014 & 0x1f) << 0x18 | param_3[2] & 0xe0ffffff;
  *param_3 = *param_3 & 0xfff0ffff;
  do {
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    *param_3 = *param_3 & 0xfff0ffff | ((1 << uVar1) << 0x10 | *param_3) & 0xf0000;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined1 *)((int)param_3 + 5) = 0;
  *(undefined1 *)((int)param_3 + 6) = 0;
  if ((*(int *)(param_1 + 0xec) != 0) &&
     (iVar2 = fn_82BD09F0(*(undefined4 *)(param_4 + 0xab0)), -1 < iVar2)) {
    uVar5 = *(uint *)(param_1 + 0x84);
    uVar3 = ((ulonglong)uVar5 & 0xff) << 0x18 |
            ((ulonglong)uVar5 & 0xff00) << 8 |
            (ulonglong)(uVar5 >> 8) & 0xff00 | (ulonglong)(uVar5 >> 0x18);
    *(byte *)((int)param_3 + 5) =
         (byte)((uVar3 + 0x1000000 & 0xffffffff) >> 0x12) & 0xc0 |
         (byte)((uVar3 - 0x100 & 0xffffffff) >> 6) & 0xc |
         (byte)((uVar3 - 0x20000 & 0xffffffff) >> 0xc) & 0x30 | (byte)(uVar5 >> 0x18) & 3;
    *(char *)((int)param_3 + 6) = (char)*(undefined2 *)(param_3 + 1);
  }
  uVar5 = *(uint *)(param_1 + 0x80);
  *param_3 = (uint)((~(((((ulonglong)uVar5 & 0xff) << 0x11 | ((ulonglong)uVar5 & 0x100) << 8) >> 7 |
                       (ulonglong)(uVar5 >> 8) & 0x100) >> 7 | (ulonglong)(uVar5 >> 0x18) & 1) &
                    0xffffffff) << 0x10) & 0xf0000 | *param_3 & 0xfff0ffff;
  iVar2 = fn_82BD09F0(*(undefined4 *)(param_4 + 0xab0),param_1);
  *param_3 = *param_3 & 0xffffffc0 | iVar2 + 0x10U & 0x3f;
  fn_82BAAC50(param_1,param_3,2,3);
  *param_3 = lbl_820E30A8 << 0x1a | *param_3 & 0x3ffffff;
  iVar2 = fn_82BD09F0(*(undefined4 *)(param_4 + 0xab0),*(undefined4 *)(param_1 + 0xf0));
  if (-1 < iVar2) {
    uVar5 = *(uint *)(param_1 + 0x88);
    uVar3 = ((ulonglong)uVar5 & 0xff) << 0x18 |
            ((ulonglong)uVar5 & 0xff00) << 8 |
            (ulonglong)(uVar5 >> 8) & 0xff00 | (ulonglong)(uVar5 >> 0x18);
    *(byte *)((int)param_3 + 7) =
         (byte)((uVar3 + 0x1000000 & 0xffffffff) >> 0x12) & 0xc0 |
         (byte)((uVar3 - 0x100 & 0xffffffff) >> 6) & 0xc |
         (byte)((uVar3 - 0x20000 & 0xffffffff) >> 0xc) & 0x30 | (byte)(uVar5 >> 0x18) & 3;
  }
  *param_3 = *param_3 & 0xfd0fc0ff | 0x2001000;
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    if ((param_3[1] & 0x18000000) != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df8f4,0xffffffff820df268,0xa96);
    }
    uVar5 = param_3[1] & 0xe7ffffff;
  }
  else if (iVar2 == 2) {
    uVar5 = param_3[1] >> 0x1b & 3;
    if ((uVar5 != 0) && (uVar5 != 2)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df908,0xffffffff820df268,0xa9a);
    }
    uVar5 = param_3[1] & 0xe7ffffff | 0x10000000;
  }
  else {
    if (iVar2 != 3) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820df268,0xaa2);
      goto LAB_82bad394;
    }
    uVar5 = param_3[1] >> 0x1b & 3;
    if ((uVar5 != 0) && (uVar5 != 3)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df930,0xffffffff820df268,0xa9e);
    }
    uVar5 = param_3[1] | 0x18000000;
  }
  param_3[1] = uVar5;
LAB_82bad394:
  *param_3 = *param_3 | 0x8000;
  return;
}

