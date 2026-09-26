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
extern int fn_82ABE250();
extern int fn_82B16D20();
extern int fn_82B1A538();
extern int fn_82B20A98();
extern int fn_82B476D0();
extern int fn_82B4B410();
extern unsigned int iStack_58;
extern unsigned int uStack_5c;


void fn_82B25038(undefined8 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar11;
  uint *puVar9;
  int iVar10;
  undefined8 *puVar12;
  uint *puStack_60;
  uint uStack_5c;
  int iStack_58;
  
  iStack_58 = 0;
  uStack_5c = -(uint)((param_2[1] & 1) == 0) & param_2[1];
  puStack_60 = param_2;
  uVar7 = fn_82B1A538(&puStack_60);
  do {
    if ((uStack_5c == 0) || (bVar6 = false, iStack_58 == *(int *)(uStack_5c + 8))) {
      bVar6 = true;
    }
    if (bVar6) break;
    uVar8 = fn_82B1A538(&puStack_60);
    cVar11 = fn_82B16D20(uVar8,uVar7);
    uVar7 = uVar8;
  } while (cVar11 == '\0');
  if ((uStack_5c == 0) || (bVar6 = false, iStack_58 == *(int *)(uStack_5c + 8))) {
    bVar6 = true;
  }
  if (!bVar6) {
    puVar9 = (uint *)fn_82ABE250(param_1,8,0x33);
    puVar9[1] = (uint)puVar9 | 1;
    *puVar9 = (uint)(puVar9 + 1) | 1;
    fn_82B476D0(puVar9,param_2);
    while ((uStack_5c = puVar9[1], (uStack_5c & 1) == 0 && (uStack_5c != 0))) {
      iStack_58 = 0;
      uStack_5c = -(uint)((uStack_5c & 1) == 0) & uStack_5c;
      puStack_60 = puVar9;
      uVar7 = fn_82B1A538(&puStack_60);
      while( true ) {
        if ((uStack_5c == 0) || (bVar6 = false, iStack_58 == *(int *)(uStack_5c + 8))) {
          bVar6 = true;
        }
        if (bVar6) break;
        uVar8 = fn_82B1A538(&puStack_60);
        cVar11 = fn_82B16D20(uVar8,uVar7);
        if (cVar11 != '\0') {
          uVar7 = uVar8;
        }
      }
      puVar12 = (undefined8 *)uVar7;
      uVar1 = *(undefined4 *)puVar12;
      uVar2 = *(undefined4 *)((int)puVar12 + 4);
      uVar3 = *(undefined4 *)(puVar12 + 1);
      if ((param_2[1] & 1) == 0) {
        uVar5 = *param_2 & 0xfffffffe;
        iVar10 = uVar5 - 4;
        if ((iVar10 == 0) || (*(uint *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82b251f4;
      }
      else {
LAB_82b251f4:
        iVar10 = fn_82B4B410(param_2,1);
      }
      iVar4 = *(int *)(iVar10 + 8) * 0xc + iVar10;
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
      *(undefined4 *)(iVar4 + 0x10) = uVar1;
      *(undefined4 *)(iVar4 + 0x14) = uVar2;
      *(undefined4 *)(iVar4 + 0x18) = uVar3;
      fn_82B20A98(puVar9,*puVar12,(ulonglong)*(uint *)(puVar12 + 1) << 0x20);
    }
  }
  return;
}

