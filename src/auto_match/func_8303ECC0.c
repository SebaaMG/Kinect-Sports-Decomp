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
extern int fn_83009E78();
extern int fn_8302BBA8();
extern int fn_83032738();
extern unsigned int iStack_3c;
extern unsigned int uStack_2b;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_8303ECC0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  struct { undefined4 first; int second; } stack_pair_40;

  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  
  piVar1 = (int *)fn_83009E78();
  if (piVar1 != (int *)0x0) {
    uStack_2b = *(undefined1 *)(param_1 + 0x28);
    stack_pair_40.second = param_1 + 0x1c;
    uStack_30 = *(uint *)(param_1 + 0x14) >> 3 & 0x1f;
    uStack_2c = 0;
    stack_pair_40.first = param_2;
    uStack_38 = param_3;
    uStack_34 = fn_8302BBA8(param_1);
    (**(code **)(*piVar1 + 0x20))(piVar1,&stack_pair_40.first);
    piVar2 = (int *)fn_83032738();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x20))(piVar2,&stack_pair_40.first);
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

