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
extern int fn_82E85268();
extern int fn_82E85448();
extern int fn_82E8D3A8();
extern int fn_82E8E7A8();
extern int fn_82F0D688();
extern int fn_82F0DB60();
extern int fn_82F0DC50();
extern unsigned int uStack_70;


void fn_82E8ECF8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined8 param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 in_stack_00000054;
  int in_stack_0000005c;
  undefined4 uStack_70;
  int aiStack_6c [27];
  
  *(int *)(param_1 + 0x2a0) = (int)param_3;
  *(int *)(param_1 + 0x2a4) = (int)param_3;
  *(int *)(param_1 + 0x590) = (int)param_4;
  *(undefined4 *)(param_1 + 0x618) = in_stack_00000054;
  *(int *)(param_1 + 0x6de8) = in_stack_0000005c;
  *(int *)(param_1 + 0xaf0) = (int)param_2;
  *(uint *)(param_1 + 0x1f78) = (uint)((int)param_5 == 0);
  iVar2 = fn_82E8D3A8();
  iVar1 = *(int *)(iVar2 + 0x6de8);
  if (iVar1 == 1) {
    *(undefined4 *)(iVar2 + 0x8f8) = *(undefined4 *)(iVar2 + 0x8f0);
    *(undefined4 *)(iVar2 + 0x8fc) = *(undefined4 *)(iVar2 + 0x8e8);
  }
  if (*(int *)(param_1 + 0x6f50) == 0) {
    *(int *)(param_1 + 0x6de4) = 1 - in_stack_0000005c;
  }
  else {
    *(int *)(param_1 + 0x6de4) = in_stack_0000005c;
  }
  if (*(int *)(param_1 + 0x6d6c) == 0) {
    if (*(int *)(param_1 + 28000) != 0) {
      *(undefined4 *)(param_1 + 0x6d64) = 0;
      *(undefined4 *)(param_1 + 0x6d68) = 1;
      goto LAB_82e8ee30;
    }
    *(undefined4 *)(param_1 + 0x6d68) = 0;
  }
  else if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xaf0) == 1) {
      *(undefined4 *)(param_1 + 0x6d68) = 1;
      if (*(int *)(param_1 + 0x4f34) != 0) {
        *(undefined4 *)(param_1 + 0x6d64) = 0;
        goto LAB_82e8ee30;
      }
    }
    else {
      if (*(int *)(param_1 + 0xaf0) != 2) goto LAB_82e8ee30;
      *(undefined4 *)(param_1 + 0x6d68) = 1;
      if (*(int *)(param_1 + 0x4f38) != 0) {
        *(undefined4 *)(param_1 + 0x6d64) = 0;
        goto LAB_82e8ee30;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x6d68) = 1;
    if (*(int *)(param_1 + 0x4f24) == 0) {
      *(undefined4 *)(param_1 + 0x6d64) = 0;
      goto LAB_82e8ee30;
    }
  }
  *(undefined4 *)(param_1 + 0x6d64) = 1;
LAB_82e8ee30:
  if (*(int *)(param_1 + 0xaf0) == 1) {
    fn_82F0DB60(param_1,*(undefined4 *)(param_1 + 0x6e08));
  }
  else if (*(int *)(param_1 + 0xaf0) == 2) {
    uStack_70 = 0;
    aiStack_6c[0] = 0;
    fn_82E85268(param_1,&uStack_70,aiStack_6c,*(undefined4 *)(param_1 + 0x1acc),
                  *(undefined4 *)(param_1 + 0x84c));
    fn_82E85448(param_1,uStack_70,aiStack_6c[0] == 7);
    uVar3 = ((ulonglong)*(uint *)(param_1 + 0x6e08) -
            (longlong)
            ((int)(*(int *)(param_1 + 0x854) * *(int *)(param_1 + 0x850) *
                  *(uint *)(param_1 + 0x6e08)) >> 8)) - 1;
    fn_82F0DB60(param_1);
    fn_82F0DC50(param_1,((uVar3 & 0xffffffff) >> 0x1f) - 1 & uVar3);
  }
  if (in_stack_0000005c == 0) {
    fn_82F0D688(param_1,1);
  }
  fn_82E8E7A8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (in_stack_0000005c == 0) {
    *(undefined4 *)(param_1 + 0xaf4) = *param_6;
  }
  else {
    *(undefined4 *)(param_1 + 0xaf8) = *param_6;
    if (in_stack_0000005c == 1) {
      fn_82F0D688(param_1,0);
    }
  }
  *param_8 = (0x27U - *(int *)(*(int *)(param_1 + 0x1ebc) + 0x10) >> 3) +
             *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
  return;
}

