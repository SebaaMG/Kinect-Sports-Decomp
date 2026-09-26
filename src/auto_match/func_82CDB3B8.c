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
extern int fn_82CDA000();
extern int fn_82CDA0F0();
extern int fn_82CDA118();
extern int fn_82CDA168();
extern int fn_82CDA950();
extern int fn_82CDB1B8();
extern int fn_82CDB2B8();
extern int fn_82CDEFA0();
extern int fn_830C0538();
extern unsigned int lbl_830C06C0;


void fn_82CDB3B8(int param_1)

{
  *(code **)(param_1 + 0x3e28) = fn_82CDA168;
  *(code **)(param_1 + 0xc64) = fn_82CDA118;
  *(code **)(param_1 + 0x50f0) = fn_82CDA950;
  *(code **)(param_1 + 0x50e8) = fn_82CDB1B8;
  *(code **)(param_1 + 0x50ec) = fn_82CDB2B8;
  *(code **)(param_1 + 0x3e18) = fn_82CDA0F0;
  *(undefined **)(param_1 + 0x3e1c) = &lbl_830C06C0;
  *(code **)(param_1 + 0x3e20) = fn_830C0538;
  *(code **)(param_1 + 0x3e24) = fn_82CDA000;
  *(code **)(param_1 + 0xc60) = fn_82CDEFA0;
  return;
}

