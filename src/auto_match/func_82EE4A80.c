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
extern int fn_82E583E0();
extern int fn_82EE3128();
extern int fn_82EE4A08();
extern int fn_82F37588();
extern unsigned int lbl_8215FC70;
extern unsigned int lbl_8215FC78;
extern unsigned int lbl_8215FC8C;
extern unsigned int lbl_82162BB0;


void fn_82EE4A80(undefined4 *param_1)

{
  *param_1 = &lbl_8215FC8C;
  param_1[1] = &lbl_8215FC78;
  fn_82EE4A08(param_1 + 1);
  param_1[0x2d] = &lbl_8215FC70;
  if (param_1[0x2e] == 0) {
    fn_82EE3128(param_1 + 0x2d,0);
  }
  param_1[0x12] = &lbl_82162BB0;
  if (param_1[0x13] == 0) {
    fn_82F37588(param_1 + 0x12,0);
  }
  fn_82E583E0(param_1);
  return;
}

