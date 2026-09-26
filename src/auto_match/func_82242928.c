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
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82242A30();
extern int fn_82365BD8();
extern int fn_82522588();
extern int fn_828AAF70();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_82242928(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar4;
  longlong lVar3;
  undefined4 *puVar5;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  puVar5 = (undefined4 *)(param_1 + 4);
  if ((*(int *)(param_1 + 4) != 0) && (*(char *)(param_1 + 0x18) == '\0')) {
    bVar2 = true;
    if (*(char *)(param_1 + 0x19) == '\0') goto LAB_82242970;
  }
  bVar2 = false;
LAB_82242970:
  if (bVar2) {
    fn_82242A30(param_1);
  }
  puVar4 = (undefined4 *)fn_82365BD8(auStack_38,param_2);
  uVar1 = puVar4[1];
  puVar4[1] = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = *puVar4;
  *puVar4 = *puVar5;
  *puVar5 = uVar1;
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  fn_82522588(&iStack_40,puVar5);
  if (*(int **)(iStack_40 + 0x38) != (int *)0x0) {
    lVar3 = (**(code **)(**(int **)(iStack_40 + 0x38) + 8))();
    fn_828AAF70(lVar3 + 0x1ec,0);
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

