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
extern unsigned int lbl_831AFCA0;
extern unsigned int lbl_831B8ED8;
extern unsigned int lbl_831B8EDC;


void fn_82F15D40(int param_1,uint *param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = *(int *)(param_1 + 0x2d0);
  uVar3 = *(undefined4 *)(param_1 + 0x1ebc);
  if (*(int *)(param_1 + 0x8d0) == 0) {
    fn_82F02410(uVar3,(param_2[0x17] & 0xf0000000) == 0x10000000,1);
  }
  if (*(int *)(param_1 + 0x8c4) == 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*param_2 >> 0x1f,1);
  }
  iVar14 = (iVar13 * param_4 + param_3) * 4;
  iVar13 = *(int *)(param_1 + 0x914);
  bVar4 = *(byte *)((int)param_2 + 0x93) | *(byte *)((int)param_2 + 0x92);
  if ((param_2[0x17] & 0xf0000000) == 0x10000000) goto LAB_82f15fc4;
  if ((*param_2 & 0x80000000) == 0) {
    bVar1 = **(byte **)(*(int *)(param_1 + 0x1c18) + 0x58);
    puVar5 = (undefined4 *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5150));
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar5,puVar5[1]);
    if (*(int *)(param_1 + 0x6f98) != 0) {
      iVar12 = (bVar1 + 0x1c01) * 4;
      *(int *)(param_1 + 0x6fcc) =
           *(int *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5150) + 4) + *(int *)(param_1 + 0x6fcc);
      *(int *)(iVar12 + param_1) = *(int *)(iVar12 + param_1) + 1;
      *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
    }
    if ((bVar1 == 0x22) || (bVar1 == 0x47)) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined2 *)(iVar13 + iVar14),
                        (ulonglong)*(uint *)(param_1 + 0xa24) -
                        (ulonglong)*(uint *)(*(int *)(param_1 + 0x1c18) + 0x24));
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                        (int)(*(uint *)(iVar13 + iVar14) << 0x10 |
                             *(uint *)(iVar13 + iVar14) >> 0x10) >> 0x14,
                        (ulonglong)*(uint *)(param_1 + 0xa28) -
                        (ulonglong)*(uint *)(*(int *)(param_1 + 0x1c18) + 0x24));
      if (*(int *)(param_1 + 0x6f98) != 0) {
        iVar12 = (*(int *)(param_1 + 0xa24) - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                 *(int *)(param_1 + 0x6fd4);
        *(int *)(param_1 + 0x6fd4) = iVar12;
        *(int *)(param_1 + 0x6fd4) =
             (iVar12 - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) + *(int *)(param_1 + 0xa28);
      }
    }
    else {
      puVar11 = *(uint **)(*(int *)(param_1 + 0x1c18) + 0x58);
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar11 >> 1 & 0x1ffff,
                        (&lbl_831AFCA0)[*(int *)(param_1 + 0xa00) * 0x49 + (uint)*(byte *)puVar11]);
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(uint *)(param_1 + 0x6fd0) =
             (uint)(byte)(&lbl_831AFCA0)
                         [(uint)**(byte **)(*(int *)(param_1 + 0x1c18) + 0x58) +
                          *(int *)(param_1 + 0xa00) * 0x49] + *(int *)(param_1 + 0x6fd0);
      }
    }
    *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) = *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) + 4;
  }
  if ((*(uint *)(iVar13 + iVar14) & 4) != 0) goto LAB_82f15fc4;
  iVar12 = (int)param_2[0x17] >> 0x1c;
  if (iVar12 == *(int *)(param_1 + 0x860)) {
    uVar8 = 2;
LAB_82f15fb8:
    uVar9 = 2;
  }
  else {
    if (iVar12 != *(int *)(param_1 + 0x85c)) {
      if (iVar12 != 2) goto LAB_82f15fc4;
      uVar8 = 3;
      goto LAB_82f15fb8;
    }
    uVar9 = 1;
    uVar8 = 0;
  }
  fn_82F02410(uVar3,uVar8,uVar9);
