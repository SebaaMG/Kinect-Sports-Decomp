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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82AD35E8();
extern int fn_82AD6090();
extern int fn_82B4A218();
extern int fn_82B4BAA8();
extern int fn_82B85298();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82B42A78(undefined8 param_1,uint param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar6;
  undefined8 uVar5;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_60;
  uint uStack_5c;
  
  puVar6 = (uint *)fn_82ABE250(param_1,8,6);
  puVar4 = puVar6 + 1;
  puVar6[1] = (uint)puVar6 | 1;
  *puVar6 = (uint)puVar4 | 1;
  do {
    for (iVar1 = *(int *)(param_2 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      iVar10 = *(int *)(iVar1 + 4);
      puVar2 = *(uint **)(iVar10 + 0xc);
      while( true ) {
        if (puVar2 == (uint *)0x0) goto LAB_82b42c58;
        uVar9 = *puVar2;
        if (uVar9 != param_2) break;
        puVar2 = (uint *)puVar2[2];
      }
      if (uVar9 == 0) {
LAB_82b42c58:
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      fn_82B85298(&uStack_60,param_1,uVar9,param_3,param_4);
      uVar5 = fn_82B4BAA8(param_1,&uStack_60);
      uStack_60 = fn_82AD35E8(param_1,uVar9,uVar9 + 0x18,uVar5,uVar5);
      uStack_5c = uStack_5c & 0x10000 | 1;
      iVar7 = fn_82B4A218(uVar9,param_3,param_1);
      *(ulonglong *)(iVar7 + param_4 * 8) = CONCAT44(uStack_60,uStack_5c);
      do {
        if ((*(uint *)(iVar10 + 0x30) >> 0x13 & 1) != 0) break;
        iVar10 = *(int *)(iVar10 + 0x34);
      } while (iVar10 != 0);
      if (iVar10 != 0) {
        if ((*puVar4 & 1) == 0) {
          uVar9 = *puVar6 & 0xfffffffe;
          iVar7 = uVar9 - 4;
          if ((iVar7 == 0) || (*(uint *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U)) goto LAB_82b42bb0;
        }
        else {
LAB_82b42bb0:
          iVar7 = fn_82AD6090(puVar6,1);
        }
        iVar3 = *(int *)(iVar7 + 8);
        *(int *)(iVar7 + 8) = iVar3 + 1;
        *(int *)((iVar3 + 4) * 4 + iVar7) = iVar10;
      }
    }
    if (((*puVar4 & 1) != 0) || (*puVar4 == 0)) {
      return;
    }
    puVar2 = (uint *)(*puVar6 & 0xfffffffe);
    puVar8 = puVar2 + -1;
    uVar9 = puVar2[1] - 1;
    param_2 = puVar8[puVar2[1] + 3];
    puVar2[1] = uVar9;
    if (uVar9 == 0) {
      *(uint *)(*puVar2 & 0xfffffffe) = *puVar8;
      *(uint *)(*puVar8 & 0xfffffffe) = *puVar2;
      fn_82AA6648(puVar6,puVar8,((ulonglong)puVar2[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

