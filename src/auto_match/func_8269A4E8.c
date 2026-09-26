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
extern int fn_82703F00();
extern unsigned int uStack_13;
extern unsigned int uStack_14;
extern unsigned int uStack_15;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8269A4E8(int *param_1)

{
  undefined8 uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  if ((*(byte *)((int)param_1 + 0x66) & 2) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x40))();
    fn_82703F00(uVar1,param_1);
  }
  if ((*(byte *)((int)param_1 + 0x66) & 0x10) == 0) {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_16 = 0;
    uStack_14 = 0;
    uStack_13 = 0;
    uStack_20 = 4;
    uStack_15 = 0xff;
    (**(code **)(*param_1 + 0x6c))(param_1,&uStack_20);
    *(byte *)((int)param_1 + 0x66) = *(byte *)((int)param_1 + 0x66) | 0x10;
  }
  return;
}

