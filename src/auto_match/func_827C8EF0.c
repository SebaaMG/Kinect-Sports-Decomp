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
extern int fn_82A28E60();
extern int fn_82A2A360();
extern int fn_82F681D0();
extern int fn_82F68240();


void fn_827C8EF0(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if ((param_2 & 0xffffffff) != 0) {
    uVar1 = fn_82A2A360();
    iVar2 = fn_82A28E60(uVar1,0,param_2);
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)fn_82F68240();
      thunk_FUN_82a2b798();
      uVar4 = fn_82F681D0();
      *puVar3 = uVar4;
    }
  }
  return;
}

