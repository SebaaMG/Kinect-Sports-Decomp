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
extern int fn_83011240();
extern int fn_83011630();
extern int fn_83011A38();
extern int fn_83011B20();
extern int fn_8303ECC0();
extern int fn_8303EE40();
extern int fn_8303EFB8();
extern unsigned int lbl_832642E4;
extern int (*lbl_83264340)();


undefined8 fn_830380E0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(uint *)(param_1 + 0x14) >> 8;
  if (uVar2 < 0x1021) {
    if (uVar2 != 0x1020) {
      if (uVar2 == 0x1010) {
        fn_83011B20(lbl_832642E4,*(undefined4 *)(param_1 + 0x10));
        fn_83011A38(lbl_832642E4,*(undefined4 *)(param_1 + 0x10));
      }
      else if (uVar2 != 0x1011) {
        return 1;
      }
      uVar3 = fn_8303EFB8(param_1,0,uVar1);
      fn_83011240(lbl_832642E4,*(undefined4 *)(param_1 + 0x10),uVar1);
      return uVar3;
    }
    if (lbl_83264340 != (code *)0x0) {
      (*lbl_83264340)();
    }
  }
  else if (uVar2 != 0x1021) {
    if (uVar2 < 0x1040) {
      return 1;
    }
    if (0x1041 < uVar2) {
      return 1;
    }
    fn_8303ECC0(param_1,0,uVar1);
    fn_83011630(lbl_832642E4,uVar1,param_1 + 0x1c);
    return 1;
  }
  fn_8303EE40(param_1,0,uVar1);
  fn_83011240(lbl_832642E4,*(undefined4 *)(param_1 + 0x10),uVar1);
  return 1;
}

