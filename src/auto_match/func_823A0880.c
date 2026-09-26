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
extern int fn_822B1A68();
extern int fn_823A6A88();
extern int fn_8265C9E0();
extern unsigned int lbl_821B52DC;


void fn_823A0880(int *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    lVar3 = (**(code **)(*param_1 + 8))();
    fn_822B1A68(*(undefined4 *)(iVar1 + 0x7c),lVar3 + 0xf0);
    piVar2 = *(int **)(*(int *)(iVar1 + 0x7c) + 8);
    (**(code **)(*piVar2 + 0x14))(piVar2,6);
  }
  lVar3 = (**(code **)(*param_1 + 0x4c))(param_1);
  puVar4 = (undefined4 *)fn_8265C9E0(0x54);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 1;
    *puVar4 = &lbl_821B52DC;
    puVar4[2] = 1;
    if (puVar4 + 3 != (undefined4 *)0x0) {
      fn_823A6A88(puVar4 + 3,lVar3 + 0x30);
    }
  }
  iVar1 = param_1[0x23];
  param_1[0x23] = (int)puVar4;
  param_1[0x22] = (int)(puVar4 + 3);
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

