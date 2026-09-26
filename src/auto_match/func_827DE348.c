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
extern int fn_827DE130();
extern unsigned int iStack00000014;


undefined4 * fn_827DE348(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iStack00000014;
  
  iStack00000014 = param_1;
  puVar1 = (undefined4 *)
           (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),0x28,param_1 + 0xc);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  fn_827DE130(param_1 + 0x24,puVar1 + 2,param_4);
  return puVar1;
}

