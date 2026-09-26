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
extern unsigned int *auStack_280;
extern unsigned int *auStack_480;
extern unsigned int *auStack_490;
extern unsigned int *auStack_4a0;
extern unsigned int *auStack_4b0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEAFA8();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82CFC050();
extern int fn_82CFD5B0();
extern int fn_82CFFC68();
extern int fn_83082610();
extern unsigned int *lbl_8323B464;


void fn_82E14960(int param_1,int *param_2)

{
  int iVar3;
  undefined8 uVar1;
  int iVar4;
  ulonglong uVar2;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_4b0 [16];
  undefined1 auStack_4a0 [16];
  undefined1 auStack_490 [16];
  undefined1 auStack_480 [512];
  undefined1 auStack_280 [640];
  
  param_2[1] = 0;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar3 = fn_82CE5410();
  if ((int)(param_2[2] & 0x3fffffffU) < iVar6) {
    iVar4 = (param_2[2] & 0x3fffffffU) << 1;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_2,iVar4,0x10);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar3 = 0;
    do {
      iVar4 = param_2[1];
      param_2[1] = iVar4 + 1;
      puVar7 = (uint *)(iVar4 * 0x10 + *param_2);
      uVar8 = (ulonglong)*(uint *)(param_1 + 8);
      uVar9 = *(uint *)(iVar3 + *(int *)(param_1 + 0x10)) & 0xfffffffe;
      uVar1 = fn_83082610((uint *)(param_1 + 8));
      iVar4 = thunk_FUN_82f66570(uVar9,0x2e);
      while (iVar4 != 0) {
        iVar4 = iVar4 - uVar9;
        fn_82CFC050(auStack_480,uVar9,iVar4);
        uVar9 = iVar4 + uVar9 + 1;
        auStack_480[iVar4] = 0;
        iVar4 = fn_82CEAFA8(uVar1,auStack_480);
        if (iVar4 == 0) goto LAB_82e14b48;
        if (*(char *)(iVar4 + 0xc) != '\x19') {
          fn_82CEE578(auStack_4a0,auStack_280,0x200);
          uVar1 = fn_82CEDB38(auStack_4a0,0xffffffff8214b2a0);
          fn_82CEDB38(uVar1,auStack_480);
          (**(code **)(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,1,0xfffffffff032edfe,auStack_280,0xffffffff8214b2c0,0x81);
                    /* WARNING: Subroutine does not return */
          fn_82CED958(auStack_4a0);
        }
        uVar1 = fn_82CFD5B0();
        uVar8 = *(ushort *)(iVar4 + 0x12) + uVar8;
        iVar4 = thunk_FUN_82f66570(uVar9,0x2e);
      }
      uVar2 = fn_82CEAFA8(uVar1,uVar9);
      if ((uVar2 & 0xffffffff) == 0) {
LAB_82e14b48:
        param_2[1] = param_2[1] + -1;
        fn_82CEE578(auStack_4b0,auStack_280,0x200);
        uVar1 = fn_82CEDB38(auStack_4b0,0xffffffff8214b2e8);
        fn_82CEDB38(uVar1,uVar9);
        (**(code **)(*lbl_8323B464 + 0xc))
                  (lbl_8323B464,1,0xfffffffff032edf1,auStack_280,0xffffffff8214b2c0,0x93);
                    /* WARNING: Subroutine does not return */
        fn_82CED958(auStack_4b0);
      }
      *puVar7 = uVar9;
      puVar5 = (uint *)fn_82CFFC68(auStack_490,uVar8,uVar2);
      puVar7[2] = *puVar5;
      puVar7[3] = puVar5[1];
      puVar7[1] = *(uint *)(iVar3 + *(int *)(param_1 + 0x10) + 4) & 0xfffffffe;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  return;
}

