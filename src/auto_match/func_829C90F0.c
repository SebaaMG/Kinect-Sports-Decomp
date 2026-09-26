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
extern int fn_829C8918();
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_83215000;
extern unsigned int lbl_832156B0;
extern unsigned int lbl_832156B4;
extern unsigned int lbl_832156C8;
extern unsigned int lbl_832156CC;
extern unsigned int lbl_8321570C;
extern unsigned int lbl_83215724;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_829C90F0(int param_1,uint param_2,ulonglong param_3)

{
  bool bVar1;
  
  if (lbl_83214FFC == 0) {
    return 0xffffffff8000ffff;
  }
  if (param_1 == 0) {
    if (param_2 == 0) {
      if ((param_3 & 0xffffffff) == 0) {
        lbl_832156C8 = 0;
        if (lbl_83215724 == 1) {
          lbl_8321570C = lbl_8321570C & 0xfffffff0;
          lbl_832156B0 = lbl_832156B0 & 0xfffffff0;
        }
        fn_829C8918(0);
        return 0;
      }
      if ((param_3 & 0xffffffff) == 1) {
        lbl_832156C8 = 1;
        fn_829C8918(0);
        return 0;
      }
    }
    else if (param_2 == 1) {
      if ((param_3 & 0xffffffff) == 0) {
        if ((lbl_83215000 & 0x40) == 0) {
          lbl_832156B4 = 1;
          fn_829C8918(0);
          return 0;
        }
      }
      else {
        if ((param_3 & 0xffffffff) == 1) {
          lbl_832156B4 = 2;
          fn_829C8918(0);
          return 0;
        }
        if ((param_3 & 0xffffffff) < 3) {
          lbl_832156B4 = 3;
          fn_829C8918(0);
          return 0;
        }
      }
    }
    else if ((param_2 < 3) && ((param_3 & 0xffffffff) < 4)) {
      bVar1 = (int)param_3 != 0;
      if (param_3 == 1 && bVar1) {
        lbl_832156CC = 2;
        fn_829C8918(0);
        return 0;
      }
      if (param_3 == 2 && bVar1) {
        lbl_832156CC = 3;
        fn_829C8918(0);
        return 0;
      }
      if (bVar1) {
        lbl_832156CC = 1;
        fn_829C8918(0);
        return 0;
      }
      lbl_832156CC = 0;
      fn_829C8918(0);
      return 0;
    }
  }
  return 0xffffffff80070057;
}

