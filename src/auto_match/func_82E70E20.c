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
extern int fn_82E6F9C0();


undefined8
fn_82E70E20(int param_1,ulonglong param_2,undefined8 param_3,int param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x5c);
  trapDoubleWordImmediate(6,uVar2,0);
  if (param_2 == (param_2 / uVar2) * uVar2) {
    if ((param_4 == 0) || (param_5 == (undefined4 *)0x0)) {
      uVar1 = 0xffffffff80004003;
    }
    else {
      *param_5 = 0;
      if (*(int *)(param_4 + 2) != 0) {
        if (*(int *)(param_4 + 7) == 0) {
          *(ulonglong *)(param_1 + 0x40) = param_2;
          *(undefined2 *)(param_1 + 0x60) = 1;
          *param_5 = 1;
        }
        else {
          if (param_2 != *(ulonglong *)(param_1 + 0x68)) {
            *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
          }
          if (*(int *)(param_4 + 0x1b) + *(int *)(param_4 + 7) == *(int *)(param_4 + 0xb)) {
            trapDoubleWordImmediate(6,(ulonglong)*(uint *)(param_1 + 0x5c),0);
            fn_82E6F9C0(param_1,*(ulonglong *)(param_1 + 0x40) /
                                  (ulonglong)*(uint *)(param_1 + 0x5c) & 0xffffffff,
                          *(undefined2 *)(param_1 + 0x60));
          }
        }
        *(ulonglong *)(param_1 + 0x68) = param_2;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

