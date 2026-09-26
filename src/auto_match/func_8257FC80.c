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
extern unsigned int *auStack_60;
extern int fn_82549960();
extern int fn_825A2210();
extern int fn_8265C9E0();
extern unsigned int lbl_821CA460;


undefined8 fn_8257FC80(uint *param_1,undefined8 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  puVar6 = param_1 + 1;
  lVar5 = 4;
  puVar7 = puVar6;
  do {
    if ((int *)*puVar7 != (int *)0x0) {
      (**(code **)(*(int *)*puVar7 + 8))();
      puVar1 = (undefined4 *)*puVar7;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *puVar7 = 0;
    }
    lVar5 = lVar5 + -1;
    puVar7 = puVar7 + 0xc;
  } while (lVar5 != 0);
  if ((int *)*puVar6 != (int *)0x0) {
    (**(code **)(*(int *)*puVar6 + 8))();
    puVar1 = (undefined4 *)*puVar6;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  uVar3 = fn_8265C9E0(0x200);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82549960(uVar3,param_2,0,0,0,0);
  }
  *puVar6 = uVar4;
  param_1[0xc] = param_3;
  param_1[9] = 0;
  uVar2 = *param_1;
  param_1[2] = lbl_821CA460;
  (**(code **)(**(int **)(uVar4 + 0x1b0) + 0x18))(*(int **)(uVar4 + 0x1b0),auStack_50);
  (**(code **)(**(int **)(*puVar6 + 0x1b0) + 0x1c))(*(int **)(*puVar6 + 0x1b0),auStack_60);
  fn_825A2210((ulonglong)uVar2 + 0xc0,auStack_50,auStack_60);
  return 0;
}

