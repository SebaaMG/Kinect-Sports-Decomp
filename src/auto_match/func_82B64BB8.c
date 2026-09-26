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
extern int fn_8265C9E0();
extern int fn_8265CA20();


undefined8 fn_82B64BB8(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  
  if (*(char *)((int)param_1 + 0xb) == '\x02') {
    lVar10 = ((ulonglong)*(uint *)(*param_1 + 0x68) & 0xfffffff) << 4;
    if (0xfffffff < *(uint *)(*param_1 + 0x68)) {
      lVar10 = -1;
    }
    iVar11 = fn_8265C9E0(lVar10);
    if (iVar11 != 0) {
      lVar10 = ((ulonglong)*(uint *)(param_1[1] + 0x68) & 0xfffffff) << 4;
      if (0xfffffff < *(uint *)(param_1[1] + 0x68)) {
        lVar10 = -1;
      }
      puVar12 = (undefined4 *)fn_8265C9E0(lVar10);
      if (puVar12 != (undefined4 *)0x0) {
        if ((*(int *)(param_1[1] + 0x10) != 0) && (*(int *)(*param_1 + 0x10) != 0)) {
          *(undefined4 *)(param_1[1] + 0x10) = 0;
          *(undefined4 *)(*param_1 + 0x10) = 0;
        }
        iVar1 = *param_1;
        uVar15 = 0;
        iVar13 = param_1[1];
        uVar17 = 0;
        uVar2 = *(uint *)(iVar1 + 0x68);
        uVar3 = *(uint *)(iVar1 + 0x6c);
        uVar4 = *(uint *)(iVar13 + 0x68);
        uVar5 = *(uint *)(iVar1 + 0x70);
        uVar6 = *(uint *)(iVar13 + 0x6c);
        uVar7 = *(uint *)(iVar13 + 0x70);
        trapWord(6,(ulonglong)uVar4,0);
        trapWord(6,(ulonglong)uVar6,0);
        trapWord(6,(ulonglong)uVar7,0);
        if (*(int *)(iVar13 + 0x70) != 0) {
          do {
            uVar21 = 0;
            uVar18 = 0;
            uVar16 = 0xffffffffffffffff;
            if (*(int *)(iVar13 + 0x6c) != 0) {
              do {
                uVar19 = 0;
                uVar20 = 0;
                if (((uVar16 ^ uVar21) & 0xffff0000) != 0) {
                  (**(code **)(*(int *)*param_1 + 4))
                            ((int *)*param_1,(uVar21 & 0xffffffff) >> 0x10,
                             (uVar15 & 0xffffffff) >> 0x10,iVar11);
                  uVar16 = uVar21;
                }
                puVar14 = puVar12;
                if (*(int *)(param_1[1] + 0x68) != 0) {
                  do {
                    uVar8 = (uint)((uVar19 & 0xffffffff) >> 0xc) & 0xffff0;
                    uVar20 = uVar20 + 1;
                    iVar1 = uVar8 + iVar11;
                    uVar19 = uVar19 + (((ulonglong)uVar2 & 0xffff) << 0x10) / (ulonglong)uVar4;
                    *puVar14 = *(undefined4 *)(uVar8 + iVar11);
                    puVar14[1] = *(undefined4 *)(iVar1 + 4);
                    puVar14[2] = *(undefined4 *)(iVar1 + 8);
                    puVar14[3] = *(undefined4 *)(iVar1 + 0xc);
                    puVar14 = puVar14 + 4;
                  } while (uVar20 < *(uint *)(param_1[1] + 0x68));
                }
                (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],uVar18,uVar17,puVar12);
                iVar13 = param_1[1];
                uVar18 = uVar18 + 1;
                uVar21 = uVar21 + (((ulonglong)uVar3 & 0xffff) << 0x10) / (ulonglong)uVar6;
              } while ((uVar18 & 0xffffffff) < (ulonglong)*(uint *)(iVar13 + 0x6c));
            }
            uVar17 = uVar17 + 1;
            uVar15 = uVar15 + (((ulonglong)uVar5 & 0xffff) << 0x10) / (ulonglong)uVar7;
          } while ((uVar17 & 0xffffffff) < (ulonglong)*(uint *)(iVar13 + 0x70));
        }
        fn_8265CA20(iVar11);
        fn_8265CA20(puVar12);
        return 0;
      }
      fn_8265CA20(iVar11);
    }
    uVar9 = 0xffffffff8007000e;
  }
  else {
    uVar9 = 0xffffffff80004005;
  }
  return uVar9;
}

