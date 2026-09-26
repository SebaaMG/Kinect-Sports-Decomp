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
extern int fn_827F2278();
extern int fn_827F22D0();
extern int fn_827F3580();
extern unsigned int lbl_821AAD20;


void fn_827F36A8(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  
  if (param_3 == *(int *)((int)param_2 + 0x104)) {
    return;
  }
  cVar2 = fn_827F22D0(param_1,param_1);
  if (cVar2 == '\0') {
    cVar2 = fn_827F2278(param_2);
    bVar1 = false;
    if (cVar2 == '\0') goto LAB_827f36ec;
  }
  bVar1 = true;
LAB_827f36ec:
  *(int *)((int)param_2 + 0x104) = param_3;
  if (bVar1) {
    fn_827F3580((double)lbl_821AAD20,param_2);
  }
  return;
}

