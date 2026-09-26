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
extern unsigned int *auStack_1118;
extern unsigned int *auStack_19c8;
extern unsigned int *auStack_21c8;
extern unsigned int *auStack_2200;
extern unsigned int *auStack_2210;
extern unsigned int *auStack_2220;
extern unsigned int *auStack_2240;
extern unsigned int *auStack_2270;
extern unsigned int *auStack_2280;
extern unsigned int *auStack_918;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82248B90();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_8225F160();
extern int fn_8226D2A8();
extern int fn_8226D388();
extern int fn_82270110();
extern int fn_82279C58();
extern int fn_8228C9A0();
extern int fn_8228D3D0();
extern int fn_8228D9E8();
extern int fn_8228DAA0();
extern int fn_8228DDD8();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_8229E090();
extern int fn_82350888();
extern int fn_82353ED8();
extern int fn_82354000();
extern int fn_823577F0();
extern int fn_823F2E20();
extern int fn_824BD700();
extern int fn_824BDAC8();
extern int fn_824BDE68();
extern int fn_824BE290();
extern int fn_824BE350();
extern int fn_824BEEE8();
extern int fn_82511928();
extern int fn_82512B08();
extern int fn_825138E0();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_826728E8();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828A12E8();
extern int fn_828AAF70();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int iStack_113c;
extern unsigned int iStack_1140;
extern unsigned int iStack_21ec;
extern unsigned int iStack_21f0;
extern unsigned int iStack_21fc;
extern unsigned int iStack_222c;
extern unsigned int iStack_2230;
extern unsigned int iStack_2268;
extern unsigned int iStack_2278;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B2438;
extern unsigned int lbl_821B2450;
extern unsigned int lbl_831D12D0;
extern unsigned int lbl_832765BC;
extern unsigned int lbl_8327672C;
extern unsigned int lbl_83297810;


