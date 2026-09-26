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
extern int fn_82AD2128();


void fn_82AC6388(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (param_2 + 0x17) * 4;
  if (*(int *)(iVar1 + param_1) != 0) {
    fn_82AD2128(param_3);
  }
  *(int *)(iVar1 + param_1) = param_3;
  *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | 0x2000000;
  return;
}

