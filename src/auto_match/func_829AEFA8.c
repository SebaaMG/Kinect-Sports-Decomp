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
extern int fn_829AB128();


undefined8
fn_829AEFA8(ulonglong param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
             uint *param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *in_stack_00000054;
  
  if (((((param_1 & 0xffffffff) == 0) || (param_2 == (uint *)0x0)) || (param_3 == (uint *)0x0)) ||
     (((param_4 == (uint *)0x0 || (param_5 == (uint *)0x0)) || (param_6 == (uint *)0x0)))) {
    uVar2 = 0;
  }
  else {
    *param_3 = *param_2;
    *param_4 = param_2[1];
    *param_5 = (uint)*(byte *)(param_2 + 6);
    *param_6 = (uint)*(byte *)((int)param_2 + 0x19);
    if (param_8 != (uint *)0x0) {
      *param_8 = (uint)*(byte *)((int)param_2 + 0x1a);
    }
    if (in_stack_00000054 != (uint *)0x0) {
      *in_stack_00000054 = (uint)*(byte *)((int)param_2 + 0x1b);
    }
    if (param_7 != (uint *)0x0) {
      *param_7 = (uint)*(byte *)(param_2 + 7);
    }
    uVar1 = *param_6;
    if (uVar1 == 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar1 & 2 | 1;
    }
    if ((uVar1 & 4) != 0) {
      uVar3 = uVar3 + 1;
    }
    uVar1 = (int)(*param_5 * uVar3 + 7) >> 3;
    trapWord(6,(longlong)(int)uVar1,0);
    if (0x7fffffff / (ulonglong)uVar1 < (ulonglong)*param_3) {
      fn_829AB128(param_1,0xffffffff8205255c);
    }
    uVar2 = 1;
  }
  return uVar2;
}

