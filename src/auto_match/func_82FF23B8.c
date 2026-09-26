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
extern unsigned int *auStack_1c;
extern int fn_82FF2248();
extern int fn_82FF22B8();
extern unsigned int iStack_20;


void fn_82FF23B8(int param_1,undefined8 param_2)

{
  int iStack_20;
  undefined1 auStack_1c [12];
  
  fn_82FF2248(&iStack_20,param_1,param_2);
  if (iStack_20 != *(int *)(param_1 + 4)) {
    fn_82FF22B8(auStack_1c,param_1,&iStack_20);
  }
  return;
}

