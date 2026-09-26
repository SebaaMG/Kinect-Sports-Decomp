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
extern int fn_82865170();
extern int fn_82866418();
extern int fn_82873A50();


undefined8 fn_82873BB8(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = fn_82873A50();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_3);
    if (-1 < iVar1) {
      return 0x20120000;
    }
    fn_82865170();
    fn_82866418();
  }
  return 0xffffffffa0120000;
}

