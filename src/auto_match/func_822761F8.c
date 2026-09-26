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
extern unsigned int *auStack_21e;
extern unsigned int *auStack_240;
extern int fn_82279768();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A89BC;
extern unsigned int uStack_220;
extern unsigned int uStack_230;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822761F8(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_240 [16];
  undefined4 uStack_230;
  undefined2 uStack_220;
  undefined1 auStack_21e [542];
  
  uStack_230 = 0;
  fn_82279768(param_1,param_2,0,1,1,auStack_240,0,1);
  *param_1 = &lbl_821A89BC;
  uStack_220 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_21e,0,0x1fe);
}

