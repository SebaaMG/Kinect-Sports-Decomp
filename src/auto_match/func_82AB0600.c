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
extern unsigned int *auStack_54;
extern int fn_82A29A38();
extern int fn_82AB0350();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82AB0600(ulonglong param_1,int param_2,uint param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,int param_7,int *param_8)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint auStack_54 [21];
  
  puVar1 = (uint *)*param_8;
  if (param_2 == 10) {
    uVar5 = 0;
    uVar4 = (param_3 == 0 ^ 1) + 0x12;
  }
  else {
    uVar5 = param_3;
    if (param_2 == 5) {
      uVar4 = 0x11;
      uVar3 = param_3 + 1;
      if (param_3 + 1 < *(uint *)(param_7 + 4)) {
        uVar3 = *(uint *)(param_7 + 4);
      }
      *(uint *)(param_7 + 4) = uVar3;
      iVar2 = *(int *)(*(int *)(param_7 + 0x10) + 4);
      if (iVar2 == 1) {
        param_4 = 0;
      }
      else if (iVar2 == 2) {
        param_4 = 1;
      }
    }
    else {
      fn_82A29A38();
      uVar4 = auStack_54[0];
    }
  }
  if (0xf < (param_1 & 0xffffffff)) {
    fn_82A29A38();
  }
  *(uint *)((int)((param_1 + 4 & 0xffffffff) << 3) + *(int *)(param_7 + 0x10)) = uVar4;
  *(uint *)((int)((param_1 & 0xffffffff) << 3) + *(int *)(param_7 + 0x10) + 0x1c) = uVar5;
  fn_82AB0350(param_6,param_5,auStack_54,&uStack_58,&uStack_5c,&uStack_60);
  *puVar1 = (((((uint)(param_4 == 0) << 2 | uStack_60 & 3) << 2 | uStack_5c & 3) << 2 |
             uStack_58 & 3) << 2 | auStack_54[0] & 3) << 0x10 | 0x16;
  puVar1[1] = (uVar4 & 0x3f) << 0x10 | uVar5 & 0xffff;
  *param_8 = (int)(puVar1 + 2);
  return;
}

