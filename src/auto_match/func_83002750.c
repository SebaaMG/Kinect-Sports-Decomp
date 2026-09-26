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
extern int fn_83001FE8();
extern int fn_83006600();
extern unsigned int lbl_821AAD20;


void fn_83002750(undefined8 param_1,double param_2,double param_3,int param_4)

{
  char cVar1;
  double dVar2;
  
  dVar2 = (double)lbl_821AAD20;
  fn_83006600(param_1,dVar2,dVar2);
  if ((((param_2 != dVar2) || (param_3 != dVar2)) || (*(int *)(param_4 + 0x68) != 0)) &&
     (cVar1 = fn_83001FE8(param_4), cVar1 != '\0')) {
    *(float *)(*(int *)(param_4 + 0x68) + 0x24) = (float)param_2;
    *(float *)(*(int *)(param_4 + 0x68) + 0x28) = (float)param_3;
  }
  return;
}

