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


undefined4 fn_8301A4F8(int *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar8 = param_2 + (ulonglong)(uint)param_1[2];
  iVar3 = fn_82FA5060(lbl_831BC768,(uVar8 + (uVar8 & 0x7fffffff) * 2 & 0x3fffffff) << 2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar1 = (param_1[1] - *param_1) / 0xc;
    if (*param_1 != 0) {
      if (uVar1 != 0) {
        iVar7 = 0;
        lVar6 = (longlong)(int)uVar1;
        do {
          puVar5 = (undefined4 *)(iVar7 + iVar3);
          lVar6 = lVar6 + -1;
          puVar4 = (undefined4 *)(iVar7 + *param_1);
          iVar7 = iVar7 + 0xc;
          *puVar5 = *puVar4;
          puVar5[1] = puVar4[1];
          puVar5[2] = puVar4[2];
        } while (lVar6 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar3;
    param_1[2] = (int)uVar8;
    uVar2 = 1;
    param_1[1] = (int)(((longlong)(int)uVar1 + ((ulonglong)uVar1 & 0x7fffffff) * 2 & 0xffffffff) <<
                      2) + iVar3;
  }
  return uVar2;
}

