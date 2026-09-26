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
extern unsigned int *auStack_160;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82975BB8();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;


longlong fn_82951540(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar7;
  longlong lVar6;
  int iVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  uint auStack_160 [4];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 *apuStack_140 [16];
  int aiStack_100 [4];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  int aiStack_d0 [52];
  
  uStack_144 = 3;
  uVar2 = *(uint *)param_1[0x41];
  uStack_14c = 1;
  uVar5 = uVar2 & 0xfffff;
  auStack_160[0] = 0;
  uStack_150 = 0;
  uStack_148 = 2;
  iVar7 = fn_8294AC48(param_1,(uint *)param_1[0x41],0xffffffff82035c70,apuStack_140,auStack_160,
                        aiStack_100,&uStack_150,uVar5);
  if ((iVar7 == 0) ||
     (iVar7 = fn_8294AC48(param_1,param_1[0x41],0xffffffff82035cd0,apuStack_140,auStack_160,
                            aiStack_100,&uStack_150,uVar5), iVar7 == 0)) {
    uVar13 = 0;
    puVar14 = auStack_f0;
    do {
      uVar10 = 0;
      if ((uVar2 & 0xfffff) != 0) {
        piVar9 = aiStack_d0;
        do {
          iVar7 = *(int *)(*piVar9 * 4 + param_1[5]);
          iVar8 = *(int *)(aiStack_100[uVar13 + uVar10] * 4 + param_1[5]);
          if ((int)(param_1[0x1b] << 0x1a | (uint)param_1[0x1b] >> 6) < 0) {
            if ((*(uint *)(iVar7 + 0x3c) ^ *(uint *)(iVar8 + 0x3c)) != 0x80000) break;
            bVar1 = *(int *)(iVar7 + 0x38) == aiStack_100[uVar13 + uVar10];
          }
          else {
            if ((((*(int *)(iVar8 + 4) != *(int *)(iVar7 + 4)) ||
                 (*(int *)(iVar8 + 8) != *(int *)(iVar7 + 8))) ||
                (*(int *)(iVar8 + 0xc) != *(int *)(iVar7 + 0xc))) ||
               (*(int *)(iVar8 + 0x10) != *(int *)(iVar7 + 0x10))) break;
            bVar1 = (*(uint *)(iVar7 + 0x3c) ^ *(uint *)(iVar8 + 0x3c)) == 0x80000;
          }
          if (!bVar1) break;
          uVar10 = uVar10 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar10 < uVar5);
      }
      if (uVar10 == uVar5) {
        iVar7 = fn_82963998(0x74);
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = fn_829632A0();
        }
        if (iVar7 == 0) {
          return -0x7ff8fff2;
        }
        lVar6 = fn_82963A30(iVar7,uVar5 | 0x70100000,uVar5 * 3,uVar5,0);
        if ((lVar6 < 0) || (lVar6 = fn_829632F0(iVar7,param_1[0x41]), lVar6 < 0)) {
          fn_82BA02A8(iVar7);
          fn_829639F0(iVar7);
          return lVar6;
        }
        iVar8 = (uVar2 & 0xfffff) * 4;
        fn_82F68CC0(*(undefined4 *)(iVar7 + 0x10),*(undefined4 *)(param_1[0x41] + 0x10),iVar8);
        fn_82F68CC0(*(undefined4 *)(iVar7 + 8),auStack_e0,iVar8);
        fn_82F68CC0(iVar8 + *(int *)(iVar7 + 8),puVar14,iVar8);
        fn_82F68CC0((uVar2 & 0xfffff) * 8 + *(int *)(iVar7 + 8),aiStack_d0,iVar8);
        bVar1 = false;
        iVar8 = param_1[5];
        puVar3 = *(uint **)(**(int **)(iVar7 + 8) * 4 + iVar8);
        iVar4 = *(int *)(**(int **)(iVar7 + 0x10) * 4 + iVar8);
        iVar8 = *(int *)((*(int **)(iVar7 + 8))[(uVar2 & 0xfffff) * 2] * 4 + iVar8);
        uVar10 = *(uint *)(iVar4 + 4);
        if (((((uVar10 == puVar3[1]) && (*(uint *)(iVar4 + 0xc) == puVar3[3])) ||
             ((uVar10 == *(uint *)(iVar8 + 4) && (*(int *)(iVar4 + 0xc) == *(int *)(iVar8 + 0xc)))))
            || (uVar10 != param_1[0x22])) && ((param_1[0x1b] & 0x20U) == 0)) {
          bVar1 = true;
        }
        iVar8 = (**(code **)(*param_1 + 0x20))(param_1,iVar7,0);
        if ((iVar8 == 0) &&
           ((((*(uint *)(*(int *)(*(int *)(iVar4 + 4) * 4 + param_1[4]) + 4) & 0x20) == 0 &&
             (!bVar1)) || ((param_1[0x1b] & 0x20U) != 0)))) {
          uVar15 = 0;
          if (param_2 == 0) {
            uVar15 = *apuStack_140[0];
            *apuStack_140[0] = 0;
          }
          if ((((param_1[0x1b] & 0x20U) != 0) && ((puVar3[0xf] & 0x200) == 0)) &&
             (((*puVar3 & 4) == 0 || ((*puVar3 & 0x10) == 0)))) {
            fn_82BA02A8(iVar7);
            fn_829639F0(iVar7);
            fn_82975BB8(param_1,*(undefined4 *)(param_1[0x41] + 0x3c),0x125f,
                              0xffffffff8203788c);
            if (param_2 != 0) {
              return 1;
            }
            *apuStack_140[0] = uVar15;
            return 1;
          }
          if (param_2 == 0) {
            uVar11 = (ulonglong)auStack_160[0];
            if (uVar11 != 0) {
              puVar12 = &uStack_144;
              do {
                puVar12 = puVar12 + 1;
                *(undefined4 *)*puVar12 = 0;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            iVar8 = *(int *)(param_1[0x40] * 4 + param_1[6]);
            if (iVar8 != 0) {
              fn_82BA02A8(iVar8);
              fn_829639F0(iVar8);
            }
            *(int *)(param_1[0x40] * 4 + param_1[6]) = iVar7;
          }
          else {
            lVar6 = fn_82963D50(param_1[0x41],iVar7);
            fn_82BA02A8(iVar7);
            fn_829639F0(iVar7);
            if ((int)lVar6 < 0) {
              return lVar6;
            }
            lVar6 = fn_829632F0(param_1[0x41],param_1[0x41]);
            if ((int)lVar6 < 0) {
              return lVar6;
            }
          }
          return 0;
        }
        fn_82BA02A8(iVar7);
        fn_829639F0(iVar7);
      }
      uVar13 = uVar13 + 4;
      puVar14 = puVar14 + -0x10;
    } while (uVar13 < 8);
  }
  return 1;
}

