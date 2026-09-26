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
extern int fn_82658670();
extern int fn_82659300();
extern int fn_82659368();
extern int fn_8265B200();
extern int fn_8265B300();
extern int fn_8265B358();
extern unsigned int lbl_8203177C;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821957F0;
extern unsigned char lbl_831BD4B0[];
extern unsigned int lbl_831BD640;
extern unsigned int lbl_831BD650;
extern unsigned int lbl_831BD660;
extern unsigned int lbl_831BD670;
extern unsigned int lbl_831BD690;
extern unsigned int lbl_831BD6A0;
extern unsigned int lbl_831BD6C0;
extern unsigned int lbl_831BD7E8;
extern unsigned int lbl_831E79A8;
extern unsigned int lbl_831E79B8;
extern unsigned int lbl_831E79C8;
extern unsigned int lbl_831E79D8;


void fn_826593D0(int param_1,uint *param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char cVar10;
  undefined8 uVar9;
  undefined **ppuVar11;
  uint uVar12;
  double dVar13;
  byte abStack_70 [8];
  longlong lStack_68;
  
  if ((param_2[1] & 0x80000000) == 0x80000000) {
    if ((param_2[2] & 0x80000000) == 0) {
      uVar7 = 0xffffffff821ce810;
    }
    else {
      uVar7 = 0xffffffff821ce808;
    }
    fn_8265B200(param_1,uVar7);
  }
  uVar12 = *param_2 & 0x1f;
  if (param_3 != 0) {
    if (uVar12 != 0) {
      uVar7 = 0xffffffff821ce4c8;
LAB_82659c84:
      fn_8265B200(param_1,uVar7);
      return;
    }
LAB_82659c90:
    uVar12 = param_2[1] >> 0x1e & 1;
    abStack_70[0] = 0;
    bVar3 = false;
    if ((((uVar12 == 0) && ((*(uint *)(param_1 + 8) & 2) == 0)) &&
        (*(code **)(param_1 + 0x2020) != (code *)0x0)) &&
       (iVar6 = (**(code **)(param_1 + 0x2020))
                          (*(undefined4 *)(param_1 + 0x2024),3,param_4,abStack_70,1), iVar6 == 0)) {
      bVar3 = true;
    }
    if ((uVar12 != 0) || (bVar4 = true, bVar3)) {
      bVar4 = false;
    }
    if (uVar12 == 0) {
      if (bVar3) {
        uVar7 = 0xffffffff821ce400;
      }
      else {
        uVar7 = 0xffffffff821ce408;
      }
    }
    else {
      uVar7 = 0xffffffff821ce3f4;
    }
    fn_8265B358(param_1,uVar7,0);
    fn_8265B200(param_1,0xffffffff821aa89c);
    if ((*param_2 & 0x40000) == 0) {
      uVar7 = 0xffffffff821ce3dc;
    }
    else {
      uVar7 = 0xffffffff821ce3d0;
    }
    fn_8265B200(param_1,uVar7,*param_2 >> 0xc & 0x3f);
    uVar1 = param_2[1];
    if ((((uVar1 & 7) != 0) || ((uVar1 & 0x38) != 8)) ||
       (((uVar1 & 0x1c0) != 0x80 || ((uVar1 & 0xe00) != 0x600)))) {
      fn_8265B200(param_1,0xffffffff821c7f2c);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 3 & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 6 & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 9 & 7]);
    }
    if ((bVar4) || (bVar3)) {
      fn_8265B200(param_1,0xffffffff82196824);
      fn_82658670(param_1,1,*param_2 >> 5 & 0x40 | *param_2 >> 5 & 0x3f,0,0,0,0,0);
      fn_8265B200(param_1,0xffffffff821ce414,lbl_831BD4B0[*param_2 >> 0x1e]);
    }
    if (bVar4) {
      fn_8265B200(param_1,0xffffffff821ce418,
                        (((ulonglong)(*param_2 >> 0x14) & 0x1f) * -3 + 0x5f) -
                        ((ulonglong)(*param_2 >> 0x19) & 3));
    }
    if (bVar3) {
      bVar5 = abStack_70[0] & 0xf;
      bVar2 = abStack_70[0] & 0xf;
      fn_8265B200(param_1,0xffffffff821ce420,
                        *(undefined4 *)
                         ((int)&lbl_831BD7E8 + (abStack_70[0] >> 2 & 0x3ffffffc)));
      if (bVar5 != 0) {
        fn_8265B200(param_1,0xffffffff821aa66c,bVar2);
      }
    }
    uVar7 = 0xffffffff82196f18;
    if (uVar12 == 0) {
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || (param_3 == 0)) {
        fn_82659300(param_1);
        uVar9 = uVar7;
        if (param_3 != 0) {
          uVar9 = 0xffffffff82196f10;
        }
        fn_8265B200(param_1,0xffffffff821ce428,uVar9);
      }
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x8000) != 0)) {
        fn_82659300(param_1);
        uVar9 = uVar7;
        if ((param_2[1] & 0x8000) == 0) {
          uVar9 = 0xffffffff82196f10;
        }
        fn_8265B200(param_1,0xffffffff821ce43c,uVar9);
      }
    }
    if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x3f000000) != 0)) {
      fn_82659300(param_1);
      fn_8265B200(param_1,0xffffffff821ce44c,
                        (int)(param_2[1] << 2 | param_2[1] >> 0x1e) >> 0x1a);
    }
    if (!bVar3) {
      fn_8265B300(param_1,0xffffffff821ce838);
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[2] & 0x7fffff00) != 0)) {
        fn_82659300(param_1);
        fn_8265B200(param_1,0xffffffff821ce45c,
                          (int)(param_2[2] << 1 | param_2[2] >> 0x1f) >> 9);
      }
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x3f0000) != 0)) {
        fn_82659300(param_1);
        fn_8265B200(param_1,0xffffffff821ce468,
                          (&lbl_831BD6C0)[*(ushort *)(param_2 + 1) & 0x3f]);
      }
      if ((bVar4) &&
         (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (*(char *)((int)param_2 + 0xb) != '\0')))) {
        fn_82659300(param_1);
        fn_8265B200(param_1,0xffffffff821ce478,*(undefined1 *)((int)param_2 + 0xb));
      }
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x1000) != 0)) {
        fn_82659300(param_1);
        if ((param_2[1] & 0x1000) == 0) {
          uVar7 = 0xffffffff82196f10;
        }
        fn_8265B200(param_1,0xffffffff821ce484,uVar7);
      }
      if (((*(uint *)(param_1 + 8) >> 6 & 1) != 0) || ((param_2[1] & 0x2000) != 0)) {
        fn_82659300(param_1);
        if ((param_2[1] & 0x2000) == 0) {
          uVar7 = 0xffffffff821ce498;
        }
        else {
          uVar7 = 0xffffffff821ce490;
        }
        fn_8265B200(param_1,0xffffffff821ce4a4,uVar7);
      }
      if ((bVar4) && (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((*param_2 & 0x38000000) != 0)))) {
        fn_82659300(param_1);
        fn_8265B200(param_1,0xffffffff821ce4b4,(*param_2 >> 0x1b & 7) + 1);
      }
      fn_8265B300(param_1,0xffffffff821ce828);
    }
    return;
  }
  if (uVar12 == 0) goto LAB_82659c90;
  if ((uVar12 != 1) &&
     ((uVar12 < 0x10 || ((0x13 < uVar12 && ((uVar12 < 0x18 || (0x1a < uVar12)))))))) {
    uVar7 = 0xffffffff821ce630;
    goto LAB_82659c84;
  }
  uVar8 = 0xffffffff821ce4e8;
  if (uVar12 < 0x14) {
    if (uVar12 == 0x13) {
      ppuVar11 = &lbl_831E79D8;
    }
    else if (uVar12 == 1) {
      ppuVar11 = &lbl_831E79A8;
    }
    else if (uVar12 == 0x10) {
      ppuVar11 = &lbl_831E79B8;
    }
    else {
      if (uVar12 != 0x11) {
        if (uVar12 == 0x12) {
          uVar8 = 0xffffffff821ce4f8;
        }
        goto LAB_8265952c;
      }
      ppuVar11 = &lbl_831E79C8;
    }
    uVar8 = (ulonglong)*(uint *)((param_2[2] >> 0xc & 0xc) + (int)ppuVar11);
  }
  else if (uVar12 == 0x18) {
    uVar8 = 0xffffffff821ce508;
  }
  else if (uVar12 == 0x19) {
    uVar8 = 0xffffffff821ce514;
  }
  else if (uVar12 == 0x1a) {
    uVar8 = 0xffffffff821ce524;
  }
