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
extern int fn_829B7838();
extern int fn_829B78F8();
extern int fn_829B7AB0();
extern int fn_829C1D98();
extern unsigned int lbl_82055790;
extern unsigned int lbl_82055890;
extern unsigned int lbl_82055990;


byte fn_829B7E88(int *param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  
  uVar10 = 0;
  do {
    uVar7 = param_1[0x1b];
    if (uVar7 < 0x106) {
      fn_829B7AB0(param_1);
      uVar7 = param_1[0x1b];
      iVar5 = (int)param_2;
      if ((uVar7 < 0x106) && (iVar5 == 0)) {
        return 0;
      }
      if (uVar7 == 0) {
        uVar10 = param_1[0x15];
        if ((int)uVar10 < 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (ulonglong)(uint)param_1[0xc] + (ulonglong)uVar10;
        }
        fn_829C1D98(param_1,lVar6,(ulonglong)(uint)param_1[0x19] - (ulonglong)uVar10,
                          iVar5 == 4);
        param_1[0x15] = param_1[0x19];
        fn_829B7838(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          if (iVar5 != 4) {
            return 1;
          }
          return 3;
        }
        return -(param_2 == 4) & 2;
      }
    }
    if (2 < uVar7) {
      uVar10 = (param_1[0x10] << (param_1[0x14] & 0x3fU) ^
               (uint)*(byte *)(param_1[0xc] + param_1[0x19] + 2)) & param_1[0x13];
      param_1[0x10] = uVar10;
      uVar2 = *(ushort *)(uVar10 * 2 + param_1[0xf]);
      uVar10 = (uint)uVar2;
      *(ushort *)((param_1[0xb] & param_1[0x19]) * 2 + param_1[0xe]) = uVar2;
      *(short *)(param_1[0x10] * 2 + param_1[0xf]) = (short)param_1[0x19];
    }
    if (((uVar10 != 0) && (param_1[0x19] - uVar10 <= param_1[9] - 0x106U)) && (param_1[0x20] != 2))
    {
      iVar5 = fn_829B78F8(param_1,uVar10);
      param_1[0x16] = iVar5;
    }
    if ((uint)param_1[0x16] < 3) {
      bVar1 = *(byte *)(param_1[0x19] + param_1[0xc]);
      *(undefined2 *)(param_1[0x5a7] + param_1[0x5a6] * 2) = 0;
      iVar5 = bVar1 + 0x23;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar1;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + iVar5) = *(short *)(param_1 + iVar5) + 1;
      param_1[0x1b] = param_1[0x1b] + -1;
      bVar4 = param_1[0x5a5] + -1 == param_1[0x5a6];
LAB_829b81a8:
      param_1[0x19] = param_1[0x19] + 1;
    }
    else {
      uVar8 = param_1[0x16] + 0xfd;
      iVar5 = param_1[0x1a];
      iVar3 = param_1[0x19];
      *(short *)(param_1[0x5a7] + param_1[0x5a6] * 2) = (short)(iVar3 - iVar5);
      *(char *)(param_1[0x5a4] + param_1[0x5a6]) = (char)uVar8;
      uVar7 = (iVar3 - iVar5 & 0xffffU) + 0xffff & 0xffff;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + (byte)(&lbl_82055990)[uVar8 & 0xff] + 0x124) =
           *(short *)(param_1 + (byte)(&lbl_82055990)[uVar8 & 0xff] + 0x124) + 1;
      if (uVar7 < 0x100) {
        bVar1 = (&lbl_82055790)[uVar7];
      }
      else {
        bVar1 = (&lbl_82055890)[uVar7 >> 7];
      }
      *(short *)(param_1 + bVar1 + 0x260) = *(short *)(param_1 + bVar1 + 0x260) + 1;
      iVar5 = param_1[0x1b];
      uVar7 = param_1[0x16];
      param_1[0x1b] = iVar5 - uVar7;
      bVar4 = param_1[0x5a5] + -1 == param_1[0x5a6];
      if ((uVar7 <= (uint)param_1[0x1e]) && (2 < iVar5 - uVar7)) {
        param_1[0x16] = uVar7 - 1;
        do {
          uVar7 = param_1[0x19] + 1;
          param_1[0x19] = uVar7;
          uVar10 = ((uint)*(byte *)(uVar7 + param_1[0xc] + 2) ^
                   param_1[0x10] << (param_1[0x14] & 0x3fU)) & param_1[0x13];
          param_1[0x10] = uVar10;
          uVar2 = *(ushort *)(uVar10 * 2 + param_1[0xf]);
          uVar10 = (uint)uVar2;
          *(ushort *)((param_1[0xb] & uVar7) * 2 + param_1[0xe]) = uVar2;
          *(short *)(param_1[0x10] * 2 + param_1[0xf]) = (short)param_1[0x19];
          uVar7 = param_1[0x16];
          param_1[0x16] = (int)((ulonglong)uVar7 - 1);
        } while ((ulonglong)uVar7 - 1 != 0);
        goto LAB_829b81a8;
      }
      param_1[0x16] = 0;
      iVar5 = param_1[0x19];
      param_1[0x19] = iVar5 + uVar7;
      pbVar9 = (byte *)(iVar5 + uVar7 + param_1[0xc]);
      bVar1 = *pbVar9;
      param_1[0x10] = (uint)bVar1;
      param_1[0x10] = ((uint)bVar1 << (param_1[0x14] & 0x3fU) ^ (uint)pbVar9[1]) & param_1[0x13];
    }
    if (bVar4) {
      uVar7 = param_1[0x15];
      if ((int)uVar7 < 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = (ulonglong)uVar7 + (ulonglong)(uint)param_1[0xc];
      }
      fn_829C1D98(param_1,lVar6,(ulonglong)(uint)param_1[0x19] - (ulonglong)uVar7,0);
      param_1[0x15] = param_1[0x19];
      fn_829B7838(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

