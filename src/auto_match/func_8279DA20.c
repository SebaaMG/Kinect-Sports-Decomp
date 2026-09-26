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
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_8272A678();
extern int fn_82756EB8();
extern int fn_8279A190();
extern int fn_827ABBA0();
extern unsigned int lbl_82015B3C;


void fn_8279DA20(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &lbl_82015B3C;
  fn_8279A190();
  if (param_1[6] != 0) {
    fn_8272A678(param_1[6],1);
  }
  puVar1 = (undefined4 *)param_1[5];
  param_1[6] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    fn_82756EB8(puVar1 + 7);
    fn_8267BE38(*puVar1);
    fn_8267BE38(puVar1);
  }
  if (param_1[0x4d] != 0) {
    fn_8267C4F0();
  }
  fn_8267C488(param_1 + 0x46);
  if (param_1[0x45] != 0) {
    fn_8267C498();
  }
  fn_827ABBA0(param_1 + 9);
  if (param_1[4] != 0) {
    fn_8267C498();
  }
  if (param_1[3] != 0) {
    fn_8267C498();
  }
  if (param_1[2] != 0) {
    fn_8267C498();
  }
  fn_8267C488(param_1);
  return;
}

