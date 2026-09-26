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


byte fn_82F8B5C8(int *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = 0;
LAB_82f8b600:
  do {
    uVar8 = param_1[0x1d];
    if (uVar8 < 0x106) {
      fn_82F8AD98(param_1);
      uVar8 = param_1[0x1d];
      iVar5 = (int)param_2;
      if ((uVar8 < 0x106) && (iVar5 == 0)) {
        return 0;
      }
      if (uVar8 == 0) {
        if (param_1[0x1a] != 0) {
          bVar1 = *(byte *)(param_1[0x1b] + param_1[0xe] + -1);
          *(undefined2 *)(param_1[0x5a8] * 2 + param_1[0x5a9]) = 0;
          iVar9 = bVar1 + 0x25;
          *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar1;
          param_1[0x5a8] = param_1[0x5a8] + 1;
          *(short *)(param_1 + iVar9) = *(short *)(param_1 + iVar9) + 1;
          param_1[0x1a] = 0;
        }
        uVar10 = param_1[0x17];
        if ((int)uVar10 < 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (ulonglong)(uint)param_1[0xe] + (ulonglong)uVar10;
        }
        fn_82F8D808(param_1,lVar6,(ulonglong)(uint)param_1[0x1b] - (ulonglong)uVar10,iVar5 == 4)
        ;
        param_1[0x17] = param_1[0x1b];
        fn_82F89D68(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          if (iVar5 != 4) {
            return 1;
          }
          return 3;
        }
        return -(param_2 == 4) & 2;
      }
    }
    if (2 < uVar8) {
      uVar10 = (param_1[0x12] << (param_1[0x16] & 0x3fU) ^
               (uint)*(byte *)(param_1[0xe] + param_1[0x1b] + 2)) & param_1[0x15];
      param_1[0x12] = uVar10;
      *(undefined2 *)((param_1[0xd] & param_1[0x1b]) * 2 + param_1[0x10]) =
           *(undefined2 *)(uVar10 * 2 + param_1[0x11]);
      uVar10 = (uint)*(ushort *)((param_1[0xd] & param_1[0x1b]) * 2 + param_1[0x10]);
      *(short *)(param_1[0x12] * 2 + param_1[0x11]) = (short)param_1[0x1b];
    }
    uVar8 = param_1[0x18];
    param_1[0x18] = 2;
    param_1[0x1e] = uVar8;
    param_1[0x19] = param_1[0x1c];
    if (((uVar10 != 0) && (uVar8 < (uint)param_1[0x20])) &&
       (param_1[0x1b] - uVar10 <= param_1[0xb] - 0x106U)) {
      if (param_1[0x22] != 2) {
        if (param_1[0x22] == 3) {
          if (param_1[0x1b] - uVar10 != 1) goto LAB_82f8b734;
          iVar5 = fn_82F8ACA0(param_1,uVar10);
        }
        else {
          iVar5 = fn_82F8AAE8(param_1,uVar10);
        }
        param_1[0x18] = iVar5;
      }
LAB_82f8b734:
      if (((uint)param_1[0x18] < 6) &&
         ((param_1[0x22] == 1 ||
          ((param_1[0x18] == 3 && (0x1000 < (uint)(param_1[0x1b] - param_1[0x1c]))))))) {
        param_1[0x18] = 2;
      }
    }
    uVar8 = param_1[0x1e];
    if ((uVar8 < 3) || (uVar8 < (uint)param_1[0x18])) {
      if (param_1[0x1a] == 0) {
        param_1[0x1a] = 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        param_1[0x1b] = param_1[0x1b] + 1;
        goto LAB_82f8b600;
      }
      bVar1 = *(byte *)(param_1[0x1b] + param_1[0xe] + -1);
      *(undefined2 *)(param_1[0x5a8] * 2 + param_1[0x5a9]) = 0;
      iVar5 = bVar1 + 0x25;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar1;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + iVar5) = *(short *)(param_1 + iVar5) + 1;
      if (param_1[0x5a8] == param_1[0x5a7] + -1) {
        uVar8 = param_1[0x17];
        if ((int)uVar8 < 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (ulonglong)uVar8 + (ulonglong)(uint)param_1[0xe];
        }
        fn_82F8D808(param_1,lVar6,(ulonglong)(uint)param_1[0x1b] - (ulonglong)uVar8,0);
        param_1[0x17] = param_1[0x1b];
        fn_82F89D68(*param_1);
      }
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1d] = param_1[0x1d] + -1;
      iVar5 = *(int *)(*param_1 + 0x10);
    }
    else {
      iVar5 = param_1[0x1b];
      iVar9 = param_1[0x1d];
      uVar7 = (iVar5 - param_1[0x19]) + 0xffff;
      *(short *)(param_1[0x5a8] * 2 + param_1[0x5a9]) = (short)uVar7;
      uVar7 = (uVar7 & 0xffff) + 0xffff & 0xffff;
      *(char *)(param_1[0x5a6] + param_1[0x5a8]) = (char)(uVar8 + 0xfd);
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&lbl_8216B490)[uVar8 + 0xfd & 0xff] + 0x126) =
           *(short *)(param_1 + (byte)(&lbl_8216B490)[uVar8 + 0xfd & 0xff] + 0x126) + 1;
      if (uVar7 < 0x100) {
        bVar1 = (&lbl_8216B290)[uVar7];
      }
      else {
        bVar1 = (&lbl_8216B390)[uVar7 >> 7];
      }
      *(short *)(param_1 + bVar1 + 0x262) = *(short *)(param_1 + bVar1 + 0x262) + 1;
      iVar2 = param_1[0x5a8];
      iVar3 = param_1[0x5a7];
      param_1[0x1d] = (param_1[0x1d] - param_1[0x1e]) + 1;
      param_1[0x1e] = param_1[0x1e] + -2;
      do {
        iVar4 = param_1[0x1b];
        uVar8 = iVar4 + 1;
        param_1[0x1b] = uVar8;
        if (iVar4 + 1U <= (iVar5 + iVar9) - 3U) {
          uVar10 = (param_1[0x12] << (param_1[0x16] & 0x3fU) ^
                   (uint)*(byte *)(param_1[0xe] + uVar8 + 2)) & param_1[0x15];
          param_1[0x12] = uVar10;
          *(undefined2 *)((uVar8 & param_1[0xd]) * 2 + param_1[0x10]) =
               *(undefined2 *)(uVar10 * 2 + param_1[0x11]);
          uVar10 = (uint)*(ushort *)((param_1[0xd] & param_1[0x1b]) * 2 + param_1[0x10]);
          *(short *)(param_1[0x12] * 2 + param_1[0x11]) = (short)param_1[0x1b];
        }
        uVar8 = param_1[0x1e];
        param_1[0x1e] = (int)((ulonglong)uVar8 - 1);
      } while ((ulonglong)uVar8 - 1 != 0);
      uVar8 = param_1[0x1b];
      param_1[0x1a] = 0;
      param_1[0x18] = 2;
      param_1[0x1b] = (int)((ulonglong)uVar8 + 1);
      if (iVar3 + -1 != iVar2) goto LAB_82f8b600;
      uVar7 = param_1[0x17];
      if ((int)uVar7 < 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = (ulonglong)(uint)param_1[0xe] + (ulonglong)uVar7;
      }
      fn_82F8D808(param_1,lVar6,((ulonglong)uVar8 + 1) - (ulonglong)uVar7,0);
      param_1[0x17] = param_1[0x1b];
      fn_82F89D68(*param_1);
      iVar5 = *(int *)(*param_1 + 0x10);
    }
    if (iVar5 == 0) {
      return 0;
    }
  } while( true );
}

