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
extern unsigned int *auStack_63e;
extern unsigned int *auStack_68c;
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_640;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824691D8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 auStack_68c [19];
  undefined2 uStack_640;
  undefined1 auStack_63e [1598];
  
  *param_1 = 9;
  param_1[1] = 0;
  lVar3 = 3;
  param_1[2] = 0;
  uVar1 = lbl_821CC160;
  param_1[3] = 3;
  param_1[5] = uVar1;
  param_1[4] = 0;
  puVar2 = auStack_68c;
  do {
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uStack_640 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_63e,0,0x1fe);
}

