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
extern int fn_828ADCE8();


undefined8
fn_828ADFE8(int param_1,uint *param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5,
             undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int in_stack_0000007c;
  
  if (((param_4 & 0xffffffff) == 0) ||
     (bVar1 = true, (param_5 & 0xffffffff) < (param_4 & 0xffffffff))) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, *(char *)(in_stack_0000007c + 4) != '\x01')) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, (param_3 & 0xffffffff) != (ulonglong)*(uint *)(*param_2 + 0x78))) {
    bVar1 = false;
  }
  if ((!bVar1) ||
     (bVar1 = true, *(uint *)(param_1 + 0x28) != (uint)*(byte *)(*(int *)(*param_2 + 0x70) + 0x78)))
  {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = (ulonglong)*param_2;
    uVar2 = fn_828ADCE8(param_1,param_3,param_4,param_5,param_6,uVar3 + 0x14,uVar3 + 0x40,
                          uVar3 + 0x1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

