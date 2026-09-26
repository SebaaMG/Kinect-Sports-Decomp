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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82A2BA48();
extern int fn_82A2D260();
extern int fn_82A2DDC0();
extern int fn_82A2F3F0();
extern unsigned int lbl_82089378;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


undefined8
fn_82A2F578(int param_1,ulonglong param_2,int param_3,int *param_4,int *param_5,uint *param_6,
             undefined8 param_7)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  int aiStack_84 [33];
  
  uVar10 = (ulonglong)*(uint *)(&lbl_82089378 + param_3 * 4);
  uVar9 = *(uint *)("XLNI_DET_MEDIA" + param_3 * 4 + 0xc);
  uVar13 = (ulonglong)uVar9;
  if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x9c)) {
    uVar5 = fn_82A2DDC0(param_1,param_2,param_3,0,aiStack_84);
    if (-1 < (int)uVar5) {
      uVar1 = param_2 & 0xffffffff;
      trapWord(6,uVar10,0);
      iVar12 = 0;
      iVar11 = 0;
      while( true ) {
        trapWord(6,uVar13,0);
        iVar4 = (int)(((param_2 & 0xffffffff) / uVar13) % 0xaa) * 0x18 + aiStack_84[0];
        if (param_3 == 1) {
          uVar5 = fn_82A2F3F0(param_1,param_2,&uStack_90,&uStack_8c,&uStack_88,param_7);
        }
        else {
          uVar5 = fn_82A2F578(param_1,param_2,param_3 + -1,&uStack_90,&uStack_8c,&uStack_88,
                                param_7);
        }
        if ((int)uVar5 < 0) break;
        uVar2 = *(uint *)(iVar4 + 0x14);
        trapWord(6,uVar13,0);
        lVar6 = (longlong)(int)((param_2 & 0xffffffff) / uVar13) * (longlong)(int)uVar9;
        uVar3 = ((ulonglong)uVar2 & 0xffff8000) + ((ulonglong)uStack_90 & 0x1ffff) * 0x8000 &
                0x3fff8000;
        uVar7 = CONCAT44(uVar2,uVar2) & 0xffffffffc0007fff | uVar3;
        *(int *)(iVar4 + 0x14) = (int)uVar7;
        uVar7 = uVar7 + uStack_8c;
        *(uint *)(iVar4 + 0x14) = uVar2 & 0xc0000000 | (uint)uVar3 | (uint)uVar7 & 0x7fff;
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x9c) - lVar6;
        if ((ulonglong)uVar9 < (uVar8 & 0xffffffff)) {
          uVar8 = uVar13;
        }
        if ((((uVar8 & 0xffffffff) == uVar3 >> 0xf) && ((uVar8 & 0xffffffff) == uVar13)) ||
           ((uVar8 & 0xffffffff) == (uVar7 & 0x7fff))) {
          fn_82A2BA48(param_1,lVar6,param_3);
        }
        param_2 = (ulonglong)uStack_88;
        iVar12 = uStack_90 + iVar12;
        iVar11 = uStack_8c + iVar11;
        if ((param_2 == 0xffffff) || (trapWord(6,uVar10,0), param_2 / uVar10 != uVar1 / uVar10))
        break;
      }
      uVar9 = aiStack_84[0] - *(int *)(param_1 + 0x34);
      iVar4 = (((int)uVar9 >> 0xc) + (uint)((int)uVar9 < 0 && (uVar9 & 0xfff) != 0)) * 8 +
              *(int *)(param_1 + 0x30);
      *(char *)(iVar4 + 4) = *(char *)(iVar4 + 4) + -1;
      *param_4 = iVar12;
      *param_5 = iVar11;
      *param_6 = uStack_88;
    }
  }
  else {
    fn_82A2D260(param_1,0xffffffffc0000032);
    uVar5 = 0xffffffffc0000032;
  }
  return uVar5;
}

