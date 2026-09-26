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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_825321B0();
extern unsigned int stack0x00000020;


undefined8 fn_82331D28(double param_1,int param_2)

{
  undefined8 uVar1;
  float fStack_20;
  float fStack_1c;
  
  fn_825321B0(&stack0x00000020,&fStack_20,*(undefined4 *)(param_2 + 0x74));
  fStack_1c = fStack_1c - *(float *)(param_2 + 0xa4);
  fStack_20 = fStack_20 - *(float *)(param_2 + 0xa0);
  if ((param_1 < (double)SQRT(fStack_20 * fStack_20 + fStack_1c * fStack_1c)) ||
     (uVar1 = 1, *(float *)(param_2 + 0xd0) <= *(float *)(param_2 + 0xbc))) {
    uVar1 = 0;
  }
  return uVar1;
}

