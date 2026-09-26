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
extern unsigned int *auStack_50;
extern int fn_82A87790();
extern int fn_82A87868();
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;


undefined8
fn_82A87DE0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [4];
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  
  uVar2 = 0;
  uStack_4c = 0;
  uStack_4a = 0;
  uStack_48 = 0;
  cVar1 = fn_82A87790(param_1,param_2,auStack_50);
  if ((cVar1 != '\0') &&
     (cVar1 = fn_82A87868(param_1,param_2,auStack_50,param_3,param_4,param_5), cVar1 != '\0')) {
    uVar2 = 1;
  }
  return uVar2;
}

