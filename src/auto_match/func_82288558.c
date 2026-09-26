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
extern int fn_826728E8();
extern unsigned int iStack_3c;
extern unsigned int lbl_831CEE78;
extern unsigned int lbl_831CEE7C;
extern unsigned int lbl_831CEE80;
extern unsigned int lbl_831CEE84;
extern unsigned int uStack_40;


void fn_82288558(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uStack_40;
  int iStack_3c;
  
  uStack_40 = 0;
  iStack_3c = 0;
  uVar1 = **(undefined4 **)(*(int *)(param_1 + 0x61c) + 0xb0);
  fn_82517978(&uStack_40,*param_2,param_2[1],0);
  fn_826728E8(uStack_40,lbl_831CEE78,uVar1);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  uStack_40 = 0;
  iStack_3c = 0;
  uVar1 = **(undefined4 **)(*(int *)(param_1 + 0x634) + 0xb0);
  fn_82517978(&uStack_40,*param_2,param_2[1],0);
  fn_826728E8(uStack_40,lbl_831CEE7C,uVar1);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  uStack_40 = 0;
  iStack_3c = 0;
  uVar1 = **(undefined4 **)(*(int *)(param_1 + 0x64c) + 0xb0);
  fn_82517978(&uStack_40,*param_2,param_2[1],0);
  fn_826728E8(uStack_40,lbl_831CEE80,uVar1);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  uStack_40 = 0;
  iStack_3c = 0;
  uVar1 = **(undefined4 **)(*(int *)(param_1 + 0x664) + 0xb0);
  fn_82517978(&uStack_40,*param_2,param_2[1],0);
  fn_826728E8(uStack_40,lbl_831CEE84,uVar1);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

