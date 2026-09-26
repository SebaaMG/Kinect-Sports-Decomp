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
extern int fn_822CF9D8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82193D04;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


undefined8 fn_822CFA98(void)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  
  dVar3 = (double)fn_822CF9D8();
  if (dVar3 <= (double)lbl_82191FB0) {
    lVar2 = 1;
    if (dVar3 <= (double)lbl_82193D04) {
      lVar2 = 2;
    }
  }
  else {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    if ((lVar2 == 1) &&
       (lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f,
       lbl_8218E8E8 < (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460)) {
      return 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

