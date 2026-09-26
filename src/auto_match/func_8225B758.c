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
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A40;
extern unsigned int lbl_83265A48;
extern unsigned int lbl_832760AC;
extern unsigned int lbl_832767BC;


undefined8 fn_8225B758(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  *param_2 = param_1;
  *param_3 = (lbl_83265A48 + 7U >> 3) + (lbl_83265A40 + 7U >> 3) + (lbl_83265A38 + 7U >> 3) +
             (lbl_832760AC + 7U >> 3) + (lbl_832767BC + 7) * 4;
  return 1;
}

