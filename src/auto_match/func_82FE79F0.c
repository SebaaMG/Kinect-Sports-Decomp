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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FFA6E8();
extern unsigned int lbl_832642F0;
extern unsigned int uStack_10;
extern unsigned int uStack_18;


void fn_82FE79F0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  undefined4 param_5)

{
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  fn_82FFA6E8(lbl_832642F0,CONCAT44(((uint)LZCOUNT(param_1) >> 5 ^ 1) + 6,param_3),
                    (ulonglong)param_4 << 0x20,CONCAT44(param_2,param_5),uStack_18,
                    (ulonglong)uStack_10 << 0x20);
  return;
}

