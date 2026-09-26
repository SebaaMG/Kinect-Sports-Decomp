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
extern unsigned int lbl_82138514;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


void fn_82D3F268(double param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                  undefined4 param_5,uint param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  undefined8 in_r0;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs45 [16];
  float in_register_00010040;
  float in_register_00010044;
  float in_register_00010048;
  float in_vr4;
  undefined4 in_register_00010050;
  undefined4 in_register_00010054;
  undefined4 in_register_00010058;
  undefined4 in_vr5;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  float in_vr9;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  param_2[4] = (float)param_1;
  uVar1 = param_4 + 3 >> 2;
  *param_2 = &lbl_82138514;
  *(undefined2 *)((int)param_2 + 6) = 1;
  param_2[2] = 0;
  param_2[3] = 6;
  param_2[0x11] = uVar1;
  param_2[0x10] = param_3;
  param_2[0x12] = uVar1 | 0x80000000;
  param_2[0x13] = param_4;
  param_2[0x14] = 0;
  param_2[0x15] = param_5;
  param_2[0x16] = param_6;
  param_2[0x17] = param_6 | 0x80000000;
  param_2[0x18] = 0;
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  iVar3 = (int)in_r0;
  puVar2 = (undefined4 *)((int)param_2 + iVar3 + 0x20 & 0xfffffff0);
  *puVar2 = in_register_000100c0;
  puVar2[1] = in_register_000100c4;
  puVar2[2] = in_register_000100c8;
  puVar2[3] = in_vr12;
  loadVectorLeftIndexed128(in_r0,0xffffffff82002c5c);
  pfVar4 = (float *)((int)param_2 + iVar3 + 0x20 & 0xfffffff0);
  *pfVar4 = in_register_000100b0 * in_register_00010090;
  pfVar4[1] = in_register_000100b4 * in_register_00010094;
  pfVar4[2] = in_register_000100b8 * in_register_00010098;
  pfVar4[3] = in_vr11 * in_vr9;
  vectorAddFloatingPoint(in_vs38,in_vs39);
  puVar2 = (undefined4 *)((int)param_2 + iVar3 + 0x30 & 0xfffffff0);
  *puVar2 = in_register_00010050;
  puVar2[1] = in_register_00010054;
  puVar2[2] = in_register_00010058;
  puVar2[3] = in_vr5;
  pfVar4 = (float *)((int)param_2 + iVar3 + 0x30 & 0xfffffff0);
  *pfVar4 = in_register_00010040 * in_register_00010090;
  pfVar4[1] = in_register_00010044 * in_register_00010094;
  pfVar4[2] = in_register_00010048 * in_register_00010098;
  pfVar4[3] = in_vr4 * in_vr9;
  return;
}

