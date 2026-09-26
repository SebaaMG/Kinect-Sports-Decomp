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
extern int fn_82FA5060();
extern int fn_82FFF750();
extern int fn_8303E5A8();
extern int fn_8303E600();
extern unsigned int lbl_831BC768;


undefined8 fn_8302CCB0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  uVar1 = fn_82FFF750();
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x108) = 0;
  lVar5 = 0x1f;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((*(byte *)(param_1 + 0x11f) & 0xe0) == 0x20) {
    iVar2 = fn_82FA5060(lbl_831BC768,0x10);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_8303E5A8();
      goto LAB_8302cd38;
    }
  }
  else {
    iVar2 = fn_82FA5060(lbl_831BC768,0x10);
    if (iVar2 != 0) {
      piVar3 = (int *)fn_8303E600();
      goto LAB_8302cd38;
    }
  }
  piVar3 = (int *)0x0;
LAB_8302cd38:
  *(int **)(param_1 + 0x88) = piVar3;
  if (piVar3 == (int *)0x0) {
    return 2;
  }
  uVar1 = (**(code **)(*piVar3 + 4))();
  return uVar1;
}

