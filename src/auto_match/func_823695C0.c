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
extern int fn_822CCA50();
extern unsigned int lbl_821CC160;


undefined8
fn_823695C0(undefined8 param_1,double param_2,int param_3,int param_4,int param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  
  if (((*(int *)(param_3 + 0x4c0) == 0) &&
      (iVar1 = (*(int *)(param_4 + 0x2c) * 8 + param_5 + 0x412) * 4,
      *(float *)(iVar1 + param_3) <= lbl_821CC160)) &&
     (cVar2 = fn_822CCA50(*(undefined4 *)(param_4 + 0x18),"cleanongoal" + param_5 * 0xc4,
                                param_5,param_8,0), cVar2 != '\0')) {
    *(float *)(iVar1 + param_3) = (float)param_2;
    return 1;
  }
  return 0;
}

