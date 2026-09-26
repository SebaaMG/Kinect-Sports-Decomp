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
extern int fn_82AA6648();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82AD6090();


uint fn_82ABF858(undefined8 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar6 = (uint *)fn_82ABE250(param_1,8,6);
  puVar3 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)puVar3 | 1;
  while( true ) {
    uVar10 = *(uint *)(param_2 + 0x1c);
    uVar1 = uVar10 & 1;
    for (; ((uVar10 & 1) == 0 && (uVar10 != 0)); uVar10 = *(uint *)((uVar10 & 0xfffffffe) + 0x28)) {
      uVar5 = *(uint *)(uVar10 + 8) >> 7 & 0x7f;
      if ((uVar5 == 0) || (bVar4 = true, 0x52 < uVar5)) {
        bVar4 = false;
      }
      if (bVar4) {
        return uVar10;
      }
      if ((uVar5 < 0x60) || (bVar4 = true, 0x66 < uVar5)) {
        bVar4 = false;
      }
      if (bVar4) {
        return uVar10;
      }
    }
    puVar9 = *(uint **)(param_2 + 0xc);
    if ((puVar9 == (uint *)0x0) || (bVar4 = true, puVar9[2] != 0)) {
      bVar4 = false;
    }
    if (!bVar4) break;
    if (puVar9 == (uint *)0x0) goto LAB_82abfa48;
    param_2 = *puVar9;
LAB_82abfa40:
    if (param_2 == 0) {
LAB_82abfa48:
      if (((*puVar3 & 1) != 0) || (*puVar3 == 0)) {
        return 0;
      }
      puVar9 = (uint *)(*puVar6 & 0xfffffffe);
      puVar8 = puVar9 + -1;
      uVar10 = puVar9[1] - 1;
      param_2 = puVar8[puVar9[1] + 3];
      puVar9[1] = uVar10;
      if (uVar10 == 0) {
        *(uint *)(*puVar9 & 0xfffffffe) = *puVar8;
        *(uint *)(*puVar8 & 0xfffffffe) = *puVar9;
        fn_82AA6648(puVar6,puVar8,((ulonglong)puVar9[2] + 4 & 0x3fffffff) << 2);
      }
    }
  }
  if ((uVar1 == 0) && (uVar10 = *(uint *)(param_2 + 0x18) & 0xfffffffe, uVar10 != 0x28)) {
    uVar1 = *(uint *)(uVar10 - 0x20) >> 7 & 0x7f;
    if ((uVar1 == 0x56) || (bVar4 = false, uVar1 == 0x57)) {
      bVar4 = true;
    }
    if (bVar4) {
      uVar1 = *(uint *)(uVar10 - 0x20);
      iVar7 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      param_2 = *(uint *)((*(uint *)(iVar7 + (uVar10 - 0x38)) & 0xfffffffc) + 0x1c);
      for (; puVar9 != (uint *)0x0; puVar9 = (uint *)puVar9[2]) {
        uVar10 = *puVar9;
        if (uVar10 != param_2) goto LAB_82abf9d4;
      }
      uVar10 = 0;
LAB_82abf9d4:
      if ((*puVar3 & 1) == 0) {
        uVar1 = *puVar6 & 0xfffffffe;
        iVar7 = uVar1 - 4;
        if ((iVar7 == 0) || (*(uint *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U)) goto LAB_82abfa04;
      }
      else {
LAB_82abfa04:
        iVar7 = fn_82AD6090(puVar6,1);
      }
      iVar2 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = iVar2 + 1;
      *(uint *)((iVar2 + 4) * 4 + iVar7) = uVar10;
      goto LAB_82abfa40;
    }
  }
  param_2 = *(uint *)((param_2 & 0xfffffffe) + 4);
  if ((param_2 & 1) == 0) goto LAB_82abfa40;
  goto LAB_82abfa48;
}

