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
extern int fn_82817C98();
extern int fn_828182C0();


undefined8 fn_827FE3A0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int aiStack_20 [4];
  
  if (((*param_1 != 0) && (iVar1 = *(int *)(*param_1 + 0x44), iVar1 != 0)) &&
     (fn_828182C0(iVar1,param_2,0,aiStack_20), aiStack_20[0] != 0)) {
    fn_82817C98(aiStack_20[0],param_3);
    return 1;
  }
  return 0;
}

