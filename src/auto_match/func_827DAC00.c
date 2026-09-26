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
extern int fn_827E36D0();
extern int fn_827E3840();
extern int fn_827E3AF8();
extern int fn_82F63CA0();


void fn_827DAC00(int param_1,ulonglong param_2)

{
  uint *puVar1;
  
  fn_827E3840(param_2,0);
  puVar1 = *(uint **)(param_1 + 4);
  while( true ) {
    if (puVar1 == *(uint **)(param_1 + 8)) {
      return;
    }
    if ((ulonglong)*puVar1 == (param_2 & 0xffffffff)) break;
    puVar1 = puVar1 + 1;
  }
  fn_82F63CA0(puVar1,puVar1 + 1,(*(int *)(param_1 + 8) - (int)(puVar1 + 1) >> 2) << 2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  if ((param_2 & 0xffffffff) == 0) {
    return;
  }
  fn_827E3AF8(param_2);
  fn_827E36D0(param_2);
  return;
}

