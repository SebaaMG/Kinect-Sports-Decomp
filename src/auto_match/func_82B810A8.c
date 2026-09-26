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
extern int fn_82F6DF48();
extern int fn_82F6DF80();
extern int fn_82F6E018();
extern unsigned int lbl_82005710;


double fn_82B810A8(double param_1,double param_2)

{
  int iVar1;
  double dVar2;
  
  if (param_1 == -0.0) {
    param_1 = lbl_82005710;
  }
  if (param_2 == -0.0) {
    param_2 = lbl_82005710;
  }
  iVar1 = fn_82F6E018(param_1);
  if (iVar1 == 4) {
    param_2 = (double)fn_82F6DF80(param_2);
  }
  else if (iVar1 != 0x200) {
    dVar2 = param_2;
    iVar1 = fn_82F6E018(param_2);
    param_2 = param_1;
    param_1 = dVar2;
    if (iVar1 == 4) {
      param_2 = (double)fn_82F6DF80(param_2);
    }
    else if (iVar1 != 0x200) {
      return param_2 * param_1;
    }
  }
  dVar2 = (double)fn_82F6DF48(param_1,param_2);
  return dVar2;
}

