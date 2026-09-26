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
extern int fn_8294B508();
extern int fn_82951FC8();
extern int fn_829636A8();
extern int fn_8297AE90();
extern int fn_82F68CC0();


longlong fn_829579B8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      ulonglong param_5,uint param_6,int param_7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  lVar6 = 1;
  if ((param_5 & 0xffffffff) != 0) {
    puVar1 = *(uint **)((int)((param_5 & 0xffffffff) << 2) + *(int *)(param_1 + 0x18) + -4);
    iVar2 = fn_829636A8(puVar1);
    if (((iVar2 == 0) && (uVar4 = *puVar1, (uVar4 & 0xf0000000) != 0x60000000)) &&
       ((uVar4 & 0xfff00000) != 0x11000000)) {
      uVar8 = param_5 - 1;
      if ((longlong)uVar8 < 0) {
        return 1;
      }
      lVar7 = (uVar8 & 0x3fffffff) << 2;
      do {
        puVar1 = *(uint **)((int)lVar7 + *(int *)(param_1 + 0x18));
        if ((ulonglong)puVar1[9] != (param_5 & 0xffffffff)) {
          uVar4 = *puVar1;
          if ((uVar4 & 0xfff00000) != 0) {
            if ((uVar4 & 0xf0000000) == 0x60000000) {
              return lVar6;
            }
            if ((uVar4 & 0xfff00000) == 0x11000000) {
              return lVar6;
            }
            fn_8294B508(param_1,param_4,puVar1,param_5);
            iVar2 = 0;
            uVar9 = (uint)((*puVar1 & 0xfff00000) == 0x50000000);
            uVar4 = 0;
            if (puVar1[3] != 0) {
              iVar3 = 0;
              do {
                iVar5 = *(int *)(*(int *)(iVar3 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14));
                if ((int)(*(uint *)(param_1 + 0x6c) << 0x1d | *(uint *)(param_1 + 0x6c) >> 3) < 0) {
                  iVar5 = *(int *)(iVar5 + 0x10);
                }
                else {
                  iVar5 = *(int *)((*(int *)(iVar5 + 0xc) * 4 + *(int *)(iVar5 + 0x10)) * 4 +
                                  *(int *)(param_2 + 0x14));
                }
                if (iVar5 == 3) {
                  iVar2 = 1;
                }
                else {
                  uVar9 = 1;
                }
                uVar4 = uVar4 + 1;
                iVar3 = iVar3 + 4;
              } while (uVar4 < puVar1[3]);
            }
            if ((uVar9 != param_6) && (iVar2 != param_7)) {
              lVar6 = fn_82951FC8(param_1,param_5 - 1,uVar8);
              if (lVar6 < 0) {
                return lVar6;
              }
              if ((*(uint *)(param_1 + 0x6c) & 4) != 0) {
                return 0;
              }
              iVar3 = fn_8297AE90(param_1,param_2,0);
              if (-1 < iVar3) {
                uVar4 = 0;
                if (puVar1[3] != 0) {
                  iVar3 = 0;
                  do {
                    iVar5 = *(int *)(*(int *)(iVar3 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14));
                    if (*(int *)((*(int *)(iVar5 + 0xc) * 4 + *(int *)(iVar5 + 0x10)) * 4 +
                                *(int *)(param_2 + 0x14)) == 3) {
                      iVar2 = 1;
                    }
                    else {
                      uVar9 = 1;
                    }
                    uVar4 = uVar4 + 1;
                    iVar3 = iVar3 + 4;
                  } while (uVar4 < puVar1[3]);
                }
                if ((uVar9 != param_6) && (iVar2 != param_7)) {
                  return 0;
                }
              }
              fn_82F68CC0(*(undefined4 *)(param_1 + 0x18),param_3,*(int *)(param_1 + 0xc) << 2);
            }
          }
        }
        uVar8 = uVar8 - 1;
        lVar7 = lVar7 + -4;
        if ((longlong)uVar8 < 0) {
          return lVar6;
        }
      } while( true );
    }
  }
  return 1;
}

