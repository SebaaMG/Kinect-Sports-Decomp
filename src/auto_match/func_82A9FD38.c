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
extern unsigned int *auStack_70;
extern int fn_82A9FCE8();
extern int fn_82F68CC0();
extern unsigned int iStack_44;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int *uStack_64;


void fn_82A9FD38(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  ulonglong uVar1;
  ushort *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int iStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_44;
  
  fn_82F68CC0(auStack_70,param_2,0x30);
  uVar3 = (ulonglong)uStack_50;
  if (uVar3 == 1) {
    uVar3 = (ulonglong)uStack_4c;
    if (uVar3 == 0) {
      fn_82A9FCE8(param_1,auStack_70);
      uVar3 = (ulonglong)uStack_50;
      if (uVar3 != 1) goto LAB_82a9fd90;
      uVar3 = (ulonglong)uStack_4c;
      if (uVar3 == 0) {
        return;
      }
    }
    if (uVar3 != 0) {
      piVar6 = (int *)(*(int *)(param_5 + 0xc) + param_3 + 4);
      uVar8 = uStack_64;
      do {
        puVar2 = (ushort *)(*piVar6 + param_3);
        uVar4 = (longlong)(int)(uint)puVar2[3] * (longlong)(int)(uint)puVar2[2];
        iVar5 = (int)uVar4;
        if (((iStack_6c == 2) || (iStack_6c == 1)) && (iVar5 = (int)(uVar4 >> 2), (uVar4 & 3) != 0))
        {
          iVar5 = iVar5 + 1;
        }
        uStack_64 = (uint)puVar2[4] * iVar5;
        if (uVar8 < (uint)puVar2[4] * iVar5) {
          uStack_64 = uVar8;
        }
        uVar8 = uVar8 - uStack_64;
        uStack_54 = (uint)puVar2[3];
        uStack_58 = (uint)puVar2[2];
        uStack_60 = (uint)*puVar2;
        uStack_5c = (uint)puVar2[1];
        uStack_50 = (uint)puVar2[4];
        uStack_4c = (uint)puVar2[5];
        ((int (*)())fn_82A9FD38)(param_1,auStack_70,param_3,param_4);
        iStack_68 = iStack_68 + uStack_64;
        if (iStack_44 != 0) {
          iStack_44 = ((-(uint)(iStack_6c != 0) & 3) + 1) * uStack_64 * 4 + iStack_44;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar3 != 0);
    }
  }
  else {
LAB_82a9fd90:
    uVar7 = (ulonglong)uStack_64;
    uVar4 = (longlong)(int)(uint)*(ushort *)(param_5 + 6) *
            (longlong)(int)(uint)*(ushort *)(param_5 + 4);
    if (((iStack_6c == 2) || (iStack_6c == 1)) &&
       (uVar1 = uVar4 & 3, uVar4 = uVar4 >> 2, uVar1 != 0)) {
      uVar4 = uVar4 + 1;
    }
    uStack_64 = (uint)uVar4;
    uStack_50 = 1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      if ((uVar7 & 0xffffffff) < uVar4) {
        uStack_64 = (uint)uVar7;
        uVar4 = uVar7;
      }
      uVar7 = uVar7 - uVar4;
      fn_82A9FD38(param_1,auStack_70,param_3,param_4,param_5);
      uVar4 = (ulonglong)uStack_64;
      iStack_68 = iStack_68 + uStack_64;
      if (iStack_44 != 0) {
        iStack_44 = ((-(uint)(iStack_6c != 0) & 3) + 1) * uStack_64 * 4 + iStack_44;
      }
    }
  }
  return;
}

