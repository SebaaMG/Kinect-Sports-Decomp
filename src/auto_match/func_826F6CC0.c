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
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_8268BEA8();


undefined8 fn_826F6CC0(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  
  fn_8268B330();
  puVar1 = (uint *)(*param_2 & 0xfffffffc);
  if ((4 < (*puVar1 & 0x7fffffff)) &&
     (iVar2 = thunk_FUN_82f65ac0((int)puVar1 + (*puVar1 & 0x7fffffff) + 4,0xffffffff8200c740),
     iVar2 == 0)) {
    fn_8268BEA8(param_1);
    fn_8268B610(param_1,(uint *)(*param_2 & 0xfffffffc) + 2,
                      ((ulonglong)*(uint *)(*param_2 & 0xfffffffc) & 0x7fffffff) - 4);
    fn_8268B610(param_1,0xffffffff8200c748,0xffffffffffffffff);
  }
  return param_1;
}

