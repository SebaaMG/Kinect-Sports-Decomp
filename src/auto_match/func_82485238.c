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
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_30;
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_f0;
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();


void fn_82485238(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 auStack_130 [4];
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  undefined1 auStack_30 [48];
  
  switch(param_1) {
  case 4:
  case 0x13:
  case 0x14:
  case 0x15:
    fn_82864988(auStack_60,0xffffffff821bdc4c);
    auStack_130[0] = fn_828647D8();
    puVar1 = auStack_60;
    break;
  case 5:
  case 0x16:
  case 0x17:
    fn_82864988(auStack_c0,0xffffffff821bdc78);
    auStack_130[0] = fn_828647D8();
    puVar1 = auStack_c0;
    break;
  case 6:
  case 10:
  case 0xb:
  case 0xc:
    fn_82864988(auStack_120,0xffffffff821bdca0);
    auStack_130[0] = fn_828647D8();
    puVar1 = auStack_120;
    break;
  case 7:
  case 0xd:
  case 0xe:
  case 0xf:
    fn_82864988(auStack_f0,0xffffffff821bdccc);
    auStack_130[0] = fn_828647D8();
    puVar1 = auStack_f0;
    break;
  case 8:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    fn_82864988(auStack_90,0xffffffff821bdcfc);
    auStack_130[0] = fn_828647D8();
    puVar1 = auStack_90;
    break;
  case 9:
  case 0x10:
  case 0x11:
  case 0x12:
    fn_82864988(auStack_30,0xffffffff821bdd28);
    auStack_130[0] = fn_828647D8();
    puVar1 = auStack_30;
    break;
  default:
    goto switchD_82485274_caseD_19;
  }
  fn_82864898(puVar1);
  fn_82536590(auStack_130,0);
switchD_82485274_caseD_19:
  return;
}

