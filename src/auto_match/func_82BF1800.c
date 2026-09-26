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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BEB7A8();
extern int fn_82BF0E40();
extern int fn_82BF88E8();
extern unsigned int lbl_820EB3E4;
extern unsigned int lbl_820EB3F4;
extern unsigned int lbl_831751CC;


void fn_82BF1800(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_820EB3F4;
  param_1[0xb] = &lbl_820EB3E4;
  if (param_1[0x1b] != 0) {
    (*(code *)lbl_831751CC)();
    param_1[0x1b] = 0;
  }
  puVar2 = param_1 + 0xf;
  fn_82BE5340(puVar2);
  while (param_1[0x11] != 0) {
    puVar1 = (undefined4 *)fn_82BE5378(puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    fn_82BE5350(puVar2);
  }
  fn_82BE5478();
  fn_82BF0E40(param_1,1);
  fn_82BE5478(puVar2);
  fn_82BF88E8(param_1 + 0xb);
  fn_82BEB7A8(param_1);
  return;
}

