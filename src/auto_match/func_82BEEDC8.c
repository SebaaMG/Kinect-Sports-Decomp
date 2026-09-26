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
extern int fn_82BE5230();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_830B4CB8();
extern unsigned int lbl_820EB148;
extern unsigned int lbl_831751CC;


void fn_82BEEDC8(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &lbl_820EB148;
  if (param_1[5] != 0) {
    (*(code *)lbl_831751CC)();
    param_1[5] = 0;
  }
  puVar2 = param_1 + 0x13;
  fn_82BE5340(puVar2);
  while (param_1[0x15] != 0) {
    fn_82BE5378(puVar2);
    (*(code *)lbl_831751CC)();
    fn_82BE5350(puVar2);
  }
  fn_82BE5478();
  puVar3 = param_1 + 7;
  fn_82BE5340(puVar3);
  while (param_1[9] != 0) {
    uVar1 = fn_82BE5378(puVar3);
    fn_830B4CB8(uVar1,0);
    fn_82BE5350(puVar3);
  }
  fn_82BE5478();
  fn_82BE5478(puVar2);
  fn_82BE5478(puVar3);
  fn_82BE5230(param_1);
  return;
}

