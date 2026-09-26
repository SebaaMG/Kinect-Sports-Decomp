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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern int fn_82E3AB90();
extern int fn_82E3AFE8();
extern int fn_82E3F410();
extern int fn_82E3F480();
extern int fn_82E40928();
extern int fn_82E5C7D8();
extern int fn_82E7E7E0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int uStack_58;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_d0;


longlong fn_82E40CB8(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uStack_d0;
  int *piStack_cc;
  uint auStack_c8 [2];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined2 uStack_a0;
  undefined4 uStack_58;
  
  if ((param_2 == (int *)0x0) || (param_3 == 0)) {
    lVar4 = -0x7fffbffd;
  }
  else {
    piStack_cc = (int *)0x0;
    uStack_b8 = 0;
    lVar4 = fn_82E3AFE8();
    if (-1 < lVar4) {
      uStack_d0 = 0;
      lVar4 = fn_82E3AB90(param_1,param_2,&uStack_d0);
      if (-1 < lVar4) {
        if (uStack_d0 == 0) {
          *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) | 2;
        }
        auStack_c8[0] = 0;
        lVar4 = (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82154b18,auStack_c8);
        if (-1 < lVar4) {
          uVar7 = 0;
          if (auStack_c8[0] != 0) {
            do {
              lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff82154b18,uVar7,&piStack_cc);
              if (lVar4 < 0) goto LAB_82e40e8c;
              uStack_d0 = uStack_d0 & 0xffff;
              lVar4 = fn_82E5C7D8(piStack_cc,&uStack_d0);
              if (lVar4 < 0) goto LAB_82e40e8c;
              lVar8 = 0xb;
              puVar3 = &uStack_b8;
              do {
                puVar6 = puVar3;
                puVar3 = puVar6 + 1;
                *puVar3 = 0;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
              uVar1 = *(uint *)(param_1 + 0x68);
              uVar2 = (((U64)(uStack_d0) >> 0) & 0xFFFF);
              *(undefined4 *)(puVar6 + 2) = 0;
              if (((uVar1 & 2) != 0) || (iVar5 = fn_82E3F410(param_1,(((U64)(uStack_d0) >> 0) & 0xFFFF)), iVar5 != 0)
                 ) {
                uStack_b0 = lbl_8202E618;
                uStack_ac = lbl_8202E61C;
                uStack_a8 = lbl_8202E620;
                uStack_a4 = lbl_8202E624;
                uStack_a0 = uVar2;
                uStack_58 = 1000;
                lVar4 = fn_82E40928(param_1,&uStack_b0,0x5c,1);
              }
              if ((int)lVar4 < 0) goto LAB_82e40e8c;
              if (piStack_cc != (int *)0x0) {
                (**(code **)(*piStack_cc + 8))();
                piStack_cc = (int *)0x0;
              }
              uVar7 = uVar7 + 1;
            } while ((uVar7 & 0xffffffff) < (ulonglong)auStack_c8[0]);
          }
          lVar4 = fn_82E3F480(param_1,param_2);
        }
      }
    }
LAB_82e40e8c:
    fn_82E7E7E0(auStack_c0);
    if (piStack_cc != (int *)0x0) {
      (**(code **)(*piStack_cc + 8))();
    }
  }
  return lVar4;
}

