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
extern unsigned int *auStack_38;
extern int fn_8251E370();
extern int fn_82522DF8();
extern int fn_82A1EFC0();
extern unsigned int lbl_83266100;


void fn_82523048(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_38 [56];
  
  puVar2 = (undefined4 *)fn_82522DF8(0x20);
  puVar2[2] = *(undefined4 *)*param_1;
  fn_8251E370(puVar2 + 3,0x20,0);
  piVar4 = &lbl_83266100;
  iVar3 = lbl_83266100;
  while (iVar3 != 0) {
    piVar4 = (int *)*piVar4;
    iVar3 = *piVar4;
  }
  puVar1 = (undefined4 *)piVar4[1];
  piVar4[1] = (int)puVar2;
  *puVar2 = piVar4;
  puVar2[1] = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar2;
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_38,0,4);
}

