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
extern int fn_82F02410();
extern int fn_82F15CE8();


void fn_82EF4C58(int param_1,uint *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  undefined4 *puVar14;
  byte bVar15;
  ulonglong uVar16;
  uint uVar17;
  
  uVar7 = *(undefined4 *)(param_1 + 0x1ebc);
  bVar6 = false;
  uVar11 = ((longlong)*(int *)(param_1 + 0x2d0) * (longlong)param_4 & 0x7fffffffU) * 2 + param_3 &
           0x7fffffff;
  uVar16 = uVar11 * 2;
  bVar15 = (-(*(int *)(param_1 + 0x6d6c) != 0) & 0x36U) + 0x47;
  if (*(char *)(param_2 + 0x16) != '\0') {
    if (*(char *)(param_2 + 0x16) == '\x01') {
      iVar13 = *(int *)(param_1 + 0x5174);
      if (*(char *)((int)param_2 + 0x92) == '\0') {
        fn_82F02410(uVar7,*(undefined4 *)(iVar13 + 0x30),*(undefined4 *)(iVar13 + 0x34));
        iVar13 = *(int *)(param_1 + 0x6f98);
        if (iVar13 != 0) {
          *(int *)(param_1 + 0x6fd8) =
               *(int *)(*(int *)(param_1 + 0x5174) + 0x34) + *(int *)(param_1 + 0x6fd8);
          goto LAB_82ef4e70;
        }
      }
      else {
        fn_82F02410(uVar7,*(undefined4 *)(iVar13 + 0x38),*(undefined4 *)(iVar13 + 0x3c));
        iVar13 = *(int *)(param_1 + 0x6f98);
        if (iVar13 != 0) {
          *(int *)(param_1 + 0x6fd8) =
               *(int *)(*(int *)(param_1 + 0x5174) + 0x3c) + *(int *)(param_1 + 0x6fd8);
          goto LAB_82ef4e70;
        }
      }
    }
    else {
      puVar14 = *(undefined4 **)(param_1 + 0x5174);
      if (*(char *)((int)param_2 + 0x92) == '\0') {
        fn_82F02410(uVar7,*puVar14,puVar14[1]);
        iVar13 = *(int *)(param_1 + 0x6f98);
        if (iVar13 != 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x5174) + 4);
          goto LAB_82ef4e64;
        }
      }
      else {
        fn_82F02410(uVar7,puVar14[2],puVar14[3]);
        iVar13 = *(int *)(param_1 + 0x6f98);
        if (iVar13 != 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x5174) + 0xc);
LAB_82ef4e64:
          *(int *)(param_1 + 0x6fd8) = iVar3 + *(int *)(param_1 + 0x6fd8);
          goto LAB_82ef4e70;
        }
      }
    }
    goto LAB_82ef4e84;
  }
  if (*(char *)((int)param_2 + 0x92) == '\0') {
    iVar13 = *(int *)(param_1 + 0x5174);
    if (*(char *)((int)param_2 + 0x93) == '\0') {
      fn_82F02410(uVar7,*(undefined4 *)(iVar13 + 0x10),*(undefined4 *)(iVar13 + 0x14));
      iVar13 = *(int *)(param_1 + 0x6f98);
      if (iVar13 != 0) {
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x14) + *(int *)(param_1 + 0x6fd8);
        goto LAB_82ef4e70;
      }
    }
    else {
      fn_82F02410(uVar7,*(undefined4 *)(iVar13 + 0x18),*(undefined4 *)(iVar13 + 0x1c));
      iVar13 = *(int *)(param_1 + 0x6f98);
      if (iVar13 != 0) {
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x1c) + *(int *)(param_1 + 0x6fd8);
        goto LAB_82ef4e70;
      }
    }
  }
  else {
    iVar13 = *(int *)(param_1 + 0x5174);
    if (*(char *)((int)param_2 + 0x93) == '\0') {
      fn_82F02410(uVar7,*(undefined4 *)(iVar13 + 0x20),*(undefined4 *)(iVar13 + 0x24));
      iVar13 = *(int *)(param_1 + 0x6f98);
      if (iVar13 != 0) {
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x24) + *(int *)(param_1 + 0x6fd8);
        goto LAB_82ef4e70;
      }
    }
    else {
      fn_82F02410(uVar7,*(undefined4 *)(iVar13 + 0x28),*(undefined4 *)(iVar13 + 0x2c));
      iVar13 = *(int *)(param_1 + 0x6f98);
      if (iVar13 != 0) {
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x2c) + *(int *)(param_1 + 0x6fd8);
LAB_82ef4e70:
        if (iVar13 != 0) {
          *(int *)(param_1 + 0x75cc) = *(int *)(param_1 + 0x75cc) + 1;
        }
      }
    }
  }
