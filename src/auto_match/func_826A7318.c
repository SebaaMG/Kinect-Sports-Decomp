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
extern int fn_8269A418();


void fn_826A7318(int param_1,int *param_2)

{
  undefined1 uVar2;
  undefined4 uVar1;
  
  *(int **)(param_1 + 0x74) = param_2;
  *(byte *)(param_1 + 0xc6) = *(byte *)(param_1 + 0xc6) & 0xbf;
  uVar2 = fn_8269A418(param_2);
  *(undefined1 *)(param_1 + 0x7c) = uVar2;
  uVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  return;
}

