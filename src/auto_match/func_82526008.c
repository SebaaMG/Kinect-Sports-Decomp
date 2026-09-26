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
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern int fn_8280ACD8();
extern int fn_8280B1E8();
extern int fn_8280CB70();


void fn_82526008(void)

{
  float *in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [112];
  
  fn_8280ACD8(auStack_b0);
  fn_8280B1E8((double)*in_r6,(double)in_r6[1],(double)in_r6[2],auStack_b0);
  fn_8280CB70(in_r8,auStack_b0,auStack_70);
  fn_8280CB70(in_r7,auStack_70,in_r9);
  return;
}

