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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


undefined4 fn_83015138(int *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar2 = param_1[2];
  iVar4 = fn_82FA5060(lbl_831BC768,(param_2 + (ulonglong)uVar2) * 0x1c);
  uVar3 = 0;
  if (iVar4 != 0) {
    iVar1 = (param_1[1] - *param_1) / 0x1c;
    lVar8 = (longlong)iVar1;
    if (*param_1 != 0) {
      if (iVar1 != 0) {
        puVar7 = (undefined4 *)(iVar4 + 0x18);
        do {
          if (puVar7 != (undefined4 *)0x18) {
            puVar7[-2] = 0;
            puVar7[-1] = 0;
            *puVar7 = 0;
          }
          puVar5 = puVar7 + -7;
          puVar6 = (undefined4 *)((int)puVar7 + (*param_1 - iVar4) + -0x1c);
          lVar9 = 7;
          do {
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
            *puVar5 = *puVar6;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          lVar8 = lVar8 + -1;
          puVar7 = puVar7 + 7;
        } while (lVar8 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar4;
    param_1[2] = (int)(param_2 + (ulonglong)uVar2);
    uVar3 = 1;
    param_1[1] = iVar1 * 0x1c + iVar4;
  }
  return uVar3;
}

