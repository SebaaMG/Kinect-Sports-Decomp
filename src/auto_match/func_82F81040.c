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
extern int fn_82F69348();
extern int fn_82F69390();
extern int fn_82F69420();
extern int fn_82F69860();
extern int fn_82F698B8();
extern int fn_82F6FA38();
extern int fn_82F80D88();
extern int fn_82F812C0();


undefined8
fn_82F81040(int *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,int param_5,
             undefined8 param_6,undefined8 param_7,ulonglong param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  
  if ((param_1[1] & 0x66U) == 0) {
    if (*(int *)(param_5 + 0xc) != 0) {
      if ((((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[4])) && (0x19930522 < (uint)param_1[5]))
         && (*(code **)(param_1[7] + 8) != (code *)0x0)) {
        uVar3 = (**(code **)(param_1[7] + 8))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 & 0xff);
        return uVar3;
      }
      fn_82F80D88(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    }
  }
  else if ((*(int *)(param_5 + 4) != 0) && ((int)param_6 == 0)) {
    if (((param_1[1] & 0x20U) == 0) || (iVar4 = fn_82F69348(), iVar4 == 0)) {
      fn_82F69420(param_2,param_4,param_5);
      if (((*(int *)(param_5 + 0xc) != 0) && (iVar4 = *(int *)(param_4[2] + 4), iVar4 != 0)) &&
         (puVar2 = *(undefined4 **)(iVar4 + 8), puVar2 != (undefined4 *)0x0)) {
        fn_82F698B8(puVar2);
        iVar5 = fn_82F69860(*puVar2);
        if ((iVar5 != 0) && ((code *)puVar2[1] != (code *)0x0)) {
          (*(code *)puVar2[1])(*puVar2);
          *puVar2 = 0;
        }
        *(undefined4 *)(iVar4 + 8) = 0;
      }
    }
    else {
      iVar4 = fn_82F6FA38();
      if (*(int *)(iVar4 + 0x8c) == 0) {
        fn_82F812C0();
      }
      iVar4 = fn_82F6FA38();
      fn_82F69390(*(undefined4 *)(iVar4 + 0x8c),param_3);
      uVar1 = *param_4;
      iVar4 = fn_82F6FA38();
      *(ulonglong *)(*(int *)(iVar4 + 0x8c) + 0x30) = (ulonglong)uVar1;
      uVar1 = param_4[1];
      iVar4 = fn_82F6FA38();
      *(ulonglong *)(*(int *)(iVar4 + 0x8c) + 0x38) = (ulonglong)uVar1;
      uVar1 = param_4[2];
      iVar4 = fn_82F6FA38();
      *(ulonglong *)(*(int *)(iVar4 + 0x8c) + 0x40) = (ulonglong)uVar1;
      uVar3 = fn_82F69348();
      fn_82F69390(param_3,uVar3);
    }
  }
  return 1;
}

