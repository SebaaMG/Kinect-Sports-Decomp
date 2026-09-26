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
extern int fn_8225F160();
extern int fn_8229E090();
extern int fn_823AB478();
extern int fn_824C04E0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828B25C8();
extern int fn_828B2BF8();
extern int fn_82F68CC0();
extern unsigned int lbl_83265988;


void fn_824815F0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar3;
  longlong lVar6;
  
  if (param_1 == 2) {
    *(undefined4 *)(param_2 + 0xb4) = 0;
  }
  else {
    fn_8229E090(*(undefined4 *)(param_2 + 0xb4),0,1);
    *(undefined4 *)(param_2 + 0xb4) = 0;
    if (param_1 != 0) {
      iVar4 = fn_8225F160();
      uVar1 = *(uint *)(iVar4 + 0x38);
      lVar6 = (ulonglong)uVar1 - 1;
      *(undefined4 *)(iVar4 + 0x38) = 1;
      if ((lVar6 - (((ulonglong)uVar1 - 2) + (ulonglong)(lVar6 == 0)) & 0xff) != 0) {
        fn_828B2BF8();
        fn_828B25C8();
      }
    }
  }
  iVar4 = *(int *)(param_2 + 0xa4);
  uVar5 = fn_823AB478(lbl_83265988);
  *(undefined4 *)(iVar4 + 0x54) = uVar5;
  uVar3 = fn_8265C9E0(0x428);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    fn_82F68CC0(uVar3,param_2 + 0x53c,0x428);
  }
  if ((uVar3 & 0xffffffff) != (ulonglong)*(uint *)(iVar4 + 0x5c)) {
    if ((ulonglong)*(uint *)(iVar4 + 0x5c) != 0) {
      fn_8265CA20();
    }
    *(int *)(iVar4 + 0x5c) = (int)uVar3;
  }
  *(undefined8 *)(iVar4 + 0x60) = 0;
  iVar2 = *(int *)(iVar4 + 0x6c);
  *(undefined4 *)(iVar4 + 0x6c) = 0;
  *(undefined4 *)(iVar4 + 0x68) = 0;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  fn_824C04E0(iVar4,1);
  return;
}

