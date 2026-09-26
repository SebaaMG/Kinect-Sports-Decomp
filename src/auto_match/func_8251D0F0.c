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
extern int fn_822314E8();
extern int fn_82488DB8();
extern int fn_8251D060();
extern int fn_8251D290();
extern int fn_82596630();
extern int fn_8265CA20();
extern int fn_82A1EFC0();
extern unsigned int *lbl_83296188;
extern unsigned int *lbl_8329618C;
extern int (*lbl_832961C0)();


void fn_8251D0F0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_38 [56];
  
  puVar1 = lbl_83296188;
  iVar3 = 0;
  puVar5 = (undefined4 *)0x832960c8;
  while (puVar5[1] != 0) {
    puVar5 = puVar5 + 0xc;
    if (-0x7cd69e79 < (int)puVar5) {
      return;
    }
  }
  puVar2 = lbl_83296188 + 8;
  *puVar5 = *lbl_83296188;
  puVar5[1] = puVar1[1];
  puVar5[2] = puVar1[2];
  puVar5[3] = puVar1[3];
  puVar5[4] = puVar1[4];
  puVar5[5] = puVar1[5];
  puVar5[6] = puVar1[6];
  puVar5[7] = puVar1[7];
  fn_82488DB8(puVar5 + 8,puVar2);
  puVar1 = lbl_83296188;
  lbl_83296188 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    fn_822314E8(puVar1 + 8);
    fn_8265CA20(puVar1);
  }
  if (puVar5[6] != 0) {
    if (lbl_8329618C == (undefined4 *)0x0) {
      iVar3 = 0;
      iVar4 = 0;
    }
    else {
      iVar3 = lbl_8329618C[1];
      iVar4 = lbl_8329618C[1];
    }
    if (iVar4 != 0) {
      if (lbl_832961C0 != (code *)0x0) {
        (*lbl_832961C0)(iVar4);
      }
      fn_82596630(iVar4);
    }
  }
  if (puVar5[6] != 0) {
    lbl_8329618C = puVar5;
  }
  fn_8251D290(0xffffffff832960a0,puVar5);
  if (puVar5[6] == 0) {
    return;
  }
  fn_8251D060();
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_38,0,8);
}

