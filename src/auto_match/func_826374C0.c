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
extern int fn_82637840();
extern unsigned int lbl_821CC030;
extern unsigned int lbl_821CC034;
extern unsigned int lbl_821CC038;
extern unsigned int lbl_821CC03C;
extern unsigned int lbl_821CC040;
extern unsigned int lbl_821CC044;
extern unsigned int lbl_821CC048;
extern unsigned int lbl_821CC04C;
extern unsigned int lbl_821CC050;
extern unsigned int lbl_821CC054;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826374C0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar2 = uVar1 >> 0x10 & 3;
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else if (uVar2 == 1) {
    uVar3 = 0x8001;
  }
  else {
    uVar3 = 0xc003;
  }
  *(undefined4 *)(param_1 + 0x29bc) = uVar3;
  *(uint *)(param_1 + 0x2880) = uVar1;
  *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x200000000000000;
  *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | 0x1000000000;
  *(undefined4 *)(param_1 + 0x3234) = lbl_821CC048;
  *(undefined4 *)(param_1 + 0x3238) = lbl_821CC04C;
  *(undefined4 *)(param_1 + 0x323c) = lbl_821CC050;
  *(undefined4 *)(param_1 + 0x3240) = lbl_821CC054;
  fn_82637840((double)lbl_821CC030,(double)lbl_821CC034,(double)lbl_821CC038,
                    (double)lbl_821CC03C,(double)lbl_821CC040,(double)lbl_821CC044);
  return;
}

