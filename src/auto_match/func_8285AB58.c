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
extern int fn_8280AC48();
extern int fn_8280ACD8();
extern int fn_8280CED8();


void fn_8285AB58(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  param_2 = *(int *)(param_1 + 100) + param_2;
  iVar1 = param_2 + 0x10;
  *(undefined4 *)(param_2 + 0x94) = param_3;
  fn_8280AC48(iVar1,param_2 + 0x50);
  if (*(int *)(param_2 + 0x94) == 0) {
    fn_8280ACD8(iVar1);
  }
  else {
    fn_8280CED8(*(int *)(param_2 + 0x94),iVar1);
  }
  return;
}

