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
extern unsigned int *auStack_30;
extern int fn_82810280();
extern int fn_82810308();
extern int fn_82810328();
extern unsigned int lbl_821AAD20;


undefined8 fn_827EC7C0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_30 [32];
  
  fn_82810328(param_2,param_3,auStack_30);
  dVar1 = (double)fn_82810280(auStack_30,param_4);
  dVar1 = (double)(float)(dVar1 * param_1);
  if (((double)lbl_821AAD20 < dVar1) &&
     (dVar2 = (double)fn_82810308(auStack_30), dVar2 <= (double)(float)(dVar1 * dVar1))) {
    return 1;
  }
  return 0;
}

