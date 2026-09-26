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
extern int fn_8234D330();


void fn_825645B0(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  int aiStack_30 [12];
  
  (**(code **)(*param_2 + 4))(param_2,aiStack_30);
  while (param_3 != 0) {
    fn_8234D330(param_1,param_3 + 0x2e);
    if (*(ushort *)(param_3 + 0x2a) != 0xffff) {
      fn_825645B0(param_1,param_2,(uint)*(ushort *)(param_3 + 0x2a) * 0x34 + aiStack_30[0],1);
    }
    if ((param_4 == 0) || (*(ushort *)(param_3 + 0x2c) == 0xffff)) {
      param_3 = 0;
    }
    else {
      param_3 = (uint)*(ushort *)(param_3 + 0x2c) * 0x34 + aiStack_30[0];
    }
  }
  return;
}

