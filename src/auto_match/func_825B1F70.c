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
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_821954CC;
extern unsigned int lbl_82195508;
extern unsigned int lbl_8219550C;
extern unsigned int lbl_82195510;
extern unsigned int lbl_82195514;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825B1F70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar10 = lbl_821CA460;
  uVar6 = lbl_82195508;
  uVar1 = lbl_8218E8E8;
  if (param_1[0xf] != 0) {
    return;
  }
  *param_1 = 1;
  uVar11 = lbl_821CC160;
  param_1[0x17] = 0;
  uVar9 = lbl_82195514;
  uVar8 = lbl_82195510;
  uVar7 = lbl_8219550C;
  uVar5 = lbl_821954CC;
  uVar4 = lbl_82192F70;
  uVar3 = lbl_82191FCC;
  uVar2 = lbl_8218E8FC;
  param_1[3] = uVar10;
  param_1[4] = uVar6;
  param_1[1] = uVar1;
  param_1[2] = uVar7;
  param_1[5] = uVar3;
  param_1[0xc] = uVar11;
  param_1[0xd] = uVar11;
  param_1[0x18] = uVar8;
  param_1[0x19] = uVar9;
  param_1[0x1a] = uVar4;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = uVar2;
  param_1[0x1d] = uVar1;
  return;
}

