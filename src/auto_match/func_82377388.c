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
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_82390DC0();
extern int fn_8288B760();
extern unsigned int lbl_832975B0;


void fn_82377388(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if ((*(char *)(iVar2 + 4) != '\0') && (iVar2 = *(int *)(param_3 + 0x84), iVar2 != 0)) {
    piVar1 = *(int **)(**(int **)(param_3 + 8) + param_6 * 4);
    iVar3 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),param_7);
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar4 = *(uint *)(iVar3 + 0x16c);
    }
    else {
      uVar4 = fn_8288B760();
      uVar4 = uVar4 & 0xff;
    }
    if ((uVar4 != 0) && (iVar2 = *(int *)(iVar2 + 0x88), iVar2 != 0)) {
      fn_82390DC0(param_1,param_2,(ulonglong)*(uint *)(iVar2 + 0x78) + 0xc0);
    }
  }
  return;
}

