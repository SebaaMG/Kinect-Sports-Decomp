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
extern int fn_823E9A88();
extern int fn_8265C9E0();
extern unsigned int lbl_821AE598;


void fn_823D5970(int *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[0x20];
  lVar2 = (**(code **)(*param_1 + 8))();
  fn_822B1A68(*(undefined4 *)(iVar1 + 0x7c),lVar2 + 0xf0);
  lVar2 = (**(code **)(*param_1 + 0x4c))(param_1);
  puVar3 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821AE598;
    puVar3[2] = 1;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      fn_823E9A88(puVar3 + 3,lVar2 + 0x30,iVar1);
    }
  }
  iVar1 = param_1[0x23];
  param_1[0x23] = (int)puVar3;
  param_1[0x22] = (int)(puVar3 + 3);
  if (iVar1 != 0) {
    fn_822315A0();
  }
  return;
}

