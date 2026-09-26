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
extern int fn_82EF4C58();
extern int fn_82F02410();
extern int fn_82F15CE8();


void fn_82EF6A60(int param_1,uint *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar3 = *(undefined4 *)(param_1 + 0x1ebc);
  bVar10 = (-(*(int *)(param_1 + 0x6d6c) != 0) & 0x36U) + 0x47;
  if (*(int *)(param_1 + 0xaf0) == 2) {
    fn_82EF4C58();
    return;
  }
  uVar11 = (((longlong)*(int *)(param_1 + 0x2d0) * (longlong)param_4 & 0x7fffffffU) * 2 + param_3 &
           0x7fffffff) * 2;
  if (*(char *)(param_2 + 0x16) == '\0') {
    if (*(char *)((int)param_2 + 0x92) == '\0') {
      iVar8 = *(int *)(param_1 + 0x5174);
      if (*(char *)((int)param_2 + 0x93) == '\0') {
        fn_82F02410(uVar3,*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14));
        iVar8 = *(int *)(param_1 + 0x6f98);
        if (iVar8 == 0) goto LAB_82ef6ca0;
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x14) + *(int *)(param_1 + 0x6fd8);
      }
      else {
        fn_82F02410(uVar3,*(undefined4 *)(iVar8 + 0x18),*(undefined4 *)(iVar8 + 0x1c));
        iVar8 = *(int *)(param_1 + 0x6f98);
        if (iVar8 == 0) goto LAB_82ef6ca0;
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x1c) + *(int *)(param_1 + 0x6fd8);
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x5174);
      if (*(char *)((int)param_2 + 0x93) == '\0') {
        fn_82F02410(uVar3,*(undefined4 *)(iVar8 + 0x20),*(undefined4 *)(iVar8 + 0x24));
        iVar8 = *(int *)(param_1 + 0x6f98);
        if (iVar8 == 0) goto LAB_82ef6ca0;
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x24) + *(int *)(param_1 + 0x6fd8);
      }
      else {
        fn_82F02410(uVar3,*(undefined4 *)(iVar8 + 0x28),*(undefined4 *)(iVar8 + 0x2c));
        iVar8 = *(int *)(param_1 + 0x6f98);
        if (iVar8 == 0) goto LAB_82ef6ca0;
        *(int *)(param_1 + 0x6fd8) =
             *(int *)(*(int *)(param_1 + 0x5174) + 0x2c) + *(int *)(param_1 + 0x6fd8);
      }
    }
  }
  else if (*(char *)(param_2 + 0x16) == '\x01') {
    iVar8 = *(int *)(param_1 + 0x5174);
    if (*(char *)((int)param_2 + 0x92) == '\0') {
      fn_82F02410(uVar3,*(undefined4 *)(iVar8 + 0x30),*(undefined4 *)(iVar8 + 0x34));
      iVar8 = *(int *)(param_1 + 0x6f98);
      if (iVar8 == 0) goto LAB_82ef6ca0;
      *(int *)(param_1 + 0x6fd8) =
           *(int *)(*(int *)(param_1 + 0x5174) + 0x34) + *(int *)(param_1 + 0x6fd8);
    }
    else {
      fn_82F02410(uVar3,*(undefined4 *)(iVar8 + 0x38),*(undefined4 *)(iVar8 + 0x3c));
      iVar8 = *(int *)(param_1 + 0x6f98);
      if (iVar8 == 0) goto LAB_82ef6ca0;
      *(int *)(param_1 + 0x6fd8) =
           *(int *)(*(int *)(param_1 + 0x5174) + 0x3c) + *(int *)(param_1 + 0x6fd8);
    }
  }
  else {
    puVar9 = *(undefined4 **)(param_1 + 0x5174);
    if (*(char *)((int)param_2 + 0x92) == '\0') {
      fn_82F02410(uVar3,*puVar9,puVar9[1]);
      iVar8 = *(int *)(param_1 + 0x6f98);
      if (iVar8 == 0) goto LAB_82ef6ca0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x5174) + 4);
    }
    else {
      fn_82F02410(uVar3,puVar9[2],puVar9[3]);
      iVar8 = *(int *)(param_1 + 0x6f98);
      if (iVar8 == 0) goto LAB_82ef6ca0;
      iVar4 = *(int *)(*(int *)(param_1 + 0x5174) + 0xc);
    }
    *(int *)(param_1 + 0x6fd8) = iVar4 + *(int *)(param_1 + 0x6fd8);
  }
  if (iVar8 != 0) {
    *(int *)(param_1 + 0x75cc) = *(int *)(param_1 + 0x75cc) + 1;
  }
