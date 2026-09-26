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


undefined8 fn_82920870(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = param_4 * param_5 + param_2;
  if (param_2 < uVar9) {
    uVar10 = param_3 * 4 + param_2;
    do {
      if (param_2 < uVar10) {
        puVar8 = (uint *)(param_2 + 4);
        puVar7 = (uint *)(param_1 + -4);
        lVar5 = (ulonglong)((uVar10 - param_2) - 1 >> 3) + 1;
        do {
          uVar2 = *(uint *)(param_5 + -4 + (int)puVar8);
          puVar3 = puVar8 + -1;
          puVar4 = (uint *)((int)puVar8 + param_5);
          uVar1 = *puVar8;
          uVar6 = (*puVar3 & 0xff00ff) + (uVar2 & 0xff00ff) + (*puVar4 & 0xff00ff) +
                  (uVar1 & 0xff00ff) + 0x20002;
          puVar8 = puVar8 + 2;
          puVar7 = puVar7 + 1;
          *puVar7 = uVar6 >> 2 & 0xff0000 |
                    uVar6 >> 2 & 0xff |
                    (*puVar3 >> 2 & 0x3fc03fc0) + (uVar2 >> 2 & 0x3fc03fc0) +
                    (*puVar4 >> 2 & 0x3fc03fc0) + (uVar1 >> 2 & 0x3fc03fc0) + 0x800080 & 0xff00ff00;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_2 = param_5 * 2 + param_2;
      param_1 = param_1 + param_6;
      uVar10 = uVar10 + param_5 * 2;
    } while (param_2 < uVar9);
  }
  return 0;
}

