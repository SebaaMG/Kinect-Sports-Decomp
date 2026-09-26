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
extern int fn_8268B330();
extern int fn_826FC250();


int fn_826FC388(int param_1,undefined8 param_2,uint *param_3,undefined8 param_4,char param_5,
                 undefined8 param_6)

{
  undefined1 uVar1;
  
  fn_8268B330(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (param_5 == '\0') {
    uVar1 = (*param_3 & 0xfffffffc) == 0xfffffff8;
  }
  else {
    uVar1 = 4;
  }
  fn_826FC250(param_1,uVar1,param_2,0xffffffffffffffff,param_3,param_4,param_6);
  return param_1;
}

