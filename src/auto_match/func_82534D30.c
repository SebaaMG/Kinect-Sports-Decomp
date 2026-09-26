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
extern unsigned int *auStack_180;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_220;
extern unsigned int *auStack_240;
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2a0;
extern unsigned int *auStack_2d0;
extern unsigned int *auStack_320;
extern unsigned int *auStack_340;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_822933E8();
extern int fn_822A89B8();
extern int fn_822A9E20();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825200F0();
extern int fn_82534350();
extern int fn_8257EB18();
extern int fn_8257EB78();
extern int fn_8265BF48();
extern int fn_8265CA20();
extern int fn_827D6968();
extern int fn_827D78D0();
extern int fn_828647C0();
extern int fn_82864848();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82864988();
extern int fn_82864E90();
extern int fn_82F66FE8();
extern unsigned int iStack_330;
extern unsigned int lbl_83265A24;
extern unsigned int *lbl_8327F848;
extern unsigned int *lbl_8327F84C;
extern unsigned int *lbl_8327F868;
extern unsigned int lbl_8327F878;
extern unsigned int uStack_2dc;
extern unsigned int uStack_328;
extern unsigned int uStack_32c;


void fn_82534D30(longlong param_1,uint *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar11;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 auStack_340 [4];
  int iStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined1 auStack_320 [48];
  undefined4 ****appppuStack_2f0 [5];
  uint uStack_2dc;
  undefined1 auStack_2d0 [48];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [48];
  undefined1 auStack_1b0 [48];
  undefined1 auStack_180 [384];
  
  auStack_340[0] = 0;
  bVar2 = false;
  auStack_340[0] = fn_8265BF48(0xffffffff821c3b60,0);
  fn_825200F0(auStack_320,auStack_340);
  cVar11 = fn_827D6968(lbl_83265A24,auStack_320,0xffffffffffffffff);
  if ((cVar11 == '\0') || (lVar4 = fn_8251F720(auStack_340,0), lVar4 == 0)) {
    uVar5 = fn_8251F720(param_1,0);
  }
  else {
    uVar5 = fn_8251F720(lVar4,0);
    fn_8251FA58(lVar4);
    param_1 = lVar4;
  }
  uVar6 = fn_825200F0(auStack_320,param_1);
  fn_827D78D0(appppuStack_2f0,lbl_83265A24,uVar6,0xffffffffffffffff,0);
  if (uStack_2dc < 0x10) {
    appppuStack_2f0[0] = appppuStack_2f0;
  }
  fn_82F66FE8(appppuStack_2f0[0],0,0,auStack_180,0x104,0,0,0);
  if ((uVar5 & 0xffffffff) != 0) {
    cVar11 = (**(code **)(*lbl_8327F848 + 0x34))(lbl_8327F848,uVar5);
    if (cVar11 == '\0') {
      fn_8251FA58();
    }
    else {
      fn_82534350(uVar5);
      fn_82230110(auStack_260,auStack_180);
      uVar7 = (**(code **)*lbl_8327F84C)(lbl_8327F84C,auStack_260);
      fn_82230300(auStack_260,1,0);
      if ((uVar7 & 0xffffffff) >> 0x1f != 0) {
        (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x1c2,0xffffffff821c3b98);
      }
      iVar10 = *lbl_8327F84C;
      uVar6 = fn_82864988(auStack_2d0,0xffffffff821c3bbc);
      uVar7 = (**(code **)(iVar10 + 0xc))(lbl_8327F84C,uVar6,1);
      fn_82864898(auStack_2d0);
      if ((uVar7 & 0xffffffff) >> 0x1f != 0) {
        (**(code **)(*lbl_8327F868 + 0xc))(lbl_8327F868,0xffffffff821c3b18,0x1c8,0xffffffff821c3bc4)
        ;
      }
      iVar10 = *lbl_8327F848;
      uVar6 = fn_82864988(auStack_2d0,0xffffffff821c3bec);
      (**(code **)(iVar10 + 0x44))(lbl_8327F848,uVar6);
      fn_82864898(auStack_2d0);
      fn_82230300(auStack_2a0,0,0);
      fn_8257EB18();
      fn_8257EB78(auStack_2a0);
      (**(code **)(*lbl_8327F848 + 0x40))(lbl_8327F848,auStack_2a0);
      iStack_330 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      (**(code **)(*lbl_8327F868 + 4))(lbl_8327F868,0xffffffff821c3b18,0x1da,0xffffffff821c3bfc);
      uVar7 = (ulonglong)*param_2;
      if (uVar7 != param_2[1]) {
        do {
          piVar8 = (int *)fn_82864E90();
          piVar8 = (int *)(**(code **)(*piVar8 + 0x18))();
          (**(code **)(*piVar8 + 0x30))(auStack_320,piVar8,uVar7);
          uVar6 = fn_82864988(auStack_1b0,0xffffffff821c3bbc);
          cVar11 = fn_828647C0(auStack_320,uVar6);
          if (cVar11 == '\0') {
            bVar2 = true;
            uVar6 = fn_82864988(auStack_1e0,0xffffffff821c3c30);
            cVar11 = fn_828647C0(auStack_320,uVar6);
            bVar1 = false;
            if (cVar11 != '\0') goto LAB_82535088;
          }
          else {
LAB_82535088:
            bVar1 = true;
          }
          if (bVar2) {
            bVar2 = false;
            fn_82864898(auStack_1e0);
          }
          fn_82864898(auStack_1b0);
          if (!bVar1) {
            fn_82864848(auStack_2d0);
            fn_828648B8(auStack_280,auStack_320);
            uVar3 = lbl_8327F878;
            uVar6 = fn_8223B688(auStack_200,auStack_280);
            fn_822A89B8(uVar3,0,uVar6,auStack_2d0);
            fn_82230300(auStack_200,1,0);
            fn_82230300(auStack_280,1,0);
            fn_822A9E20(&iStack_330,auStack_320);
            fn_828648B8(auStack_240,uVar7);
            puVar9 = (undefined4 *)fn_8223B688(auStack_220,auStack_240);
            if (0xf < (uint)puVar9[5]) {
              puVar9 = (undefined4 *)*puVar9;
            }
            (**(code **)(*lbl_8327F868 + 4))
                      (lbl_8327F868,0xffffffff821c3b18,0x1ef,0xffffffff821c3c38,puVar9);
            fn_82230300(auStack_220,1,0);
            fn_82230300(auStack_240,1,0);
            fn_82864898(auStack_2d0);
          }
          fn_82864898(auStack_320);
          uVar7 = uVar7 + 0x24;
        } while ((uVar7 & 0xffffffff) != (ulonglong)param_2[1]);
      }
      iVar10 = (**(code **)(*lbl_8327F84C + 8))(lbl_8327F84C,&iStack_330,1);
      if (iVar10 < 0) {
        (**(code **)(*lbl_8327F868 + 0xc))(lbl_8327F868,0xffffffff821c3b18,500,0xffffffff821c3bc4);
      }
      iVar10 = (**(code **)(*lbl_8327F84C + 8))(lbl_8327F84C,&iStack_330,1);
      if (iVar10 < 0) {
        (**(code **)(*lbl_8327F868 + 0xc))(lbl_8327F868,0xffffffff821c3b18,0x1fa,0xffffffff821c3bc4)
        ;
      }
      fn_8251FA58(uVar5);
      if (iStack_330 != 0) {
        fn_822933E8(iStack_330,uStack_32c);
        fn_8265CA20(iStack_330);
      }
      iStack_330 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      fn_82230300(auStack_2a0,1,0);
    }
  }
  fn_82230300(appppuStack_2f0,1,0);
  return;
}

