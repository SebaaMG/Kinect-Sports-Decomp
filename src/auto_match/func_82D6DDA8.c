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
extern unsigned int lbl_821397E8;


undefined4 *
fn_82D6DDA8(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int aiStack_20 [3];
  int *piStack_14;
  
  param_1[2] = (int)param_5;
  *param_1 = &lbl_821397E8;
  *(undefined2 *)((int)param_1 + 6) = 1;
  aiStack_20[2] = param_2[2];
  iVar1 = *param_4;
  aiStack_20[0] = *(int *)(*param_2 + 0x10);
  aiStack_20[1] = 0xffffffff;
  iVar3 = iVar1 + 0x5a0;
  if (param_4[5] == 0) {
    iVar3 = iVar1 + 0x1a0;
  }
  piStack_14 = param_2;
  uVar2 = (**(code **)((uint)*(byte *)(*(int *)(aiStack_20[0] + 0xc) * 0x20 + iVar3 +
                                      *(int *)(*param_3 + 0xc)) * 0x14 + iVar1 + 0x9a0))
                    (aiStack_20,param_3,param_4,param_5);
  param_1[3] = uVar2;
  param_1[4] = 0;
  return param_1;
}

