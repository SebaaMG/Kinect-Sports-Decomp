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
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8329618C;


void fn_82490BE8(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)param_1[9];
  for (puVar5 = (undefined4 *)param_1[8]; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(int *)*puVar5 + 0x14))((int *)*puVar5,(ulonglong)*param_1 - 1);
  }
  piVar2 = (int *)param_1[7];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x14))(piVar2,param_1);
  }
  uVar3 = lbl_821CA460;
  param_1[0x15] = lbl_821CA460;
  if (lbl_8329618C == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lbl_8329618C + 4);
  }
  *(uint *)(iVar4 + 0x820) = uVar3;
  uVar3 = param_1[0x17];
  if (uVar3 != 0) {
    if (*(int *)(uVar3 + 4) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(uVar3);
  }
  param_1[0x17] = 0;
  return;
}

