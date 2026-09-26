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
extern int fn_83011CF8();
extern int fn_83011EE0();
extern int fn_8303ECC0();
extern int fn_8303EE40();
extern int fn_8303EFB8();
extern unsigned int lbl_832642E4;


undefined8 fn_8303DFC8(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x14) >> 8;
  if (uVar2 < 0x3022) {
    if (0x301f < uVar2) {
      fn_8303EE40(param_1,2,uVar1);
      fn_83011CF8(lbl_832642E4,*(undefined4 *)(param_1 + 0x10),uVar1,
                        *(undefined1 *)(param_1 + 0x28));
      return 1;
    }
    if ((0x300f < uVar2) && (uVar2 < 0x3012)) {
      uVar3 = fn_8303EFB8(param_1,2,uVar1);
      fn_83011CF8(lbl_832642E4,*(undefined4 *)(param_1 + 0x10),uVar1,
                        *(undefined1 *)(param_1 + 0x28));
      return uVar3;
    }
  }
  else if ((0x303f < uVar2) && (uVar2 < 0x3042)) {
    fn_8303ECC0(param_1,2,uVar1);
    fn_83011EE0(lbl_832642E4,uVar1,param_1 + 0x1c,*(undefined1 *)(param_1 + 0x28));
  }
  return 1;
}

