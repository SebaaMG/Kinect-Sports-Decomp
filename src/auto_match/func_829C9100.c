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
extern int fn_82F655D8();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82028800;
extern unsigned int lbl_820570D4;
extern unsigned int lbl_820570E0;
extern unsigned int lbl_820570E4;
extern unsigned int lbl_820570E8;
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_832156B0;
extern unsigned int lbl_832156C4;
extern unsigned int lbl_832156C8;
extern unsigned int lbl_832156EC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_829C9100(double param_1,int param_2,uint param_3)

{
  double dVar1;
  
  if (lbl_83214FFC == 0) {
    return 0xffffffff8000ffff;
  }
  if ((((param_2 == 0) && (param_3 < 9)) && (param_3 != 1)) &&
     (((param_3 != 2 && (param_3 != 3)) && (param_3 != 4)))) {
    if (param_3 == 5) {
      if (((double)lbl_820570E8 <= param_1) && (param_1 <= (double)lbl_820570E4)) {
        lbl_832156C4 = (int)(param_1 * (double)lbl_820570D4);
        fn_829C8918(0);
        return 0;
      }
    }
    else if (((param_3 == 6) || (param_3 == 7)) || (param_3 != 0)) {
      if (((lbl_832156C8 != 1) && ((double)lbl_820570E0 <= param_1)) &&
         (param_1 <= (double)lbl_82028800)) {
        dVar1 = (double)fn_82F655D8(lbl_82002C40);
        *(int *)(&lbl_832156C8 + param_3 * 4) = (int)((float)dVar1 * lbl_820570D4);
        lbl_832156B0 = 2 << (param_3 - 6 & 0x3f) | lbl_832156B0;
        fn_829C8918(0);
        return 0;
      }
    }
    else if (lbl_832156C8 != 1) {
      lbl_832156B0 = lbl_832156B0 | 1;
      lbl_832156EC = (int)(param_1 * (double)lbl_820570D4);
      fn_829C8918(0);
      return 0;
    }
  }
  return 0xffffffff80070057;
}

