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
extern int fn_82365BD8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82191B24;
extern unsigned int lbl_82191F78;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821929B0;
extern unsigned int lbl_82193CF4;
extern unsigned int lbl_82195A38;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


undefined4 * fn_82346520(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = lbl_82193CF4;
  uVar2 = lbl_821916FC;
  uVar1 = lbl_8218E8FC;
  *param_1 = lbl_821CA460;
  param_1[2] = 0;
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  fn_82365BD8(param_1 + 6);
  fn_82365BD8(param_1 + 8,param_3);
  uVar3 = lbl_82191F78;
  uVar2 = lbl_821917B4;
  uVar1 = lbl_8218E8E8;
  param_1[0xb] = 0;
  param_1[0xc] = uVar1;
  param_1[0x12] = 0;
  param_1[0xd] = uVar1;
  uVar6 = lbl_821CC160;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar2;
  uVar4 = lbl_821929B0;
  uVar3 = lbl_82191FCC;
  uVar2 = lbl_82191FC8;
  uVar1 = lbl_82191B24;
  param_1[10] = uVar6;
  uVar5 = lbl_82195A38;
  param_1[0x13] = uVar4;
  param_1[0x14] = uVar2;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar3;
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  return param_1;
}

