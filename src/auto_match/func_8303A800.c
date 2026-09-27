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
extern unsigned int uStack_39c;
extern unsigned int uStack_3a0;
extern unsigned int uStack_3a2;
extern unsigned int uStack_3a4;
extern unsigned int uStack_70;


undefined4 fn_8303A800(int *param_1,uint *param_2)

{
  int aiStack_3b0;
  undefined2 uStack_3a4;
  ushort uStack_3a2;
  undefined2 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_70;
  
  aiStack_3b0 = 0;
  uStack_3a0 = 0;
  uStack_39c = 0;
  uStack_3a4 = (undefined2)*param_2;
  (**(code **)(*param_1 + 0x28))(param_1,&aiStack_3b0);
  if (aiStack_3b0 == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = (uint)uStack_3a2;
    (**(code **)(*param_1 + 8))(param_1);
  }
  return uStack_70;
}