LAB_8265952c:
  fn_8265B358(param_1,uVar8,0);
  fn_8265B200(param_1,0xffffffff821aa89c);
  uVar12 = *param_2;
  if ((uVar12 & 0x1f) < 0x14) {
    if ((uVar12 & 0x40000) == 0) {
      uVar7 = 0xffffffff821ce3dc;
    }
    else {
      uVar7 = 0xffffffff821ce3d0;
    }
    fn_8265B200(param_1,uVar7,uVar12 >> 0xc & 0x3f);
    uVar12 = param_2[1];
    if (((((uVar12 & 7) != 0) || ((uVar12 & 0x38) != 8)) || ((uVar12 & 0x1c0) != 0x80)) ||
       ((uVar12 & 0xe00) != 0x600)) {
      fn_8265B200(param_1,0xffffffff821c7f2c);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 3 & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 6 & 7]);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[param_2[1] >> 9 & 7]);
    }
    fn_8265B200(param_1,0xffffffff82196824);
  }
  fn_82658670(param_1,1,*param_2 >> 5 & 0x40 | *param_2 >> 5 & 0x3f,0,0,0,0);
  fn_8265B200(param_1,0xffffffff821c7f2c);
  uVar12 = *param_2;
  uVar1 = uVar12 & 0x1f;
  if (uVar1 == 1) {
    uVar1 = param_2[2] >> 0xe & 3;
    if (uVar1 != 0) {
      if (uVar1 != 1) {
        if (3 < uVar1) goto LAB_8265976c;
        cVar10 = lbl_831BD4B0[uVar12 >> 0x1a & 3];
        goto LAB_826596d0;
      }
      cVar10 = lbl_831BD4B0[uVar12 >> 0x1a & 3];
      goto LAB_82659744;
    }
    uVar12 = uVar12 >> 0x1a & 3;
LAB_82659758:
    cVar10 = lbl_831BD4B0[uVar12];
  }
  else {
    cVar10 = lbl_831BD4B0[uVar12 >> 0x1a & 3];
    if (uVar1 == 0x12) {
LAB_82659744:
      fn_8265B200(param_1,0xffffffff821ce318,cVar10);
      uVar12 = *param_2 >> 0x1c & 3;
      goto LAB_82659758;
    }
    if (uVar1 != 0x18) {
LAB_826596d0:
      fn_8265B200(param_1,0xffffffff821ce318,cVar10);
      fn_8265B200(param_1,0xffffffff821ce318,lbl_831BD4B0[*param_2 >> 0x1c & 3]);
      uVar12 = *param_2 >> 0x1e;
      goto LAB_82659758;
    }
  }
  fn_8265B200(param_1,0xffffffff821ce318,cVar10);
