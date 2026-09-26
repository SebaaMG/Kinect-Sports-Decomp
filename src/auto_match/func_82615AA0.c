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
extern int fn_825D6AD8();
extern int fn_825F1900();
extern unsigned int lbl_821CACBC;


void fn_82615AA0(undefined4 *param_1)

{
  *param_1 = &lbl_821CACBC;
  if (param_1[0xd] != 0) {
    fn_825D6AD8();
    param_1[0xd] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_825D6AD8();
    param_1[0xe] = 0;
  }
  if (param_1[0xf] != 0) {
    fn_825D6AD8();
    param_1[0xf] = 0;
  }
  if (param_1[0x10] != 0) {
    fn_825F1900();
    param_1[0x10] = 0;
  }
  return;
}

