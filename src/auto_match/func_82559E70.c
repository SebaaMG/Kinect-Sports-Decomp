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
extern int fn_825B99F8();
extern int fn_825B9A58();


void fn_82559E70(undefined8 param_1,longlong param_2,undefined8 param_3,float *param_4,int param_5
                  )

{
  double dVar1;
  
  if (param_5 == 0) {
    dVar1 = (double)fn_825B99F8(param_2 + 0x24);
    *param_4 = (float)dVar1;
    dVar1 = (double)fn_825B99F8(param_1,param_2 + 0x30);
    param_4[1] = (float)dVar1;
    dVar1 = (double)fn_825B99F8(param_1,param_2 + 0x3c);
    param_4[2] = (float)dVar1;
    dVar1 = (double)fn_825B99F8(param_1,param_2 + 0x48);
    param_4[3] = (float)dVar1;
  }
  else {
    fn_825B9A58(param_2 + 0x24,param_2 + 0x30,param_2 + 0x3c,param_2 + 0x48);
  }
  return;
}

