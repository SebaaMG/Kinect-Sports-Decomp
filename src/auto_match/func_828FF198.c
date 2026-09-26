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
extern int fn_828F9A60();
extern int fn_828FCAC0();
extern int fn_82F68CC0();


undefined8 fn_828FF198(int param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *apiStack_30 [12];
  
  if ((*(uint *)(param_1 + 0x3c) & 0x100000) == 0) {
    uVar2 = fn_828FCAC0(*(uint *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x5c),
                          *(int *)(param_1 + 0x60) << 2,param_2,param_1,0xffffffff828ff190,param_3);
  }
  else {
    uVar2 = fn_828F9A60(*(int *)(param_1 + 0x60) << 2,apiStack_30);
    if (-1 < (int)uVar2) {
      uVar2 = (**(code **)(*apiStack_30[0] + 0x10))();
      uVar1 = *(undefined4 *)(param_1 + 0x5c);
      uVar3 = (**(code **)(*apiStack_30[0] + 0xc))(apiStack_30[0]);
      fn_82F68CC0(uVar3,uVar1,uVar2);
      uVar2 = 0;
      *param_2 = apiStack_30[0];
    }
  }
  return uVar2;
}

