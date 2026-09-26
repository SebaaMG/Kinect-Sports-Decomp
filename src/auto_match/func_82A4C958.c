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
extern int fn_82A4F4E0();
extern int fn_82F691F0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_821AAD20;


void fn_82A4C958(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = lbl_820143E0;
  uVar1 = lbl_82002AE0;
  *(undefined4 *)(param_1 + 0x58) = lbl_821AAD20;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_82A4F4E0();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x28,0,0x28);
}

