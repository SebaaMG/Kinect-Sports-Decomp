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
extern int fn_82F655D8();
extern int fn_82F6E018();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_820D8078;


undefined8 fn_82B80318(double param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 < lbl_820D8078) {
    if (lbl_820D8078 <= ABS(param_1)) {
      return lbl_82005710;
    }
    iVar1 = fn_82F6E018(param_1);
    if (iVar1 == 4) {
      return lbl_82005710;
    }
    if (iVar1 != 0x200) {
      uVar2 = fn_82F655D8(lbl_82002C40,param_1);
      return uVar2;
    }
  }
  return 0x7ff0000000000000;
}

