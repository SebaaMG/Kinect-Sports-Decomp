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
extern unsigned int lbl_832156B8;
extern unsigned int lbl_832156BC;
extern unsigned int lbl_832156C0;


undefined8 fn_829C8A38(uint param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == (int *)0x0) || (1 < param_1)) {
    return 0xffffffff80070057;
  }
  if (lbl_83214FFC == 0) {
    return 0xffffffff8000ffff;
  }
  if (*param_2 == 0) {
    if (param_2[1] != 0) {
      return 0xffffffff80070057;
    }
    if (param_2[2] != 0) {
      return 0xffffffff80070057;
    }
    uVar1 = 0;
  }
  else {
    if (*param_2 != 1) {
      return 0xffffffff80070057;
    }
    if (0x140 < param_2[1]) {
      return 0xffffffff80070057;
    }
    if (param_2[1] < -0x140) {
      return 0xffffffff80070057;
    }
    if (0xf0 < param_2[2]) {
      return 0xffffffff80070057;
    }
    if (param_2[2] < -0xf0) {
      return 0xffffffff80070057;
    }
    uVar1 = 1;
  }
  (&lbl_832156B8)[param_1 * 0x61] = uVar1;
  (&lbl_832156BC)[param_1 * 0x61] = param_2[1];
  (&lbl_832156C0)[param_1 * 0x61] = param_2[2];
  fn_829C8918();
  return 0;
}

