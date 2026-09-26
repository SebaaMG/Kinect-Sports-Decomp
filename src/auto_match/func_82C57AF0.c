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
extern int fn_82C4E5E8();


void fn_82C57AF0(uint *param_1,uint param_2,ulonglong *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = param_2 & 1;
  if (uVar2 != 0) {
    uVar3 = *param_3;
    uVar1 = *(uint *)(param_3 + 1);
    *param_3 = uVar3 << 1;
    *(int *)(param_3 + 1) = (int)((ulonglong)uVar1 - 1);
    if ((longlong)((ulonglong)uVar1 - 1) < 0) {
      fn_82C4E5E8(param_3);
    }
    *param_1 = (uint)((uVar3 >> 0x3f) << 0x1f) | *param_1 & 0x7fffffff;
    param_1 = param_1 + 6;
  }
  if ((int)uVar2 < (int)param_2) {
    lVar4 = (ulonglong)((param_2 - uVar2) - 1 >> 1) + 1;
    do {
      uVar3 = *param_3;
      uVar2 = *(uint *)(param_3 + 1);
      *param_3 = uVar3 << 1;
      *(int *)(param_3 + 1) = (int)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 0) {
        fn_82C4E5E8(param_3);
      }
      if ((longlong)uVar3 < 0) {
        uVar3 = *param_3;
        uVar2 = *(uint *)(param_3 + 1);
        *param_3 = uVar3 << 1;
        *(int *)(param_3 + 1) = (int)((ulonglong)uVar2 - 1);
        if ((longlong)((ulonglong)uVar2 - 1) < 0) {
          fn_82C4E5E8(param_3);
        }
        if ((longlong)uVar3 < 0) {
          uVar2 = *param_1 | 0x80000000;
          uVar1 = param_1[6] | 0x80000000;
        }
        else {
          uVar3 = *param_3;
          uVar2 = *(uint *)(param_3 + 1);
          *param_3 = uVar3 << 1;
          *(int *)(param_3 + 1) = (int)((ulonglong)uVar2 - 1);
          if ((longlong)((ulonglong)uVar2 - 1) < 0) {
            fn_82C4E5E8(param_3);
          }
          uVar2 = *param_1;
          if ((longlong)uVar3 < 0) {
            uVar1 = param_1[6] | 0x80000000;
            goto LAB_82c57c30;
          }
          uVar2 = uVar2 | 0x80000000;
          uVar1 = param_1[6] & 0x7fffffff;
        }
      }
      else {
        uVar2 = *param_1;
        uVar1 = param_1[6] & 0x7fffffff;
LAB_82c57c30:
        uVar2 = uVar2 & 0x7fffffff;
      }
      param_1[6] = uVar1;
      lVar4 = lVar4 + -1;
      *param_1 = uVar2;
      param_1 = param_1 + 0xc;
    } while (lVar4 != 0);
  }
  return;
}

