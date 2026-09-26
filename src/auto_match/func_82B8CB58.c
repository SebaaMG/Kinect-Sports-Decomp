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
extern int fn_82AA66A8();
extern int fn_82ABDA10();
extern int fn_82ABE2E0();
extern int fn_82AD20C0();
extern int fn_82B25248();
extern int fn_82B837F8();
extern int fn_82B8AC10();


longlong fn_82B8CB58(int param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                      ulonglong param_6)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  
  lVar9 = 0;
  puVar10 = (uint *)(param_2 + 4);
  do {
    puVar1 = (uint *)*puVar10;
    if (puVar1 == (uint *)0x0) {
      if (((param_6 & 0xffffffff) != 0) && (lVar9 != 0)) {
        cVar6 = fn_82ABE2E0(param_3);
        if (cVar6 == '\0') {
          if ((*(uint *)(param_3 + 8) & 0x40) == 0) {
            bVar5 = false;
          }
          else {
            uVar12 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
            if (((uVar12 == 0x1e) || (uVar12 == 0x37)) || (bVar5 = false, uVar12 == 0x38)) {
              bVar5 = true;
            }
          }
          if (bVar5) {
            for (puVar10 = *(uint **)(param_3 + 4); puVar10 != (uint *)0x0;
                puVar10 = (uint *)puVar10[2]) {
              if (puVar10[4] != 0) {
                if (((*puVar10 & 0x40000000) == 0) || (bVar5 = true, (*puVar10 & 0xe000000) != 0)) {
                  bVar5 = false;
                }
                if (bVar5) {
                  for (iVar7 = *(int *)(puVar10[4] + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
                    if (*(int *)(iVar7 + 0x10) != 0) {
                      fn_82B25248(param_1,*(int *)(iVar7 + 0x10),param_6);
                    }
                  }
                }
              }
            }
            for (puVar10 = *(uint **)(param_2 + 4); puVar10 != (uint *)0x0;
                puVar10 = (uint *)puVar10[2]) {
              if (puVar10[4] != 0) {
                if (((*puVar10 & 0x40000000) == 0) || (bVar5 = true, (*puVar10 & 0xe000000) != 0)) {
                  bVar5 = false;
                }
                if (bVar5) {
                  for (iVar7 = *(int *)(puVar10[4] + 4); iVar7 != 0; iVar7 = *(int *)(iVar7 + 8)) {
                    if (*(int *)(iVar7 + 0x10) != 0) {
                      fn_82B25248(param_1,*(int *)(iVar7 + 0x10),param_6);
                    }
                  }
                }
              }
            }
          }
          cVar6 = fn_82ABDA10(param_3);
          if (cVar6 != '\0') {
            iVar7 = *(int *)(param_3 + 0x1c);
            for (uVar12 = *(uint *)(param_1 + 4); ((uVar12 & 1) == 0 && (uVar12 != 0));
                uVar12 = *(uint *)((uVar12 & 0xfffffffe) + 4)) {
              uVar4 = (ulonglong)*(uint *)(iVar7 + 0x30) & 0x7ffff;
              if ((*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar12 + 0x28)) &
                  1 << ((uint)uVar4 & 0x1f)) != 0) {
                for (uVar2 = *(uint *)(uVar12 + 0x14); ((uVar2 & 1) == 0 && (uVar2 != 0));
                    uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 0x28)) {
                  if ((*(uint *)(uVar2 + 8) & 0x3f80) == 0x3800) {
                    fn_82B25248(param_1,uVar2,param_6);
                  }
                }
              }
            }
          }
          fn_82B25248(param_1,param_3,param_6);
          cVar6 = fn_82ABE2E0(param_2);
          if (cVar6 != '\0') {
            piVar11 = (int *)(param_2 + 0x28);
            for (uVar12 = 0; uVar12 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar12 = uVar12 + 1) {
              piVar11 = piVar11 + 1;
              fn_82B25248(param_1,*(undefined4 *)(*piVar11 + 0xc),param_6);
            }
          }
        }
        else {
          fn_82B8AC10(param_1,param_3,0,1);
        }
      }
      return lVar9;
    }
    uVar12 = puVar1[4];
    if (uVar12 != 0) {
      uVar2 = *puVar1;
      if ((uVar2 & 0xe000000) == 0) {
        if (*(int *)(uVar12 + 0x1c) == *(int *)(param_2 + 0x1c)) {
          if ((uVar2 >> 0x1e & 1) == 0) {
            uVar2 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
            if ((uVar2 == 0) || (bVar5 = true, 0x66 < uVar2)) {
              bVar5 = false;
            }
            if ((bVar5) || (((*(uint *)(uVar12 + 8) & 0x3f80) == 0x3a80 && (uVar2 == 0x71))))
            goto LAB_82b8ccb0;
            fn_82AD20C0(uVar12,puVar1,param_1);
          }
          else {
            uVar2 = uVar2 >> 0xd & 0xfff;
            if (uVar2 == 0) {
              if ((*(uint *)(param_3 + 8) & 0x40) == 0) {
LAB_82b8cc78:
                cVar6 = '\0';
              }
              else {
                uVar2 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
                if (((uVar2 == 0x1e) || (uVar2 == 0x37)) || (cVar6 = '\0', uVar2 == 0x38)) {
                  cVar6 = '\x01';
                }
              }
            }
            else {
              if (uVar2 == 1) {
                iVar7 = (*(uint *)(param_3 + 8) & 0x3f80) - 0x3100;
              }
              else if (uVar2 < 3) {
                iVar7 = (*(uint *)(param_3 + 8) & 0x3f80) - 0x3280;
              }
              else {
                if (uVar2 != 3) {
                  if (uVar2 < 5) goto LAB_82b8cc78;
                  if (uVar2 == 6) {
                    uVar2 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
                    if ((uVar2 < 0x20) || (cVar6 = '\x01', 0x52 < uVar2)) {
                      cVar6 = '\0';
                    }
                  }
                  else {
                    if (uVar2 != 7) {
                    /* WARNING: Subroutine does not return */
                      fn_82AA66A8(param_1,0x12c0);
                    }
                    cVar6 = fn_82ABDA10(param_3);
                  }
                  goto LAB_82b8cca8;
                }
                iVar7 = (*(uint *)(param_3 + 8) & 0x3f80) - 0x3300;
              }
              cVar6 = iVar7 == 0;
            }
LAB_82b8cca8:
            if (cVar6 != '\0') {
LAB_82b8ccb0:
              puVar8 = (uint *)(puVar1[3] + 4);
              for (puVar3 = (uint *)*puVar8; puVar3 != puVar1; puVar3 = (uint *)puVar3[2]) {
                puVar8 = puVar3 + 2;
              }
              *puVar8 = puVar1[2];
              puVar1[2] = *(uint *)(param_3 + 4);
              *(uint **)(param_3 + 4) = puVar1;
              puVar1[3] = param_3;
              goto LAB_82b8cd70;
            }
          }
        }
      }
      else {
        cVar6 = fn_82B837F8(param_1,param_2,puVar1,param_3,param_4,param_5);
        if (cVar6 != '\0') {
LAB_82b8cd70:
          lVar9 = 1;
          if ((param_6 & 0xffffffff) == 0) {
            *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) & 0xfbffffff;
          }
          else {
            fn_82B25248(param_1,uVar12,param_6);
          }
        }
      }
    }
    if ((uint *)*puVar10 == puVar1) {
      puVar10 = puVar1 + 2;
    }
  } while( true );
}

