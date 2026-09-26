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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822C8C08();
extern int fn_8230E260();
extern int fn_82356F98();
extern int fn_823CC298();
extern int fn_823DB6B8();
extern unsigned int lbl_821CC160;


void fn_8230EFA8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_50 [56];
  
  uVar4 = 1;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x200) = 1;
  if (*(int *)(param_1 + 0x158) == 0) {
    piVar1 = *(int **)(((uint)LZCOUNT(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c)) >> 3 & 4) +
                      **(int **)(*(int *)(param_1 + 0x10) + 8));
    iVar2 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),0);
    *(undefined4 *)(iVar2 + 0x200) = uVar4;
  }
  if (*(int *)(param_1 + 0x490) != 0) {
    iVar3 = fn_82356F98(auStack_50);
    iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x4b0);
    if (iVar2 != 0) {
      fn_823DB6B8((double)lbl_821CC160,iVar2,iVar3,0);
    }
    if (*(int *)(iVar3 + 4) != 0) {
      fn_822315A0();
    }
  }
  if (*(char *)(param_1 + 0x441) == '\0') {
    fn_823CC298(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x4b8),1);
  }
  iVar2 = fn_8230E260(param_1);
  if ((iVar2 != 0) && (iVar2 = fn_8230E260(param_1), iVar2 != 0)) {
    fn_822C8C08(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x114),0xffffffff821aca8c);
  }
  return;
}

