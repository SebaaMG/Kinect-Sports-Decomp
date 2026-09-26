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
extern unsigned int *auStack_28;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_30;


undefined4 * fn_8255BB98(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  piVar2 = *(int **)(param_2 + 4);
  iVar5 = 0;
  piVar6 = (int *)*piVar2;
  if (piVar6 != piVar2) {
    do {
      piVar6 = (int *)*piVar6;
      iVar5 = iVar5 + 1;
    } while (piVar6 != piVar2);
    if (iVar5 == 1) {
      fn_82365BD8(param_1,(ulonglong)**(uint **)(param_2 + 4) + 8);
      return param_1;
    }
  }
  piVar2 = *(int **)(param_2 + 4);
  piVar6 = (int *)*piVar2;
  if (piVar6 != piVar2) {
    do {
      if (*(int *)(piVar6[2] + 4) == *(int *)(param_2 + 0x10)) break;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar2);
  }
  bVar1 = piVar6 == *(int **)(param_2 + 4);
  if (bVar1) {
    iStack_2c = 0;
    puVar4 = (undefined4 *)(&stack0x00000000 + -0x30);
  }
  else {
    puVar4 = (undefined4 *)fn_82365BD8(&stack0x00000000 + -0x28,piVar6 + 2);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1 != puVar4) {
    param_1[1] = puVar4[1];
    puVar4[1] = 0;
    uVar3 = *param_1;
    *param_1 = *puVar4;
    *puVar4 = uVar3;
  }
  if ((bVar1) && (iStack_2c != 0)) {
    fn_822315A0();
  }
  if ((!bVar1) && (iStack_24 != 0)) {
    fn_822315A0();
  }
  return param_1;
}

