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
extern int fn_82A40238();
extern int fn_82A40368();
extern int fn_82A40750();
extern int fn_82A42808();
extern int fn_82A428C8();
extern int fn_82A48BD8();


int fn_82A41BE0(int param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int aiStack_30 [12];
  
  piVar1 = (int *)(param_1 + 0x2c);
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))(piVar1);
  puVar2 = (undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x214) = param_3;
  aiStack_30[0] = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    aiStack_30[0] = fn_82A42808(puVar2);
  }
  if (-1 < aiStack_30[0]) {
    aiStack_30[0] = (**(code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,2,0x177,param_1 + 4);
    if (-1 < aiStack_30[0]) {
      aiStack_30[0] = fn_82A428C8(param_1 + 0x250,*puVar2);
      if (-1 < aiStack_30[0]) {
        aiStack_30[0] = fn_82A40750(param_1,0,param_1 + 0xb8);
        if (-1 < aiStack_30[0]) {
          aiStack_30[0] = fn_82A40750(param_1,0,param_1 + 0xb4);
          if (-1 < aiStack_30[0]) {
            aiStack_30[0] = fn_82A48BD8(param_1 + 0x3ea0,8);
            if (-1 < aiStack_30[0]) {
              *(undefined4 *)(param_1 + 0xa0) = 1;
              *(undefined4 *)(param_1 + 0xa4) = 1;
              goto LAB_82a41ce4;
            }
          }
        }
      }
    }
  }
  fn_82A40368(param_1);
LAB_82a41ce4:
  (**(code **)(*piVar1 + 0x14))(piVar1);
  fn_82A40238(aiStack_30);
  return aiStack_30[0];
}

