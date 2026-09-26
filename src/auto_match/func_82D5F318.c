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
extern unsigned int uStack_30;


void fn_82D5F318(int param_1,int param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uStack_30;
  
  do {
    uVar4 = *(ulonglong *)((param_2 + param_3 >> 1) * 8 + param_1);
    uVar5 = uVar4 & 0xffffffff;
    uStack_30 = (uint)(uVar4 >> 0x20);
    iVar2 = param_3;
    iVar9 = param_2;
    do {
      puVar6 = (uint *)(iVar9 * 8 + param_1);
      while( true ) {
        if ((*puVar6 < uStack_30) || ((*puVar6 == uStack_30 && (puVar6[1] < uVar5)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
        iVar9 = iVar9 + 1;
        puVar6 = puVar6 + 2;
      }
      puVar6 = (uint *)(iVar2 * 8 + param_1);
      while( true ) {
        if ((uStack_30 < *puVar6) || ((uStack_30 == *puVar6 && (uVar5 < puVar6[1])))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -2;
      }
      if (iVar2 < iVar9) break;
      if (iVar2 != iVar9) {
        puVar8 = (undefined8 *)(iVar9 * 8 + param_1);
        puVar7 = (undefined8 *)(iVar2 * 8 + param_1);
        uVar3 = *puVar7;
        *(undefined4 *)puVar7 = *(undefined4 *)puVar8;
        *(undefined4 *)((int)puVar7 + 4) = *(undefined4 *)((int)puVar8 + 4);
        *puVar8 = uVar3;
      }
      iVar2 = iVar2 + -1;
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar2);
    if (param_2 < iVar2) {
      fn_82D5F318(param_1,param_2,iVar2,param_4);
    }
    param_2 = iVar9;
    if (param_3 <= iVar9) {
      return;
    }
  } while( true );
}

