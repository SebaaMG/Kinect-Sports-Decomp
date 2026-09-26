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
extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82534820();
extern int fn_82865088();
extern unsigned int lbl_832993B8;
extern unsigned int lbl_832993BC;


undefined8 fn_82536178(ulonglong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [40];
  
  if ((lbl_832993BC & 1) == 0) {
    lbl_832993BC = lbl_832993BC | 1;
    fn_82230110(auStack_40,0xffffffff821c3da0);
    lbl_832993B8 = fn_82865088(auStack_40);
    fn_82230300(auStack_40,1,0);
  }
  if (((param_1 & 0xffffffff) == (ulonglong)lbl_832993B8) || ((param_1 & 0xffffffff) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82534820(param_1);
  }
  return uVar1;
}

