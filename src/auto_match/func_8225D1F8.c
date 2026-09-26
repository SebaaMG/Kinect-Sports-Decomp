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
extern int fn_822750C8();
extern int fn_823AB478();
extern int fn_825123E8();
extern int fn_82A1C0C8();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659D4;


void fn_8225D1F8(int param_1,uint param_2)

{
  uint uVar2;
  undefined8 uVar1;
  
  if (param_2 < 8) {
    if ((lbl_83265988 == 0) || (uVar2 = fn_823AB478(), uVar2 != param_2)) {
      *(uint *)(param_1 + 0x58) = param_2;
      fn_825123E8();
    }
  }
  else {
    fn_825123E8();
    lbl_832659D4 = 1;
    uVar1 = fn_822750C8();
    fn_82A1C0C8(uVar1,0x80000);
    *(undefined4 *)(param_1 + 0x58) = 0xff;
  }
  return;
}

