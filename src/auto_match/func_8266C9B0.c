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
extern int fn_8266C8A0();
extern int fn_8267C4F0();


void fn_8266C9B0(undefined8 param_1)

{
  undefined4 *puVar1;
  int aiStack_10 [4];
  
  puVar1 = (undefined4 *)fn_8266C8A0(aiStack_10,param_1);
  (**(code **)(*(int *)*puVar1 + 0x94))();
  if (aiStack_10[0] != 0) {
    fn_8267C4F0();
  }
  return;
}

