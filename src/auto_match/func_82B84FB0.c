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
extern int fn_8265C990();
extern int fn_82ABDF50();
extern int fn_82ABE8C8();
extern int fn_82B462A8();
extern int fn_82B46770();
extern int fn_82F65AC0();
extern int fn_82F68CC0();
extern int fn_82F691F0();


longlong fn_82B84FB0(int param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  char cVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  uint uVar5;
  undefined8 uVar4;
  int iVar6;
  ulonglong uVar7;
  char *pcVar9;
  ulonglong uVar8;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint *puVar13;
  int iVar14;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  lVar10 = (ulonglong)uVar5 + 1;
  uVar7 = lVar10 * 0x28;
  iVar14 = param_1 + 0x32c;
  if ((uVar7 & 0xffffffff) < 0x85) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x3bc);
    if (((*(uint *)(param_1 + 0x3b8) - uVar3) + 0x1000 & 0xffffffff) < (uVar7 & 0xffffffff)) {
      iVar6 = (int)((((uVar7 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
      puVar2 = *(undefined4 **)(iVar6 + iVar14);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar6 + iVar14) = *puVar2;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar2,0,uVar7);
      }
      uVar3 = fn_82ABDF50(iVar14);
    }
    else {
      *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) + (int)uVar7;
    }
  }
  else {
    uVar3 = fn_82ABE8C8(iVar14);
  }
  lVar12 = (ulonglong)uVar5 * 0x28 + uVar3;
  fn_82F68CC0(uVar3,*(undefined4 *)(param_1 + 0xc));
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  uVar5 = *(int *)(param_1 + 0x14) * 0x28;
  if (uVar5 < 0x85) {
    iVar6 = ((uVar5 >> 2) - 1) * 4;
    *puVar2 = *(undefined4 *)(iVar6 + iVar14);
    *(undefined4 **)(iVar6 + iVar14) = puVar2;
  }
  else {
    puVar13 = (uint *)((uint)(puVar2 + -3) & 0xfffffffe);
    *(uint *)(puVar13[1] & 0xfffffffe) = *puVar13;
    *(uint *)(*puVar13 & 0xfffffffe) = puVar13[1];
    fn_8265C990(puVar2 + -3,0x618d0000);
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  uVar11 = (undefined4)lVar10;
  *(undefined4 *)(param_1 + 0x14) = uVar11;
  uVar7 = (param_3 & 0x1fffffff) << 3;
  *(undefined4 *)(param_1 + 0x10) = uVar11;
  puVar13 = (uint *)lVar12;
  *puVar13 = *puVar13 & 0xfffe0000 | (uint)((param_3 & 0xffffffff) << 3) & 0x1fff8 | param_2 & 7;
  if (uVar7 < 0x85) {
    uVar5 = *(uint *)(param_1 + 0x3bc);
    if ((((ulonglong)*(uint *)(param_1 + 0x3b8) - (ulonglong)uVar5) + 0x1000 & 0xffffffff) < uVar7)
    {
      iVar6 = (int)(((param_3 & 0x1fffffff) * 2 - 1 & 0xffffffff) << 2);
      puVar2 = *(undefined4 **)(iVar6 + iVar14);
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar6 + iVar14) = *puVar2;
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar2,0,uVar7);
      }
      uVar5 = fn_82ABDF50(iVar14);
    }
    else {
      *(uint *)(param_1 + 0x3bc) = uVar5 + (int)uVar7;
    }
  }
  else {
    uVar5 = fn_82ABE8C8(iVar14);
  }
  puVar13[7] = uVar5;
  if ((param_4 & 0xffffffff) == 0) {
    return lVar12;
  }
  do {
    uVar7 = param_4;
    uVar3 = 0;
    while( true ) {
      if ((ulonglong)*(uint *)(param_1 + 0x10) <= (uVar3 & 0xffffffff)) {
        uVar5 = fn_82B46770(param_1,1,uVar7,0);
        puVar13[3] = uVar5;
        return lVar12;
      }
      uVar4 = fn_82B462A8(param_1,uVar3);
      iVar6 = fn_82F65AC0(uVar4,uVar7);
      uVar8 = uVar7;
      if (iVar6 == 0) break;
      uVar3 = uVar3 + 1;
    }
    do {
      pcVar9 = (char *)uVar8;
      uVar8 = uVar8 + 1;
    } while (*pcVar9 != '\0');
    uVar3 = ((uVar8 - uVar7) - 1 & 0xffffffff) + 2;
    if ((uVar3 & 0xffffffff) < 0x85) {
      param_4 = (ulonglong)*(uint *)(param_1 + 0x3bc);
      if (((*(uint *)(param_1 + 0x3b8) - param_4) + 0x1000 & 0xffffffff) < (uVar3 & 0xffffffff)) {
        iVar6 = (int)((((uVar3 & 0xffffffff) >> 2) - 1 & 0xffffffff) << 2);
        puVar2 = *(undefined4 **)(iVar6 + iVar14);
        if (puVar2 != (undefined4 *)0x0) {
          *(undefined4 *)(iVar6 + iVar14) = *puVar2;
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(puVar2,0,uVar3);
        }
        param_4 = fn_82ABDF50(iVar14);
      }
      else {
        *(uint *)(param_1 + 0x3bc) = *(uint *)(param_1 + 0x3bc) + (int)uVar3;
      }
    }
    else {
      param_4 = fn_82ABE8C8(iVar14);
    }
    iVar6 = (int)uVar7;
    *(undefined1 *)param_4 = 0x24;
    do {
      cVar1 = *(char *)uVar7;
      ((char *)uVar7)[(int)((undefined1 *)param_4 + (1 - iVar6))] = cVar1;
      uVar7 = uVar7 + 1;
    } while (cVar1 != '\0');
  } while( true );
}

