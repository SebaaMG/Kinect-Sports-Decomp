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
extern unsigned int *auStack_130;
extern unsigned int *auStack_230;
extern unsigned int *auStack_240;
extern int fn_8294B260();
extern int fn_82964BB0();
extern int fn_82975B00();


ulonglong fn_8294B308(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint auStack_240 [4];
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [304];
  
  bVar4 = false;
  auStack_240[0] = 0;
  uVar8 = 0;
  if (param_1[2] != 0) {
    do {
      uVar10 = auStack_240[0];
      iVar5 = *(int *)(auStack_240[0] * 4 + param_1[5]);
      uVar1 = *(uint *)(*(int *)(*(int *)(iVar5 + 4) * 4 + param_1[4]) + 4);
      if (((((uVar1 & 0x10) != 0) && ((uVar1 & 0x200) == 0)) || ((uVar1 & 0x20) != 0)) &&
         (iVar5 = (**(code **)(*param_1 + 4))(param_1,iVar5,0), iVar5 < 0)) {
        fn_8294B260(param_1,auStack_240);
        bVar4 = true;
        uVar10 = auStack_240[0];
      }
      uVar8 = (ulonglong)(uint)param_1[2];
      auStack_240[0] = uVar10 + 1;
    } while (auStack_240[0] < uVar8);
  }
  if (bVar4) {
    uVar8 = 0xffffffff80004005;
  }
  else {
    uVar6 = 0;
    auStack_240[0] = 0;
    if (uVar8 != 0) {
      do {
        puVar2 = *(uint **)((int)((uVar6 & 0xffffffff) << 2) + param_1[5]);
        uVar1 = *(uint *)(*(int *)(puVar2[1] * 4 + param_1[4]) + 4);
        if (((((uVar1 & 0x10) != 0) && ((uVar1 & 0x200) == 0)) || ((uVar1 & 0x20) != 0)) &&
           (uVar9 = uVar6 + 1, (uVar9 & 0xffffffff) < uVar8)) {
          lVar7 = (uVar9 & 0x3fffffff) << 2;
          do {
            puVar3 = *(uint **)((int)lVar7 + param_1[5]);
            if (((puVar3[1] == puVar2[1]) && (puVar3[0x1c] == puVar2[0x1c])) &&
               ((puVar3[0x1b] == puVar2[0x1b] && (((*puVar2 ^ *puVar3) & 0x1000000) != 0)))) {
              fn_82964BB0(param_1,puVar2,auStack_130,0x100);
              fn_82964BB0(param_1,puVar3,auStack_230,0x100);
              fn_82975B00(param_1,puVar2[0x1a],0x1195,0xffffffff8203777c,auStack_130,
                                auStack_230);
              fn_8294B260(param_1,auStack_240);
              uVar6 = (ulonglong)auStack_240[0];
              bVar4 = true;
              break;
            }
            uVar9 = uVar9 + 1;
            lVar7 = lVar7 + 4;
          } while ((uVar9 & 0xffffffff) < uVar8);
        }
        uVar8 = (ulonglong)(uint)param_1[2];
        uVar6 = uVar6 + 1;
        auStack_240[0] = (uint)uVar6;
      } while ((uVar6 & 0xffffffff) < uVar8);
    }
    uVar8 = -(ulonglong)bVar4 & 0xffffffff80004005;
  }
  return uVar8;
}

