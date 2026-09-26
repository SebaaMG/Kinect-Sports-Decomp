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
extern int fn_829E1C28();
extern int fn_829E4FE8();
extern int fn_829E5050();
extern int fn_82A28568();
extern int fn_82F691F0();
extern unsigned int lbl_832179FC;
extern unsigned int lbl_83217B88;
extern unsigned int *lbl_83217BA4;
extern unsigned int *lbl_83217BA8;


undefined8 fn_829E2D10(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lbl_83217BA4 = (undefined4 *)fn_829E4FE8();
  uVar1 = (**(code **)*lbl_83217BA4)();
  if (-1 < (int)uVar1) {
    lbl_83217BA8 = (undefined4 *)fn_829E5050();
    uVar1 = (**(code **)*lbl_83217BA8)();
    if (-1 < (int)uVar1) {
      fn_829E1C28();
      lVar2 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,0x873c);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar2,0,0x873c);
      }
      lbl_83217B88 = 0;
      uVar1 = 0xffffffff8007000e;
    }
  }
  return uVar1;
}

