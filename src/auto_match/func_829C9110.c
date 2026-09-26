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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820288E4;
extern unsigned int lbl_820570D4;
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_832156D0;
extern unsigned int lbl_832156D4;
extern unsigned int lbl_832156D8;
extern unsigned int lbl_832156DC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_829C9110(int param_1,float *param_2)

{
  if (param_1 == 0) {
    if (lbl_83214FFC == 0) {
      return 0xffffffff8000ffff;
    }
    if ((((param_2 != (float *)0x0) && (lbl_820288E4 <= param_2[2])) && (param_2[2] <= lbl_82002AE0)
        ) && ((lbl_820288E4 <= param_2[3] && (param_2[3] <= lbl_82002AE0)))) {
      lbl_832156D0 = (int)(*param_2 * lbl_820570D4);
      lbl_832156D4 = (int)(param_2[1] * lbl_820570D4);
      lbl_832156D8 = (int)(param_2[2] * lbl_820570D4);
      lbl_832156DC = (int)(param_2[3] * lbl_820570D4);
      fn_829C8918(0);
      return 0;
    }
  }
  return 0xffffffff80070057;
}

