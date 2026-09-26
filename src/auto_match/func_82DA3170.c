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
extern int fn_82D839C0();
extern int fn_82DAF5A0();


int fn_82DA3170(int *param_1)

{
  int iVar1;
  
  if ((param_1[10] == 0) || (param_1[10] == 1)) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  if ((param_1[10] == 0) || (param_1[10] == 2)) {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  if ((param_1[10] == 0) || (param_1[10] == 3)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  if ((param_1[10] != 0) && (iVar1 = fn_82D839C0(param_1[3]), iVar1 != 0)) {
    fn_82DAF5A0(param_1[3]);
  }
  return param_1[10];
}

