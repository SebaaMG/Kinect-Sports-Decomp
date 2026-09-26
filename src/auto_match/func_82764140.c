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
extern int fn_8267BE38();
extern int fn_826EB708();
extern int fn_82758500();
extern int fn_8275CEE0();
extern int fn_8275D0F8();
extern unsigned int lbl_820147E0;
extern unsigned int lbl_820149E0;


void fn_82764140(undefined4 *param_1)

{
  *param_1 = &lbl_820149E0;
  fn_82758500(param_1[0x17],param_1[0x18]);
  fn_8267BE38(param_1[0x17]);
  fn_826EB708(param_1[0x14],param_1[0x15]);
  fn_8267BE38(param_1[0x14]);
  fn_8275D0F8(param_1 + 0x11);
  fn_8275D0F8(param_1 + 10);
  *param_1 = &lbl_820147E0;
  fn_8275CEE0(param_1);
  return;
}

