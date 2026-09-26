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
extern int fn_8265C940();
extern int fn_8265C990();


undefined8 fn_82921208(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  
  if (*(char *)((int)param_1 + 0xb) == '\x02') {
    iVar9 = fn_8265C940(*(int *)(*param_1 + 0x68) << 4,0x24810000);
    if (iVar9 != 0) {
      iVar10 = fn_8265C940(*(int *)(param_1[1] + 0x68) << 4,0x24810000);
      if (iVar10 != 0) {
        if ((*(int *)(param_1[1] + 0x10) != 0) && (*(int *)(*param_1 + 0x10) != 0)) {
          *(undefined4 *)(param_1[1] + 0x10) = 0;
          *(undefined4 *)(*param_1 + 0x10) = 0;
        }
        iVar1 = *param_1;
        uVar14 = 0;
        iVar12 = param_1[1];
        uVar16 = 0;
        uVar2 = *(uint *)(iVar1 + 0x68);
        uVar3 = *(uint *)(iVar1 + 0x6c);
        uVar4 = *(uint *)(iVar12 + 0x68);
        uVar5 = *(uint *)(iVar1 + 0x70);
        uVar6 = *(uint *)(iVar12 + 0x6c);
        uVar7 = *(uint *)(iVar12 + 0x70);
        trapWord(6,(ulonglong)uVar4,0);
        trapWord(6,(ulonglong)uVar6,0);
        trapWord(6,(ulonglong)uVar7,0);
        if (*(int *)(iVar12 + 0x70) != 0) {
          do {
            uVar20 = 0;
            uVar17 = 0;
            uVar15 = 0xffffffffffffffff;
            if (*(int *)(iVar12 + 0x6c) != 0) {
              do {
                uVar18 = 0;
                uVar19 = 0;
                if (((uVar15 ^ uVar20) & 0xffff0000) != 0) {
                  (**(code **)(*(int *)*param_1 + 4))
                            ((int *)*param_1,(uVar20 & 0xffffffff) >> 0x10,
                             (uVar14 & 0xffffffff) >> 0x10,iVar9);
                  uVar15 = uVar20;
                }
                if (*(int *)(param_1[1] + 0x68) != 0) {
                  puVar13 = (undefined4 *)(iVar10 + -4);
                  do {
                    uVar19 = uVar19 + 1;
                    puVar11 = (undefined4 *)
                              (((uint)((uVar18 & 0xffffffff) >> 0xc) & 0xffff0) + iVar9);
                    uVar18 = uVar18 + (((ulonglong)uVar2 & 0xffff) << 0x10) / (ulonglong)uVar4;
                    puVar13[1] = *puVar11;
                    puVar13[2] = puVar11[1];
                    puVar13[3] = puVar11[2];
                    puVar13 = puVar13 + 4;
                    *puVar13 = puVar11[3];
                  } while (uVar19 < *(uint *)(param_1[1] + 0x68));
                }
                (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],uVar17,uVar16,iVar10);
                iVar12 = param_1[1];
                uVar17 = uVar17 + 1;
                uVar20 = uVar20 + (((ulonglong)uVar3 & 0xffff) << 0x10) / (ulonglong)uVar6;
              } while ((uVar17 & 0xffffffff) < (ulonglong)*(uint *)(iVar12 + 0x6c));
            }
            uVar16 = uVar16 + 1;
            uVar14 = uVar14 + (((ulonglong)uVar5 & 0xffff) << 0x10) / (ulonglong)uVar7;
          } while ((uVar16 & 0xffffffff) < (ulonglong)*(uint *)(iVar12 + 0x70));
        }
        fn_8265C990(iVar9,0x24810000);
        fn_8265C990(iVar10,0x24810000);
        return 0;
      }
      fn_8265C990(iVar9,0x24810000);
    }
    uVar8 = 0xffffffff8007000e;
  }
  else {
    uVar8 = 0xffffffff80004005;
  }
  return uVar8;
}

