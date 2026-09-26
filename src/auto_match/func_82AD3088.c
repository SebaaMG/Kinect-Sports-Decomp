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
extern int fn_82ABDD90();


/* WARNING: Type propagation algorithm not settling */

void fn_82AD3088(int param_1,uint param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *(uint *)(param_1 + 4);
  uVar6 = 0;
  uVar1 = param_2;
  do {
    uVar5 = uVar9;
    if (((uVar5 & 1) != 0) || (uVar5 == 0)) {
      return;
    }
    uVar2 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff;
    uVar10 = uVar1;
    if (((1 << ((uint)uVar2 & 0x1f) &
         *(uint *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(uVar5 + 0x28))) != 0) &&
       ((param_4 == 0 ||
        (uVar2 = (ulonglong)*(uint *)(param_4 + 0x30) & 0x7ffff,
        (1 << ((uint)uVar2 & 0x1f) & *(uint *)(((int)(uVar2 >> 5) + 1) * 4 + *(int *)(uVar5 + 0x28))
        ) == 0)))) {
      uVar10 = uVar5;
      if (((*(uint *)(uVar5 + 0x30) >> 0x18 & 1) == (param_6 & 0xff)) &&
         (((*(uint *)(uVar5 + 0x4c) >> 0x16 & 1) != 0 &&
          ((*(uint *)(uVar5 + 0x4c) >> 0x17 & 1) == (param_5 & 0xff))))) {
        iVar7 = *(int *)(uVar5 + 0x70);
        if ((*(uint *)(iVar7 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ad3178:
          do {
            iVar7 = *(int *)(iVar7 + 0x50);
            if (iVar7 != 0) {
              if ((*(uint *)(iVar7 + 0x30) & 0x400000) != 0) goto LAB_82ad3178;
            }
          } while ((*(uint *)(iVar7 + 0x30) >> 0x16 & 1) != 0);
          *(int *)(uVar5 + 0x70) = iVar7;
        }
        if (*(uint *)(uVar5 + 0x70) == param_2) goto LAB_82ad32e4;
      }
      *(uint *)(uVar5 + 0x70) = param_2;
      puVar3 = (uint *)(uVar5 & 0xfffffffe);
      *(uint *)(uVar5 + 0x4c) =
           (param_5 & 1) << 0x17 | *(uint *)(uVar5 + 0x4c) & 0xff7fffff | 0x400000;
      *(uint *)(uVar5 + 0x30) =
           (param_6 & 1) << 0x18 | *(uint *)(uVar5 + 0x30) & 0xfeffffff | 0x800000;
      uVar1 = uVar1 & 0xfffffffe;
      *(uint *)(puVar3[1] & 0xfffffffe) = *puVar3;
      *(uint *)(*puVar3 & 0xfffffffe) = puVar3[1];
      puVar3[1] = *(uint *)(uVar1 + 4);
      *(uint **)(*(uint *)(uVar1 + 4) & 0xfffffffe) = puVar3 + 1;
      *puVar3 = uVar1 + 4;
      *(uint **)(uVar1 + 4) = puVar3;
      if (((*(uint *)(uVar5 + 0x24) & 1) == 0) &&
         (uVar9 = *(uint *)(uVar5 + 0x20) & 0xfffffffe, uVar9 != 0x28)) {
        uVar1 = *(uint *)(uVar9 - 0x20) >> 7 & 0x7f;
        if (((uVar1 == 0x56) || (((uVar1 == 0x57 || (uVar1 == 0x59)) || (uVar1 == 0x5a)))) ||
           ((uVar1 == 0x54 || (bVar4 = false, uVar1 == 0x55)))) {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_82ad32d8;
        uVar1 = *(uint *)(uVar9 - 0x20);
        uVar2 = (ulonglong)*(uint *)(param_3 + 0x30) & 0x7ffff;
        iVar7 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
        if ((*(uint *)(*(int *)(*(int *)(iVar7 + (uVar9 - 0x38)) + 0x28) +
                      ((int)(uVar2 >> 5) + 1) * 4) & 1 << ((uint)uVar2 & 0x1f)) != 0)
        goto LAB_82ad32e4;
        uVar9 = *(uint *)(uVar5 + 0x30) | 0x4000000;
      }
      else {
LAB_82ad32d8:
        uVar9 = *(uint *)(uVar5 + 0x30) | 0x8000000;
      }
      *(uint *)(uVar5 + 0x30) = uVar9;
    }
LAB_82ad32e4:
    if (uVar6 == 0) {
      uVar9 = *(uint *)(param_1 + 4);
      uVar8 = -(uint)((uVar9 & 1) == 0) & uVar9;
    }
    else {
      uVar9 = *(uint *)((uVar6 & 0xfffffffe) + 4);
      uVar8 = -(uint)((uVar9 & 1) == 0) & uVar9;
    }
    uVar1 = uVar10;
    if (uVar5 == uVar8) {
      uVar9 = *(uint *)((uVar5 & 0xfffffffe) + 4);
      uVar6 = uVar5;
    }
  } while( true );
}

