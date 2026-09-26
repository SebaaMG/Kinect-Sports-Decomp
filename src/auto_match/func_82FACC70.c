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
extern int fn_82FAC610();
extern int fn_82FAC850();
extern int fn_82FAE140();


void fn_82FACC70(int param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  lVar2 = fn_82FAE140(*(undefined4 *)(param_1 + 0x60));
  fn_82FAC850(param_1,lVar2 + (ulonglong)uVar1,param_2,param_3);
  *(ushort *)(param_1 + 0x78) = *(ushort *)(param_1 + 0x78) & 0x7fff;
  fn_82FAC610(param_1,param_2,param_3);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - (int)param_3;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
  return;
}

