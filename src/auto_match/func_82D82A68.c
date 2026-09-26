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
extern unsigned int *auStack_20;
extern int fn_82DA6530();
extern unsigned int uStack_18;


int * fn_82D82A68(int param_1,int *param_2,undefined8 param_3)

{
  undefined1 auStack_20 [4];
  int *piStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = (undefined4)param_3;
  if (*(int *)(param_1 + 0x94) == 0) {
    (**(code **)(*param_2 + 0xc))(param_2,param_3);
  }
  else {
    auStack_20[0] = 0x24;
    piStack_1c = param_2;
    fn_82DA6530(*(undefined4 *)(param_1 + 0x88),auStack_20);
  }
  return param_2;
}