LAB_82f15fc4:
  if ((*param_2 & 0x80000000) != 0) {
    return;
  }
  if ((*(uint *)(iVar13 + iVar14) & 8) == 0) {
    if (bVar4 != 0) {
      return;
    }
    if ((*(uint *)(iVar13 + iVar14) & 4) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x97c) != 0) {
      fn_82F15CE8(param_1,param_2[0x18]);
    }
  }
  else {
    if ((param_2[0x17] & 0xf0000000) == 0x20000000) {
      bVar1 = **(byte **)(*(int *)(param_1 + 0x1c18) + 0x58);
      puVar5 = (undefined4 *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5150));
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar5,puVar5[1]);
      if (*(int *)(param_1 + 0x6f98) != 0) {
        iVar12 = (bVar1 + 0x1c01) * 4;
        *(int *)(param_1 + 0x6fcc) =
             *(int *)((uint)bVar1 * 8 + *(int *)(param_1 + 0x5150) + 4) + *(int *)(param_1 + 0x6fcc)
        ;
        *(int *)(iVar12 + param_1) = *(int *)(iVar12 + param_1) + 1;
        *(int *)(param_1 + 0x75c4) = *(int *)(param_1 + 0x75c4) + 1;
      }
      if ((bVar1 == 0x22) || (bVar1 == 0x47)) {
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                          *(undefined2 *)(iVar14 + *(int *)(param_1 + 0x1eb0)),
                          (ulonglong)*(uint *)(param_1 + 0xa24) -
                          (ulonglong)*(uint *)(*(int *)(param_1 + 0x1c18) + 0x24));
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                          (*(int *)(iVar14 + *(int *)(param_1 + 0x1eb0)) << 0x10) >> 0x14,
                          (ulonglong)*(uint *)(param_1 + 0xa28) -
                          (ulonglong)*(uint *)(*(int *)(param_1 + 0x1c18) + 0x24));
        if (*(int *)(param_1 + 0x6f98) != 0) {
          iVar12 = (*(int *)(param_1 + 0xa24) - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) +
                   *(int *)(param_1 + 0x6fd4);
          *(int *)(param_1 + 0x6fd4) = iVar12;
          *(int *)(param_1 + 0x6fd4) =
               (iVar12 - *(int *)(*(int *)(param_1 + 0x1c18) + 0x24)) + *(int *)(param_1 + 0xa28);
        }
      }
      else {
        puVar11 = *(uint **)(*(int *)(param_1 + 0x1c18) + 0x58);
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar11 >> 1 & 0x1ffff,
                          (&lbl_831AFCA0)[*(int *)(param_1 + 0xa00) * 0x49 + (uint)*(byte *)puVar11]
                         );
        if (*(int *)(param_1 + 0x6f98) != 0) {
          *(uint *)(param_1 + 0x6fd0) =
               (uint)(byte)(&lbl_831AFCA0)
                           [(uint)**(byte **)(*(int *)(param_1 + 0x1c18) + 0x58) +
                            *(int *)(param_1 + 0xa00) * 0x49] + *(int *)(param_1 + 0x6fd0);
        }
      }
      *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) = *(int *)(*(int *)(param_1 + 0x1c18) + 0x58) + 4;
    }
    if (bVar4 != 0) {
      if (param_2[0x1d] != 0) {
        fn_82F02410(uVar3,param_2[7],1);
      }
      iVar12 = *(int *)(param_1 + 0x600);
      if (((*(int *)(param_1 + 0x648) == 0) || (*(int *)(param_1 + 0x61c) == 0)) ||
         (bVar7 = true, (*(uint *)(iVar13 + iVar14) & 4) != 0)) {
        bVar7 = false;
      }
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                        *(undefined4 *)(*(int *)(param_1 + 0x5140) + (char)bVar4 * 4),
                        *(undefined1 *)(*(int *)(param_1 + 0x5144) + (int)(char)bVar4));
      if (*(int *)(param_1 + 0x6f98) != 0) {
        *(uint *)(param_1 + 0x6fbc) =
             (uint)*(byte *)(*(int *)(param_1 + 0x5144) + (int)(char)bVar4) +
             *(int *)(param_1 + 0x6fbc);
      }
      if (*(int *)(param_1 + 0x97c) != 0) {
        fn_82F15CE8(param_1,param_2[0x18]);
      }
      if (iVar12 != 0) {
        uVar6 = *param_2 >> 0x16 & 3;
        fn_82F02410(uVar3,(&lbl_831B8ED8)[uVar6],(&lbl_831B8EDC)[uVar6]);
      }
      if (!bVar7) {
        return;
      }
      uVar10 = (~(ulonglong)*param_2 & 0xffffffff) >> 0x19 & 8;
      puVar11 = param_2;
      for (iVar13 = 0;
          ((puVar11 = puVar11 + 1, *puVar11 == 0 ||
           (*(char *)((int)param_2 + iVar13 + 0x4a) != '\0')) && (iVar13 < 6)); iVar13 = iVar13 + 1)
      {
      }
      cVar2 = *(char *)((int)param_2 + iVar13 + 0x38);
      if (cVar2 == '\x01') {
        uVar10 = (longlong)*(char *)((int)param_2 + iVar13 + 0x80) + uVar10;
      }
      else if (cVar2 == '\x02') {
        uVar10 = (longlong)*(char *)((int)param_2 + iVar13 + 0x86) + uVar10 + 3;
      }
      else if (cVar2 == '\x04') {
        uVar10 = uVar10 + 7;
      }
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x7600) + (int)((uVar10 & 0xffffffff) << 3));
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar5,puVar5[1]);
      return;
    }
    if ((*(uint *)(iVar13 + iVar14) & 4) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x97c) != 0) {
      fn_82F15CE8(param_1,param_2[0x18]);
      fn_82F02410(uVar3,param_2[7],1);
      return;
    }
  }
  fn_82F02410(uVar3,param_2[7],1);
  return;
}

