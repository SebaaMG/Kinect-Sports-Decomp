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
extern unsigned int *auStack_42e;
extern unsigned int *auStack_45c;
extern int fn_8227F818();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A89BC;
extern unsigned int uStack_430;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8227F950(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 auStack_45c [11];
  undefined2 uStack_430;
  undefined1 auStack_42e [1070];
  
  fn_8227F818(param_1,param_2,0xffffffff820e975c);
  puVar1 = auStack_45c;
  *param_1 = &lbl_821A89BC;
  lVar2 = 2;
  do {
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  uStack_430 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_42e,0,0x1fe);
}

