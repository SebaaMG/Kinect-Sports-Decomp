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
extern int fn_82AA6648();
extern int fn_82ABDBE8();
extern int fn_82ABE250();
extern int fn_82ABE5F8();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD6090();
extern int fn_82AF5618();
extern int fn_82B82D28();
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


void fn_82AFDD20(int param_1,uint param_2,ulonglong param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  char cVar10;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar11;
  uint uVar12;
  int *piVar13;
  int iStack_80;
  undefined4 uStack_7c;
  int aiStack_78 [30];
  
  puVar6 = (uint *)fn_82ABE250(param_1,8,0x1c);
  puVar5 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)puVar5 | 1;
  do {
    piVar13 = (int *)(param_2 + 0x2c);
    for (uVar12 = 0; uVar12 < (*(uint *)(param_2 + 8) >> 0x13 & 7); uVar12 = uVar12 + 1) {
      iVar9 = *piVar13;
      fn_82B82D28(iVar9,param_3,&iStack_80,&uStack_7c,aiStack_78,
                        *(undefined4 *)(param_2 + 0x1c),0,1);
      iVar7 = iStack_80;
      cVar10 = fn_82AF5618(iStack_80);
      iVar2 = aiStack_78[0];
      if ((cVar10 != '\0') || ((*(uint *)(iVar7 + 8) & 0x3f80) == 0x3800)) {
        uVar1 = *(uint *)(iVar7 + 8);
        if (((uVar1 & 0x3f80) == 0x180) &&
           ((aiStack_78[0] == 0 &&
            (cVar10 = fn_82ABDBE8(*(undefined4 *)(iVar7 + 0x2c),*(undefined4 *)(iVar7 + 0x30)),
            cVar10 == '\0')))) {
          if ((uVar1 >> 0x1a & 1) != 0) goto LAB_82afdfb4;
          if (((int)param_3 == 0) && (iVar7 == *(int *)(iVar9 + 0xc))) {
            if ((*puVar5 & 1) == 0) {
              uVar1 = *puVar6 & 0xfffffffe;
              iVar7 = uVar1 - 4;
              if ((iVar7 == 0) || (*(uint *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
              goto LAB_82afde40;
            }
            else {
LAB_82afde40:
              iVar7 = fn_82AD6090(puVar6,1);
            }
            iVar2 = *(int *)(iVar7 + 8);
            *(int *)(iVar7 + 8) = iVar2 + 1;
            *(int *)((iVar2 + 4) * 4 + iVar7) = iVar9;
          }
          else {
            uVar8 = fn_82AD18C0(param_1,iVar7,uStack_7c);
            if ((*puVar5 & 1) == 0) {
              uVar1 = *puVar6 & 0xfffffffe;
              iVar9 = uVar1 - 4;
              if ((iVar9 == 0) || (*(uint *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
              goto LAB_82afdeac;
            }
            else {
LAB_82afdeac:
              iVar9 = fn_82AD6090(puVar6,1);
            }
            iVar7 = *(int *)(iVar9 + 8);
            *(int *)(iVar9 + 8) = iVar7 + 1;
            *(undefined4 *)((iVar7 + 4) * 4 + iVar9) = uVar8;
          }
          *(uint *)(iStack_80 + 8) = *(uint *)(iStack_80 + 8) | 0x4000000;
        }
        else if (iVar7 == *(int *)(iVar9 + 0xc)) {
          if ((param_4[1] & 1) == 0) {
            uVar1 = *param_4 & 0xfffffffe;
            iVar7 = uVar1 - 4;
            if ((iVar7 == 0) || (*(uint *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
            goto LAB_82afdf20;
          }
          else {
LAB_82afdf20:
            iVar7 = fn_82AD6090(param_4,1);
          }
          iVar2 = *(int *)(iVar7 + 8);
          *(int *)(iVar7 + 8) = iVar2 + 1;
          *(int *)((iVar2 + 4) * 4 + iVar7) = iVar9;
        }
        else {
          uVar8 = fn_82AD1918(param_1,iVar7,uStack_7c,iVar2);
          if ((param_4[1] & 1) == 0) {
            uVar1 = *param_4 & 0xfffffffe;
            iVar9 = uVar1 - 4;
            if ((iVar9 == 0) || (*(uint *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
            goto LAB_82afdf90;
          }
          else {
LAB_82afdf90:
            iVar9 = fn_82AD6090(param_4,1);
          }
          iVar7 = *(int *)(iVar9 + 8);
          *(int *)(iVar9 + 8) = iVar7 + 1;
          *(undefined4 *)((iVar7 + 4) * 4 + iVar9) = uVar8;
        }
      }
LAB_82afdfb4:
      piVar13 = piVar13 + 1;
    }
    if (((*puVar5 & 1) != 0) || (*puVar5 == 0)) {
      *puVar6 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar6;
      for (uVar12 = *(uint *)(*(int *)(param_2 + 0x1c) + 0x1c); ((uVar12 & 1) == 0 && (uVar12 != 0))
          ; uVar12 = *(uint *)((uVar12 & 0xfffffffe) + 0x28)) {
        if ((*(uint *)(uVar12 + 8) >> 0x1a & 1) != 0) {
          *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) & 0xfbffffff;
        }
      }
      return;
    }
    puVar3 = (uint *)(*puVar6 & 0xfffffffe);
    puVar11 = puVar3 + -1;
    uVar12 = puVar3[1] - 1;
    puVar4 = (uint *)puVar11[puVar3[1] + 3];
    puVar3[1] = uVar12;
    if (uVar12 == 0) {
      *(uint *)(*puVar3 & 0xfffffffe) = *puVar11;
      *(uint *)(*puVar11 & 0xfffffffe) = *puVar3;
      fn_82AA6648(puVar6,puVar11,((ulonglong)puVar3[2] + 4 & 0x3fffffff) << 2);
    }
    param_2 = puVar4[3];
    param_3 = (ulonglong)(*puVar4 >> 5) & 3;
    if (puVar4[4] == 0) {
      puVar11 = (uint *)(param_2 + 4);
      for (puVar3 = *(uint **)(param_2 + 4); puVar3 != puVar4; puVar3 = (uint *)puVar3[2]) {
        puVar11 = puVar3 + 2;
      }
      *puVar11 = puVar3[2];
      fn_82ABE5F8(param_1,puVar4,0x14,0x1a);
    }
  } while( true );
}

