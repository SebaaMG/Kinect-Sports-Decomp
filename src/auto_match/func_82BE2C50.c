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
extern int fn_82BE1EE0();
extern int fn_82BE21A8();
extern int fn_82BE5230();
extern int fn_82BE5340();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BEA1E8();
extern int fn_82BEB7A8();
extern unsigned int lbl_820E8D68;
extern unsigned int lbl_820E8D6C;
extern unsigned int lbl_820E8D78;
extern unsigned int lbl_820E8D7C;
extern unsigned int lbl_820EBE90;


void fn_82BE2C50(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &lbl_820E8D6C;
  param_1[10] = &lbl_820E8D7C;
  param_1[0xc] = &lbl_820E8D68;
  puVar2 = param_1 + 0x5c;
  *(undefined ***)((int)param_1 + *(int *)(param_1[0xb] + 4) + 0x2c) = &lbl_820E8D78;
  param_1[0x60] = 0;
  fn_82BE5340(puVar2);
  while (param_1[0x5e] != 0) {
    uVar1 = fn_82BE5378(puVar2);
    fn_82BE1EE0(param_1,uVar1);
  }
  puVar3 = param_1 + 0x58;
  fn_82BE5340(puVar3);
  while (param_1[0x5a] != 0) {
    uVar1 = fn_82BE5378(puVar3);
    fn_82BE21A8(param_1,uVar1);
  }
  fn_82BE5478(puVar2);
  fn_82BE5478(puVar3);
  param_1[0x48] = &lbl_820EBE90;
  fn_82BE5230(param_1 + 0x48);
  param_1[0x42] = &lbl_820EBE90;
  fn_82BE5230(param_1 + 0x42);
  fn_82BE5230(param_1 + 0x38);
  fn_82BEA1E8(param_1 + 0x16);
  fn_82BE5230(param_1 + 0xe);
  fn_82BEB7A8(param_1);
  return;
}

