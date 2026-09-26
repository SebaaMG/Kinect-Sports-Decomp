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
extern int fn_82FA5190();
extern int fn_82FF9AA8();
extern int fn_83007708();
extern int fn_8300A0C0();
extern int fn_8300C5C0();
extern int fn_830364E8();
extern unsigned int lbl_8217C078;
extern unsigned int lbl_8217C1C0;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned int lbl_832645A8;
extern unsigned int lbl_832645B0;


void fn_8300B4E8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &lbl_8217C1C0;
  param_1[7] = &lbl_8217C940;
  fn_8300A0C0();
  for (puVar1 = (undefined4 *)param_1[0x1f]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    fn_830364E8(puVar1 + 2);
  }
  fn_8300C5C0(param_1 + 0x1f);
  fn_8300C5C0(param_1 + 0x17);
  if (param_1 == lbl_832645A8) {
    lbl_832645A8 = (undefined4 *)0x0;
    lbl_832645B0 = 0;
    *(undefined1 *)(lbl_832642F0 + 0x8c) = 0;
    fn_82FF9AA8();
  }
  *param_1 = &lbl_8217C078;
  param_1[7] = &lbl_8217C940;
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    fn_82FA5190(lbl_831BC768);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  fn_83007708(param_1);
  return;
}

