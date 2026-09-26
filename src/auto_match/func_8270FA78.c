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
extern int fn_826944C8();
extern int fn_82694B60();
extern int fn_82696D38();


void fn_8270FA78(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *apuStack_20 [4];
  
  fn_82696D38(apuStack_20,param_3,param_2,0xffffffffffffffff,0);
  fn_82694B60(param_1 + 0x30,*apuStack_20[0]);
  uVar1 = apuStack_20[0][2];
  apuStack_20[0][2] = (int)((ulonglong)uVar1 - 1);
  if ((ulonglong)uVar1 - 1 == 0) {
    fn_826944C8(apuStack_20[0]);
  }
  return;
}

