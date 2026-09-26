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
extern int fn_82637550();


void fn_82639DB0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar5 = (uint)*(float *)(param_1 + 0x3218);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = (ulonglong)(uint)(int)*(float *)(param_1 + 0x321c);
  *(uint *)(param_1 + 0x3234) = uVar1;
  *(uint *)(param_1 + 0x3238) = uVar2;
  uVar7 = (int)*(float *)(param_1 + 0x3220) + uVar5;
  *(uint *)(param_1 + 0x323c) = uVar3;
  *(uint *)(param_1 + 0x3240) = uVar4;
  uVar8 = (uint)(int)*(float *)(param_1 + 0x3224) + uVar6;
  if (*(int *)(param_1 + 0x2f00) != 0) {
    if ((int)uVar5 <= (int)uVar1) {
      uVar5 = uVar1;
    }
    if ((int)*(float *)(param_1 + 0x321c) <= (int)uVar2) {
      uVar6 = (ulonglong)uVar2;
    }
    if ((int)uVar3 <= (int)uVar7) {
      uVar7 = uVar3;
    }
    if ((int)uVar4 <= (int)uVar8) {
      uVar8 = (ulonglong)uVar4;
    }
  }
  *(uint *)(param_1 + 0x28c4) =
       uVar5 & 0x7fff |
       (uint)(uVar6 << 0x10) & 0x7fff0000 | *(uint *)(param_1 + 0x28c4) & 0x80008000;
  *(uint *)(param_1 + 0x28c8) =
       uVar7 & 0x7fff |
       (uint)((uVar8 & 0xffffffff) << 0x10) & 0x7fff0000 | *(uint *)(param_1 + 0x28c8) & 0x80008000;
  fn_82637550();
  return;
}

