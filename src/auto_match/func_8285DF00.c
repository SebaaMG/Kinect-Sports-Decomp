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
extern unsigned int *auStack_70;
extern unsigned int fStack_74;
extern int fn_828114A8();
extern int fn_82811500();
extern int fn_828593D0();
extern int fn_8285A7E8();
extern int fn_8285A7F8();
extern int fn_8285A818();
extern int fn_8285C838();
extern int fn_8285C8C0();
extern int fn_8285C968();
extern int fn_8285CAA8();
extern int fn_8285DB68();
extern int fn_8285DCF0();
extern int fn_828600E0();
extern int fn_82862A28();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_8321157C;
extern unsigned int lbl_8321159C;
extern unsigned int lbl_832115A0;
extern unsigned int lbl_832115A5;
extern unsigned int lbl_832115A6;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8285DF00(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5
                  )

{
  bool bVar1;
  char cVar6;
  undefined8 uVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  uint uVar7;
  double dVar8;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 auStack_70 [28];
  
  if ((param_5 == '\0') && (lbl_832115A6 != '\0')) {
    cVar6 = fn_82862A28(0xffffffff832115b0);
    bVar1 = false;
    if (cVar6 == '\0') goto LAB_8285df68;
  }
  bVar1 = true;
LAB_8285df68:
  uVar2 = fn_8285A7F8(param_1,lbl_8321157C);
  fn_828114A8(lbl_832115A0,*(undefined4 *)(param_1 + 0x4c));
  fn_828114A8(lbl_8321159C,*(undefined4 *)(param_1 + 0x44));
  if (bVar1) {
    fn_8285C838(*(undefined4 *)(param_1 + 0x40),param_2);
    iVar4 = fn_828593D0();
    if (iVar4 != 0) {
      fn_8285C8C0(param_1,uVar2,param_2,param_3,param_4,0);
    }
  }
  if (*(short *)(param_1 + 0x34) != 0) {
    uVar7 = 0;
    dVar8 = (double)lbl_8200133C;
    do {
      if (bVar1) {
LAB_8285e124:
        fn_8285DCF0(uVar7,param_1,param_2,param_3,param_4);
        lbl_832115A5 = bVar1;
      }
      else {
        fStack_74 = (float)dVar8;
        uStack_78 = 0;
        uStack_7c = 0;
        auStack_70[0] = 0;
        uStack_80 = 0;
        iVar4 = *(int *)(uVar7 * 4 + *(int *)(param_1 + 0x30));
        fn_8285A7E8(iVar4,lbl_8321157C);
        uVar3 = fn_8285A818(iVar4,lbl_8321157C);
        fn_8285C968(param_1,iVar4,uVar3,&uStack_78,&uStack_7c,auStack_70,&uStack_80);
        iVar5 = fn_8285CAA8(uStack_78);
        if (iVar5 != 0) {
          iVar4 = fn_8285DB68((double)fStack_74,(double)*(float *)(iVar4 + 0x10),
                                0xffffffff832115b0);
          if (iVar4 != 0) {
            param_2 = 0xffffffff832114b0;
            lbl_832115A5 = 1;
            param_3 = 0xffffffff8321155c;
            param_4 = 0xffffffff83211564;
            if (uVar7 == 0) {
              fn_8285C838(*(undefined4 *)(param_1 + 0x40),0xffffffff832114b0);
              iVar4 = fn_828593D0();
              if (iVar4 != 0) {
                fn_8285C8C0(param_1,uVar2,0xffffffff832114b0,0xffffffff8321155c,0xffffffff83211564
                              ,0);
              }
            }
            goto LAB_8285e124;
          }
        }
        if ((uVar7 == 0) && (iVar4 = fn_828593D0(), iVar4 != 0)) {
          fn_8285C8C0(param_1,uVar2,0,0,0,1);
          if (*(int *)(param_1 + 0x40) != 0) {
            fn_828600E0(*(int *)(param_1 + 0x40),lbl_8321157C);
          }
        }
      }
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 < *(ushort *)(param_1 + 0x34));
  }
  fn_82811500(lbl_8321159C,*(undefined4 *)(param_1 + 0x44));
  fn_828114A8(lbl_8321159C,*(undefined4 *)(param_1 + 0x48));
  return;
}

