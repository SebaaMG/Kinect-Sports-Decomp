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
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_824CA800();
extern int fn_8255F0B8();
extern int fn_8265C9E0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F4818();
extern int fn_827F5AF8();
extern unsigned int lbl_821C0DB8;
extern unsigned int lbl_821C23D8;
extern unsigned int uStack_64;


undefined4 *
fn_8250E2F8(undefined4 *param_1,undefined8 param_2,int param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_90 [44];
  undefined4 uStack_64;
  
  fn_827F1148(param_1,param_2,0);
  puVar3 = param_1 + 100;
  *param_1 = &lbl_821C23D8;
  fn_8255F0B8(puVar3,param_2,0);
  puVar2 = param_1 + 0xd0;
  fn_8255F0B8(puVar2,param_2,0);
  fn_827F4818(auStack_90,0,puVar3,puVar2);
  uStack_64 = 1;
  fn_827F5AF8(param_1 + 0x13c,auStack_90);
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  puVar1 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 1;
    puVar1[2] = 1;
    puVar1[3] = 0;
    *puVar1 = &lbl_821C0DB8;
  }
  if (param_1[0x177] != 0) {
    fn_822315A0();
  }
  param_1[0x177] = puVar1;
  param_1[0x176] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  fn_827F0FB8(param_1,puVar3,0);
  fn_827F0FB8(param_1,puVar2,0);
  fn_827F0FB8(param_1,param_1 + 0x13c,1);
  if (param_3 != 0) {
    param_1[0xc0] = param_3;
    param_1[0xc2] = param_4;
    param_1[0xc1] = 0;
    param_1[300] = param_3;
    param_1[0x12d] = 0;
    param_1[0x12e] = param_4;
  }
  fn_824CA800(param_1 + 200,param_5);
  param_1[0xce] = 1;
  fn_824CA800(param_1 + 0x134,param_5);
  param_1[0x13a] = 1;
  return param_1;
}

