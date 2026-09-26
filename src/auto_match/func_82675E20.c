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
extern int fn_8267A0E0();


undefined8
fn_82675E20(int *param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1[7] != 0) && (*(int *)(param_1[7] + 0xd8) != 0)) {
    (**(code **)(*param_1 + 0x44))();
    param_1[8] = (int)param_2;
    param_1[9] = (int)param_3;
    param_5 = param_5 + 1;
    uVar3 = fn_8267A0E0(param_2,param_3,param_5,0,0x4900002,param_1 + 10);
    iVar1 = (int)param_3 >> 1;
    iVar2 = (int)param_2 >> 1;
    uVar4 = fn_8267A0E0(iVar2,iVar1,param_5,0,0x4900002,param_1 + 0xf);
    uVar5 = fn_8267A0E0(iVar2,iVar1,param_5,0,0x4900002,param_1 + 0x12);
    uVar5 = uVar5 | uVar4 | uVar3;
    if (param_4 == 1) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      uVar3 = fn_8267A0E0(param_2,param_3,param_5,0,0x4900002,param_1 + 0x15);
      uVar5 = uVar3 | uVar5;
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    if (uVar5 == 0) {
      return 1;
    }
    (**(code **)(*param_1 + 0x44))(param_1);
  }
  return 0;
}

