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
extern unsigned int *auStack_90;
extern int fn_82FA5190();
extern int fn_82FF5198();
extern int fn_83032FE8();
extern int iRam00000000;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264304;
extern unsigned int lbl_832643DC;


void fn_8300FB78(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  undefined4 auStack_90 [36];
  
  piVar7 = (int *)(param_1 + 0x50);
  piVar1 = *(int **)(param_1 + 0x50);
  while ((piVar1 != (int *)0x0 && ((uint)piVar1[1] <= *(uint *)(param_1 + 0x90)))) {
    puVar2 = (undefined4 *)piVar1[2];
    iVar5 = *piVar1;
    if (piVar1 == (int *)*piVar7) {
      *piVar7 = *piVar1;
      iVar5 = iRam00000000;
    }
    iRam00000000 = iVar5;
    if (piVar1 == *(int **)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *piVar1 = *(int *)(param_1 + 0x58);
    *(int **)(param_1 + 0x58) = piVar1;
    auStack_90[0] = 0;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
    uVar3 = *(uint *)(puVar2[2] + 0x14) >> 8;
    if ((uVar3 == 0x4011) || ((uVar3 == 0x5011 && (cVar6 = fn_83032FE8(), cVar6 != '\0')))) {
      (**(code **)(*(int *)puVar2[2] + 0x28))((int *)puVar2[2],auStack_90);
    }
    (**(code **)(*(int *)puVar2[2] + 0x18))((int *)puVar2[2],puVar2);
    if (puVar2[10] != 0) {
      fn_82FF5198(lbl_83264304);
    }
    (**(code **)(*(int *)puVar2[2] + 8))();
    uVar4 = lbl_831BC768;
    (**(code **)*puVar2)(puVar2,0);
    fn_82FA5190(uVar4,puVar2);
    lbl_832643DC = lbl_832643DC + 1;
    piVar1 = (int *)*piVar7;
  }
  return;
}

