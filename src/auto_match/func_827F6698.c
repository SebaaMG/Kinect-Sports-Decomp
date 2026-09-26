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
extern unsigned int *auStack_20;
extern unsigned int fStack_30;
extern int fn_827FEF40();
extern int fn_82809D40();
extern int fn_8280DF98();
extern int fn_8280E168();


void fn_827F6698(longlong param_1)

{
  int aiStack_40 [2];
  float afStack_38 [2];
  float fStack_30;
  undefined1 auStack_20 [32];
  
  fn_827FEF40(param_1 + 0x24,aiStack_40);
  fn_8280E168((double)*(float *)(aiStack_40[0] + 0xc),(double)*(float *)(aiStack_40[0] + 0x10),
               (double)*(float *)(aiStack_40[0] + 0x14),(double)*(float *)(aiStack_40[0] + 0x18),
               auStack_20);
  fn_8280DF98(auStack_20,0xffffffff8219609c,afStack_38);
  fn_82809D40((double)afStack_38[0],(double)fStack_30);
  return;
}

