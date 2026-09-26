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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_82248B90();
extern int fn_8228E578();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_50;


undefined4 * fn_82513A80(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  piVar2 = *(int **)(param_2 + 8);
  piVar3 = (int *)*piVar2;
  while (piVar3 != piVar2) {
    piVar5 = (int *)fn_8228E578(&stack0x00000000 + -0x48,&stack0x00000000 + -0x50);
    if ((*piVar5 == 0) ||
       (bVar1 = true, *(int *)(param_3 + 0x28) != *(int *)(*(int *)(*piVar5 + 8) + 0x28))) {
      bVar1 = false;
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
    if (bVar1) break;
    fn_82248B90(&stack0x00000000 + -0x50);
  }
  bVar1 = piVar3 == (int *)*(int *)(param_2 + 8);
  if (bVar1) {
    iStack_4c = 0;
    puVar6 = (undefined4 *)(&stack0x00000000 + -0x50);
  }
  else {
    puVar6 = (undefined4 *)fn_8228E578(&stack0x00000000 + -0x40,&stack0x00000000 + -0x50);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1 != puVar6) {
    param_1[1] = puVar6[1];
    puVar6[1] = 0;
    uVar4 = *param_1;
    *param_1 = *puVar6;
    *puVar6 = uVar4;
  }
  if ((bVar1) && (iStack_4c != 0)) {
    fn_822315A0();
  }
  if ((!bVar1) && (iStack_3c != 0)) {
    fn_822315A0();
  }
  return param_1;
}

