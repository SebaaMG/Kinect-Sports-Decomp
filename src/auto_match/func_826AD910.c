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
extern unsigned int *auStack_30;
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826A9318();
extern int fn_826AA460();
extern int fn_826AA530();
extern int fn_826AA890();


void fn_826AD910(longlong param_1,undefined4 *param_2)

{
  undefined2 uVar2;
  undefined8 uVar1;
  undefined4 auStack_30 [12];
  
  uVar2 = fn_826A6A38();
  fn_826A9280(param_1 + 0x14,0xffffffff820074cc,*param_2);
  fn_826A9318(param_1 + 0x14,0xffffffff820074a8,uVar2);
  uVar1 = fn_826AA530(param_1);
  fn_826AA890(uVar1,param_1);
  auStack_30[0] = (undefined4)uVar1;
  fn_826AA460(param_1 + 0x308,auStack_30);
  return;
}

