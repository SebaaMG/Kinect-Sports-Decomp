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
extern int fn_82B6EB98();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;


void fn_82B6F1B0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uStack_40;
  int iStack_3c;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (3 < param_2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da494,0xffffffff820da3b8,0x5b5);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da46c,0xffffffff820da3b8,0x5b6);
  }
  iVar2 = (param_2 + 0x1064) * 4;
  if (*(int *)(iVar2 + iVar1) != 0) {
    return;
  }
  iVar3 = 0;
  if (param_2 != 1) {
    if (param_2 == 2) {
      iVar3 = *(int *)(iVar1 + 0x5aa4) + -1;
    }
    else {
      iVar3 = iStack_3c;
      if (param_2 == 3) {
        iStack_3c = 0;
        goto LAB_82b6f24c;
      }
    }
  }
  iStack_3c = iVar3;
  *(undefined4 *)(iVar2 + iVar1) = 1;
LAB_82b6f24c:
  uStack_40 = param_2;
  fn_82B6EB98(param_1,iVar1 + 0x3360,*(undefined4 *)(iVar1 + 0xc),1,&uStack_40);
  *(int *)(iVar1 + 0x336c) = *(int *)(iVar1 + 0x336c) + 1;
  return;
}

