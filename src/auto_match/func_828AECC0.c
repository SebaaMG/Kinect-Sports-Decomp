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
extern int fn_823AA970();
extern int fn_825089A0();
extern int fn_828995F0();


void fn_828AECC0(int *param_1,int param_2)

{
  int *piVar1;
  double dVar2;
  
  if (param_2 == 1) {
    param_1[0x22] = 1;
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  else if (param_2 == 2) {
    fn_823AA970();
    if (param_1[0x22] == 1) {
      (**(code **)(*param_1 + 0x18))(param_1);
      param_1[0x22] = 2;
    }
    else {
      fn_828995F0(param_1[0x14],param_1);
      param_1[0x22] = 2;
    }
  }
  piVar1 = (int *)fn_825089A0();
  dVar2 = (double)(**(code **)(*piVar1 + 8))();
  param_1[0x23] = (int)(float)dVar2;
  return;
}

