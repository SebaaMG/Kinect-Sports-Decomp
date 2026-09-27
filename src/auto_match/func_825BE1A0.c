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
extern int fn_82522588();
extern int fn_8265CA20();
extern int fn_827D50B8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_825BE1A0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  struct { int first; int second; } stack_pair_30;

  
  fn_82522588(&stack_pair_30.first,param_2 + 0x134);
  *(int *)(stack_pair_30.first + 0x1ec) = *(int *)(stack_pair_30.first + 0x1ec) + 1;
  iVar1 = fn_827D50B8(*param_1);
  if ((iVar1 != 0) && (uVar2 = fn_827D50B8(*param_1), *(int *)(stack_pair_30.first + 0x1f0) == 0)) {
    *(undefined4 *)(stack_pair_30.first + 0x1f0) = uVar2;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x138) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(param_2);
  }
  if (stack_pair_30.second != 0) {
    fn_822315A0();
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

