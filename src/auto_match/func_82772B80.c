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
extern int fn_82761DE8();
extern int fn_82764140();
extern int fn_82772920();
extern unsigned int lbl_8200BD80;
extern unsigned int lbl_82015278;


void fn_82772B80(undefined4 *param_1)

{
  *param_1 = &lbl_82015278;
  fn_82761DE8(param_1[0x24]);
  fn_82761DE8(param_1[0x23]);
  fn_82772920(param_1[0x31],param_1[0x32]);
  fn_8267BE38(param_1[0x31]);
  fn_82758500(param_1[0x2e],param_1[0x2f]);
  fn_8267BE38(param_1[0x2e]);
  fn_82758500(param_1[0x2b],param_1[0x2c]);
  fn_8267BE38(param_1[0x2b]);
  fn_826EB708(param_1[0x28],param_1[0x29]);
  fn_8267BE38(param_1[0x28]);
  fn_826EB708(param_1[0x25],param_1[0x26]);
  fn_8267BE38(param_1[0x25]);
  fn_82764140(param_1 + 4);
  *param_1 = &lbl_8200BD80;
  return;
}

