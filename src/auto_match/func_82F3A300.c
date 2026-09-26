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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_60;
extern int fn_82F39D20();
extern int fn_82F39E50();
extern int fn_82F68CC0();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int iStack_c0;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;


undefined8 fn_82F3A300(int *param_1,int param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iStack_c0;
  byte *pbStack_bc;
  int iStack_b8;
  int iStack_b4;
  uint uStack_b0;
  ushort *puStack_ac;
  uint uStack_a8;
  int iStack_a4;
  uint uStack_a0;
  int iStack_9c;
  uint uStack_98;
  uint uStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int aiStack_80 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong auStack_60 [2];
  uint uStack_50;
  ushort uStack_4c;
  ushort uStack_4a;
  undefined8 uStack_48;
  
  if (param_1[3] == 0) {
    uVar3 = 0xffffffffc00d36b6;
  }
  else if ((param_4 == (uint *)0x0) || ((param_3 != 0 && (param_2 == 0)))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1,auStack_60,0);
    if (auStack_60[0] < 0x100000000) {
      *param_4 = (uint)auStack_60[0];
      if (param_3 < (uint)auStack_60[0]) {
        uVar3 = 0xffffffffc00d36b1;
      }
      else {
        uStack_68 = *(undefined8 *)(param_1 + 6);
        uStack_70 = CONCAT44((uint)*(byte *)((int)param_1 + 0x13) << 0x18 |
                             (uint)*(byte *)((int)param_1 + 0x12) << 0x10 |
                             (uint)*(byte *)((int)param_1 + 0x11) << 8 |
                             (uint)*(byte *)(param_1 + 4),
                             CONCAT22(*(ushort *)(param_1 + 5) << 8 | *(ushort *)(param_1 + 5) >> 8,
                                      *(ushort *)((int)param_1 + 0x16) << 8 |
                                      *(ushort *)((int)param_1 + 0x16) >> 8));
        fn_82F68CC0(param_2,&uStack_70,0x10);
        uVar4 = *(ulonglong *)(param_1 + 8);
        uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar4)) & ((U64)0xFFFFFFFF)) << 32));
        uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)(uVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        *(ulonglong *)(param_2 + 0x10) =
             ((uVar4 & 0xff) << 0x18 |
             (uVar4 & 0xff00) << 8 |
             (ulonglong)((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 8) & 0xff00 | (ulonglong)((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 0x18)) <<
             0x20 | ((ulonglong)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff) << 0x18 |
                    ((ulonglong)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF) & 0xff00) << 8 |
                    (ulonglong)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 8) & 0xff00 |
                    (ulonglong)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 0x18);
        *(ushort *)(param_2 + 0x18) =
             (ushort)(((ulonglong)(uint)param_1[0x49a] & 0xffff) << 8) |
             (ushort)(((ulonglong)(uint)param_1[0x49a] & 0xffff) >> 8);
        puVar6 = (uint *)(param_2 + 0x1a);
        if (param_1[0x49a] != 0) {
          piVar7 = param_1 + 0x12;
          uVar8 = 0;
          uStack_70 = uVar4;
          do {
            fn_82F39E50(piVar7,uVar8,&pbStack_bc);
            uStack_50 = (uint)pbStack_bc[3] << 0x18 | (uint)pbStack_bc[2] << 0x10 |
                        (uint)pbStack_bc[1] << 8 | (uint)*pbStack_bc;
            uStack_4c = *(ushort *)(pbStack_bc + 4) << 8 | *(ushort *)(pbStack_bc + 4) >> 8;
            uStack_4a = *(ushort *)(pbStack_bc + 6) << 8 | *(ushort *)(pbStack_bc + 6) >> 8;
            uStack_48 = *(undefined8 *)(pbStack_bc + 8);
            fn_82F68CC0(puVar6,&uStack_50,0x10);
            fn_82F39E50(piVar7,uVar8,&iStack_b8);
            puVar6[4] = (uint)*(byte *)(iStack_b8 + 0x13) << 0x18 |
                        (uint)*(byte *)(iStack_b8 + 0x12) << 0x10 |
                        (uint)*(byte *)(iStack_b8 + 0x11) << 8 | (uint)*(byte *)(iStack_b8 + 0x10);
            fn_82F39E50(piVar7,uVar8,&iStack_b4);
            *(ushort *)(puVar6 + 5) =
                 (ushort)(((ulonglong)*(uint *)(iStack_b4 + 0xd0) & 0xff) << 8) |
                 (ushort)(*(uint *)(iStack_b4 + 0xd0) >> 8) & 0xff;
            puVar6 = (uint *)((int)puVar6 + 0x16);
            fn_82F39E50(piVar7,uVar8,&iStack_c0);
            if (*(int *)(iStack_c0 + 0xd0) != 0) {
              uVar5 = 0;
              do {
                fn_82F39E50(piVar7,uVar8,&uStack_b0);
                fn_82F39D20((ulonglong)uStack_b0 + 0x14,uVar5,&puStack_ac);
                *(ushort *)puVar6 = *puStack_ac << 8 | *puStack_ac >> 8;
                fn_82F39E50(piVar7,uVar8,&uStack_a8);
                fn_82F39D20((ulonglong)uStack_a8 + 0x14,uVar5,&iStack_a4);
                *(ushort *)((int)puVar6 + 2) =
                     *(ushort *)(iStack_a4 + 2) << 8 | *(ushort *)(iStack_a4 + 2) >> 8;
                puVar6 = puVar6 + 1;
                fn_82F39E50(piVar7,uVar8,&uStack_a0);
                fn_82F39D20((ulonglong)uStack_a0 + 0x14,uVar5,&iStack_9c);
                if (*(short *)(iStack_9c + 2) != 0) {
                  fn_82F39E50(piVar7,uVar8,&uStack_98);
                  fn_82F39D20((ulonglong)uStack_98 + 0x14,uVar5,&iStack_90);
                  fn_82F39E50(piVar7,uVar8,&uStack_94);
                  fn_82F39D20((ulonglong)uStack_94 + 0x14,uVar5,&iStack_8c);
                  uVar1 = *(ushort *)(iStack_90 + 2);
                  fn_82F68CC0(puVar6,*(undefined4 *)(iStack_8c + 4),(uint)uVar1);
                  puVar6 = (uint *)((uint)uVar1 + (int)puVar6);
                }
                uVar5 = uVar5 + 1 & 0xffff;
                fn_82F39E50(piVar7,uVar8,&iStack_c0);
              } while (uVar5 < *(uint *)(iStack_c0 + 0xd0));
            }
            fn_82F39E50(piVar7,uVar8,&iStack_88);
            *puVar6 = (uint)*(byte *)(iStack_88 + 0xd7) << 0x18 |
                      (uint)*(byte *)(iStack_88 + 0xd6) << 0x10 |
                      (uint)*(byte *)(iStack_88 + 0xd5) << 8 | (uint)*(byte *)(iStack_88 + 0xd4);
            puVar6 = puVar6 + 1;
            fn_82F39E50(piVar7,uVar8,&iStack_84);
            if (*(int *)(iStack_84 + 0xd4) != 0) {
              fn_82F39E50(piVar7,uVar8,aiStack_80);
              fn_82F39E50(piVar7,uVar8,&uStack_70);
              iVar2 = *(int *)(aiStack_80[0] + 0xd4);
              fn_82F68CC0(puVar6,*(undefined4 *)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + 0xd8),iVar2);
              puVar6 = (uint *)(iVar2 + (int)puVar6);
            }
            uVar8 = uVar8 + 1 & 0xffff;
          } while (uVar8 < (uint)param_1[0x49a]);
        }
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffffc00d3a9a;
    }
  }
  return uVar3;
}

