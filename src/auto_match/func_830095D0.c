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
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_c;


void fn_830095D0(int *param_1)

{
  int *piStack_10;
  uint uStack_c;
  
  uStack_c = uStack_c & 0x3fffffff | 0x80000000;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 8;
  piStack_10 = param_1;
  (**(code **)(*param_1 + 0x44))((double)lbl_821AAD20,param_1,*param_1,&piStack_10,1);
  return;
}

