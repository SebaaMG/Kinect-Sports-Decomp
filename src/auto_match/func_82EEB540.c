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
extern int fn_82EEB288();
extern int fn_82EEB480();
extern int fn_82EEB4D8();


ulonglong fn_82EEB540(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  int aiStack_40 [16];
  
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      fn_82EEB4D8();
    }
    *(int *)(param_1 + 0x20) = param_5;
    if ((param_5 != 0) && (1 < param_4)) {
      param_4 = 1;
    }
    *(int *)(param_1 + 0x10) = param_3;
    uVar1 = param_2 + 0x27U & 0xffffffe0;
    *(uint *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = 0x18;
    *(uint *)(param_1 + 0x14) = param_2 + 7U & 0xfffffff8;
    *(undefined4 *)(param_1 + 0x2c) = 8;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(uint *)(param_1 + 0xc) = uVar1 * param_3 + 0x30;
    *(undefined4 *)(param_1 + 0x24) = 1;
    while (param_4 != 0) {
      param_4 = param_4 - 1;
      aiStack_40[0] = fn_82EEB288(param_1);
      if (aiStack_40[0] == 0) {
        fn_82EEB4D8(param_1);
        break;
      }
      fn_82EEB480(param_1,param_1,aiStack_40);
    }
    uVar2 = -(ulonglong)(*(int *)(param_1 + 0x24) == 0) & 0xffffffff8007000e;
  }
  return uVar2;
}

