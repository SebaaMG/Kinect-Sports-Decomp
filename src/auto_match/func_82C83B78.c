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
extern int fn_82C81C38();
extern int fn_82C81D50();
extern int fn_82C81D98();
extern int fn_82C81EB8();
extern int fn_82C82EF8();
extern int fn_82C83930();
extern int fn_82CCD6B8();
extern int fn_82CCDC08();
extern int fn_82CCF228();
extern int fn_82CCFD60();
extern int fn_82CD1870();
extern unsigned int lbl_8329F140;
extern unsigned int lbl_8329F144;
extern unsigned int lbl_8329F148;
extern unsigned int lbl_8329F14C;
extern unsigned int lbl_8329F150;
extern unsigned int lbl_8329F154;
extern unsigned int lbl_8329F158;
extern unsigned int lbl_8329F15C;


void fn_82C83B78(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (param_1 == 0) {
      lbl_8329F15C = fn_82CCFD60;
      lbl_8329F158 = fn_82CD1870;
    }
    else {
      lbl_8329F15C = fn_82CCDC08;
      lbl_8329F158 = fn_82CCF228;
    }
    lbl_8329F154 = fn_82C81D98;
    lbl_8329F150 = fn_82C81D50;
    lbl_8329F148 = fn_82CCD6B8;
    lbl_8329F144 = fn_82C81C38;
    lbl_8329F140 = fn_82C83930;
    return;
  }
  if (param_1 != 0) {
    lbl_8329F14C = fn_82C82EF8;
    return;
  }
  lbl_8329F14C = fn_82C81EB8;
  return;
}

