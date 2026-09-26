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
extern int fn_8267C498();
extern int fn_8269CEE0();


int fn_826CC300(longlong param_1)

{
  int aiStack_20 [4];
  
  fn_8269CEE0(aiStack_20,param_1 + 0x30);
  if (aiStack_20[0] != 0) {
    *(int *)(aiStack_20[0] + 4) = *(int *)(aiStack_20[0] + 4) + 1;
    fn_8267C498(aiStack_20[0]);
    fn_8267C498(aiStack_20[0]);
  }
  return aiStack_20[0];
}

