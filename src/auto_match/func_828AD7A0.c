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
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82F63EC8();
extern unsigned int lbl_83214018;


undefined1 * fn_828AD7A0(undefined1 *param_1)

{
  if ((lbl_83214018 & 1) == 0) {
    lbl_83214018 = lbl_83214018 | 1;
    fn_82230110(0xffffffff83213ffc,0xffffffff82196582);
    fn_82F63EC8(0xffffffff83141088);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  fn_82230218(param_1,0xffffffff83213ffc,0,0xffffffffffffffff);
  return param_1;
}

