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
extern unsigned int *auStack_40;
extern int fn_82A29DE8();
extern int fn_82A2B4B8();


undefined8
fn_82C04F60(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 auStack_40 [8];
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  if (-1 < (int)uVar1) {
    iVar2 = fn_82A29DE8(param_2,0xffffffff80000000,1,0,3,0x60000080,0);
    param_1[0xb] = iVar2;
    if (iVar2 == -1) {
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
    }
    else {
      uVar1 = 0;
    }
    iVar2 = fn_82A2B4B8(param_1[0xb],auStack_40);
    if (iVar2 == 0) {
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = auStack_40[0];
    }
    if (-1 < (int)uVar1) {
      uVar1 = (**(code **)(*param_1 + 0x74))(param_1,param_4,param_5,param_6,param_7);
    }
  }
  return uVar1;
}

