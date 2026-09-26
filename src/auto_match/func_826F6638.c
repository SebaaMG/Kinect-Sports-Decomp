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
extern unsigned int *auStack_40;
extern int fn_8268CC00();
extern int fn_826E7BF8();


void fn_826F6638(int param_1,longlong param_2)

{
  int aiStack_50 [4];
  undefined1 auStack_40 [64];
  
  aiStack_50[0] = param_1 + 5;
  aiStack_50[2] = 0;
  aiStack_50[1] = 0xffffffff;
  aiStack_50[3] = 0;
  fn_8268CC00(auStack_40);
  if (aiStack_50[3] != 0) {
    aiStack_50[2] = aiStack_50[2] + 1;
  }
  aiStack_50[2] = aiStack_50[2] + 4;
  aiStack_50[3] = 0;
  fn_826E7BF8(aiStack_50,auStack_40);
  *(byte *)(param_1 + 4) = -((ulonglong)(uint)aiStack_50[2] < param_2 - 1U) & 1;
  return;
}

