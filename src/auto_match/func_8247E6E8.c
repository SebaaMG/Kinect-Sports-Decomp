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
extern int fn_82248B90();
extern int fn_8225F160();
extern int fn_823AB158();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_8288F948();
extern int fn_828A12E8();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int lbl_83265988;
extern unsigned int lbl_83297810;


byte fn_8247E6E8(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar5 = (ulonglong)lbl_83297810;
  if (uVar5 == 0) {
    uVar5 = fn_82511928();
  }
  fn_825138E0(&iStack_28,uVar5,1);
  if (iStack_28 == 0) {
    fn_8225F160();
    if (lbl_83265988 == 0) {
      bVar6 = 0;
    }
    else {
      iVar3 = *(int *)(lbl_83265988 + 0xf0);
LAB_8247e7e0:
      bVar6 = *(byte *)(*(int *)(iVar3 + 8) + 8) >> 4 & 1;
    }
    if (iStack_24 != 0) {
      fn_822315A0();
    }
  }
  else {
    uVar1 = *(undefined4 *)(iStack_28 + 8);
    uVar2 = fn_828A12E8(uVar1);
    iVar3 = fn_8288F948(uVar2,1);
    iStack_2c = **(int **)(iVar3 + 4);
    while( true ) {
      iVar3 = iStack_2c;
      uVar2 = fn_828A12E8(uVar1);
      iVar4 = fn_8288F948(uVar2,1);
      if (iVar3 == *(int *)(iVar4 + 4)) break;
      iVar3 = *(int *)(iVar3 + 0x14);
      iVar4 = fn_823AB158(iVar3);
      if ((iVar4 == param_1) || (*(int *)(iVar3 + 0x864) == param_1)) {
        iVar3 = fn_823AB158(iVar3);
        iVar3 = *(int *)(iVar3 + 0xf0);
        goto LAB_8247e7e0;
      }
      fn_82248B90(&iStack_2c);
    }
    if (iStack_24 != 0) {
      fn_822315A0();
    }
    bVar6 = 0;
  }
  return bVar6;
}

