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
extern int fn_830066E0();
extern unsigned int lbl_821AAD20;


void fn_83000570(int *param_1,int param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  double dVar2;
  
  fn_830066E0();
  if ((param_1[0x19] != 0) && (param_2 == 0)) {
    bVar1 = true;
    dVar2 = (double)lbl_821AAD20;
    if (param_4 == 0x14) {
      dVar2 = (double)(float)param_1[0x16];
    }
    else if (param_4 == 0x15) {
      dVar2 = (double)(float)param_1[0x17];
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x48))(dVar2,param_1);
    }
  }
  return;
}

