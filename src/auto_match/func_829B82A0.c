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


byte fn_829B82A0(int *param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = 0;
LAB_829b82d8:
  do {
    uVar10 = param_1[0x1b];
    if (uVar10 < 0x106) {
      fn_829B7AB0(param_1);
      uVar10 = param_1[0x1b];
      iVar7 = (int)param_2;
      if ((uVar10 < 0x106) && (iVar7 == 0)) {
        return 0;
      }
      if (uVar10 == 0) {
        if (param_1[0x18] != 0) {
          bVar1 = *(byte *)(param_1[0x19] + param_1[0xc] + -1);
          *(undefined2 *)(param_1[0x5a6] * 2 + param_1[0x5a7]) = 0;
          iVar11 = bVar1 + 0x23;
          *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar1;
          param_1[0x5a6] = param_1[0x5a6] + 1;
          *(short *)(param_1 + iVar11) = *(short *)(param_1 + iVar11) + 1;
          param_1[0x18] = 0;
        }
        uVar12 = param_1[0x15];
        if ((int)uVar12 < 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (ulonglong)(uint)param_1[0xc] + (ulonglong)uVar12;
        }
        fn_829C1D98(param_1,lVar8,(ulonglong)(uint)param_1[0x19] - (ulonglong)uVar12,
                          iVar7 == 4);
        param_1[0x15] = param_1[0x19];
        fn_829B7838(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          if (iVar7 != 4) {
            return 1;
          }
          return 3;
        }
        return -(param_2 == 4) & 2;
      }
    }
    if (2 < uVar10) {
      uVar12 = (param_1[0x10] << (param_1[0x14] & 0x3fU) ^
               (uint)*(byte *)(param_1[0xc] + param_1[0x19] + 2)) & param_1[0x13];
      param_1[0x10] = uVar12;
      uVar2 = *(ushort *)(uVar12 * 2 + param_1[0xf]);
      uVar12 = (uint)uVar2;
      *(ushort *)((param_1[0xb] & param_1[0x19]) * 2 + param_1[0xe]) = uVar2;
      *(short *)(param_1[0x10] * 2 + param_1[0xf]) = (short)param_1[0x19];
    }
    uVar10 = param_1[0x16];
    param_1[0x16] = 2;
    param_1[0x1c] = uVar10;
    param_1[0x17] = param_1[0x1a];
    if (((uVar12 != 0) && (uVar10 < (uint)param_1[0x1e])) &&
       (param_1[0x19] - uVar12 <= param_1[9] - 0x106U)) {
      if (param_1[0x20] != 2) {
        iVar7 = fn_829B78F8(param_1,uVar12);
        param_1[0x16] = iVar7;
      }
      if (((uint)param_1[0x16] < 6) &&
         ((param_1[0x20] == 1 ||
          ((param_1[0x16] == 3 && (0x1000 < (uint)(param_1[0x19] - param_1[0x1a]))))))) {
        param_1[0x16] = 2;
      }
    }
    uVar10 = param_1[0x1c];
    if ((uVar10 < 3) || (uVar10 < (uint)param_1[0x16])) {
      if (param_1[0x18] == 0) {
        param_1[0x18] = 1;
        param_1[0x1b] = param_1[0x1b] + -1;
        param_1[0x19] = param_1[0x19] + 1;
        goto LAB_829b82d8;
      }
      bVar1 = *(byte *)(param_1[0x19] + param_1[0xc] + -1);
      *(undefined2 *)(param_1[0x5a6] * 2 + param_1[0x5a7]) = 0;
      iVar7 = bVar1 + 0x23;
      *(byte *)(param_1[0x5a4] + param_1[0x5a6]) = bVar1;
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + iVar7) = *(short *)(param_1 + iVar7) + 1;
      if (param_1[0x5a6] == param_1[0x5a5] + -1) {
        uVar10 = param_1[0x15];
        if ((int)uVar10 < 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (ulonglong)uVar10 + (ulonglong)(uint)param_1[0xc];
        }
        fn_829C1D98(param_1,lVar8,(ulonglong)(uint)param_1[0x19] - (ulonglong)uVar10,0);
        param_1[0x15] = param_1[0x19];
        fn_829B7838(*param_1);
      }
      param_1[0x19] = param_1[0x19] + 1;
      param_1[0x1b] = param_1[0x1b] + -1;
      iVar7 = *(int *)(*param_1 + 0x10);
    }
    else {
      iVar7 = param_1[0x19];
      iVar11 = param_1[0x1b];
      uVar9 = (iVar7 - param_1[0x17]) + 0xffff;
      uVar6 = (uVar9 & 0xffff) + 0xffff & 0xffff;
      *(short *)(param_1[0x5a6] * 2 + param_1[0x5a7]) = (short)uVar9;
      *(char *)(param_1[0x5a4] + param_1[0x5a6]) = (char)(uVar10 + 0xfd);
      param_1[0x5a6] = param_1[0x5a6] + 1;
      *(short *)(param_1 + (byte)(&lbl_82055990)[uVar10 + 0xfd & 0xff] + 0x124) =
           *(short *)(param_1 + (byte)(&lbl_82055990)[uVar10 + 0xfd & 0xff] + 0x124) + 1;
      if (uVar6 < 0x100) {
        bVar1 = (&lbl_82055790)[uVar6];
      }
      else {
        bVar1 = (&lbl_82055890)[uVar6 >> 7];
      }
      *(short *)(param_1 + bVar1 + 0x260) = *(short *)(param_1 + bVar1 + 0x260) + 1;
      iVar3 = param_1[0x5a6];
      iVar4 = param_1[0x5a5];
      param_1[0x1b] = (param_1[0x1b] - param_1[0x1c]) + 1;
      param_1[0x1c] = param_1[0x1c] + -2;
      do {
        iVar5 = param_1[0x19];
        uVar10 = iVar5 + 1;
        param_1[0x19] = uVar10;
        if (iVar5 + 1U <= (iVar7 + iVar11) - 3U) {
          uVar12 = (param_1[0x10] << (param_1[0x14] & 0x3fU) ^
                   (uint)*(byte *)(param_1[0xc] + uVar10 + 2)) & param_1[0x13];
          param_1[0x10] = uVar12;
          uVar2 = *(ushort *)(uVar12 * 2 + param_1[0xf]);
          uVar12 = (uint)uVar2;
          *(ushort *)((param_1[0xb] & uVar10) * 2 + param_1[0xe]) = uVar2;
          *(short *)(param_1[0x10] * 2 + param_1[0xf]) = (short)param_1[0x19];
        }
        uVar10 = param_1[0x1c];
        param_1[0x1c] = (int)((ulonglong)uVar10 - 1);
      } while ((ulonglong)uVar10 - 1 != 0);
      uVar10 = param_1[0x19];
      param_1[0x18] = 0;
      param_1[0x16] = 2;
      param_1[0x19] = (int)((ulonglong)uVar10 + 1);
      if (iVar4 + -1 != iVar3) goto LAB_829b82d8;
      uVar6 = param_1[0x15];
      if ((int)uVar6 < 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (ulonglong)(uint)param_1[0xc] + (ulonglong)uVar6;
      }
      fn_829C1D98(param_1,lVar8,((ulonglong)uVar10 + 1) - (ulonglong)uVar6,0);
      param_1[0x15] = param_1[0x19];
      fn_829B7838(*param_1);
      iVar7 = *(int *)(*param_1 + 0x10);
    }
    if (iVar7 == 0) {
      return 0;
    }
  } while( true );
}

