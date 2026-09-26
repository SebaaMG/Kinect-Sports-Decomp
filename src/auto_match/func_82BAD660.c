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
extern int fn_82AB15D0();
extern int fn_82BACA30();
extern int fn_82BD09F0();
extern unsigned int lbl_820DF0C0;


void fn_82BAD660(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xac);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0xe4) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
      if ((*(uint *)(param_1 + 0xe4) >> 7 & 1) != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820df958,0xffffffff820df268,0xafd);
      }
      uVar2 = fn_82BD09F0(*(undefined4 *)(param_4 + 0xab0),iVar1);
      *(undefined4 *)(param_1 + 0x38) = uVar2;
      uVar2 = *(undefined4 *)(iVar1 + 0x80);
      goto LAB_82bad6f8;
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar2 = lbl_820DF0C0;
LAB_82bad6f8:
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  fn_82BACA30(param_1,param_2,param_3,param_4);
  return;
}

