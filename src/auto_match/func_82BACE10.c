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
extern int fn_82BAB1C8();
extern unsigned int lbl_820E3014;
extern unsigned int lbl_820E30A8;
extern unsigned int lbl_8316FF50;


/* WARNING: Removing unreachable block (ram,0x82bacf44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BACE10(int *param_1,int param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar5;
  ulonglong uVar4;
  
  piVar5 = (int *)((((int)param_3 - *(int *)(param_2 + 4)) / 0xc) * 8 + *(int *)(param_2 + 0x34));
  if (*piVar5 == 0) {
    *piVar5 = (int)param_1;
  }
  else {
    piVar5[1] = (int)param_1;
  }
  if ((*(uint *)(&lbl_8316FF50 + param_1[6] * 0x34) >> 2 & 1) == 0) {
    param_3[2] = (lbl_820E3014 & 0x1f) << 0x18 | param_3[2] & 0xe0ffffff;
    iVar3 = (**(code **)(*param_1 + 4))(param_1);
    if (0 < iVar3) {
      fn_82BAAC50(param_1,param_3,1,1);
      fn_82BAAC50(param_1,param_3,1,2);
      uVar2 = param_1[0x21];
      uVar4 = ((ulonglong)uVar2 & 0xff) << 0x18 |
              ((ulonglong)uVar2 & 0xff00) << 8 |
              (ulonglong)(uVar2 >> 8) & 0xff00 | (ulonglong)(uVar2 >> 0x18);
      *(byte *)((int)param_3 + 5) =
           (byte)((uVar4 + 0x1000000 & 0xffffffff) >> 0x12) & 0xc0 |
           (byte)((uVar4 - 0x100 & 0xffffffff) >> 6) & 0xc |
           (byte)((uVar4 - 0x20000 & 0xffffffff) >> 0xc) & 0x30 | (byte)(uVar2 >> 0x18) & 3;
      *(char *)((int)param_3 + 6) = (char)*(undefined2 *)(param_3 + 1);
    }
  }
  else {
    *param_3 = lbl_820E30A8 << 0x1a | *param_3 & 0x3ffffff;
    iVar3 = (**(code **)(*param_1 + 4))();
    if (0 < iVar3) {
      fn_82BAAC50(param_1,param_3,1,3);
      *(undefined1 *)((int)param_3 + 7) = 0;
      cVar1 = *(char *)(param_1 + 0x21);
      if (((cVar1 != *(char *)((int)param_1 + 0x85)) || (cVar1 != *(char *)((int)param_1 + 0x86)))
         || (cVar1 != *(char *)((int)param_1 + 0x87))) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df830,0xffffffff820df268,0xa3d);
      }
      uVar4 = (ulonglong)*(byte *)(param_1 + 0x21) - 3;
      if ((longlong)uVar4 < 0) {
        uVar4 = (ulonglong)*(byte *)(param_1 + 0x21) + 1;
      }
      *(byte *)((int)param_3 + 7) = (byte)((uVar4 & 0xffffffff) << 6) | (byte)param_3[1];
      *(byte *)((int)param_3 + 7) = (byte)param_3[1] | *(byte *)(param_1 + 0x21);
    }
  }
  fn_82BAB1C8(param_1,param_3);
  uVar2 = param_3[1] >> 0x1b & 3;
  if ((uVar2 != 0) && (uVar2 != param_1[0xd])) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df77c,0xffffffff820df268,0xa58);
  }
  param_3[1] = (param_1[0xd] & 3U) << 0x1b | param_3[1] & 0xe7ffffff;
  *param_3 = *param_3 | 0x8000;
  return;
}

