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
extern int fn_82A29A38();
extern int fn_82AAC770();
extern int fn_82AACDF0();
extern unsigned int lbl_83160520;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82AAD090(ulonglong param_1,ulonglong param_2,uint param_3,undefined8 param_4,int *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  uint *puVar7;
  uint uStack_50;
  uint uStack_4c;
  
  uVar1 = param_1 & 0xff0000;
  puVar7 = (uint *)*param_5;
  if (uVar1 == 0xe40000) {
    uVar5 = 0x3210;
  }
  else {
    uVar5 = *(int *)(&lbl_83160520 + ((uint)(uVar1 >> 0x14) & 0xc)) << 0xc |
            *(int *)(&lbl_83160520 + ((uint)((uVar1 >> 0x14) << 2) & 0xc)) << 8 |
            *(int *)(&lbl_83160520 + ((uint)((uVar1 >> 0x12) << 2) & 0xc)) << 4 |
            *(uint *)(&lbl_83160520 + ((uint)uVar1 >> 0xe & 0xc));
  }
  uVar2 = fn_82AAC770(param_1 & 0xf000000);
  uVar3 = fn_82AACDF0(param_1,param_4,&uStack_50);
  bVar6 = false;
  if (((param_1 & 0x2000) == 0x2000) &&
     (((param_1 & 0xffffffff) >> 0x14 & 0x700 | param_1 & 0x1800) == 0x100)) {
    if (((param_2 & 0xffffffff) >> 0x14 & 0x700 | param_2 & 0x1800) == 0xf00) {
      uStack_4c = uStack_4c & 0xfff10000 | 0x10000;
      if ((param_2 & 0x7ff) != 0) {
        fn_82A29A38();
      }
      bVar6 = true;
    }
    else {
      fn_82A29A38();
    }
  }
  if (((uVar2 | param_3) == 0) && (uVar5 == 0x3210)) {
    *puVar7 = ((uint)bVar6 << 7 | uStack_50 & 0x3f) << 0x10 | uVar3 & 0xffff;
  }
  else {
    *puVar7 = ((uint)bVar6 << 7 | uStack_50 & 0x3f) << 0x10 | 0x400000 | uVar3 & 0xffff;
    puVar7 = puVar7 + 1;
    *puVar7 = uVar2 | param_3 | uVar5;
  }
  puVar4 = puVar7 + 1;
  if (bVar6) {
    *puVar4 = uStack_4c;
    puVar4 = puVar7 + 2;
  }
  *param_5 = (int)puVar4;
  return;
}

