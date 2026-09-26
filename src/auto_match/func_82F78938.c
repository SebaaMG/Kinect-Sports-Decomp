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
extern int fn_82A2AA10();
extern int fn_82F688E8();
extern int fn_82F79430();
extern unsigned int stack0x00000014;
extern unsigned int uStack_50;


void fn_82F78938(uint *param_1,uint *param_2,ulonglong param_3,uint param_4,uint *param_5,
                  uint *param_6,int param_7)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puStack00000014;
  uint uStack_50;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_3 & 0x10) == 0) {
    uVar3 = (ulonglong)uStack_50;
  }
  else {
    uVar3 = 0xffffffffc000008f;
    param_1[1] = param_1[1] | 0x80000000;
  }
  if ((param_3 & 2) != 0) {
    uVar3 = 0xffffffffc0000093;
    param_1[1] = param_1[1] | 0x40000000;
  }
  if ((param_3 & 1) != 0) {
    uVar3 = 0xffffffffc0000091;
    param_1[1] = param_1[1] | 0x20000000;
  }
  if ((param_3 & 4) != 0) {
    uVar3 = 0xffffffffc000008e;
    param_1[1] = param_1[1] | 0x10000000;
  }
  if ((param_3 & 8) != 0) {
    uVar3 = 0xffffffffc0000090;
    param_1[1] = param_1[1] | 0x8000000;
  }
  param_1[2] = (~*param_2 & 0x80) << 0x14 | param_1[2] & 0xf7ffffff;
  param_1[2] = (~*param_2 & 0x10) << 0x18 | param_1[2] & 0xefffffff;
  param_1[2] = (~*param_2 & 0x40) << 0x17 | param_1[2] & 0xdfffffff;
  param_1[2] = (~*param_2 & 0x20) << 0x19 | param_1[2] & 0xbfffffff;
  param_1[2] = (~*param_2 & 8) << 0x1c | param_1[2] & 0x7fffffff;
  puStack00000014 = param_1;
  uVar1 = fn_82F79430();
  if ((uVar1 & 0x20000000) != 0) {
    puStack00000014[3] = puStack00000014[3] | 0x8000000;
  }
  if ((uVar1 & 0x4000000) != 0) {
    puStack00000014[3] = puStack00000014[3] | 0x10000000;
  }
  if ((uVar1 & 0x10000000) != 0) {
    puStack00000014[3] = puStack00000014[3] | 0x20000000;
  }
  if ((uVar1 & 0x8000000) != 0) {
    puStack00000014[3] = puStack00000014[3] | 0x40000000;
  }
  if ((uVar1 & 0x2000000) != 0) {
    puStack00000014[3] = puStack00000014[3] | 0x80000000;
  }
  uVar2 = *param_2 & 3;
  if ((*param_2 & 3) == 0) {
    uVar2 = *puStack00000014 & 0x3fffffff;
LAB_82f78b70:
    *puStack00000014 = uVar2;
  }
  else {
    if (uVar2 == 1) {
      uVar2 = *puStack00000014 | 0xc0000000;
      goto LAB_82f78b70;
    }
    if (uVar2 < 3) {
      uVar2 = *puStack00000014 & 0x3fffffff | 0x80000000;
      goto LAB_82f78b70;
    }
    if (uVar2 == 3) {
      uVar2 = *puStack00000014 & 0x3fffffff | 0x40000000;
      goto LAB_82f78b70;
    }
  }
  *puStack00000014 = *puStack00000014 & 0xc7ffffff | 0x8000000;
  *puStack00000014 = (param_4 & 0xfff) << 0xf | *puStack00000014 & 0xf8007fff;
  puStack00000014[8] = puStack00000014[8] | 0x80000000;
  if (param_7 == 0) {
    puStack00000014[8] = puStack00000014[8] & 0x87ffffff | 0x8000000;
    *(undefined8 *)(puStack00000014 + 4) = *(undefined8 *)param_5;
    puStack00000014[0x18] = puStack00000014[0x18] | 0x80000000;
    puStack00000014[0x18] = puStack00000014[0x18] & 0x87ffffff | 0x8000000;
    *(undefined8 *)(puStack00000014 + 0x14) = *(undefined8 *)param_6;
  }
  else {
    puStack00000014[8] = puStack00000014[8] & 0x87ffffff;
    puStack00000014[4] = *param_5;
    puStack00000014[0x18] = puStack00000014[0x18] | 0x80000000;
    puStack00000014[0x18] = puStack00000014[0x18] & 0x87ffffff;
    puStack00000014[0x14] = *param_6;
  }
  fn_82F688E8();
  fn_82A2AA10(uVar3,0,1,&stack0x00000014);
  if ((puStack00000014[2] & 0x8000000) != 0) {
    *param_2 = *param_2 & 0xffffff7f;
  }
  if ((puStack00000014[2] & 0x10000000) != 0) {
    *param_2 = *param_2 & 0xffffffef;
  }
  if ((puStack00000014[2] & 0x20000000) != 0) {
    *param_2 = *param_2 & 0xffffffbf;
  }
  if ((puStack00000014[2] & 0x40000000) != 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  if ((puStack00000014[2] & 0x80000000) != 0) {
    *param_2 = *param_2 & 0xfffffff7;
  }
  uVar2 = *puStack00000014 >> 0x1e;
  if (uVar2 == 0) {
    uVar2 = *param_2 & 0xfffffffc;
  }
  else if (uVar2 == 1) {
    uVar2 = *param_2 | 3;
  }
  else if (uVar2 < 3) {
    uVar2 = *param_2 & 0xfffffffc | 2;
  }
  else {
    if (uVar2 != 3) goto LAB_82f78d1c;
    uVar2 = *param_2 & 0xfffffffc | 1;
  }
  *param_2 = uVar2;
LAB_82f78d1c:
  if (param_7 == 0) {
    *(undefined8 *)param_6 = *(undefined8 *)(puStack00000014 + 0x14);
  }
  else {
    *param_6 = puStack00000014[0x14];
  }
  return;
}

