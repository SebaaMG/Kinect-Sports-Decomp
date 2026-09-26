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
extern int fn_824BF8A8();
extern unsigned int lbl_831CE850;
extern unsigned int uRam831ce854;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined4 * fn_822A2A48(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  *param_1 = 0;
  puVar1 = param_1 + 0x87;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = 8;
  param_1[4] = 0;
  do {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0xaa] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  puVar1 = param_1 + 0x91;
  uStack_50 = 0;
  uStack_4c = lbl_831CE850;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 5;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 7;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 0;
  fn_824BF8A8(param_1 + 0x9d,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 5;
  fn_824BF8A8(param_1 + 0x9d,&uStack_50);
  puVar1 = param_1 + 0x95;
  uStack_4c = uRam831ce854;
  uStack_50 = 2;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = uRam831ce854;
  uStack_50 = 3;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = uRam831ce854;
  uStack_50 = 4;
  fn_824BF8A8(puVar1,&uStack_50);
  puVar1 = param_1 + 0x99;
  uStack_4c = lbl_831CE850;
  uStack_50 = 1;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 6;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 7;
  fn_824BF8A8(puVar1,&uStack_50);
  uStack_50 = 1;
  uStack_4c = lbl_831CE850;
  fn_824BF8A8(param_1 + 0xa1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 6;
  fn_824BF8A8(param_1 + 0xa1,&uStack_50);
  uStack_4c = lbl_831CE850;
  uStack_50 = 8;
  fn_824BF8A8(param_1 + 0xa5,&uStack_50);
  return param_1;
}

