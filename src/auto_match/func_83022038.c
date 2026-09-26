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
extern int fn_82A1EFC0();
extern int fn_82FA5100();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC770;


undefined8 fn_83022038(int param_1,uint param_2,undefined1 param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  uVar2 = 0;
  uVar3 = param_2;
  if (param_2 == 0) {
LAB_8302208c:
    uVar4 = 2;
  }
  else {
    do {
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 - 1 & uVar3;
    } while (uVar3 != 0);
    if ((uVar2 & 0xffffffff) != 1) {
      if ((uVar2 & 0xffffffff) == 2) {
        *(undefined1 *)(param_1 + 0x2c) = 1;
        goto LAB_830220a4;
      }
      goto LAB_8302208c;
    }
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x2c) = uVar4;
LAB_830220a4:
  *(undefined1 *)(param_1 + 0x24) = param_3;
  *(uint *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  lVar5 = (uVar2 & 0xfffffff) << 4;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  uVar1 = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x14) = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar2 = fn_82FA5100(lbl_831BC770,lVar5,1);
  *(int *)(param_1 + 0x28) = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    return 0x34;
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(uVar2,0,lVar5);
}

