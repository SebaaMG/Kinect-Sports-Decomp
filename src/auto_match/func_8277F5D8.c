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
extern int fn_8277E928();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


longlong fn_8277F5D8(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_2c = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0xffffffff;
  uStack_24 = 0xffffffff;
  uStack_1c = 0;
  uStack_20 = param_2;
  fn_8277E928(param_1 + 0x154,&uStack_30);
  uVar1 = *(int *)(param_1 + 0x154) - 1;
  return (ulonglong)*(uint *)((uVar1 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x160)) +
         ((ulonglong)uVar1 & 0x3f) * 0x18;
}

