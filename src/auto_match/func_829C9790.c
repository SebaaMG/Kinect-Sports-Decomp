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
extern int fn_8265C990();
extern int fn_829C9180();
extern int fn_82F691F0();
extern unsigned int lbl_83215064;
extern unsigned int lbl_83215068;


void fn_829C9790(void)

{
  if (lbl_83215068 != 0) {
    fn_829C9180(0xffffffff8321565c,0x400);
    fn_8265C990(lbl_83215068,0xffffffff8c9c0000);
    lbl_83215068 = 0;
  }
  if (lbl_83215064 != 0) {
    fn_829C9180(0xffffffff83215628,0x400);
    fn_8265C990(lbl_83215064,0xffffffff8c9c0000);
    lbl_83215064 = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(0xffffffff83215080,0,0x200);
}

