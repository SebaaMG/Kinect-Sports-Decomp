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
extern int fn_82FAB9C0();
extern int fn_83010FE0();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_38;
extern unsigned int uStack_3a;
extern unsigned int uStack_3b;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8303B5B8(int param_1,int param_2)

{
  int *piVar2;
  undefined8 uVar1;
  struct { undefined4 first; undefined4 second; } stack_pair_50;

  undefined4 uStack_48;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined4 uStack_38;
  
  piVar2 = (int *)fn_82FAB9C0((ulonglong)lbl_832642E0 + 4,*(undefined4 *)(param_1 + 0x10));
  if (piVar2 == (int *)0x0) {
    uVar1 = 0xf;
  }
  else {
    uStack_38 = *(undefined4 *)(param_1 + 0x10);
    stack_pair_50.second = *(undefined4 *)(param_2 + 0x34);
    uStack_48 = 0;
    stack_pair_50.first = 3;
    uStack_3c = 0;
    uStack_3b = 0;
    uStack_3a = 0;
    uVar1 = (**(code **)(*piVar2 + 0x1c))(piVar2,&stack_pair_50.first);
    if ((int)uVar1 == 1) {
      uVar1 = fn_83010FE0(lbl_832642E4,*(undefined4 *)(param_1 + 0x10),
                                *(undefined4 *)(param_2 + 0x34));
    }
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return uVar1;
}

