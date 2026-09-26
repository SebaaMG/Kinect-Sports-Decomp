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
extern int fn_8259A168();
extern int fn_82A1EFC0();
extern unsigned int lbl_8218E064;


void fn_825228E0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong lVar3;
  
  fn_8259A168();
  piVar2 = (int *)&lbl_8218E064;
  do {
    if (piVar2[1] != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(param_1 + *piVar2 * 0xe + 6,0,0x34);
    }
    if (*piVar2 == 0) break;
    piVar2 = piVar2 + 3;
  } while (piVar2 != (int *)0x0);
  puVar1 = (undefined4 *)0x8326b7cc;
  lVar3 = 0x20;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 1;
  return;
}

