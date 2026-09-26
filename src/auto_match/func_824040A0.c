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
extern unsigned int *auStack_40;
extern int fn_82329730();
extern int fn_82359C18();
extern int fn_823F2F20();
extern unsigned int stack0x00000000;


void fn_824040A0(int *param_1)

{
  int iVar1;
  undefined1 auStack_40 [64];
  
  iVar1 = (**(code **)(*param_1 + 0x4c))();
  fn_82329730(iVar1 + 0x30,&stack0x00000000 + -0x40);
  fn_82359C18(&stack0x00000000 + -0x40);
  fn_823F2F20(iVar1 + 0x30,&stack0x00000000 + -0x40);
  fn_82359C18(&stack0x00000000 + -0x40);
  if ((undefined1 *)(iVar1 + 0xf8) != &stack0x00000000 + -0x40) {
    fn_82359C18((undefined1 *)(iVar1 + 0xf8));
    *(undefined4 *)(iVar1 + 0x108) = 0;
  }
  fn_82359C18(&stack0x00000000 + -0x40);
  if ((undefined1 *)(iVar1 + 0xe0) != &stack0x00000000 + -0x40) {
    fn_82359C18((undefined1 *)(iVar1 + 0xe0));
    *(undefined4 *)(iVar1 + 0xf0) = 0;
  }
  fn_82359C18(&stack0x00000000 + -0x40);
  return;
}

