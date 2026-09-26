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
extern unsigned int *auStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_829DB450();
extern int fn_829E3810();
extern int fn_829E3820();
extern int fn_829E3830();
extern int fn_829E3840();
extern unsigned int lbl_82015B38;


longlong fn_829E5558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_24 [36];
  
  lVar1 = fn_829DB450(param_1,&fStack_2c,&fStack_30,auStack_24,&fStack_28);
  if (-1 < lVar1) {
    fn_829E3830((double)lbl_82015B38,param_1);
    fn_829E3840((double)fStack_30,param_1);
    fn_829E3820((double)fStack_2c,param_1);
    fn_829E3810((double)fStack_28,param_1);
    *param_4 = (int)param_1;
  }
  return lVar1;
}