LAB_82ef4e84:
  if ((*(int *)(param_1 + 0xaf0) != 2) || (*(char *)(param_2 + 0x16) == '\x04')) goto LAB_82ef4f64;
  if (*(int *)(param_1 + 0x8d0) == 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),(param_2[0x17] & 0xf0000000) == 0x40000000,1
                     );
  }
  iVar13 = (int)param_2[0x17] >> 0x1c;
  if ((iVar13 == 4) || (*(char *)(param_2 + 0x16) == '\x01')) goto LAB_82ef4f64;
  if (iVar13 == 1) {
    uVar10 = 2;
    uVar8 = 2;
  }
  else {
    if (iVar13 == 3) {
LAB_82ef4f54:
      uVar8 = 0;
    }
    else {
      if (iVar13 != 2) goto LAB_82ef4f64;
      uVar9 = *(uint *)(*(int *)(param_1 + 0x1eb0) + (int)(uVar11 << 3));
      if (((uVar9 & 0xffff0000) != 0) || (bVar6 = false, (uVar9 & 0xfff0) != 0)) {
        bVar6 = true;
      }
      fn_82F02410(uVar7,3,2);
      uVar8 = 1;
      if (!bVar6) goto LAB_82ef4f54;
    }
    uVar10 = 1;
  }
  fn_82F02410(uVar7,uVar8,uVar10);
