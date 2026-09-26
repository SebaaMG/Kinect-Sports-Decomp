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
extern int fn_82C8FB00();
extern int fn_82C8FD40();
extern int fn_82CBA528();
extern int fn_82CBB1A8();
extern int fn_82CBB2B8();
extern int fn_82CBB438();
extern int fn_82CC4DB8();
extern int fn_82CDB3B8();
extern int fn_82F28610();
extern unsigned int lbl_83231E3C;


void fn_82CBBC30(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = param_1 + 0x3e70;
  lVar2 = 2;
  do {
    fn_82CC4DB8(param_1,iVar1);
    lVar2 = lVar2 + -1;
    iVar1 = iVar1 + 0x8a0;
  } while (lVar2 != 0);
  if (lbl_83231E3C == 0) {
    *(code **)(param_1 + 0xc68) = fn_82CBB1A8;
    *(code **)(param_1 + 0xc70) = fn_82CBB2B8;
  }
  *(code **)(param_1 + 0xc74) = fn_82CBB438;
  *(code **)(param_1 + 0xc6c) = fn_82CBA528;
  *(code **)(param_1 + 0xc70) = fn_82CBB2B8;
  *(code **)(param_1 + 0xcac) = fn_82F28610;
  *(code **)(param_1 + 0xca4) = fn_82C8FB00;
  *(code **)(param_1 + 0xca8) = fn_82C8FD40;
  fn_82CDB3B8(param_1);
  return;
}

