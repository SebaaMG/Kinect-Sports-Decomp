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
extern unsigned int *auStack_230;
extern int fn_82CA3A98();
extern int fn_82F68CC0();


void fn_82CA4B98(int param_1,longlong param_2)

{
  ulonglong in_r10;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint in_stack_00000054;
  undefined1 auStack_230 [560];
  
  if (*(int *)(param_1 + 0x98) == 0) {
    fn_82CA3A98(param_1,auStack_230);
    uVar2 = (ulonglong)in_stack_00000054;
    puVar1 = auStack_230;
    if (0 < (int)in_stack_00000054) {
      do {
        fn_82F68CC0(param_2,puVar1,(in_r10 & 0x7ffffffe) << 1);
        uVar2 = uVar2 - 1;
        puVar1 = puVar1 + 0x20;
        param_2 = (ulonglong)*(uint *)(param_1 + 0x3d44) + param_2;
      } while (uVar2 != 0);
    }
  }
  else {
    fn_82CA3A98();
  }
  return;
}