LAB_82ef6ca0:
  if (*(char *)(param_2 + 0x16) == '\x04') {
    if (*(int *)(param_1 + 0x97c) != 0) {
      fn_82F15CE8(param_1,param_2[0x18]);
    }
    if (*(char *)((int)param_2 + 0x92) == '\0') {
      fn_82F02410(uVar3,param_2[7],1);
    }
    else {
      fn_82F02410(uVar3,param_2[7],1);
      iVar8 = *(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x5190);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(iVar8 + -8),
                        *(undefined4 *)(iVar8 + -4));
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(int *)(param_1 + 0x6fbc) =
             *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x5190) + -4) +
             *(int *)(param_1 + 0x6fbc);
        iVar8 = *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x5190) + -4);
        *(int *)(param_1 + 0x75dc) = *(int *)(param_1 + 0x75dc) + 1;
        *(int *)(param_1 + 0x6fc0) = iVar8 + *(int *)(param_1 + 0x6fc0);
      }
    }
  }
  else {
    if (*(char *)(param_2 + 0x16) == '\0') {
      iVar8 = *(int *)(param_1 + 0x914);
      iVar4 = (int)((uVar11 & 0x3fffffff) << 2);
      if (*(char *)((int)param_2 + 0x93) != '\0') {
        pbVar5 = *(byte **)(param_1 + 0x6f10);
        *(byte **)(param_1 + 0x6f10) = pbVar5 + 8;
        bVar1 = *pbVar5;
        puVar9 = (undefined4 *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180));
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar9,puVar9[1]);
        if (*(int *)(param_1 + 0x6f98) != 0) {
          iVar6 = (bVar1 + 0x1c01) * 4;
          *(int *)(param_1 + 0x6fcc) =
               *(int *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180) + 4) +
               *(int *)(param_1 + 0x6fcc);
          *(int *)(iVar6 + param_1) = *(int *)(iVar6 + param_1) + 1;
          *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
        }
        if (bVar1 == bVar10) {
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined2 *)(iVar8 + iVar4),
                            *(undefined4 *)(param_1 + 0xa24));
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                            (*(int *)(iVar8 + iVar4) << 0x10) >> 0x14,
                            *(undefined4 *)(param_1 + 0xa28));
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(int *)(param_1 + 0x6fd4) =
                 *(int *)(param_1 + 0xa28) + *(int *)(param_1 + 0xa24) + *(int *)(param_1 + 0x6fd4);
          }
        }
        else {
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(pbVar5 + 4),
                            *(undefined1 *)((uint)*pbVar5 + *(int *)(param_1 + 0x5188)));
          if (*(int *)(param_1 + 0x6f98) != 0) {
            *(uint *)(param_1 + 0x6fd0) =
                 (uint)*(byte *)((uint)*pbVar5 + *(int *)(param_1 + 0x5188)) +
                 *(int *)(param_1 + 0x6fd0);
          }
        }
      }
      if (((*(uint *)(iVar8 + iVar4) & 3) != 0) &&
         (fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                            ((ulonglong)*(uint *)(iVar8 + iVar4) & 3) - 1,1),
         *(int *)(param_1 + 0x6f98) != 0)) {
        *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
      }
    }
    if (*(char *)(param_2 + 0x16) == '\x01') {
      cVar2 = *(char *)((int)param_2 + 0x93);
      uVar12 = 8;
      puVar9 = (undefined4 *)(*(int *)(param_1 + 0x5178) + cVar2 * 8);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar9,puVar9[1]);
      uVar13 = 0;
      do {
        iVar8 = *(int *)(param_1 + 0x914);
        iVar4 = (int)(((longlong)(int)(uVar13 & 2) * (longlong)*(int *)(param_1 + 0x2d0) +
                       ((ulonglong)uVar13 & 1) + uVar11 & 0x3fffffff) << 2);
        if (((int)cVar2 & uVar12) != 0) {
          pbVar5 = *(byte **)(param_1 + 0x6f10);
          *(byte **)(param_1 + 0x6f10) = pbVar5 + 8;
          bVar1 = *pbVar5;
          puVar9 = (undefined4 *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180));
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar9,puVar9[1]);
          if (*(int *)(param_1 + 0x6f98) != 0) {
            iVar6 = (bVar1 + 0x1c01) * 4;
            *(int *)(param_1 + 0x6fcc) =
                 *(int *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5180) + 4) +
                 *(int *)(param_1 + 0x6fcc);
            *(int *)(iVar6 + param_1) = *(int *)(iVar6 + param_1) + 1;
            *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
          }
          if (bVar1 == bVar10) {
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined2 *)(iVar4 + iVar8),
                              *(undefined4 *)(param_1 + 0xa24));
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                              (*(int *)(iVar4 + iVar8) << 0x10) >> 0x14,
                              *(undefined4 *)(param_1 + 0xa28));
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(int *)(param_1 + 0x6fd4) =
                   *(int *)(param_1 + 0xa28) + *(int *)(param_1 + 0xa24) +
                   *(int *)(param_1 + 0x6fd4);
            }
          }
          else {
            fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(pbVar5 + 4),
                              *(undefined1 *)((uint)*pbVar5 + *(int *)(param_1 + 0x5188)));
            if (*(int *)(param_1 + 0x6f98) != 0) {
              *(uint *)(param_1 + 0x6fd0) =
                   (uint)*(byte *)((uint)*pbVar5 + *(int *)(param_1 + 0x5188)) +
                   *(int *)(param_1 + 0x6fd0);
            }
          }
        }
        if (((*(uint *)(iVar4 + iVar8) & 3) != 0) &&
           (fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                              ((ulonglong)*(uint *)(iVar4 + iVar8) & 3) - 1,1),
           *(int *)(param_1 + 0x6f98) != 0)) {
          *(int *)(param_1 + 0x6fdc) = *(int *)(param_1 + 0x6fdc) + 1;
        }
        uVar13 = uVar13 + 1;
        uVar12 = (int)uVar12 >> 1;
      } while ((int)uVar13 < 4);
    }
    if (*(char *)((int)param_2 + 0x92) != '\0') {
      iVar8 = *(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x518c);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(iVar8 + -8),
                        *(undefined4 *)(iVar8 + -4));
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(int *)(param_1 + 0x6fbc) =
             *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x518c) + -4) +
             *(int *)(param_1 + 0x6fbc);
        iVar8 = *(int *)(*(char *)((int)param_2 + 0x92) * 8 + *(int *)(param_1 + 0x518c) + -4);
        *(int *)(param_1 + 0x75d4) = *(int *)(param_1 + 0x75d4) + 1;
        *(int *)(param_1 + 0x6fc4) = iVar8 + *(int *)(param_1 + 0x6fc4);
      }
      if (*(int *)(param_1 + 0x97c) != 0) {
        fn_82F15CE8(param_1,param_2[0x18]);
      }
      if ((*(int *)(param_1 + 0x648) != 0) && (*(int *)(param_1 + 0x61c) != 0)) {
        uVar11 = (~(ulonglong)*param_2 & 0xffffffff) >> 0x19 & 8;
        puVar7 = param_2;
        for (iVar8 = 0;
            ((puVar7 = puVar7 + 1, *puVar7 == 0 || (*(char *)((int)param_2 + iVar8 + 0x4a) != '\0'))
            && (iVar8 < 6)); iVar8 = iVar8 + 1) {
        }
        cVar2 = *(char *)((int)param_2 + iVar8 + 0x38);
        if (cVar2 == '\x01') {
          uVar11 = (longlong)*(char *)((int)param_2 + iVar8 + 0x80) + uVar11;
        }
        else if (cVar2 == '\x02') {
          uVar11 = (longlong)*(char *)((int)param_2 + iVar8 + 0x86) + uVar11 + 3;
        }
        else if (cVar2 == '\x04') {
          uVar11 = uVar11 + 7;
        }
        iVar8 = (int)((uVar11 & 0x1fffffff) << 3);
        puVar9 = (undefined4 *)(iVar8 + *(int *)(param_1 + 0x7600));
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar9,puVar9[1]);
        *(int *)(param_1 + 0x75e4) =
             *(int *)(iVar8 + *(int *)(param_1 + 0x7600) + 4) + *(int *)(param_1 + 0x75e4);
      }
    }
  }
  return;
}

