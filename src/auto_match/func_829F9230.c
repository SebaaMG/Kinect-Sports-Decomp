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
extern int fn_8264D6C0();


void fn_829F9230(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  
  puVar1 = *(undefined4 **)(param_1 + 0x70);
  puVar2 = (undefined4 *)(param_4 + -4);
  puVar3 = puVar1 + 7;
  puVar1[4] = param_2;
  lVar4 = 8;
  puVar1[6] = param_3;
  do {
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar1[5] = param_5;
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1[2] = in_stack_00000054;
  puVar1[3] = in_stack_0000005c;
  puVar1[7] = param_8;
  fn_8264D6C0((ulonglong)*(uint *)(param_1 + 0x70),
               ((ulonglong)*(uint *)(param_1 + 0x6c) & 0x3fffffc) +
               (ulonglong)*(uint *)(param_1 + 0x70),1);
  return;
}

