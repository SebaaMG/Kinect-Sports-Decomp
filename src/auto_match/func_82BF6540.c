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
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5478();
extern int fn_82BE5C30();
extern int fn_82BE5C78();
extern int fn_82BE5CC0();
extern int fn_82BE5F40();
extern int fn_82BEB628();
extern int fn_82BF6230();
extern int fn_82BFAFD8();
extern unsigned int iStack_68;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


ulonglong fn_82BF6540(int param_1)

{
  uint uVar3;
  undefined8 uVar1;
  int iVar4;
  int iVar5;
  short sVar7;
  ulonglong uVar2;
  int iVar6;
  short sVar9;
  char cVar10;
  uint uVar8;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  
  uStack_70 = 0;
  cVar10 = '\0';
  uStack_6c = 0;
  uVar12 = 0;
  iStack_68 = 0;
  uVar11 = 0;
  uStack_64 = 0;
  sVar7 = 0;
  uVar3 = fn_82BE5CC0();
  iVar6 = *(int *)(param_1 + 0x20);
  uVar8 = 0;
  sVar9 = 0;
  do {
    if (uVar3 <= uVar8) {
      if ((cVar10 == '\x02') && (sVar7 == sVar9)) {
        uVar2 = thunk_FUN_82be5550(0x24);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82BFAFD8(uVar2,uVar12,uVar11);
        }
        if ((uVar2 & 0xffffffff) != 0) {
          fn_82BE5340();
          while (iStack_68 != 0) {
            iVar6 = fn_82BE5378(&uStack_70);
            if (iVar6 != 0) {
              *(int *)(iVar6 + 0x4c) = (int)uVar2;
            }
            fn_82BE5350(&uStack_70);
          }
          fn_82BE5478();
          return uVar2;
        }
      }
LAB_82bf65d0:
      fn_82BE5478(&uStack_70);
      return 0;
    }
    uVar1 = fn_82BE5C30(param_1);
    uVar8 = (uint)uVar1 & 0xff;
    if (uVar8 == 1) {
      sVar7 = fn_82BE5C78(param_1,uVar1);
LAB_82bf6690:
      cVar10 = cVar10 + '\x01';
    }
    else if (uVar8 == 3) {
      uVar11 = fn_82BE5CC0();
    }
    else {
      if (uVar8 == 0x13) {
        uVar12 = fn_82BE5CC0();
        goto LAB_82bf6690;
      }
      if (uVar8 == 0xde) {
        iVar4 = fn_82BF6230();
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x10) != 0)) {
          uVar2 = thunk_FUN_82be5550(0xc);
          if ((uVar2 & 0xffffffff) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = fn_82BEB628(uVar2,iVar4);
          }
          if (iVar5 != 0) {
            fn_82BE52B8(*(undefined4 *)(param_1 + 0x60));
            uVar2 = thunk_FUN_82be5550(0xc);
            if ((uVar2 & 0xffffffff) == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = fn_82BEB628(uVar2,iVar4);
            }
            if (iVar4 != 0) {
              fn_82BE52B8(&uStack_70);
              sVar9 = sVar9 + 1;
              goto LAB_82bf669c;
            }
          }
          fn_82BE5240(param_1,0x65,0xffffffff820ebb38);
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        goto LAB_82bf65d0;
      }
      iVar4 = fn_82BE5F40();
      if (iVar4 == 0) goto LAB_82bf65d0;
    }
LAB_82bf669c:
    uVar8 = *(int *)(param_1 + 0x20) - iVar6;
  } while( true );
}

