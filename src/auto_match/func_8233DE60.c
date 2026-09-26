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
extern unsigned int fStack_18;
extern int fn_8233E9E0();
extern int fn_8233F530();
extern unsigned int uStack_14;
extern unsigned int uStack_20;


void fn_8233DE60(double param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uStack_20;
  float fStack_18;
  undefined4 uStack_14;
  
  fStack_18 = (float)param_1;
  uStack_14 = param_4;
  fn_8233E9E0(param_2 + 0xc0,&fStack_18);
  fn_8233F530(*(int *)(param_2 + 0xc0),*(int *)(param_2 + 0xc4),
                    *(int *)(param_2 + 0xc4) - *(int *)(param_2 + 0xc0) >> 3,uStack_20);
  return;
}

