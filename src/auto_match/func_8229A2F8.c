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
extern int fn_82299AC8();
extern int fn_82299BF0();
extern int fn_82299D40();
extern int fn_82299E90();
extern int fn_8229A230();
extern unsigned int iStack_c;
extern unsigned int lbl_821CC160;


void fn_8229A2F8(int param_1,byte *param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iStack_c;
  
  if (((param_4 != 0) && ((*(uint *)(param_3 + 4) & 0x8f) == 3)) &&
     (iStack_c = (int)(longlong)*(double *)(param_3 + 8), iStack_c == *(int *)(param_1 + 8))) {
    uVar1 = (uint)*param_2;
    uVar4 = uVar1;
    uVar3 = 0x6f;
    if (uVar1 == 0x6f) {
      param_5 = (int)"onCaptionReady" - (int)param_2;
      uVar4 = 0x6f;
      pbVar2 = param_2;
      do {
        pbVar2 = pbVar2 + 1;
        if (uVar4 == 0) goto LAB_8229a38c;
        param_3 = (uint)pbVar2[param_5];
        uVar4 = (uint)*pbVar2;
        uVar3 = param_3;
      } while (uVar4 == param_3);
    }
    if (uVar4 == uVar3) {
LAB_8229a38c:
      if (*(int *)(param_1 + 0x120c) != 2) {
        uVar4 = *(uint *)(param_1 + 0x1214);
        *(undefined4 *)(param_1 + 0x122c) = 1;
        if (uVar4 == 0) {
          fn_82299AC8(param_1,param_1 + 0x20c);
          return;
        }
        if (uVar4 == 1) {
          fn_82299E90(param_1,param_1 + 0xc,param_1 + 0x20c,param_1 + 0xa0c);
          return;
        }
        if (uVar4 < 3) {
          fn_82299BF0(param_1,param_1 + 0xc,param_1 + 0x20c);
          return;
        }
        if (uVar4 != 3) {
          return;
        }
        fn_82299D40(param_1,param_1 + 0x20c,param_1 + 0xa0c);
        return;
      }
    }
    else {
      uVar3 = 0x68;
      uVar4 = uVar1;
      if (uVar1 == 0x68) {
        param_5 = (int)"hasReachedHoldPosition" - (int)param_2;
        uVar4 = 0x68;
        pbVar2 = param_2;
        do {
          pbVar2 = pbVar2 + 1;
          if (uVar4 == 0) goto LAB_8229a448;
          param_3 = (uint)pbVar2[param_5];
          uVar4 = (uint)*pbVar2;
          uVar3 = param_3;
        } while (uVar4 == param_3);
      }
      if (uVar4 == uVar3) {
LAB_8229a448:
        uVar5 = 4;
        if (*(float *)(param_1 + 0x121c) <= lbl_821CC160) {
          uVar5 = 0;
        }
        *(undefined4 *)(param_1 + 0x120c) = uVar5;
        return;
      }
      uVar3 = 0x68;
      uVar4 = uVar1;
      if (uVar1 == 0x68) {
        uVar4 = 0x68;
        uVar3 = param_5;
        pbVar2 = param_2;
        do {
          pbVar2 = pbVar2 + 1;
          param_5 = uVar3;
          if (uVar4 == 0) goto LAB_8229a4b4;
          uVar3 = (uint)pbVar2[(int)"hasReachedEnd" - (int)param_2];
          uVar4 = (uint)*pbVar2;
          param_5 = uVar3;
        } while (uVar4 == uVar3);
      }
      if (uVar4 != uVar3) {
        return;
      }
    }
LAB_8229a4b4:
    fn_8229A230(param_1,param_2,param_3,uVar1,param_5);
  }
  return;
}