LAB_8265976c:
  if ((*param_2 & 0x1f) < 0x14) {
    fn_8265B200(param_1,0xffffffff821ce534,*param_2 >> 0x14 & 0x1f);
  }
  fn_82659368(param_1,0xffffffff821ce53c,*param_2 >> 0x13 & 1,1);
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0) {
    fn_82659368(param_1,0xffffffff821ce54c,*param_2 >> 0x19 & 1,0);
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     ((uVar12 = param_2[1] >> 0xc & 3, (*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (uVar12 != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce568,(&lbl_831BD640)[uVar12])
    ;
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     ((uVar12 = param_2[1] >> 0xe & 3, (*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (uVar12 != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce574,(&lbl_831BD650)[uVar12])
    ;
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((*(ushort *)(param_2 + 1) & 3) != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce580,
                      (&lbl_831BD660)[*(ushort *)(param_2 + 1) & 3]);
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0) &&
     ((uVar12 = param_2[1] >> 0x12 & 7, (*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (uVar12 != 7)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce58c,
                      (&lbl_831BD670)[uVar12]);
  }
  if (((0x7fff < (param_2[2] & 0xc000)) && (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0)) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((*(byte *)(param_2 + 1) & 3) != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce598,
                      (&lbl_831BD690)[*(byte *)(param_2 + 1) & 3]);
  }
  if (((0x7fff < (param_2[2] & 0xc000)) && (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0)) &&
     ((uVar12 = param_2[1] >> 0x1a & 3, (*(uint *)(param_1 + 8) >> 6 & 1) != 0 || (uVar12 != 3)))) {
    fn_8265B200(param_1,0xffffffff821ce3ec,0xffffffff821ce5a8,(&lbl_831BD6A0)[uVar12])
    ;
  }
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0) {
    fn_82659368(param_1,0xffffffff821ce5b8,param_2[1] >> 0x1c & 1,1);
  }
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x17) != 0) {
    fn_82659368(param_1,0xffffffff821ce5c8,param_2[1] >> 0x1d & 3,0);
  }
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x1f) != 0) {
    fn_82659368(param_1,0xffffffff821ce5d8,param_2[2] & 1,0);
  }
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((param_2[2] & 0x1fc) != 0)))) {
    lStack_68 = (longlong)((int)(param_2[2] << 0x17 | param_2[2] >> 9) >> 0x19);
    fn_8265B200(param_1,0xffffffff821ce5f0,(double)((float)lStack_68 * lbl_821957F0));
  }
  dVar13 = (double)lbl_8218E8E8;
  if ((((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((param_2[2] & 0x1f0000) != 0)))) {
    lStack_68 = (longlong)((int)(param_2[2] << 0xb | param_2[2] >> 0x15) >> 0x1b);
    fn_8265B200(param_1,0xffffffff821ce600,(double)(float)((double)lStack_68 * dVar13));
  }
  uVar12 = param_2[2];
  if (((0x3fff < (uVar12 & 0xc000)) && (((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) != 0)) &&
     (((*(uint *)(param_1 + 8) >> 6 & 1) != 0 || ((uVar12 & 0x3e00000) != 0)))) {
    lStack_68 = (longlong)((int)(uVar12 << 6 | uVar12 >> 0x1a) >> 0x1b);
    fn_8265B200(param_1,0xffffffff821ce610,(double)(float)((double)lStack_68 * dVar13));
  }
  uVar12 = param_2[2];
  if ((uVar12 & 0xc000) < 0x8000) {
    return;
  }
  if (((&lbl_8203177C)[*param_2 & 0x1f] & 0x13) == 0) {
    return;
  }
  if (((*(uint *)(param_1 + 8) >> 6 & 1) == 0) && ((uVar12 & 0x7c000000) == 0)) {
    return;
  }
  lStack_68 = (longlong)((int)(uVar12 << 1 | uVar12 >> 0x1f) >> 0x1b);
  fn_8265B200(param_1,0xffffffff821ce620,(double)(float)((double)lStack_68 * dVar13));
  return;
}

