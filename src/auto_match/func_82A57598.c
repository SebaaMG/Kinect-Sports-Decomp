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
extern int fn_82F691F0();


undefined8 fn_82A57598(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined8 uVar1;
  int *in_r10;
  ushort *in_stack_00000054;
  
  if ((((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
     ((param_2 != 0 && (param_4 == 0)))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (param_1[0xad] == 3) {
      if (in_stack_00000054 != (ushort *)0x0) {
        if ((*in_stack_00000054 & 0x200) == 0) {
          param_1[0x67] = 0;
        }
        else {
          param_1[0x67] = 1;
        }
      }
      if (param_1[0x68] != 0) {
        param_1[0x67] = 1;
      }
      param_1[0xad] = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1[0x30],0,(ulonglong)*(ushort *)(*param_1 + 0x22) << 2);
    }
    uVar1 = 0xffffffff8004000a;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (((param_1[0xb0] != 0) && (param_1[0xae] != 0)) && (param_1[0xad] == 2)) {
    param_1[0xad] = ((uint)LZCOUNT(param_1[0x38]) >> 5 ^ 1) + 1;
  }
  if (in_r10 != (int *)0x0) {
    *in_r10 = param_1[0xad];
  }
  return uVar1;
}

