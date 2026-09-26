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
extern int fn_825605B0();
extern int fn_82560690();
extern int fn_825611A8();
extern unsigned int lbl_83280B88;
extern unsigned int lbl_83280B98;


void fn_825603C8(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = fn_82560690(0);
  param_2[2] = param_3;
  iVar4 = param_1 * 8;
  puVar1 = *(undefined4 **)(&lbl_83280B88 + iVar4);
  puVar5 = (undefined4 *)(&lbl_83280B88 + iVar4);
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar5 = puVar2;
    puVar1 = (undefined4 *)*puVar2;
  }
  do {
    puVar1 = (undefined4 *)puVar5[1];
    if (puVar1 == (undefined4 *)0x0) goto LAB_82560438;
    puVar5 = puVar1;
  } while (param_3 < (int)puVar1[2]);
  puVar5 = (undefined4 *)*puVar1;
LAB_82560438:
  puVar1 = (undefined4 *)puVar5[1];
  puVar5[1] = param_2;
  *param_2 = puVar5;
  param_2[1] = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  if (((&lbl_83280B98)[param_1] == 0) || (*(undefined4 **)(iVar4 + -0x7cd7f474) == param_2)) {
    fn_825605B0(param_1,param_2 + 0x21);
  }
  iVar4 = fn_82560690(0);
  if (iVar3 != iVar4) {
    fn_825611A8();
  }
  return;
}

