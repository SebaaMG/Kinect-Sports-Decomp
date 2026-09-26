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
extern int fn_82B7F508();
extern int fn_82B9CF38();
extern int fn_82B9D1D8();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82B7F5B8(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *apuStack_60 [4];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  
  apuStack_60[0] = (undefined1 *)0x0;
  fn_82B9D1D8(param_3,*(undefined4 *)(param_1 + 4),0,apuStack_60,param_4,0,0);
  fn_82B9CF38(param_3,*(undefined4 *)(param_1 + 4),&uStack_50,param_4,0,0);
  param_2 = *(int *)(param_1 + 8) + param_2;
  uVar7 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_2 + 8) = (uStack_50 & 1) << 0xc | *(uint *)(param_2 + 8) & 0xffffefff;
  uVar1 = (uStack_4c & 1) << 0x13;
  *(uint *)(param_2 + 0xc) = uVar1 | uVar7 & 0xfff7ffff;
  uVar2 = (uStack_48 & 1) << 0x12;
  *(uint *)(param_2 + 0xc) = uVar2 | uVar1 | uVar7 & 0xfff3ffff;
  uVar3 = (uStack_44 & 1) << 0x11;
  *(uint *)(param_2 + 0xc) = uVar3 | uVar2 | uVar1 | uVar7 & 0xfff1ffff;
  uVar4 = (uStack_40 & 1) << 0x10;
  *(uint *)(param_2 + 0xc) = uVar4 | uVar3 | uVar2 | uVar1 | uVar7 & 0xfff0ffff;
  uVar5 = (uStack_3c & 0x3f) << 10;
  *(uint *)(param_2 + 0xc) = uVar5 | uVar4 | uVar3 | uVar2 | uVar1 | uVar7 & 0xfff003ff;
  *(uint *)(param_2 + 0xc) =
       (uStack_38 & 0x3f) << 2 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1 | uVar7 & 0xfff00303;
  *(char *)(param_2 + 0x10) =
       (char)((int)uStack_34 >> 2) + ((int)uStack_34 < 0 && (uStack_34 & 3) != 0);
  *(uint *)(param_2 + 0x10) =
       (((int)uStack_30 >> 2) + (uint)((int)uStack_30 < 0 && (uStack_30 & 3) != 0) +
       *(int *)(param_1 + 0xc)) * 2 & 0xfffffe | *(uint *)(param_2 + 0x10) & 0xff000001;
  iVar6 = fn_82B7F508(*apuStack_60[0]);
  *(uint *)(param_2 + 0xc) = iVar6 << 0x1d | *(uint *)(param_2 + 0xc) & 0x1fffffff;
  uVar7 = fn_82B7F508(apuStack_60[0][1]);
  *(uint *)(param_2 + 0xc) = (uVar7 & 7) << 0x1a | *(uint *)(param_2 + 0xc) & 0xe3ffffff;
  uVar7 = fn_82B7F508(apuStack_60[0][2]);
  *(uint *)(param_2 + 0xc) = (uVar7 & 7) << 0x17 | *(uint *)(param_2 + 0xc) & 0xfc7fffff;
  uVar7 = fn_82B7F508(apuStack_60[0][3]);
  *(uint *)(param_2 + 0xc) = (uVar7 & 7) << 0x14 | *(uint *)(param_2 + 0xc) & 0xff8fffff;
  return;
}

