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


undefined8 fn_829C8FD0(int param_1,uint param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  
  fVar1 = lbl_820570D4;
  if ((param_2 < 2) && (param_1 == 0)) {
    if (lbl_83214FFC == 0) {
      return 0xffffffff8000ffff;
    }
    if (param_3 != (float *)0x0) {
      if ((((lbl_820288E4 <= param_3[2]) && (param_3[2] <= lbl_82002AE0)) &&
          (lbl_820288E4 <= param_3[3])) && (param_3[3] <= lbl_82002AE0)) {
        iVar2 = param_2 * 0x184;
        *(int *)(&lbl_832156D0 + iVar2) = (int)(*param_3 * lbl_820570D4);
        *(int *)(&lbl_832156D4 + iVar2) = (int)(param_3[1] * fVar1);
        *(int *)(&lbl_832156D8 + iVar2) = (int)(param_3[2] * fVar1);
        *(int *)(&lbl_832156DC + iVar2) = (int)(param_3[3] * fVar1);
        fn_829C8918(param_2);
        return 0;
      }
    }
  }
  return 0xffffffff80070057;
}

