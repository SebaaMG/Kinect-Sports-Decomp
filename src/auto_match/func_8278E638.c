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
extern int fn_826A8E58();
extern int fn_827741E8();
extern int fn_8278C110();
extern int fn_8278CAE8();
extern int fn_8278DD08();
extern unsigned int iStack_3c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


bool fn_8278E638(int param_1,char param_2)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  piVar7 = (int *)(param_1 + 0xc);
  iVar6 = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    iVar6 = **(int **)(param_1 + 0xc);
  }
  fn_8278C110(&piStack_40,piVar7);
  uStack_38 = 0;
  uStack_34 = 0;
  cVar2 = fn_826A8E58(&piStack_40,&uStack_38);
  if (cVar2 == '\0') {
    uStack_38 = 0;
    uStack_34 = 0;
    do {
      if (*(int *)(*(int *)(iStack_3c * 0xc + *piStack_40 + 0x10) + 4) == 1) {
        fn_8278CAE8(&piStack_40);
      }
      fn_827741E8(&piStack_40);
      cVar2 = fn_826A8E58(&piStack_40,&uStack_38);
    } while (cVar2 == '\0');
  }
  if (param_2 == '\0') {
    puVar1 = (uint *)*piVar7;
    uVar3 = 0;
    if (puVar1 != (uint *)0x0) {
      uVar3 = (ulonglong)*puVar1;
    }
    if (puVar1 == (uint *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    if ((ulonglong)uVar4 < (uVar3 * 5 & 0xffffffff) >> 2) {
      fn_8278DD08(piVar7,piVar7);
    }
  }
  puVar1 = (uint *)*piVar7;
  uVar4 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar4 = *puVar1;
  }
  if (uVar4 < *(uint *)(param_1 + 0x14)) {
    if ((puVar1 != (uint *)0x0) && (100 < *puVar1)) goto LAB_8278e784;
    iVar5 = 100;
  }
  else {
    if (puVar1 == (uint *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    iVar5 = uVar4 + 10;
  }
  *(int *)(param_1 + 0x14) = iVar5;
LAB_8278e784:
  if ((int *)*piVar7 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)*piVar7;
  }
  return iVar5 != iVar6;
}

