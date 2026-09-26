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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F67DE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_8207F710;
extern unsigned int lbl_8207F718;
extern unsigned int lbl_821AAD20;


void fn_82A0F0D0(uint *param_1,uint param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  uVar5 = lbl_8200DFF4;
  uVar4 = lbl_82006848;
  param_1[0x16] = lbl_8207F718;
  param_1[0x17] = uVar5;
  param_1[0x18] = uVar4;
  dVar6 = (double)fn_82F67DE8(lbl_8207F710);
  param_1[8] = param_1[0x18];
  uVar4 = lbl_821AAD20;
  fVar2 = lbl_82002C5C;
  param_1[0xc] = lbl_821AAD20;
  param_1[0xd] = uVar4;
  param_1[0x14] = uVar4;
  param_1[0x15] = uVar4;
  fVar3 = lbl_82002AE0;
  param_1[9] = (uint)lbl_82002AE0;
  param_1[0x10] = param_1[0x17];
  param_1[0x11] = (uint)fVar3;
  fVar1 = (SQRT((float)(param_2 * param_2 + param_3 * param_3)) * fVar2) / (float)dVar6;
  param_1[2] = (uint)fVar1;
  param_1[0xe] = (uint)fVar1;
  fVar3 = fVar3 / fVar1;
  param_1[3] = (uint)fVar3;
  param_1[6] = (uint)fVar3;
  param_1[0xf] = (uint)-fVar1;
  fVar1 = fVar2 - (float)param_3 * fVar2;
  param_1[5] = (uint)fVar1;
  param_1[7] = (uint)-fVar3;
  fVar2 = fVar2 - (float)param_2 * fVar2;
  param_1[4] = (uint)fVar2;
  param_1[0x13] = (uint)-fVar1;
  param_1[10] = (uint)(fVar3 * fVar2);
  param_1[0x12] = (uint)-fVar2;
  param_1[0xb] = (uint)-(fVar3 * fVar1);
  return;
}

