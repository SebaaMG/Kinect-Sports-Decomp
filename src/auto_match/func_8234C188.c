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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8234D618();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int stack0x00000000;


void fn_8234C188(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 auStack_30 [12];
  
  puVar2 = (undefined4 *)fn_8234D618(&stack0x00000000 + -0x40);
  uVar3 = 0;
  uVar4 = 0;
  if ((undefined4 *)(&stack0x00000000 + -0x30) != puVar2) {
    uVar4 = puVar2[1];
    puVar2[1] = 0;
    uVar3 = *puVar2;
    *puVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  *(undefined4 *)(param_1 + 0x118) = uVar3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  puVar2 = (undefined4 *)fn_8234D618(&stack0x00000000 + -0x38,param_2);
  uVar3 = 0;
  uVar4 = 0;
  if ((undefined4 *)(&stack0x00000000 + -0x30) != puVar2) {
    uVar4 = puVar2[1];
    puVar2[1] = 0;
    uVar3 = *puVar2;
    *puVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x148) = uVar4;
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  return;
}

