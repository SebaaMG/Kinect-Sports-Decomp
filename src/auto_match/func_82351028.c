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
extern int fn_82244C20();
extern int fn_82247000();
extern int fn_82250A18();
extern int fn_82350888();
extern int fn_82512B70();
extern int fn_8288B760();
extern int fn_828B00A0();
extern int (*lbl_8327677C)();
extern unsigned int lbl_832975B0;


void fn_82351028(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar5;
  char cVar6;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar7;
  
  uVar7 = 4;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar7 = 5;
  }
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if ((*(char *)(iVar5 + 4) != '\0') && (*(int *)(param_1 + 0x3f4) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0x3f4) + 0x95) = 1;
    if (*(int *)(param_1 + 0x3f8) == 0) {
      iVar5 = *(int *)(param_1 + 0x3f4);
      *(undefined4 *)(param_1 + 0x3f8) = 1;
      *(undefined1 *)(iVar5 + 0x98) = 1;
      cVar6 = fn_8288B760(iVar5);
      if (cVar6 != '\0') {
        fn_82244C20(iVar5);
      }
    }
    iVar5 = fn_82247000(*(undefined4 *)(param_1 + 0x3f4));
    if (iVar5 != 3) {
      return;
    }
    uVar2 = (*(int **)(param_1 + 0x3f4))[4];
    iVar5 = (**(code **)(**(int **)(param_1 + 0x3f4) + 4))();
    uVar3 = (**(code **)(*(int *)(iVar5 + 0xf0) + 0x3c))();
    if (uVar3 == 0) {
      bVar1 = false;
    }
    else {
      uVar4 = fn_828B00A0((ulonglong)uVar2 + 0x278);
      bVar1 = (uVar3 & 0xffffffff) <= uVar4;
    }
    if (!bVar1) {
      return;
    }
    uVar7 = 5;
  }
  if ((*(int *)(param_1 + 0x3e4) != 0) &&
     (*(undefined4 *)(param_1 + 0x3e4) = 0, lbl_8327677C != (code *)0x0)) {
    (*lbl_8327677C)(0xffffffff821b2074,0xffffffff821b1fb8,0x657);
  }
  if (*(int *)(param_1 + 0x3f0) != 0) {
    fn_82512B70();
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  fn_82350888(param_1,uVar7);
  return;
}

