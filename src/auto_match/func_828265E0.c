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
extern int fn_82821678();
extern int fn_828279E8();


void fn_828265E0(int param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  fn_828279E8(param_1,aiStack_40);
  iVar1 = fn_82821678(param_3,param_2,*(undefined4 *)(param_1 + 0x48),
                            *(undefined4 *)(aiStack_40[0] + 0x388),
                            *(undefined4 *)(aiStack_40[0] + 0x3bc));
  if (iVar1 < 0) {
    *param_4 = 0;
  }
  else {
    *param_4 = iVar1 + (int)param_2;
  }
  return;
}

