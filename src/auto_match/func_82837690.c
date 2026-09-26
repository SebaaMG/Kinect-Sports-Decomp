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
extern int fn_8263FB38();
extern int fn_82646390();
extern int fn_82646AF0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A89C;
extern unsigned int lbl_8320A8A8;
extern unsigned int lbl_8320A8B0;
extern unsigned int lbl_8320A8B4;
extern unsigned int lbl_8320A8B8;


void fn_82837690(ulonglong param_1)

{
  if (lbl_8320A8B4 != 0) {
    if (lbl_8320A89C == 1) {
      if ((param_1 & 0xffffffff) == 0) {
        fn_8263FB38((double)lbl_82002AE0,lbl_8320A898,0x300,0,
                          *(undefined4 *)(&lbl_8320A8A8 + lbl_8320A8B8 * 4),0,0,0,0xffffffff8320a7f0
                         );
      }
      else {
        fn_8263FB38((double)lbl_82002AE0,lbl_8320A898,0x300,0,param_1,0,0,0,0xffffffff8320a7f0
                         );
      }
    }
    else {
      if (lbl_8320A8B0 != 0) {
        fn_82646AF0(lbl_8320A898);
      }
      if ((param_1 & 0xffffffff) == 0) {
        param_1 = (ulonglong)*(uint *)(&lbl_8320A8A8 + lbl_8320A8B8 * 4);
      }
      fn_82646390((double)lbl_82002AE0,lbl_8320A898,0x300,0,param_1,0xffffffff8320a7f0);
    }
  }
  return;
}

