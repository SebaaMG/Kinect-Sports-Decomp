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
extern int fn_82E22E18();
extern int fn_82E23670();
extern int fn_82E23950();
extern unsigned int lbl_8214BF70;
extern unsigned int lbl_8214BF74;
extern unsigned int lbl_821B4200;


void fn_82E23148(undefined4 *param_1)

{
  *param_1 = &lbl_8214BF74;
  param_1[1] = &lbl_8214BF70;
  fn_82E22E18();
  fn_82E23950(param_1 + 0xc);
  if (param_1[0x5e] != 0) {
    fn_82E23670(param_1 + 0x5a,0x45b,0x45b,0);
  }
  param_1[1] = &lbl_821B4200;
  return;
}

