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


undefined4 fn_82FB9430(int *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  ulonglong uVar8;
  
  uVar8 = param_2 + (ulonglong)(uint)param_1[2];
  iVar5 = fn_82FA5060(lbl_831BC768,(uVar8 + (uVar8 & 0x7fffffff) * 2 & 0x3fffffff) << 2);
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar1 = (param_1[1] - *param_1) / 0xc;
    if (*param_1 != 0) {
      if (uVar1 != 0) {
        lVar6 = (longlong)(int)uVar1;
        pbVar7 = (byte *)(iVar5 + 6);
        do {
          if (pbVar7 != (byte *)0x6) {
            pbVar7[-0xffffffff00000002] = 0;
            pbVar7[-0xffffffff00000001] = 0;
            *pbVar7 = *pbVar7 & 0x3f;
            pbVar7[2] = 0;
            pbVar7[3] = 0;
            pbVar7[4] = 0;
            pbVar7[5] = 0;
          }
          iVar2 = *param_1;
          pbVar3 = pbVar7 + (-6 - iVar5);
          lVar6 = lVar6 + -1;
          *(undefined4 *)(pbVar7 + -6) = *(undefined4 *)(pbVar3 + iVar2);
          *(undefined4 *)(pbVar7 + -2) = *(undefined4 *)(pbVar3 + iVar2 + 4);
          *(undefined4 *)(pbVar7 + 2) = *(undefined4 *)(pbVar3 + iVar2 + 8);
          pbVar7 = pbVar7 + 0xc;
        } while (lVar6 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar5;
    param_1[2] = (int)uVar8;
    uVar4 = 1;
    param_1[1] = (int)(((longlong)(int)uVar1 + ((ulonglong)uVar1 & 0x7fffffff) * 2 & 0xffffffff) <<
                      2) + iVar5;
  }
  return uVar4;
}

