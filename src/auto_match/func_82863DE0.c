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
extern unsigned int *auStack_50;
extern int fn_8280A5D8();
extern int fn_82810280();
extern int fn_82810328();
extern int fn_82810360();
extern int fn_82810470();
extern int fn_82810B78();
extern int fn_82810BE8();
extern unsigned int lbl_821AAD20;


double fn_82863DE0(double param_1,int param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  fn_82810328(param_3,0xffffffff832116c0,auStack_40);
  dVar2 = (double)fn_82810BE8(auStack_40);
  dVar2 = (double)fn_8280A5D8((double)(float)(dVar2 * dVar2));
  if (param_2 == 0) {
    dVar2 = (double)(float)(dVar2 * param_1);
  }
  else if (param_2 == 1) {
    fn_82810360(0xffffffff832116cc,auStack_50);
    iVar1 = fn_82810470(auStack_50);
    if (iVar1 == 0) {
      fn_82810B78(auStack_50,auStack_50);
    }
    dVar3 = (double)fn_82810280(param_5,auStack_50);
    dVar2 = -(double)(float)((double)(float)(dVar3 * dVar2) * param_1);
  }
  else {
    dVar2 = (double)lbl_821AAD20;
  }
  return dVar2;
}