void fn_82353230(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar6;
  char cVar10;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar5;
  char cVar11;
  char cVar12;
  ulonglong uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  int *piVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined4 *puStack_2290;
  undefined4 *puStack_228c;
  undefined1 auStack_2280 [4];
  undefined4 *puStack_227c;
  int iStack_2278;
  undefined1 auStack_2270 [4];
  undefined4 *puStack_226c;
  int iStack_2268;
  undefined **ppuStack_2260;
  int *piStack_225c;
  undefined ***pppuStack_2250;
  undefined1 auStack_2240 [4];
  undefined4 *puStack_223c;
  int iStack_2230;
  int iStack_222c;
  undefined1 auStack_2220 [4];
  undefined4 *puStack_221c;
  undefined1 auStack_2210 [4];
  undefined4 *puStack_220c;
  undefined1 auStack_2200 [4];
  int iStack_21fc;
  int iStack_21f0;
  int iStack_21ec;
  undefined1 auStack_21c8 [2048];
  undefined1 auStack_19c8 [2184];
  int iStack_1140;
  int iStack_113c;
  undefined1 auStack_1118 [2048];
  undefined1 auStack_918 [2328];
  
  bVar1 = false;
  bVar21 = true;
  bVar20 = true;
  if (param_1[0xf1] == 0) {
    if (param_1[0xfc] == 0) {
      iVar6 = fn_82512B08(0,1);
      param_1[0xfc] = iVar6;
    }
    fn_823577F0(param_1 + 0xa2,param_1 + 0xa4);
    if (lbl_832765BC == 0) {
      fn_82292BC0(0,0,0);
      fn_82292C30(5);
    }
    uVar17 = 0;
    if (param_1[0xc] != 0) {
      fn_824BDAC8(param_1[0xc],0,1,0);
      if ((*(int *)(*(int *)param_1[0xc] + 4) == 0) ||
         (uVar17 = 1, *(int *)(*(int *)param_1[0xc] + 8) != 0)) {
        uVar17 = 0;
      }
    }
    puVar14 = (uint *)(param_1 + 0xf2);
    if ((puVar14 != (uint *)0x0) &&
       (uVar13 = (ulonglong)*puVar14, uVar13 != (uVar13 - 1) + (ulonglong)(uVar13 == 0))) {
      puStack_228c = (undefined4 *)fn_8265C9E0(0x1b0);
      if (puStack_228c == (undefined4 *)0x0) {
        puStack_228c = (undefined4 *)0x0;
      }
      else {
        *puStack_228c = &lbl_821A8D8C;
        puStack_228c[1] = 1;
        puStack_228c[2] = 1;
        if (puStack_228c + 4 != (undefined4 *)0x0) {
          pppuStack_2250 = &ppuStack_2260;
          ppuStack_2260 = &lbl_821B2438;
          piStack_225c = param_1;
          fn_8228C9A0(puStack_228c + 4,puVar14,param_1 + 0xec,param_1 + 0xed,uVar17,0,
                            param_1 + 0xf6,&ppuStack_2260);
        }
      }
      puStack_2290 = puStack_228c + 4;
      piVar18 = param_1 + 0xf3;
      fn_823F2E20(piVar18,&puStack_2290);
      if (puStack_228c != (undefined4 *)0x0) {
        fn_822315A0();
      }
      fn_8226D2A8(&iStack_21f0);
      iVar6 = param_1[0xf4];
      iVar7 = *piVar18;
      iStack_21f0 = 0;
      iVar16 = 0;
      if ((iVar6 != 0) && (cVar10 = fn_8223AAC0(iVar6), cVar10 != '\0')) {
        iStack_21f0 = iVar7;
        iVar16 = iVar6;
      }
      bVar19 = iStack_21ec != 0;
      iStack_21ec = iVar16;
      if (bVar19) {
        fn_822315A0();
      }
      fn_82528BF8(lbl_8327672C,0xffffffff821b22cc,auStack_21c8,0x400,0,1);
      fn_82528BF8(lbl_8327672C,0xffffffff821b22d8,auStack_19c8,0x400,0,1);
      iVar6 = fn_8226D388(&iStack_21f0);
      param_1[0xf5] = iVar6;
      fn_82270110(1);
      fn_8228D3D0(*piVar18,param_1[0x8c]);
      if (iStack_21ec != 0) {
        fn_822315A0();
      }
    }
    param_1[0xec] = 0;
    if (puVar14 == (uint *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)(*puVar14 != 0);
    }
    param_1[0xf1] = 1;
    param_1[0xed] = (uint)LZCOUNT(uVar9) >> 5;
  }
  piVar18 = param_1 + 0xf3;
  if (param_1[0xf3] != 0) {
    if (param_1[0x10c] == 0) {
      if (*(int *)(param_1[0xf3] + 0x188) != 0) {
        fn_824BDE68(param_1[0xc],1);
        fn_824BDAC8(param_1[0xc],1,0,0);
        param_1[0x10c] = 1;
      }
    }
    else {
      iVar6 = param_1[0xf4];
      iVar7 = *piVar18;
      iVar15 = 0;
      iVar16 = 0;
      if ((iVar6 != 0) && (cVar10 = fn_8223AAC0(iVar6), cVar10 != '\0')) {
        iVar15 = iVar6;
        iVar16 = iVar7;
      }
      if (*(int *)(iVar16 + 0x188) == 0) {
        if (*(int *)(param_1[0xc] + 0xe0) == 0) {
          fn_824BEEE8();
          iVar16 = *piVar18;
          iVar6 = param_1[0xc];
          goto LAB_82353574;
        }
LAB_823535a0:
        param_1[0x10c] = 0;
      }
      else {
        iVar6 = param_1[0xc];
        if (*(int *)(iVar6 + 0xe0) != 0) {
LAB_82353574:
          fn_8228DAA0(iVar16,*(undefined4 *)(iVar6 + 0xe4),1);
          fn_824BDE68(param_1[0xc],0);
          fn_824BDAC8(param_1[0xc],0,0,0);
          goto LAB_823535a0;
        }
        if ((*(int *)(iVar6 + 0x54c) != 0) && (*(int *)(iVar16 + 0x198) == 0)) {
          fn_8228DDD8(iVar16);
        }
        iVar6 = *piVar18;
        fn_824BE290(param_1[0xc]);
        fn_8228D9E8(iVar6);
      }
      if (iVar15 != 0) {
        fn_822315A0(iVar15);
      }
    }
  }
  if ((param_1[0xc] != 0) && (*piVar18 != 0)) {
    iVar7 = 0;
    iVar6 = fn_8225F160();
    if (*(int *)(iVar6 + 0x2c) != 0) {
      iVar7 = fn_824BE350(param_1[0xc]);
    }
    iVar6 = *piVar18;
    *(int *)(iVar6 + 0x160) = iVar7;
    if (iVar7 != 0) {
      puVar8 = (undefined4 *)fn_82279C58(auStack_2200,iVar6);
      fn_826728E8(*puVar8,0xffffffff821a9828,*(undefined4 *)(iVar6 + 0x160));
      if (iStack_21fc != 0) {
        fn_822315A0();
      }
    }
  }
  uVar13 = (ulonglong)lbl_83297810;
  if (uVar13 == 0) {
    uVar13 = fn_82511928();
  }
  fn_825138E0(&iStack_2230,uVar13,1);
  if (iStack_2230 != 0) {
    cVar10 = fn_828ACCE8(*(undefined4 *)(iStack_2230 + 8));
    if ((cVar10 != '\0') && (param_1[0xfd] != 0)) {
      uVar17 = fn_828A12E8(*(undefined4 *)(param_1[0xfd] + 0x10));
      uVar17 = fn_8288F948(uVar17,1);
      fn_8224E928(auStack_2210,uVar17);
      puStack_2290 = (undefined4 *)*puStack_220c;
      while (puStack_2290 != puStack_220c) {
        piVar2 = (int *)puStack_2290[5];
        cVar10 = fn_8288B760(piVar2);
        iVar6 = *piVar18;
        if (cVar10 == '\0') {
          if (iVar6 != 0) {
            iVar6 = (**(code **)(*piVar2 + 4))(piVar2);
            uVar9 = (**(code **)(*(int *)(iVar6 + 0x33c) + 0x3c))();
            *(uint *)(*piVar18 + 0x16c) = uVar9 & 0xff;
          }
        }
        else {
          if (iVar6 == 0) {
            lVar5 = (**(code **)(*piVar2 + 8))(piVar2);
            bVar19 = false;
          }
          else {
            bVar19 = *(int *)(iVar6 + 0x178) != 0;
            lVar5 = (**(code **)(*piVar2 + 8))(piVar2);
          }
          fn_828AAF70(lVar5 + 0x33c,bVar19);
        }
        fn_82248B90(&puStack_2290);
      }
      fn_8224ED20(&puStack_2290,auStack_2210,*puStack_220c);
      fn_8265CA20(puStack_220c);
    }
    cVar10 = fn_828ACCE8(*(undefined4 *)(iStack_2230 + 8));
    if (cVar10 != '\0') {
      if (param_1[0xfd] != 0) {
        uVar17 = fn_828A12E8(*(undefined4 *)(param_1[0xfd] + 0x10));
        uVar17 = fn_8288F948(uVar17,1);
        fn_8224E928(auStack_2220,uVar17);
        puStack_2290 = (undefined4 *)*puStack_221c;
        while (puStack_2290 != puStack_221c) {
          piVar2 = (int *)puStack_2290[5];
          cVar10 = fn_8288B760(piVar2);
          if (cVar10 != '\0') {
            iVar6 = param_1[0xed];
            lVar5 = (**(code **)(*piVar2 + 8))(piVar2);
            fn_828AAF70(lVar5 + 0x390,iVar6 != 0);
            iVar6 = param_1[0xec];
            lVar5 = (**(code **)(*piVar2 + 8))(piVar2);
            fn_828AAF70(lVar5 + 0x2e8,iVar6 != 0);
          }
          fn_82248B90(&puStack_2290);
        }
        fn_8224ED20(&puStack_2290,auStack_2220,*puStack_221c);
        fn_8265CA20(puStack_221c);
      }
      goto LAB_823538d8;
    }
  }
  if (param_1[0xed] == 0) {
    if (param_1[0xec] == 0) goto LAB_823538d8;
    param_1[4] = 1;
    param_1[0xd1] = 0;
    param_1[0xd3] = 0;
  }
  else {
    lbl_831D12D0 = 1;
  }
  bVar1 = true;
LAB_823538d8:
  iVar6 = 0x10;
  if (iStack_2230 != 0) {
    cVar10 = fn_828ACCE8(*(undefined4 *)(iStack_2230 + 8));
    if ((cVar10 != '\0') && (param_1[0xfd] != 0)) {
      uVar17 = fn_828A12E8(*(undefined4 *)(param_1[0xfd] + 0x10));
      uVar17 = fn_8288F948(uVar17,1);
      fn_8224E928(auStack_2270,uVar17);
      cVar10 = '\0';
      cVar11 = '\0';
      bVar20 = iStack_2268 != 0;
      puStack_2290 = (undefined4 *)*puStack_226c;
      while (puStack_2290 != puStack_226c) {
        piVar2 = (int *)puStack_2290[5];
        cVar12 = fn_8288B760(piVar2);
        if (cVar12 == '\0') {
          iVar6 = (**(code **)(*piVar2 + 4))(piVar2);
          cVar11 = (**(code **)(*(int *)(iVar6 + 0x390) + 0x3c))();
        }
        else {
          iVar6 = (**(code **)(*piVar2 + 4))(piVar2);
          cVar10 = (**(code **)(*(int *)(iVar6 + 0x390) + 0x3c))();
        }
        iVar6 = (**(code **)(*piVar2 + 4))(piVar2);
        cVar12 = (**(code **)(*(int *)(iVar6 + 0x390) + 0x3c))();
        bVar20 = (bool)(cVar12 != '\0' & bVar20);
        fn_82248B90(&puStack_2290);
      }
      if (bVar20) {
        lbl_831D12D0 = 1;
        bVar1 = true;
      }
      if (((cVar11 != '\0') && (cVar10 == '\0')) &&
         (cVar10 = fn_828ACCE8(*(undefined4 *)(iStack_2230 + 8)), cVar10 != '\0')) {
        param_1[0xec] = 0;
        uVar17 = fn_828A12E8(*(undefined4 *)(param_1[0xfd] + 0x10));
        uVar17 = fn_8288F948(uVar17,1);
        fn_8224E928(auStack_2240,uVar17);
        puStack_2290 = (undefined4 *)*puStack_223c;
        while (puStack_2290 != puStack_223c) {
          piVar2 = (int *)puStack_2290[5];
          cVar10 = fn_8288B760(piVar2);
          if (cVar10 != '\0') {
            lVar5 = (**(code **)(*piVar2 + 8))(piVar2);
            fn_828AAF70(lVar5 + 0x2e8,0);
          }
          fn_82248B90(&puStack_2290);
        }
        fn_82354000(param_1);
        fn_8224ED20(&puStack_2290,auStack_2240,*puStack_223c);
        fn_8265CA20(puStack_223c);
      }
      fn_8224ED20(&puStack_2290,auStack_2270,*puStack_226c);
      fn_8265CA20(puStack_226c);
    }
    iVar6 = 0x10;
    cVar10 = fn_828ACCE8(*(undefined4 *)(iStack_2230 + 8));
    bVar20 = bVar21;
    if ((cVar10 != '\0') && (param_1[0xfd] != 0)) {
      uVar17 = fn_828A12E8(*(undefined4 *)(param_1[0xfd] + 0x10));
      uVar17 = fn_8288F948(uVar17,1);
      fn_8224E928(auStack_2280,uVar17);
      cVar10 = '\0';
      cVar11 = '\0';
      bVar21 = iStack_2278 != 0;
      puStack_2290 = (undefined4 *)*puStack_227c;
      while (puStack_2290 != puStack_227c) {
        piVar2 = (int *)puStack_2290[5];
        cVar12 = fn_8288B760(piVar2);
        if (cVar12 == '\0') {
          iVar7 = (**(code **)(*piVar2 + 4))(piVar2);
          cVar11 = (**(code **)(*(int *)(iVar7 + 0x2e8) + 0x3c))();
        }
        else {
          iVar7 = (**(code **)(*piVar2 + 4))(piVar2);
          cVar10 = (**(code **)(*(int *)(iVar7 + 0x2e8) + 0x3c))();
        }
        iVar7 = (**(code **)(*piVar2 + 4))(piVar2);
        cVar12 = (**(code **)(*(int *)(iVar7 + 0x2e8) + 0x3c))();
        bVar21 = (bool)(cVar12 != '\0' & bVar21);
        fn_82248B90(&puStack_2290);
      }
      if ((bVar21) && (cVar12 = fn_828AD740(*(undefined4 *)(iStack_2230 + 8)), cVar12 != '\0')
         ) {
        iVar6 = 0x11;
        bVar1 = true;
        bVar20 = false;
      }
      if ((((cVar11 != '\0') && (cVar10 == '\0')) &&
          (cVar10 = fn_828ACCE8(*(undefined4 *)(iStack_2230 + 8)), cVar10 != '\0')) &&
         (param_1[0xed] == 0)) {
        fn_82353ED8(param_1);
      }
      fn_8224ED20(&puStack_2290,auStack_2280,*puStack_227c);
      fn_8265CA20(puStack_227c);
    }
    cVar10 = fn_828ACCE8(*(undefined4 *)(iStack_2230 + 8));
    if (cVar10 == '\0') {
      if (*param_1 != 0) {
        fn_8229E090(*param_1,0,1);
        *param_1 = 0;
      }
      if (param_1[1] != 0) {
        fn_8229E090(param_1[1],0,1);
        param_1[1] = 0;
      }
    }
  }
  if (bVar1) {
    *(undefined4 *)(*piVar18 + 0x19c) = 1;
    if (bVar20) {
      if ((param_1[0xc] != 0) && (fn_824BDE68(param_1[0xc],0), lbl_832765BC == 0)) {
        fn_824BD700(param_1[0xc]);
      }
      if (iVar6 != 5) {
        fn_823577F0(piVar18,param_1 + 0xf5);
      }
      param_1[0xf1] = 0;
    }
    fn_82350888(param_1,iVar6);
  }
  if (param_1[0xf7] != 0) {
    param_1[0xf7] = 0;
    uVar3 = *(undefined4 *)(*piVar18 + 0x18c);
    uVar4 = *(undefined4 *)(*piVar18 + 0x184);
    fn_823577F0(piVar18,param_1 + 0xf5);
    if (param_1[0xc] != 0) {
      fn_824BDE68(param_1[0xc],0);
      fn_824BDAC8(param_1[0xc],0,1,0);
    }
    puVar14 = (uint *)(param_1 + 0xf2);
    if ((puVar14 != (uint *)0x0) &&
       (uVar13 = (ulonglong)*puVar14, uVar13 != (uVar13 - 1) + (ulonglong)(uVar13 == 0))) {
      puVar8 = (undefined4 *)fn_8265C9E0(0x1b0);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = &lbl_821A8D8C;
        puVar8[1] = 1;
        puVar8[2] = 1;
        if (puVar8 + 4 != (undefined4 *)0x0) {
          pppuStack_2250 = &ppuStack_2260;
          ppuStack_2260 = &lbl_821B2450;
          piStack_225c = param_1;
          fn_8228C9A0(puVar8 + 4,puVar14,param_1 + 0xec,param_1 + 0xed,uVar4,uVar3,
                            param_1 + 0xf6,&ppuStack_2260);
        }
      }
      puStack_228c = puVar8;
      puStack_2290 = puStack_228c + 4;
      fn_823F2E20(piVar18,&puStack_2290);
      if (puStack_228c != (undefined4 *)0x0) {
        fn_822315A0();
      }
      fn_8226D2A8(&iStack_1140);
      iVar6 = param_1[0xf4];
      iVar7 = *piVar18;
      iVar16 = 0;
      iStack_1140 = 0;
      if ((iVar6 != 0) && (cVar10 = fn_8223AAC0(iVar6), cVar10 != '\0')) {
        iVar16 = iVar6;
        iStack_1140 = iVar7;
      }
      bVar1 = iStack_113c != 0;
      iStack_113c = iVar16;
      if (bVar1) {
        fn_822315A0();
      }
      fn_82528BF8(lbl_8327672C,0xffffffff821b22cc,auStack_1118,0x400,0,1);
      fn_82528BF8(lbl_8327672C,0xffffffff821b22d8,auStack_918,0x400,0,1);
      iVar6 = fn_8226D388(&iStack_1140);
      param_1[0xf5] = iVar6;
      fn_82270110(1);
      fn_8228D3D0(*piVar18,param_1[0x8c]);
      if (iStack_113c != 0) {
        fn_822315A0();
      }
    }
  }
  if (iStack_222c != 0) {
    fn_822315A0();
  }
  return;
}

