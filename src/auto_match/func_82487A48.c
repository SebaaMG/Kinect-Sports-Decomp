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
extern unsigned int *auStack_80;
extern int fn_8227FDA0();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_821BE91C;
extern unsigned int lbl_821CC160;
extern unsigned int uRam831d3e9c;
extern unsigned int uRam831d3ea0;
extern unsigned int uRam831d3eb8;


undefined4 *
fn_82487A48(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [128];
  
  param_1[3] = lbl_821CC160;
  param_1[1] = 6;
  param_1[2] = 0;
  *param_1 = &lbl_821BE91C;
  uVar1 = fn_822C5B18(auStack_80,param_7);
  param_1[4] = 0;
  fn_82F68CC0(param_1 + 5,param_2,0x444);
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  fn_822C5B18(param_1 + 0x118,uVar1);
  param_1[0x11f] = param_4;
  param_1[0x11e] = param_3;
  param_1[0x120] = param_5;
  param_1[0x121] = param_6;
  param_1[0x122] = param_8;
  uRam831d3ea0 = *param_2;
  uRam831d3eb8 = param_2[1];
  uRam831d3e9c = param_3;
  uVar2 = fn_8265C9E0(0xa0);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8227FDA0(uVar2,0xffffffff831d3e9c);
  }
  param_1[0x117] = uVar3;
  fn_82359C18(uVar1);
  param_1[0x124] = param_3;
  param_1[0x125] = param_2[4];
  fn_82359C18(param_7);
  return param_1;
}

