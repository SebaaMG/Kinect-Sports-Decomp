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
extern int fn_82F89D68();
extern int fn_82F8AAE8();
extern int fn_82F8ACA0();
extern int fn_82F8AD98();
extern int fn_82F8D808();
extern unsigned int lbl_8216B290;
extern unsigned int lbl_8216B390;
extern unsigned int lbl_8216B490;


byte fn_82F8B160(int *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  
  uVar9 = 0;
  do {
    uVar6 = param_1[0x1d];
    if (uVar6 < 0x106) {
      fn_82F8AD98(param_1);
      uVar6 = param_1[0x1d];
      iVar4 = (int)param_2;
      if ((uVar6 < 0x106) && (iVar4 == 0)) {
        return 0;
      }
      if (uVar6 == 0) {
        uVar9 = param_1[0x17];
        if ((int)uVar9 < 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (ulonglong)(uint)param_1[0xe] + (ulonglong)uVar9;
        }
        fn_82F8D808(param_1,lVar5,(ulonglong)(uint)param_1[0x1b] - (ulonglong)uVar9,iVar4 == 4);
        param_1[0x17] = param_1[0x1b];
        fn_82F89D68(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          if (iVar4 != 4) {
            return 1;
          }
          return 3;
        }
        return -(param_2 == 4) & 2;
      }
    }
    if (2 < uVar6) {
      uVar9 = (param_1[0x12] << (param_1[0x16] & 0x3fU) ^
              (uint)*(byte *)(param_1[0xe] + param_1[0x1b] + 2)) & param_1[0x15];
      param_1[0x12] = uVar9;
      *(undefined2 *)((param_1[0xd] & param_1[0x1b]) * 2 + param_1[0x10]) =
           *(undefined2 *)(uVar9 * 2 + param_1[0x11]);
      uVar9 = (uint)*(ushort *)((param_1[0xd] & param_1[0x1b]) * 2 + param_1[0x10]);
      *(short *)(param_1[0x12] * 2 + param_1[0x11]) = (short)param_1[0x1b];
    }
    if (((uVar9 != 0) && (param_1[0x1b] - uVar9 <= param_1[0xb] - 0x106U)) && (param_1[0x22] != 2))
    {
      if (param_1[0x22] == 3) {
        if (param_1[0x1b] - uVar9 != 1) goto LAB_82f8b29c;
        iVar4 = fn_82F8ACA0(param_1,uVar9);
      }
      else {
        iVar4 = fn_82F8AAE8(param_1,uVar9);
      }
      param_1[0x18] = iVar4;
    }
LAB_82f8b29c:
    if ((uint)param_1[0x18] < 3) {
      bVar1 = *(byte *)(param_1[0x1b] + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a8] * 2 + param_1[0x5a9]) = 0;
      iVar4 = bVar1 + 0x25;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar1;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + iVar4) = *(short *)(param_1 + iVar4) + 1;
      param_1[0x1d] = param_1[0x1d] + -1;
      bVar3 = param_1[0x5a7] + -1 == param_1[0x5a8];
LAB_82f8b4d0:
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    else {
      uVar7 = param_1[0x18] + 0xfd;
      iVar4 = param_1[0x1c];
      iVar2 = param_1[0x1b];
      *(short *)(param_1[0x5a8] * 2 + param_1[0x5a9]) = (short)(iVar2 - iVar4);
      *(char *)(param_1[0x5a6] + param_1[0x5a8]) = (char)uVar7;
      uVar6 = (iVar2 - iVar4 & 0xffffU) + 0xffff & 0xffff;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&lbl_8216B490)[uVar7 & 0xff] + 0x126) =
           *(short *)(param_1 + (byte)(&lbl_8216B490)[uVar7 & 0xff] + 0x126) + 1;
      if (uVar6 < 0x100) {
        bVar1 = (&lbl_8216B290)[uVar6];
      }
      else {
        bVar1 = (&lbl_8216B390)[uVar6 >> 7];
      }
      *(short *)(param_1 + bVar1 + 0x262) = *(short *)(param_1 + bVar1 + 0x262) + 1;
      iVar4 = param_1[0x1d];
      uVar6 = param_1[0x18];
      param_1[0x1d] = iVar4 - uVar6;
      bVar3 = param_1[0x5a7] + -1 == param_1[0x5a8];
      if ((uVar6 <= (uint)param_1[0x20]) && (2 < iVar4 - uVar6)) {
        param_1[0x18] = uVar6 - 1;
        do {
          uVar6 = param_1[0x1b] + 1;
          param_1[0x1b] = uVar6;
          uVar9 = ((uint)*(byte *)(uVar6 + param_1[0xe] + 2) ^
                  param_1[0x12] << (param_1[0x16] & 0x3fU)) & param_1[0x15];
          param_1[0x12] = uVar9;
          *(undefined2 *)((param_1[0xd] & uVar6) * 2 + param_1[0x10]) =
               *(undefined2 *)(uVar9 * 2 + param_1[0x11]);
          uVar9 = (uint)*(ushort *)((param_1[0xd] & param_1[0x1b]) * 2 + param_1[0x10]);
          *(short *)(param_1[0x12] * 2 + param_1[0x11]) = (short)param_1[0x1b];
          uVar6 = param_1[0x18];
          param_1[0x18] = (int)((ulonglong)uVar6 - 1);
        } while ((ulonglong)uVar6 - 1 != 0);
        goto LAB_82f8b4d0;
      }
      iVar4 = param_1[0x1b];
      param_1[0x18] = 0;
      param_1[0x1b] = iVar4 + uVar6;
      pbVar8 = (byte *)(iVar4 + uVar6 + param_1[0xe]);
      bVar1 = *pbVar8;
      param_1[0x12] = (uint)bVar1;
      param_1[0x12] = ((uint)bVar1 << (param_1[0x16] & 0x3fU) ^ (uint)pbVar8[1]) & param_1[0x15];
    }
    if (bVar3) {
      uVar6 = param_1[0x17];
      if ((int)uVar6 < 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (ulonglong)uVar6 + (ulonglong)(uint)param_1[0xe];
      }
      fn_82F8D808(param_1,lVar5,(ulonglong)(uint)param_1[0x1b] - (ulonglong)uVar6,0);
      param_1[0x17] = param_1[0x1b];
      fn_82F89D68(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

