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
extern int fn_822315A0();
extern int fn_822709D0();
extern int fn_824731D8();
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8266F6B8();
extern unsigned int lbl_832766D8;


void fn_82471FC8(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  
  lbl_832766D8 = 0;
  fn_822709D0(*(undefined4 *)(param_1 + 0xf54));
  (**(code **)(**(int **)(param_1 + 0xf54) + 0x54))
            (*(int **)(param_1 + 0xf54),*(undefined4 *)(param_1 + 0xf58));
  *(undefined4 *)(param_1 + 0xf58) = 0;
  (**(code **)(**(int **)(param_1 + 0xf54) + 8))();
  puVar1 = *(undefined4 **)(param_1 + 0xf54);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0xf5c);
  *(undefined4 *)(param_1 + 0xf54) = 0;
  (**(code **)*puVar1)(puVar1,0);
  fn_82522ED8(puVar1);
  puVar1 = *(undefined4 **)(param_1 + 0xf60);
  (**(code **)*puVar1)(puVar1,0);
  fn_82522ED8(puVar1);
  if ((*(int *)(param_1 + 0xf44) != 0) && (uVar4 = 0, *(int *)(param_1 + 0xc) != 0)) {
    do {
      uVar2 = fn_8266F6B8();
      fn_824731D8(param_1,uVar4,uVar2);
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xc));
  }
  piVar5 = (int *)(param_1 + 0x1c);
  lVar3 = 6;
  do {
    if (*piVar5 != 0) {
      fn_8251FA58();
      *piVar5 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar5 = piVar5 + 0x41;
  } while (lVar3 != 0);
  if (*(int *)(param_1 + 0xf50) != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0xf48) != 0) {
    fn_822315A0();
  }
  return;
}

