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
extern int fn_82BE5240();
extern int fn_82BE64E0();
extern int fn_82BE6B58();
extern int fn_82BEE460();


undefined8
fn_82BEE670(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
             undefined8 param_5)

{
  int iVar1;
  
  if ((((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) ||
     ((param_4 & 0xffffffff) == 0)) {
    fn_82BE5240(param_1,0x44c,0xffffffff82196582);
  }
  else {
    iVar1 = fn_82BE6B58(param_1,param_2,0x200,0x200);
    if ((iVar1 != 0) && (iVar1 = fn_82BEE460(param_1,param_3,param_4,param_5), iVar1 != 0)) {
      fn_82BE64E0(param_1,2);
      return 1;
    }
  }
  return 0;
}

