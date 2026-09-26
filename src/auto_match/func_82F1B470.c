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
extern int fn_82F1B020();
extern int fn_82F2A168();
extern int fn_82F2A338();
extern int fn_82F2BB70();
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;


void fn_82F1B470(int param_1,uint *param_2,int param_3,int param_4,int param_5,short *param_6,
                  int param_7,int param_8)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined2 *puVar8;
  byte bVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  int iStack00000024;
  int iStack0000002c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int in_stack_0000007c;
  int in_stack_00000084;
  short *in_stack_0000008c;
  
  param_7 = param_7 - in_stack_00000054;
  in_stack_00000064 = in_stack_00000064 - in_stack_00000054;
  in_stack_00000074 = in_stack_00000074 - in_stack_00000054;
  bVar9 = 0x20;
  uVar12 = 0;
  bVar6 = *(int *)(param_1 + 0x61c) == 0;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  iVar10 = param_5;
  psVar11 = param_6;
  do {
    if (*(char *)((int)param_2 + uVar12 + 0x4a) == '\0') {
      if (((*(byte *)((int)param_2 + 0x93) & bVar9) != 0) && (*(char *)(param_2 + 0x16) == '\x01'))
      {
        if ((*(uint *)((((((int)uVar12 >> 1) + iStack0000002c * 2) * *(int *)(param_1 + 0x2d0) +
                        iStack00000024) * 2 + (uVar12 & 1)) * 4 + *(int *)(param_1 + 0x914)) & 8) ==
            0) goto LAB_82f1bbec;
      }
      if ((*(byte *)((int)param_2 + 0x92) & bVar9) != 0) {
        if (((*param_2 & 0x10000000) != 0) && (bVar6)) {
          iVar7 = 0;
          cVar1 = *(char *)((int)param_2 + uVar12 + 0x38);
          if (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              iVar7 = (int)*(char *)((int)param_2 + uVar12 + 0x80);
            }
            else if (cVar1 == '\x02') {
              iVar7 = *(char *)((int)param_2 + uVar12 + 0x86) + 3;
            }
            else if (cVar1 == '\x04') {
              iVar7 = 7;
            }
          }
          puVar3 = (undefined4 *)(iVar7 * 8 + *(int *)(param_1 + 0x7604));
          fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar3,puVar3[1]);
          *(int *)(param_1 + 0x75e4) =
               *(int *)(iVar7 * 8 + *(int *)(param_1 + 0x7604) + 4) + *(int *)(param_1 + 0x75e4);
        }
        bVar2 = *(byte *)((int)param_2 + uVar12 + 0x38);
        if (bVar2 < 5) {
          if (bVar2 == 0) {
            if (*(int *)(param_1 + 0x6f98) != 0) {
              fn_82F1B020(param_1,iVar10,psVar11,param_2,uVar12,0);
            }
            iVar7 = 0;
            if (0 < (longlong)*psVar11 + -2) {
              puVar8 = (undefined2 *)(iVar10 + -4);
              do {
                puVar4 = puVar8 + 3;
                puVar8 = puVar8 + 2;
                fn_82F2A168(param_1,*(undefined4 *)(param_1 + 0x1ebc),*puVar4,*puVar8);
                iVar7 = iVar7 + 2;
              } while (iVar7 < *psVar11 + -2);
            }
            puVar8 = (undefined2 *)(iVar7 * 2 + iVar10);
          }
          else {
            if (bVar2 == 1) {
              cVar1 = *(char *)((int)param_2 + uVar12 + 0x80);
              iVar7 = param_7;
              iVar13 = in_stack_00000054;
              iVar17 = in_stack_0000005c - (int)param_6;
              iVar5 = param_8 - (int)param_6;
            }
            else {
              if (bVar2 != 2) {
                if (bVar2 != 3) {
                  iVar7 = (in_stack_00000084 - param_5) + iVar10;
                  *(int *)(param_1 + 0x75e4) =
                       *(int *)(*(char *)((int)param_2 + uVar12 + 0x8c) * 8 +
                                *(int *)(param_1 + 0x7608) + 4) + *(int *)(param_1 + 0x75e4);
                  puVar3 = (undefined4 *)
                           (*(char *)((int)param_2 + uVar12 + 0x8c) * 8 + *(int *)(param_1 + 0x7608)
                           );
                  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar3,puVar3[1]);
                  if ((*(byte *)((int)param_2 + uVar12 + 0x8c) & 8) != 0) {
                    if (*(int *)(param_1 + 0x6f98) != 0) {
                      fn_82F1B020(param_1,iVar7,in_stack_0000008c,param_2,uVar12,0);
                    }
                    iVar17 = 0;
                    if (0 < (longlong)*in_stack_0000008c + -2) {
                      puVar8 = (undefined2 *)(iVar7 + -4);
                      do {
                        puVar4 = puVar8 + 3;
                        puVar8 = puVar8 + 2;
                        fn_82F2A168(param_1,*(undefined4 *)(param_1 + 0x1ebc),*puVar4,*puVar8)
                        ;
                        iVar17 = iVar17 + 2;
                      } while (iVar17 < *in_stack_0000008c + -2);
                    }
                    puVar8 = (undefined2 *)(iVar17 * 2 + iVar7);
                    fn_82F2A338(param_1,*(undefined4 *)(param_1 + 0x1ebc),puVar8[1],*puVar8);
                    iVar7 = *in_stack_0000008c * 2 + iVar7;
                  }
                  if ((*(byte *)((int)param_2 + uVar12 + 0x8c) & 4) != 0) {
                    if (*(int *)(param_1 + 0x6f98) != 0) {
                      fn_82F1B020(param_1,iVar7,in_stack_0000008c + 1,param_2,uVar12,0);
                    }
                    iVar17 = 0;
                    if (0 < (longlong)in_stack_0000008c[1] + -2) {
                      puVar8 = (undefined2 *)(iVar7 + -4);
                      do {
                        puVar4 = puVar8 + 3;
                        puVar8 = puVar8 + 2;
                        fn_82F2A168(param_1,*(undefined4 *)(param_1 + 0x1ebc),*puVar4,*puVar8)
                        ;
                        iVar17 = iVar17 + 2;
                      } while (iVar17 < in_stack_0000008c[1] + -2);
                    }
                    puVar8 = (undefined2 *)(iVar17 * 2 + iVar7);
                    fn_82F2A338(param_1,*(undefined4 *)(param_1 + 0x1ebc),puVar8[1],*puVar8);
                    iVar7 = in_stack_0000008c[1] * 2 + iVar7;
                  }
                  if ((*(byte *)((int)param_2 + uVar12 + 0x8c) & 2) != 0) {
                    if (*(int *)(param_1 + 0x6f98) != 0) {
                      fn_82F1B020(param_1,iVar7,in_stack_0000008c + 2,param_2,uVar12,0);
                    }
                    iVar17 = 0;
                    if (0 < (longlong)in_stack_0000008c[2] + -2) {
                      puVar8 = (undefined2 *)(iVar7 + -4);
                      do {
                        puVar4 = puVar8 + 3;
                        puVar8 = puVar8 + 2;
                        fn_82F2A168(param_1,*(undefined4 *)(param_1 + 0x1ebc),*puVar4,*puVar8)
                        ;
                        iVar17 = iVar17 + 2;
                      } while (iVar17 < in_stack_0000008c[2] + -2);
                    }
                    puVar8 = (undefined2 *)(iVar17 * 2 + iVar7);
                    fn_82F2A338(param_1,*(undefined4 *)(param_1 + 0x1ebc),puVar8[1],*puVar8);
                    iVar7 = in_stack_0000008c[2] * 2 + iVar7;
                  }
                  if ((*(byte *)((int)param_2 + uVar12 + 0x8c) & 1) != 0) {
                    if (*(int *)(param_1 + 0x6f98) != 0) {
                      fn_82F1B020(param_1,iVar7,in_stack_0000008c + 3,param_2,uVar12,0);
                    }
                    iVar17 = 0;
                    if (0 < (longlong)in_stack_0000008c[3] + -2) {
                      puVar8 = (undefined2 *)(iVar7 + -4);
                      do {
                        puVar4 = puVar8 + 3;
                        puVar8 = puVar8 + 2;
                        fn_82F2A168(param_1,*(undefined4 *)(param_1 + 0x1ebc),*puVar4,*puVar8)
                        ;
                        iVar17 = iVar17 + 2;
                      } while (iVar17 < in_stack_0000008c[3] + -2);
                    }
                    puVar8 = (undefined2 *)(iVar17 * 2 + iVar7);
                    goto LAB_82f1bbcc;
                  }
                }
                goto LAB_82f1bbe8;
              }
              cVar1 = *(char *)((int)param_2 + uVar12 + 0x86);
              iVar7 = in_stack_00000064;
              iVar13 = in_stack_00000074 + in_stack_00000054;
              iVar17 = in_stack_0000007c - (int)param_6;
              iVar5 = in_stack_0000006c - (int)param_6;
            }
            psVar16 = (short *)(iVar5 + (int)psVar11);
            psVar15 = (short *)(iVar17 + (int)psVar11);
            uVar14 = (uint)cVar1;
            iVar7 = iVar7 + in_stack_00000054;
            if ((bVar6) && ((*param_2 & 0x10000000) == 0)) {
              fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                                *(undefined4 *)(uVar14 * 8 + -0x7ce520c0),
                                *(undefined4 *)(uVar14 * 8 + -0x7ce520bc));
            }
            if ((uVar14 & 2) != 0) {
              if (*(int *)(param_1 + 0x6f98) != 0) {
                fn_82F1B020(param_1,iVar7,psVar16,param_2,uVar12,0);
              }
              iVar17 = 0;
              if (0 < (longlong)*psVar16 + -2) {
                puVar8 = (undefined2 *)(iVar7 + -4);
                do {
                  puVar4 = puVar8 + 3;
                  puVar8 = puVar8 + 2;
                  fn_82F2A168(param_1,*(undefined4 *)(param_1 + 0x1ebc),*puVar4,*puVar8);
                  iVar17 = iVar17 + 2;
                } while (iVar17 < *psVar16 + -2);
              }
              puVar8 = (undefined2 *)(iVar17 * 2 + iVar7);
              fn_82F2A338(param_1,*(undefined4 *)(param_1 + 0x1ebc),puVar8[1],*puVar8);
            }
            if ((uVar14 & 1) == 0) goto LAB_82f1bbe8;
            if (*(int *)(param_1 + 0x6f98) != 0) {
              fn_82F1B020(param_1,iVar13,psVar15,param_2,uVar12,0);
            }
            iVar7 = 0;
            if (0 < (longlong)*psVar15 + -2) {
              puVar8 = (undefined2 *)(iVar13 + -4);
              do {
                puVar4 = puVar8 + 3;
                puVar8 = puVar8 + 2;
                fn_82F2A168(param_1,*(undefined4 *)(param_1 + 0x1ebc),*puVar4,*puVar8);
                iVar7 = iVar7 + 2;
              } while (iVar7 < *psVar15 + -2);
            }
            puVar8 = (undefined2 *)(iVar7 * 2 + iVar13);
          }
LAB_82f1bbcc:
          fn_82F2A338(param_1,*(undefined4 *)(param_1 + 0x1ebc),puVar8[1],*puVar8);
        }
LAB_82f1bbe8:
        bVar6 = true;
      }
    }
    else {
      fn_82F2BB70(param_1,param_5,param_6,uVar12,param_2);
    }
LAB_82f1bbec:
    uVar12 = uVar12 + 1;
    in_stack_0000008c = in_stack_0000008c + 4;
    iVar10 = iVar10 + 0x100;
    in_stack_00000054 = in_stack_00000054 + 0x80;
    psVar11 = psVar11 + 1;
    bVar9 = (char)bVar9 >> 1;
    if (5 < (int)uVar12) {
      return;
    }
  } while( true );
}

