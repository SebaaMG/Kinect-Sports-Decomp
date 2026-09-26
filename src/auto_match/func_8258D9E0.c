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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern int fn_82230300();
extern int fn_8258E488();


void fn_8258D9E0(double param_1,double param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 auStack_40 [8];
  float fStack_38;
  float fStack_34;
  
  piVar1 = (int *)fn_8258E488(auStack_40,param_3 + 0x1b0,param_4);
  if (*piVar1 != *(int *)(param_3 + 0x1b4)) {
    fStack_38 = (float)param_1;
    fStack_34 = (float)param_2;
    *(ulonglong *)(*piVar1 + 0x30) = CONCAT44(fStack_38,fStack_34);
  }
  fn_82230300(param_4,1,0);
  return;
}