LAB_82ef4f64:
  if (*(char *)(param_2 + 0x16) == '\x04') {
    if (*(int *)(param_1 + 0x97c) != 0) {
      fn_82F15CE8(param_1,param_2[0x18]);
    }
    uVar17 = 1;
    uVar9 = param_2[7];
    if (*(char *)((int)param_2 + 0x92) != '\0') {
      fn_82F02410(uVar7,uVar9,1);
      iVar13 = *(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x5190);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(iVar13 + -8),
                        *(undefined4 *)(iVar13 + -4));
      if (*(int *)(param_1 + 0x6f98) == 0) {
        return;
      }
      *(int *)(param_1 + 0x6fbc) =
           *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x5190) + -4) +
           *(int *)(param_1 + 0x6fbc);
      iVar13 = *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x5190) + -4);
      *(int *)(param_1 + 0x75dc) = *(int *)(param_1 + 0x75dc) + 1;
      *(int *)(param_1 + 0x6fc0) = iVar13 + *(int *)(param_1 + 0x6fc0);
      return;
    }
  }
  else {
    if (*(char *)(param_2 + 0x16) == '\0') {
      iVar13 = *(int *)(param_1 + 0x914);
      iVar3 = (int)((uVar16 & 0x3fffffff) << 2);
      if (((*(int *)(param_1 + 0xaf0) != 2) || ((param_2[0x17] & 0xf0000000) != 0x10000000)) &&
         (*(char *)((int)param_2 + 0x93) != '\0')) {
        pbVar4 = *(byte **)(param_1 + 0x6f10);
        *(byte **)(param_1 + 0x6f10) = pbVar4 + 8;
        bVar1 = *pbVar4;
        puVar14 = (undefined4 *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180));
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar14,puVar14[1]);
        if (*(int *)(param_1 + 0x6f98) != 0) {
          iVar5 = (bVar1 + 0x1c01) * 4;
          *(int *)(param_1 + 0x6fcc) =
               *(int *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180) + 4) +
               *(int *)(param_1 + 0x6fcc);
          *(int *)(iVar5 + param_1) = *(int *)(iVar5 + param_1) + 1;
          *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
        }
        if (bVar1 == bVar15) {
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined2 *)(iVar13 + iVar3),
                            *(undefined4 *)(param_1 + 0xa24));
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                            (*(int *)(iVar13 + iVar3) << 0x10) >> 0x14,
                            *(undefined4 *)(param_1 + 0xa28));
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(int *)(param_1 + 0x6fd4) =
                 *(int *)(param_1 + 0xa28) + *(int *)(param_1 + 0xa24) + *(int *)(param_1 + 0x6fd4);
          }
        }
        else {
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(pbVar4 + 4),
                            *(undefined1 *)((uint)*pbVar4 + *(int *)(param_1 + 0x5188)));
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(uint *)(param_1 + 0x6fd0) =
                 (uint)*(byte *)((uint)*pbVar4 + *(int *)(param_1 + 0x5188)) +
                 *(int *)(param_1 + 0x6fd0);
          }
        }
      }
      if (((*(int *)(param_1 + 0xaf0) == 2) && ((param_2[0x17] & 0xf0000000) == 0x20000000)) &&
         (bVar6)) {
        pbVar4 = *(byte **)(param_1 + 0x6f10);
        *(byte **)(param_1 + 0x6f10) = pbVar4 + 8;
        bVar1 = *pbVar4;
        puVar14 = (undefined4 *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180));
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar14,puVar14[1]);
        if (*(int *)(param_1 + 0x6f98) != 0) {
          iVar13 = (bVar1 + 0x1c01) * 4;
          *(int *)(param_1 + 0x6fcc) =
               *(int *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180) + 4) +
               *(int *)(param_1 + 0x6fcc);
          *(int *)(iVar13 + param_1) = *(int *)(iVar13 + param_1) + 1;
          *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
        }
        if (bVar1 == bVar15) {
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                            *(undefined2 *)(*(int *)(param_1 + 0x1eb0) + iVar3),
                            *(undefined4 *)(param_1 + 0xa24));
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                            (*(int *)(*(int *)(param_1 + 0x1eb0) + iVar3) << 0x10) >> 0x14,
                            *(undefined4 *)(param_1 + 0xa28));
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(int *)(param_1 + 0x6fd4) =
                 *(int *)(param_1 + 0xa28) + *(int *)(param_1 + 0xa24) + *(int *)(param_1 + 0x6fd4);
          }
        }
        else {
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(pbVar4 + 4),
                            *(undefined1 *)((uint)*pbVar4 + *(int *)(param_1 + 0x5188)));
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(uint *)(param_1 + 0x6fd0) =
                 (uint)*(byte *)((uint)*pbVar4 + *(int *)(param_1 + 0x5188)) +
                 *(int *)(param_1 + 0x6fd0);
          }
        }
      }
    }
    if (*(char *)(param_2 + 0x16) == '\x01') {
      cVar2 = *(char *)((int)param_2 + 0x93);
      uVar9 = 8;
      puVar14 = (undefined4 *)(*(int *)(param_1 + 0x5178) + cVar2 * 8);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar14,puVar14[1]);
      uVar17 = 0;
      do {
        iVar13 = *(int *)(param_1 + 0x914);
        iVar3 = (int)(((longlong)(int)(uVar17 & 2) * (longlong)*(int *)(param_1 + 0x2d0) +
                       ((ulonglong)uVar17 & 1) + uVar16 & 0xffffffff) << 2);
        if (((int)cVar2 & uVar9) != 0) {
          pbVar4 = *(byte **)(param_1 + 0x6f10);
          *(byte **)(param_1 + 0x6f10) = pbVar4 + 8;
          bVar1 = *pbVar4;
          puVar14 = (undefined4 *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180));
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar14,puVar14[1]);
          if (*(int *)(param_1 + 0x6f98) != 0) {
            iVar5 = (bVar1 + 0x1c01) * 4;
            *(int *)(param_1 + 0x6fcc) =
                 *(int *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180) + 4) +
                 *(int *)(param_1 + 0x6fcc);
            *(int *)(iVar5 + param_1) = *(int *)(iVar5 + param_1) + 1;
            *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
          }
          if (bVar1 == bVar15) {
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined2 *)(iVar3 + iVar13),
                              *(undefined4 *)(param_1 + 0xa24));
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                              (*(int *)(iVar3 + iVar13) << 0x10) >> 0x14,
                              *(undefined4 *)(param_1 + 0xa28));
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(int *)(param_1 + 0x6fd4) =
                   *(int *)(param_1 + 0xa28) + *(int *)(param_1 + 0xa24) +
                   *(int *)(param_1 + 0x6fd4);
            }
          }
          else {
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(pbVar4 + 4),
                              *(undefined1 *)((uint)*pbVar4 + *(int *)(param_1 + 0x5188)));
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(uint *)(param_1 + 0x6fd0) =
                   (uint)*(byte *)((uint)*pbVar4 + *(int *)(param_1 + 0x5188)) +
                   *(int *)(param_1 + 0x6fd0);
            }
          }
        }
        uVar17 = uVar17 + 1;
        uVar9 = (int)uVar9 >> 1;
      } while ((int)uVar17 < 4);
    }
    if (*(char *)((int)param_2 + 0x92) == '\0') {
      return;
    }
    iVar13 = *(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x518c);
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(iVar13 + -8),
                      *(undefined4 *)(iVar13 + -4));
    if (*(int *)(param_1 + 0x6f98) != 0) {
      *(int *)(param_1 + 0x6fbc) =
           *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x518c) + -4) +
           *(int *)(param_1 + 0x6fbc);
      iVar13 = *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x518c) + -4);
      *(int *)(param_1 + 0x75d4) = *(int *)(param_1 + 0x75d4) + 1;
      *(int *)(param_1 + 0x6fc4) = iVar13 + *(int *)(param_1 + 0x6fc4);
    }
    if (*(int *)(param_1 + 0x97c) != 0) {
      fn_82F15CE8(param_1,param_2[0x18]);
    }
    if (*(int *)(param_1 + 0x648) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x61c) == 0) {
      return;
    }
    uVar11 = (~(ulonglong)*param_2 & 0xffffffff) >> 0x19 & 8;
    puVar12 = param_2;
    for (iVar13 = 0;
        ((puVar12 = puVar12 + 1, *puVar12 == 0 || (*(char *)((int)param_2 + iVar13 + 0x4a) != '\0'))
        && (iVar13 < 6)); iVar13 = iVar13 + 1) {
    }
    cVar2 = *(char *)((int)param_2 + iVar13 + 0x38);
    if (cVar2 == '\x01') {
      uVar11 = (longlong)*(char *)((int)param_2 + iVar13 + 0x80) + uVar11;
    }
    else if (cVar2 == '\x02') {
      uVar11 = (longlong)*(char *)((int)param_2 + iVar13 + 0x86) + uVar11 + 3;
    }
    else if (cVar2 == '\x04') {
      uVar11 = uVar11 + 7;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x1ebc);
    puVar12 = (uint *)(*(int *)(param_1 + 0x7600) + (int)((uVar11 & 0xffffffff) << 3));
    uVar17 = puVar12[1];
    uVar9 = *puVar12;
  }
  fn_82F02410(uVar7,uVar9,uVar17);
  return;
}

