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
extern int fn_8277CA30();
extern int fn_82F63CA0();


undefined4 * fn_8277E150(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  if (param_2 != param_1) {
    uVar1 = param_2[1];
    fn_8277CA30(param_1,(ulonglong)uVar1,0);
    param_1[1] = uVar1;
    if (uVar1 != 0) {
      fn_82F63CA0(*param_1,*param_2,(ulonglong)uVar1 * 0xc);
    }
  }
  return param_1;
}

