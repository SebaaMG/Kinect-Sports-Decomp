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


undefined4 fn_82FA8128(int *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = param_2 + (ulonglong)(uint)param_1[2];
  iVar3 = fn_82FA5060(lbl_831BC768,(uVar8 + (uVar8 & 0x3fffffff) * 4 & 0x1fffffff) << 3);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar1 = (param_1[1] - *param_1) / 0x28;
    if (*param_1 != 0) {
      if (uVar1 != 0) {
        iVar7 = 0;
        lVar4 = (longlong)(int)uVar1;
        do {
          puVar5 = (undefined8 *)(iVar7 + iVar3 + -8);
          puVar6 = (undefined8 *)(iVar7 + *param_1 + -8);
          lVar9 = 5;
          do {
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
            *puVar5 = *puVar6;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          lVar4 = lVar4 + -1;
          iVar7 = iVar7 + 0x28;
        } while (lVar4 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar3;
    param_1[2] = (int)uVar8;
    uVar2 = 1;
    param_1[1] = (int)(((longlong)(int)uVar1 + ((ulonglong)uVar1 & 0x3fffffff) * 4 & 0xffffffff) <<
                      3) + iVar3;
  }
  return uVar2;
}

