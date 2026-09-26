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
extern unsigned int *auStack_22e;
extern int fn_82279768();
extern int fn_82285748();
extern int fn_822C5B18();
extern int fn_8248F4B8();
extern int fn_82BA02A8();
extern int fn_82F691F0();
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821A7FF4;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_821A8D84;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_230;


/* WARNING: Removing unreachable block (ram,0x82285338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82285310(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuStack_270;
  code *pcStack_26c;
  undefined ***pppuStack_260;
  undefined2 uStack_230;
  undefined1 auStack_22e [558];
  
  pcStack_26c = fn_8248F4B8;
  pppuStack_260 = &ppuStack_270;
  ppuStack_270 = &lbl_821A7FF4;
  fn_82279768(param_1,param_2,0,1,1,&ppuStack_270,0,1);
  *param_1 = &lbl_821A8D84;
  param_1[0x4c] = &lbl_821A8C90;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  fn_822C5B18(param_1 + 0x54,param_3);
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = lbl_821CC160;
  param_1[0x5f] = 0;
  param_1[0x4e] = fn_82285748;
  param_1[0x4f] = fn_82BA02A8;
  param_1[0x50] = fn_82BA02A8;
  param_1[0x4d] = param_1;
  param_1[0x29] = param_1 + 0x4c;
  uStack_230 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_22e,0,0x1fe);
}

