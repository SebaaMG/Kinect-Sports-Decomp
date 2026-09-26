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
extern unsigned int *auStack_60;
extern int fn_82A1BFA8();
extern int fn_82BE5570();
extern int fn_82CE21D8();


void fn_82BE55D8(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 auStack_60 [96];
  
  uVar7 = 0;
  do {
    iVar8 = uVar7 * 0x14;
    *(undefined4 *)(iVar8 + param_1) = 0;
    puVar9 = (undefined4 *)(iVar8 + param_1);
    iVar2 = fn_82A1BFA8(uVar7);
    if (iVar2 == 2) {
      iVar2 = fn_82CE21D8(uVar7,0x21,auStack_60);
      if (iVar2 == 0) {
        uVar6 = 0;
        *puVar9 = 1;
        do {
          puVar5 = auStack_60 + (int)uVar6 + 1;
          cVar3 = fn_82BE5570(auStack_60[(int)uVar6]);
          uVar4 = (ulonglong)cVar3;
          cVar3 = fn_82BE5570(*puVar5);
          iVar2 = (int)uVar6;
          uVar1 = uVar6 & 1;
          uVar6 = uVar6 + 2;
          *(char *)((iVar2 >> 1) + (uint)(iVar2 < 0 && uVar1 != 0) + iVar8 + param_1 + 4) =
               (char)((uVar4 & 0xffffffff) << 4) + cVar3;
        } while ((int)uVar6 < 0x20);
      }
    }
    else if (iVar2 == 1) {
      *puVar9 = 1;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 4);
  return;
}

