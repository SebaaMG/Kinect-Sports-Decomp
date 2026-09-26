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
extern unsigned int iStack_cc;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;


ulonglong fn_82C49288(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffffffffffd;
  }
  else if (*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) {
    if ((*(uint *)(param_1 + 0x5614) & 4) == 0) {
      uVar1 = -(ulonglong)(*(int *)(param_1 + 0x10) == 0) & 0xfffffffffffffff9;
    }
    else {
      uStack_d0 = *(undefined4 *)(param_1 + 0x5610);
      uStack_c0 = *(undefined4 *)(param_1 + 0x5598);
      uStack_b4 = *(undefined4 *)(param_1 + 0x9c);
      uStack_b8 = (uint)(*(int *)(param_1 + 0x5580) != 0);
      uStack_b0 = *(undefined4 *)(param_1 + 0xa0);
      uStack_ac = *(undefined4 *)(param_1 + 0x5634);
      uStack_c8 = *(undefined4 *)(param_1 + 0xb148);
      uStack_a8 = *(undefined4 *)(param_1 + 0x5638);
      uStack_a4 = *(undefined4 *)(param_1 + 0x563c);
      uStack_a0 = *(undefined4 *)(param_1 + 0x5640);
      uStack_98 = *(undefined4 *)(param_1 + 0x559c);
      uStack_94 = *(undefined4 *)(param_1 + 0x55a4);
      uStack_90 = *(undefined4 *)(param_1 + 0x55a0);
      uStack_8c = *(undefined4 *)(param_1 + 0x55a8);
      uStack_c4 = 2;
      uStack_9c = (undefined4)
                  ((-(ulonglong)*(uint *)(param_1 + 0x39f4) &
                    ~(ulonglong)*(uint *)(param_1 + 0x39f4) & 0xffffffff) >> 0x1f);
      iStack_cc = param_1;
      uStack_bc = param_2;
      uVar1 = (**(code **)(*(int *)(param_1 + 0x6070) + 0xc0))(&uStack_d0);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

