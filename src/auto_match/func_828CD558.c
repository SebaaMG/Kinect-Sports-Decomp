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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern int fn_823B4970();
extern int fn_82886518();
extern int fn_828865A0();
extern int fn_828BDDA0();
extern int fn_828BE008();
extern int fn_828CCA50();
extern int fn_828CCF58();
extern int fn_828E9D28();
extern unsigned int lbl_820265B0;
extern unsigned int lbl_820265B8;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_84;


undefined4 *
fn_828CD558(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             int param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar2;
  undefined4 *puVar1;
  undefined1 auStack_90 [8];
  code *pcStack_88;
  undefined4 uStack_84;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 auStack_60 [96];
  
  fn_828BDDA0();
  param_1[0x25] = param_3;
  param_1[0x20] = (int)param_2;
  param_1[0x21] = param_4;
  param_1[0x22] = param_5;
  param_1[0x24] = 0;
  param_1[0x14] = &lbl_820265B0;
  *(bool *)(param_1 + 0x23) = param_6 + -1 == param_5;
  *param_1 = &lbl_820265B8;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  fn_828E9D28(param_1 + 0x26,0,0);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0xc1) = 0;
  param_1[0x31] = 0;
  fn_823B4970(param_1 + 0x26,param_7,param_8,0);
  if (param_1[0x25] != 0) {
    *(undefined4 **)(param_1[0x25] + 0x90) = param_1;
  }
  cVar2 = fn_828865A0(param_2);
  if (cVar2 != '\0') {
    fn_82886518(param_1,0xffffffffffffffff,0xffffffffffffffff);
  }
  uStack_84 = 0;
  pcStack_88 = fn_828CCA50;
  puStack_78 = param_1;
  fn_828CCF58(auStack_60,0x828cca5000000000,CONCAT44(param_1,uStack_74),uStack_70,auStack_90);
  puVar1 = (undefined4 *)fn_828BE008(&pcStack_88,param_2,auStack_60);
  param_1[0x31] = *puVar1;
  return param_1;
}

