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
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_82365BD8();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_822EA610(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  struct { uint first; int second; } stack_pair_50;

  struct { uint first; int second; } stack_pair_48;


  uVar1 = param_1[1];
  for (uVar5 = (ulonglong)*param_1; (uVar5 & 0xffffffff) != (ulonglong)uVar1; uVar5 = uVar5 + 8) {
    fn_82365BD8(&stack_pair_48.first,uVar5);
    uVar2 = param_2[1];
    for (uVar6 = (ulonglong)*param_2; (uVar6 & 0xffffffff) != (ulonglong)uVar2; uVar6 = uVar6 + 8) {
      fn_82365BD8(&stack_pair_50.first,uVar6);
      uVar4 = (ulonglong)stack_pair_50.first;
      uVar3 = fn_822C7578((ulonglong)stack_pair_48.first + 0x40,uVar4 + 4);
      fn_82230218(uVar3,uVar4 + 4,0,0xffffffffffffffff);
      if (stack_pair_50.second != 0) {
        fn_822315A0();
      }
    }
    if (stack_pair_48.second != 0) {
      fn_822315A0();
    }
  }
  return;
}
