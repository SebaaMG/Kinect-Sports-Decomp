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
extern int fn_82CC0710();
extern unsigned int lbl_83177478;
extern unsigned int lbl_83177488;


void fn_82CC0D88(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (3 < param_2) {
    param_2 = 3;
  }
  if (*(int *)(param_1 + 0x54c8) == 0) {
    param_2 = param_2 * 0x1c;
    *(undefined4 *)(param_1 + 0x553c) = *(undefined4 *)(&lbl_83177478 + param_2);
    *(undefined4 *)(param_1 + 0x5540) = *(undefined4 *)(param_2 + -0x7ce88b84);
    *(undefined4 *)(param_1 + 0x5544) = *(undefined4 *)(param_2 + -0x7ce88b80);
    *(undefined4 *)(param_1 + 0x5548) = *(undefined4 *)(param_2 + -0x7ce88b7c);
    *(undefined4 *)(param_1 + 0x554c) = *(undefined4 *)(&lbl_83177488 + param_2);
    *(undefined4 *)(param_1 + 0x5550) = *(undefined4 *)(param_2 + -0x7ce88b74);
    uVar1 = *(undefined4 *)(param_2 + -0x7ce88b70);
  }
  else {
    param_2 = param_2 * 0x1c;
    *(undefined4 *)(param_1 + 0x553c) = *(undefined4 *)(param_2 + -0x7ce88b18);
    *(undefined4 *)(param_1 + 0x5540) = *(undefined4 *)(param_2 + -0x7ce88b14);
    *(undefined4 *)(param_1 + 0x5544) = *(undefined4 *)(param_2 + -0x7ce88b10);
    *(undefined4 *)(param_1 + 0x5548) = *(undefined4 *)(param_2 + -0x7ce88b0c);
    *(undefined4 *)(param_1 + 0x554c) = *(undefined4 *)(param_2 + -0x7ce88b08);
    *(undefined4 *)(param_1 + 0x5550) = *(undefined4 *)(param_2 + -0x7ce88b04);
    uVar1 = *(undefined4 *)(param_2 + -0x7ce88b00);
  }
  *(undefined4 *)(param_1 + 0x5554) = uVar1;
  fn_82CC0710();
  return;
}

