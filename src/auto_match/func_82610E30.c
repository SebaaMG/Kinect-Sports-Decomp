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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5078();
extern int fn_827D50C0();
extern int fn_827D5108();
extern int fn_827D5158();
extern unsigned int iStack_2c;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82610E30(int param_1,code *param_2,undefined8 param_3)

{
  struct { undefined4 first; int second; } stack_pair_30;

  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
  }
  fn_827D5158(&stack_pair_30.first);
  fn_827D50C0(stack_pair_30.first,0);
  fn_827D5078(stack_pair_30.first,0);
  fn_827D5108(stack_pair_30.first,0);
  uStack_28 = 0;
  uStack_24 = 0;
  fn_82517978(&uStack_28,stack_pair_30.first,stack_pair_30.second,0);
  (*param_2)(&uStack_28,param_3);
  fn_827D5108(stack_pair_30.first,3);
  if (stack_pair_30.second != 0) {
    fn_822315A0();
  }
  return;
}

