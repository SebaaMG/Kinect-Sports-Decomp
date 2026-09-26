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
extern unsigned int *auStack_c;
extern int fn_82800648();
extern unsigned int lbl_821AAD20;


double fn_827F64C8(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float *pfStack_10;
  undefined4 auStack_c [3];
  
  auStack_c[0] = 0;
  pfStack_10 = (float *)0x0;
  fn_82800648(param_1 + 0x24,3,param_2,auStack_c,&pfStack_10);
  fVar1 = lbl_821AAD20;
  if (pfStack_10 != (float *)0x0) {
    fVar1 = *pfStack_10;
  }
  return (double)fVar1;
}

