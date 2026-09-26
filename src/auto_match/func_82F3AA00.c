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
extern unsigned int *auStack_30;
extern int fn_82E583E0();
extern int fn_82F39E50();
extern int fn_82F3A250();
extern int fn_82F3A700();
extern int fn_82F3E1E0();
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_82162C2C;


void fn_82F3AA00(undefined4 *param_1)

{
  uint uVar1;
  undefined4 auStack_30 [12];
  
  *param_1 = &lbl_82162C2C;
  param_1[1] = &lbl_8215FDD0;
  if (param_1[0x49a] != 0) {
    uVar1 = 0;
    do {
      fn_82F39E50(param_1 + 0x12,uVar1,auStack_30);
      fn_82F3A250(param_1,auStack_30[0]);
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < (uint)param_1[0x49a]);
  }
  fn_82F3E1E0(param_1 + 1);
  fn_82F3A700(param_1 + 0x12);
  fn_82E583E0(param_1);
  return;
}

