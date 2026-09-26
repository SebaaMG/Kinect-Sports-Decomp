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
extern unsigned int *auStack_40;
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82B46050();


void fn_82B51878(int param_1,uint param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 auStack_40 [64];
  
  puVar4 = (uint *)fn_82ABE250(param_1,8,0xf);
  puVar3 = puVar4 + 1;
  puVar4[1] = (uint)puVar4 | 1;
  *puVar4 = (uint)puVar3 | 1;
  do {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c1);
    }
    iVar5 = *(int *)(param_2 + 4);
    if (iVar5 == 1) {
      iVar5 = *(int *)(param_2 + 8);
      if (iVar5 != 0) {
        if ((*puVar3 & 1) == 0) {
          uVar9 = *puVar4 & 0xfffffffe;
          iVar7 = uVar9 - 4;
          if ((iVar7 == 0) || (*(uint *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U)) goto LAB_82b51a9c;
        }
        else {
LAB_82b51a9c:
          iVar7 = fn_82AD6090(puVar4,1);
        }
        iVar2 = *(int *)(iVar7 + 8);
        *(int *)(iVar7 + 8) = iVar2 + 1;
        *(int *)((iVar2 + 4) * 4 + iVar7) = iVar5;
      }
      iVar5 = *(int *)(param_2 + 0xc);
      if (iVar5 != 0) {
LAB_82b51acc:
        puVar6 = puVar4;
        if ((*puVar3 & 1) == 0) {
          uVar9 = *puVar4 & 0xfffffffe;
          iVar7 = uVar9 - 4;
          if ((iVar7 != 0) && (*(int *)(uVar9 + 4) + 1U <= *(uint *)(uVar9 + 8))) goto LAB_82b51b08;
        }
LAB_82b51b00:
        iVar7 = fn_82AD6090(puVar6,1);
        goto LAB_82b51b08;
      }
    }
    else if (iVar5 == 0xe) {
      iVar5 = *(int *)(param_2 + 0x1c);
      if (iVar5 == 0) {
LAB_82b519c4:
        iVar5 = *(int *)(param_2 + 0x20);
        goto LAB_82b51acc;
      }
      if (iVar5 < 2) {
LAB_82b51bd8:
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdba);
      }
      if (iVar5 < 4) goto LAB_82b519c4;
      if (iVar5 < 0x1a) goto LAB_82b51bd8;
      if (0x1c < iVar5) {
        if (iVar5 != 0x1d) goto LAB_82b51bd8;
        goto LAB_82b519c4;
      }
      uVar1 = *(undefined4 *)(param_2 + 0x20);
      if ((*puVar3 & 1) == 0) {
        uVar9 = *puVar4 & 0xfffffffe;
        iVar5 = uVar9 - 4;
        if ((iVar5 == 0) || (*(uint *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U)) goto LAB_82b51a00;
      }
      else {
LAB_82b51a00:
        iVar5 = fn_82AD6090(puVar4,1);
      }
      iVar7 = *(int *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = iVar7 + 1;
      *(undefined4 *)((iVar7 + 4) * 4 + iVar5) = uVar1;
      iVar5 = *(int *)(param_2 + 0x24);
      puVar6 = param_3;
      if ((param_3[1] & 1) != 0) goto LAB_82b51b00;
      uVar9 = *param_3 & 0xfffffffe;
      iVar7 = uVar9 - 4;
      if ((iVar7 == 0) || (*(uint *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U)) goto LAB_82b51b00;
LAB_82b51b08:
      iVar2 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = iVar2 + 1;
      *(int *)((iVar2 + 4) * 4 + iVar7) = iVar5;
    }
    else if (iVar5 == 0xf) {
      if (3 < *(uint *)(param_2 + 0x10)) {
        if (*(uint *)(param_2 + 0x10) != 6) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c1);
        }
        if (*(int *)(param_2 + 0x1c) != 0) {
          if (*(int *)(param_2 + 0x18) == *(int *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c1);
          }
          iVar5 = *(int *)(param_2 + 0x18) * 0x28;
          if ((*(uint *)(iVar5 + *(int *)(param_1 + 0xc) + 4) & 0x70) == 0x30) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0xdba);
          }
          iVar5 = iVar5 + *(int *)(param_1 + 0xc);
          goto LAB_82b5197c;
        }
      }
    }
    else if (iVar5 == 0x1c) {
      iVar5 = fn_82B46050(param_1,param_2,auStack_40);
      uVar9 = *(uint *)(param_2 + 0x10);
      if ((((uVar9 != 0) && (uVar9 != 4)) && (uVar9 != 6)) && ((uVar9 < 8 || (9 < uVar9)))) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xdba);
      }
      iVar5 = iVar5 * 0x28 + *(int *)(param_1 + 0xc);
LAB_82b5197c:
      *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 4;
    }
    if (((*puVar3 & 1) != 0) || (*puVar3 == 0)) {
      *puVar4 = *(uint *)(param_1 + 0x3d0);
      *(uint **)(param_1 + 0x3d0) = puVar4;
      return;
    }
    puVar6 = (uint *)(*puVar4 & 0xfffffffe);
    puVar8 = puVar6 + -1;
    uVar9 = puVar6[1] - 1;
    param_2 = puVar8[puVar6[1] + 3];
    puVar6[1] = uVar9;
    if (uVar9 == 0) {
      *(uint *)(*puVar6 & 0xfffffffe) = *puVar8;
      *(uint *)(*puVar8 & 0xfffffffe) = *puVar6;
      fn_82AA6648(puVar4,puVar8,((ulonglong)puVar6[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

