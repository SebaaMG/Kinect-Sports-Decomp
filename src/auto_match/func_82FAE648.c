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
extern int fn_82F65350();


undefined8 fn_82FAE648(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar2 = *(ushort *)(param_2 + 0x14) >> 0xd;
  if (uVar2 < 4) {
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        if (param_3 < *(int *)(*(int *)(param_1 + 0xa4) + -4) -
                      *(int *)(*(int *)(param_1 + 0xa0) + 4)) {
          *param_4 = param_3;
          return 1;
        }
        goto LAB_82fae770;
      }
      if (uVar2 == 2) {
        uVar5 = (longlong)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 3) - 1;
        uVar3 = fn_82F65350();
        trapWord(6,uVar5,0);
        *param_4 = *(int *)((int)((uVar3 - (longlong)
                                           (int)((uVar3 & 0xffffffff) / (uVar5 & 0xffffffff)) *
                                           (longlong)(int)uVar5 & 0xffffffff) << 3) +
                            *(int *)(param_1 + 0xa0) + 4) - *(int *)(*(int *)(param_1 + 0xa0) + 4);
        return 1;
      }
      uVar1 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0) >> 3;
      if (2 < uVar1) {
        uVar3 = fn_82F65350();
        uVar5 = (longlong)(int)uVar1 - 2;
        trapWord(6,uVar5,0);
        *param_4 = *(int *)((int)(((uVar3 - (longlong)
                                            (int)((uVar3 & 0xffffffff) / (uVar5 & 0xffffffff)) *
                                            (longlong)(int)uVar5) + 1 & 0xffffffff) << 3) +
                            *(int *)(param_1 + 0xa0) + 4) - *(int *)(*(int *)(param_1 + 0xa0) + 4);
        return 1;
      }
    }
    uVar4 = 1;
    *param_4 = 0;
  }
  else {
LAB_82fae770:
    uVar4 = 2;
  }
  return uVar4;
}

