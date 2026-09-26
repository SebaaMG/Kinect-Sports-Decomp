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
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();


ulonglong fn_830C6D68(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  puVar8 = (ulonglong *)*param_1;
  if (param_2 == (int *)0x0) {
    *(undefined4 *)((int)puVar8 + 0x14) = 3;
  }
  else {
    iVar13 = *param_2;
    sVar7 = *(short *)((int)((*puVar8 >> (0x40 - (ulonglong)*(byte *)(param_2 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar13);
    uVar14 = (ulonglong)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(puVar8);
      do {
        uVar15 = *puVar8;
        fn_82C4E470(puVar8,1);
        sVar7 = *(short *)((int)(((uVar14 - ((longlong)uVar15 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar13);
        uVar14 = (ulonglong)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar13 = *(int *)(puVar8 + 1);
      iVar12 = (int)(uVar14 & 0xf);
      *puVar8 = *puVar8 << (uVar14 & 0xf);
      *(int *)(puVar8 + 1) = iVar13 - iVar12;
      if (iVar13 < iVar12) {
        do {
          pbVar9 = *(byte **)((int)puVar8 + 0xc);
          if (pbVar9 < (byte *)(*(int *)(puVar8 + 2) - 4U)) {
            bVar1 = *pbVar9;
            bVar2 = pbVar9[1];
            bVar3 = pbVar9[2];
            bVar4 = pbVar9[3];
            bVar5 = pbVar9[4];
            bVar6 = pbVar9[5];
            iVar13 = *(int *)(puVar8 + 1);
            *(byte **)((int)puVar8 + 0xc) = pbVar9 + 6;
            *(int *)(puVar8 + 1) = iVar13 + 0x30;
            *puVar8 = ((((((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2) * 0x100 + (ulonglong)bVar3)
                         * 0x100 + (ulonglong)bVar4) * 0x100 + (ulonglong)bVar5) * 0x100 +
                       (ulonglong)bVar6 << ((longlong)-iVar13 & 0x7fU)) + *puVar8;
            goto LAB_830c6e78;
          }
          iVar13 = fn_82C4E3B0(puVar8);
        } while (iVar13 == 1);
        uVar14 = (ulonglong)((int)sVar7 >> 4);
      }
      else {
LAB_830c6e78:
        uVar14 = (ulonglong)((int)sVar7 >> 4);
      }
    }
    if ((int)uVar14 != 0) {
      uVar15 = (ulonglong)*(uint *)(puVar8 + 1);
      lVar16 = 0;
      if ((int)uVar14 != 0x47) {
        uVar10 = *(uint *)((int)((uVar14 & 0xffffffff) << 2) + param_1[4]);
        uVar14 = (ulonglong)(uint)((int)uVar10 >> 4) & 0xf;
        uVar18 = ((ulonglong)uVar10 & 0xf) + uVar14;
        uVar17 = uVar15 + 0x10;
        if ((uVar18 < 0x21) && (uVar18 != 0)) {
          if ((uVar17 & 0xffffffff) < uVar18) {
            do {
              if ((uVar17 & 0xffffffff) == 0) break;
              uVar18 = uVar18 - uVar17;
              *(int *)(puVar8 + 1) = (int)(uVar15 - uVar17);
              lVar16 = (ulonglong)
                       (uint)((int)(*puVar8 >> (0x40 - uVar17 & 0x7f)) << ((uint)uVar18 & 0x3f)) +
                       lVar16;
              *puVar8 = *puVar8 << (uVar17 & 0x7f);
              if ((longlong)(uVar15 - uVar17) < 0) {
                fn_82C4E5E8(puVar8);
              }
              uVar15 = (ulonglong)*(uint *)(puVar8 + 1);
              uVar17 = uVar15 + 0x10;
            } while ((uVar17 & 0xffffffff) < (uVar18 & 0xffffffff));
          }
          *(int *)(puVar8 + 1) = (int)(uVar15 - uVar18);
          uVar17 = (*puVar8 >> (0x40 - uVar18 & 0x7f) & 0xffffffff) + lVar16;
          *puVar8 = *puVar8 << (uVar18 & 0x7f);
          if ((longlong)(uVar15 - uVar18) < 0) {
            fn_82C4E5E8(puVar8);
          }
        }
        else {
          uVar17 = 0;
        }
        uVar11 = (int)uVar17 >> (int)uVar14;
        uVar17 = uVar17 & (ulonglong)(uint)((int)uVar10 >> 0x18) & 0xff;
        uVar14 = (ulonglong)uVar11 & 1;
        uVar15 = uVar17 & 1;
        return (((longlong)((int)uVar17 >> 1) + ((ulonglong)(uint)((int)uVar10 >> 0x10) & 0xff) ^
                -uVar15) + uVar15 & 0xffff) << 0x10 |
               ((longlong)((int)uVar11 >> 1) + ((ulonglong)(uint)((int)uVar10 >> 8) & 0xff) ^
               -uVar14) + uVar14 & 0xffffffff0000ffff;
      }
      uVar17 = (ulonglong)*(ushort *)((int)param_1 + 0x46) + (ulonglong)*(ushort *)(param_1 + 0x12);
      uVar14 = uVar15 + 0x10;
      if ((uVar17 < 0x21) && (uVar17 != 0)) {
        if ((uVar14 & 0xffffffff) < uVar17) {
          do {
            if ((uVar14 & 0xffffffff) == 0) break;
            uVar17 = uVar17 - uVar14;
            *(int *)(puVar8 + 1) = (int)(uVar15 - uVar14);
            lVar16 = (ulonglong)
                     (uint)((int)(*puVar8 >> (0x40 - uVar14 & 0x7f)) << ((uint)uVar17 & 0x3f)) +
                     lVar16;
            *puVar8 = *puVar8 << (uVar14 & 0x7f);
            if ((longlong)(uVar15 - uVar14) < 0) {
              fn_82C4E5E8(puVar8);
            }
            uVar15 = (ulonglong)*(uint *)(puVar8 + 1);
            uVar14 = uVar15 + 0x10;
          } while ((uVar14 & 0xffffffff) < (uVar17 & 0xffffffff));
        }
        *(int *)(puVar8 + 1) = (int)(uVar15 - uVar17);
        uVar14 = (*puVar8 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar16;
        *puVar8 = *puVar8 << (uVar17 & 0x7f);
        if ((longlong)(uVar15 - uVar17) < 0) {
          fn_82C4E5E8(puVar8);
        }
      }
      else {
        uVar14 = 0;
      }
      return ((ulonglong)(uint)(1 << (*(ushort *)(param_1 + 0x12) & 0x3f)) - 1 & uVar14 & 0xffff) <<
             0x10 | (longlong)((int)uVar14 >> (*(ushort *)(param_1 + 0x12) & 0x3f)) &
                    0xffffffff0000ffffU;
    }
  }
  lVar16 = 0;
  uVar14 = (ulonglong)*(uint *)(puVar8 + 1);
  uVar15 = uVar14 + 0x10;
  if (*(int *)param_1[4] == 0) {
    uVar17 = 1;
    if ((uVar15 & 0xffffffff) == 0) {
      do {
        if ((uVar15 & 0xffffffff) == 0) break;
        uVar17 = uVar17 - uVar15;
        *(int *)(puVar8 + 1) = (int)(uVar14 - uVar15);
        lVar16 = (ulonglong)
                 (uint)((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((uint)uVar17 & 0x3f)) + lVar16;
        *puVar8 = *puVar8 << (uVar15 & 0x7f);
        if ((longlong)(uVar14 - uVar15) < 0) {
          fn_82C4E5E8(puVar8);
        }
        uVar14 = (ulonglong)*(uint *)(puVar8 + 1);
        uVar15 = uVar14 + 0x10;
      } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
    }
    uVar15 = *puVar8;
    *(int *)(puVar8 + 1) = (int)(uVar14 - uVar17);
    *puVar8 = uVar15 << (uVar17 & 0x7f);
    if ((longlong)(uVar14 - uVar17) < 0) {
      fn_82C4E5E8(puVar8);
    }
    uVar14 = ((uVar15 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar16 & 0x7fffffff) * -2 + 1;
  }
  else {
    uVar17 = 2;
    if ((uVar15 & 0xffffffff) < 2) {
      do {
        if ((uVar15 & 0xffffffff) == 0) break;
        uVar17 = uVar17 - uVar15;
        *(int *)(puVar8 + 1) = (int)(uVar14 - uVar15);
        lVar16 = (ulonglong)
                 (uint)((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((uint)uVar17 & 0x3f)) + lVar16;
        *puVar8 = *puVar8 << (uVar15 & 0x7f);
        if ((longlong)(uVar14 - uVar15) < 0) {
          fn_82C4E5E8(puVar8);
        }
        uVar14 = (ulonglong)*(uint *)(puVar8 + 1);
        uVar15 = uVar14 + 0x10;
      } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
    }
    *(int *)(puVar8 + 1) = (int)(uVar14 - uVar17);
    uVar15 = (*puVar8 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar16;
    *puVar8 = *puVar8 << (uVar17 & 0x7f);
    if ((longlong)(uVar14 - uVar17) < 0) {
      fn_82C4E5E8(puVar8);
    }
    uVar14 = uVar15 & 1;
    uVar14 = ((longlong)((int)uVar15 >> 1) + 1U ^ -uVar14) + uVar14;
  }
  return uVar14 & 0xffffffff0000ffff;
}

