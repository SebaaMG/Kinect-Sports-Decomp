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
extern int fn_82A1DDC0();
extern int fn_82A3FF60();
extern int fn_82A46138();
extern int fn_82A4F4E0();


undefined8 fn_82A47EB8(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar2;
  longlong lVar1;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar3 = 0;
  uVar2 = fn_82A46138((double)((float)((double)(param_2 & 0xffffffff) / (double)uVar2) *
                                *(float *)(param_1 + 200)),
                        (((ulonglong)uVar2 & 0x7fffffff) << 1) / 0x177,param_2,
                        (~(ulonglong)*(uint *)(param_1 + 0x3c) & 0xffffffff) >> 1 & 1,param_4,uVar2)
  ;
  if ((*(int *)(param_1 + 0x1e0) == 0) || (*(uint *)(param_1 + 0x1e4) < uVar2)) {
    lVar1 = fn_82A3FF60(0xffffffff83219d50,
                              ((longlong)*(int *)(param_1 + 0x40) * (longlong)(int)uVar2 &
                              0x7fffffffU) << 1,0x20970002,0);
    if (lVar1 == 0) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      if (*(int *)(param_1 + 0x1e0) != 0) {
        fn_82A1DDC0(lVar1,*(int *)(param_1 + 0x1e0),
                          ((longlong)*(int *)(param_1 + 0x1e4) * (longlong)*(int *)(param_1 + 0x40)
                          & 0x7fffffffU) << 1);
        if (*(int *)(param_1 + 0x1e0) != 0) {
          fn_82A4F4E0();
          *(undefined4 *)(param_1 + 0x1e0) = 0;
        }
      }
      *(int *)(param_1 + 0x1e0) = (int)lVar1;
      *(uint *)(param_1 + 0x1e4) = uVar2;
    }
  }
  return uVar3;
}

