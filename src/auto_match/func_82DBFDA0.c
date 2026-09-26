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
extern unsigned int iStack_c;
extern unsigned int lbl_821425EC;
extern unsigned int lbl_821425F0;


void fn_82DBFDA0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5
                  ,undefined4 *param_6)

{
  ulonglong uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iStack_c;
  
  *param_6 = param_1;
  param_6[1] = param_2;
  param_6[2] = param_3;
  fVar7 = lbl_821425F0;
  fVar6 = lbl_821425EC;
  uVar5 = (longlong)((int)param_5 >> 4) + (ulonglong)((int)param_5 < 0 && (param_5 & 0xf) != 0) &
          0xfffffff;
  uVar9 = uVar5 * 0x10;
  uVar4 = param_4 + 0xfU & 0xfffffff0;
  param_6[3] = uVar4;
  uVar10 = uVar9 + (uVar9 & 0x3fffffff) * 4;
  uVar1 = (uVar10 & 0xffffffff) << 1;
  uVar3 = (uint)uVar1 | (uint)uVar10 >> 0x1f;
  fVar2 = (float)(longlong)(int)((uVar9 + (uVar9 & 0x3fffffff) * 4 & 0xffffffff) << 3);
  uVar3 = ((int)uVar3 >> 6) + (uint)((int)uVar3 < 0 && (uVar1 & 0x3e) != 0) + uVar4 & 0xfffffff0;
  param_6[4] = uVar3;
  param_6[6] = uVar3;
  uVar3 = ((int)((uint)(uVar5 << 6) | (uint)uVar9 >> 0x1e) >> 6) + uVar3 & 0xfffffff0;
  param_6[0x11] = param_4 + (uint)uVar9;
  param_6[8] = uVar3;
  param_6[7] = uVar3;
  param_6[10] = uVar3;
  param_6[0xb] = uVar3;
  iStack_c = (int)(longlong)(fVar2 * fVar7);
  iVar8 = iStack_c;
  iStack_c = (int)(longlong)(fVar2 * fVar6);
  uVar3 = uVar3 - iVar8 & 0xfffffff0;
  param_6[5] = param_6[3];
  param_6[0xc] = uVar3;
  param_6[9] = uVar3;
  uVar4 = uVar3 - iStack_c & 0xfffffff0;
  param_6[0xe] = uVar3;
  param_6[0xd] = uVar4;
  param_6[0x10] = uVar4;
  param_6[0x12] = uVar4;
  param_6[0x13] = uVar4;
  param_6[0xf] = uVar3;
  return;
}

