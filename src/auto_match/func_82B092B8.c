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
extern int fn_82AF5618();
extern int fn_82AF71C8();
extern int fn_82AFF398();
extern int fn_82F65FE0();


longlong fn_82B092B8(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,uint param_5,
                      undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  char cVar5;
  int iVar4;
  longlong lVar3;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  if (param_4 != 0) {
    piVar8 = (int *)(param_3 + -4);
    uVar11 = param_4;
    do {
      iVar10 = piVar8[1];
      while( true ) {
        iVar6 = *(int *)(iVar10 + 0xc);
        cVar5 = fn_82AF5618(iVar6);
        if (cVar5 != '\0') break;
        uVar9 = *(uint *)(iVar6 + 8);
        uVar2 = uVar9 >> 7 & 0x7f;
        if ((uVar2 < 0x20) || (bVar1 = true, 0x52 < uVar2)) {
          bVar1 = false;
        }
        if (((bVar1) && ((uVar9 & 0x380000) == 0x80000)) ||
           ((uVar2 == 0x60 && ((uVar9 & 0x380000) != 0)))) {
          iVar10 = *(int *)(iVar6 + 0x2c);
        }
        else {
          if ((uVar2 != 0x61) && (uVar2 != 99)) {
            iVar10 = 0;
            break;
          }
          iVar10 = *(int *)(iVar6 + 0x30);
        }
      }
      uVar11 = uVar11 - 1;
      piVar8 = piVar8 + 2;
      *piVar8 = iVar10;
    } while (uVar11 != 0);
  }
  fn_82F65FE0(param_3,param_4,8,0xffffffff82af74d8);
  lVar7 = 0;
  uVar11 = 0;
  uVar9 = 0;
  if (param_4 != 0) {
    iVar6 = 0;
    iVar10 = param_3;
    do {
      if (uVar11 != uVar9) {
        iVar4 = fn_82AF71C8(iVar6 + param_3,iVar10);
        if (iVar4 != 0) {
          if (param_5 <= uVar9 - uVar11) {
            lVar3 = fn_82AFF398(param_1,param_2,iVar6 + param_3,uVar9 - uVar11,param_6,param_7,
                                  param_8);
            lVar7 = lVar3 + lVar7;
          }
          iVar6 = uVar9 << 3;
          uVar11 = uVar9;
        }
      }
      if (*(int *)(iVar10 + 4) == 0) {
        uVar11 = uVar9 + 1;
        iVar6 = (8 - param_3) + iVar10;
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 8;
    } while (uVar9 < param_4);
  }
  param_4 = param_4 - uVar11;
  if ((param_4 != 0) && (param_5 <= param_4)) {
    lVar3 = fn_82AFF398(param_1,param_2,uVar11 * 8 + param_3,param_4,param_6,param_7,param_8);
    lVar7 = lVar3 + lVar7;
  }
  return lVar7;
}

