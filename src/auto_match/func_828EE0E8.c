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
extern int fn_828EC900();
extern int fn_82F68CC0();


void fn_828EE0E8(int param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 in_stack_00000057;
  undefined1 in_stack_0000005f;
  undefined1 in_stack_00000067;
  undefined1 in_stack_0000006f;
  undefined1 in_stack_00000077;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000084;
  undefined1 in_stack_0000008f;
  undefined1 in_stack_00000097;
  
  puVar2 = (undefined1 *)(param_3 + -1);
  lVar3 = 8;
  puVar1 = (undefined1 *)(param_1 + 0x1e7);
  *(undefined4 *)(param_1 + 0x1e4) = param_2;
  *(undefined1 *)(param_1 + 0x148) = param_6;
  *(undefined1 *)(param_1 + 0x149) = param_7;
  *(undefined1 *)(param_1 + 0x1e1) = 0;
  *(undefined1 *)(param_1 + 0x1e2) = 1;
  *(undefined4 *)(param_1 + 0x224) = 1;
  *(undefined1 *)(param_1 + 0x14a) = param_8;
  *(undefined1 *)(param_1 + 0x14c) = in_stack_00000057;
  *(undefined1 *)(param_1 + 0x14b) = in_stack_0000005f;
  *(undefined1 *)(param_1 + 0x14d) = in_stack_00000067;
  *(undefined1 *)(param_1 + 0x14e) = in_stack_0000006f;
  *(undefined1 *)(param_1 + 0x14f) = in_stack_00000077;
  *(undefined4 *)(param_1 + 0x150) = in_stack_0000007c;
  *(undefined4 *)(param_1 + 0x154) = in_stack_00000084;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82F68CC0(param_1 + 0x1f0,param_4,0x10);
  fn_82F68CC0(param_1 + 0x200,param_5,0x24);
  *(undefined1 *)(param_1 + 0x228) = in_stack_0000008f;
  *(undefined1 *)(param_1 + 0x229) = in_stack_00000097;
  fn_828EC900(param_1);
  return;
}

