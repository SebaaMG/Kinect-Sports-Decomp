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
extern int fn_82C038C8();


undefined8 fn_82C16418(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ushort *puVar12;
  uint uVar13;
  ulonglong uVar11;
  uint uVar14;
  short sVar15;
  uint uVar16;
  byte *apbStack_50 [20];
  
  apbStack_50[0] = (byte *)0x0;
  sVar15 = 0;
  if (param_1 == (longlong *)0x0) {
    return 2;
  }
  iVar8 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + *param_1,2,apbStack_50);
  if (iVar8 != 2) {
    return 3;
  }
  *(short *)(param_1 + 0x3e) = (short)*(undefined4 *)((int)param_1 + 0x1ac);
  *(byte *)((int)param_1 + 500) = *apbStack_50[0] & 0x7f;
  *(byte *)((int)param_1 + 0x1f5) = apbStack_50[0][1];
  cVar1 = *(char *)((int)param_1 + 0x1c5);
  if (cVar1 == '\x01') {
    iVar8 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + *param_1 + 2,1,
                         apbStack_50);
    if (iVar8 != 1) {
      return 3;
    }
    *(uint *)(param_1 + 0x3f) = (uint)*apbStack_50[0];
  }
  else if (cVar1 == '\x02') {
    iVar8 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + *param_1 + 2,2,
                         apbStack_50);
    if (iVar8 != 2) {
      return 3;
    }
    *(uint *)(param_1 + 0x3f) = (uint)apbStack_50[0][1] * 0x100 + (uint)*apbStack_50[0];
  }
  else if (cVar1 == '\x03') {
    iVar8 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + *param_1 + 2,4,
                         apbStack_50);
    if (iVar8 != 4) {
      return 3;
    }
    *(uint *)(param_1 + 0x3f) =
         (((uint)apbStack_50[0][3] * 0x100 + (uint)apbStack_50[0][2]) * 0x100 +
         (uint)apbStack_50[0][1]) * 0x100 + (uint)*apbStack_50[0];
  }
  lVar10 = (ulonglong)*(byte *)((int)param_1 + 0x1c4) + 2;
  iVar8 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + lVar10 + *param_1,1,
                       apbStack_50);
  if (iVar8 != 1) {
    return 3;
  }
  bVar2 = *apbStack_50[0];
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(byte *)((int)param_1 + 0x204) = bVar2;
  if (bVar2 == 1) {
    *(undefined4 *)((int)param_1 + 0x1fc) = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x3f);
    *(undefined1 *)((int)param_1 + 0x20d) = 1;
    *(undefined4 *)(param_1 + 0x3f) = 0;
    *(undefined4 *)(param_1 + 0x40) = uVar6;
    iVar8 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + lVar10 + *param_1 + 1,
                         1,apbStack_50);
    if (iVar8 != 1) {
      return 3;
    }
    *(uint *)((int)param_1 + 0x214) = (uint)*apbStack_50[0];
    if (*(int *)(param_1 + 0x38) == 0) {
      sVar15 = 0;
    }
    else {
      iVar8 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + lVar10 + *param_1 +
                                   2,2,apbStack_50);
      if (iVar8 != 2) {
        return 3;
      }
      sVar15 = (ushort)apbStack_50[0][1] * 0x100 + (ushort)*apbStack_50[0];
    }
  }
  else if (7 < bVar2) {
    iVar8 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + lVar10 + *param_1 + 1,
                         8,apbStack_50);
    if (iVar8 != 8) {
      return 3;
    }
    *(uint *)((int)param_1 + 0x1fc) =
         (((uint)apbStack_50[0][3] * 0x100 + (uint)apbStack_50[0][2]) * 0x100 +
         (uint)apbStack_50[0][1]) * 0x100 + (uint)*apbStack_50[0];
    bVar2 = apbStack_50[0][7];
    bVar3 = apbStack_50[0][6];
    bVar4 = apbStack_50[0][5];
    bVar5 = apbStack_50[0][4];
    *(undefined1 *)((int)param_1 + 0x20d) = 0;
    *(uint *)(param_1 + 0x40) =
         (((uint)bVar2 * 0x100 + (uint)bVar3) * 0x100 + (uint)bVar4) * 0x100 + (uint)bVar5;
    if (*(int *)(param_1 + 0x45) != 0) {
      uVar14 = 0;
      puVar12 = (ushort *)((int)param_1 + 0xf4);
      do {
        if (*puVar12 == (ushort)*(byte *)((int)param_1 + 500)) break;
        uVar14 = uVar14 + 1;
        puVar12 = puVar12 + 0x12;
      } while (uVar14 < 4);
      if (uVar14 == 4) {
        return 6;
      }
      uVar16 = *(byte *)((int)param_1 + 0x204) - 8;
      uVar9 = fn_82C038C8(param_1,(ulonglong)*(uint *)((int)param_1 + 0x1ac) + lVar10 + *param_1 +
                                   9,uVar16,apbStack_50);
      if (uVar9 != uVar16) {
        return 3;
      }
      uVar9 = 0xf8;
      do {
        iVar8 = uVar14 * 0x24 + uVar9;
        uVar13 = (uint)*(ushort *)(iVar8 + (int)param_1);
        if (uVar13 == 0xffff) {
          if (uVar16 < 2) {
            return 3;
          }
          pbVar7 = apbStack_50[0] + 1;
          uVar16 = uVar16 - 2;
          bVar2 = *apbStack_50[0];
          apbStack_50[0] = apbStack_50[0] + 2;
          uVar13 = (uint)*pbVar7 * 0x100 + (uint)bVar2;
        }
        if (uVar16 < uVar13) {
          return 3;
        }
        if (*(int *)((int)param_1 + iVar8 + 4) != 0) {
          lVar10 = 0;
          if (8 < uVar13) {
            return 1;
          }
          if (uVar13 != 0) {
            uVar14 = 0;
            do {
              pbVar7 = apbStack_50[0] + uVar14;
              uVar14 = uVar14 + 1 & 0xffff;
              lVar10 = (ulonglong)*pbVar7 + lVar10 * 0x100;
            } while (uVar14 < uVar13);
          }
          param_1[0x4b] = lVar10;
          break;
        }
        uVar9 = uVar9 + 8;
        apbStack_50[0] = apbStack_50[0] + uVar13;
      } while (uVar9 < 0x118);
    }
  }
  lVar10 = (ulonglong)*(byte *)((int)param_1 + 0x204) + (ulonglong)*(byte *)((int)param_1 + 0x1c4) +
           3;
  *(short *)((int)param_1 + 0x1f2) = (short)lVar10;
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((ulonglong)*(uint *)((int)param_1 + 0x1cc) == 0) {
      lVar10 = ((ulonglong)*(uint *)((int)param_1 + 0x14) -
               (ulonglong)*(uint *)((int)param_1 + 0x1dc)) - lVar10;
    }
    else {
      lVar10 = ((ulonglong)*(uint *)((int)param_1 + 0x1cc) -
               (ulonglong)*(uint *)((int)param_1 + 0x1dc)) - lVar10;
    }
    uVar11 = lVar10 - (ulonglong)*(uint *)((int)param_1 + 0x1ac);
  }
  else {
    cVar1 = *(char *)((int)param_1 + 0x1e6);
    if (cVar1 == '\x01') {
      iVar8 = fn_82C038C8(param_1,lVar10 + (ulonglong)*(uint *)((int)param_1 + 0x1ac) + *param_1,1,
                           apbStack_50);
      if (iVar8 != 1) {
        return 3;
      }
      uVar11 = (ulonglong)*apbStack_50[0];
    }
    else if (cVar1 == '\x02') {
      iVar8 = fn_82C038C8(param_1,lVar10 + (ulonglong)*(uint *)((int)param_1 + 0x1ac) + *param_1,2,
                           apbStack_50);
      if (iVar8 != 2) {
        return 3;
      }
      uVar11 = (ulonglong)apbStack_50[0][1] * 0x100 + (ulonglong)*apbStack_50[0];
    }
    else if (cVar1 == '\x03') {
      iVar8 = fn_82C038C8(param_1,lVar10 + (ulonglong)*(uint *)((int)param_1 + 0x1ac) + *param_1,4,
                           apbStack_50);
      if (iVar8 != 4) {
        return 3;
      }
      uVar11 = (((ulonglong)apbStack_50[0][3] * 0x100 + (ulonglong)apbStack_50[0][2]) * 0x100 +
               (ulonglong)apbStack_50[0][1]) * 0x100 + (ulonglong)*apbStack_50[0];
    }
    else {
      uVar11 = 0;
    }
  }
  if (sVar15 == 0) {
    sVar15 = (short)uVar11;
  }
  *(short *)((int)param_1 + 0x206) = (short)uVar11;
  *(short *)((int)param_1 + 0x20a) = sVar15;
  lVar10 = (ulonglong)*(byte *)((int)param_1 + 0x1e7) + (uVar11 & 0xffff) +
           (ulonglong)*(ushort *)((int)param_1 + 0x1f2);
  *(short *)((int)param_1 + 0x1f2) = (short)lVar10;
  uVar14 = ((uint)lVar10 & 0xffff) + *(int *)((int)param_1 + 0x1ac);
  *(uint *)((int)param_1 + 0x1ac) = uVar14;
  if ((uVar14 <= *(uint *)((int)param_1 + 0x14)) &&
     ((uVar14 != *(uint *)((int)param_1 + 0x14) ||
      (*(int *)((int)param_1 + 0x1ec) - 1U <= *(uint *)((int)param_1 + 0x21c))))) {
    return 0;
  }
  return 6;
}

