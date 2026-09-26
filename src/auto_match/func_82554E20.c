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
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_1a0;
extern int fn_82230300();
extern int fn_825200F0();
extern int fn_82526C70();
extern int fn_82555040();
extern int fn_827D78D0();
extern int fn_82864E90();
extern int fn_82BFF338();
extern unsigned int iStack_1b0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83265A24;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1ac;


undefined8 fn_82554E20(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 ***apppuStack_1c0 [4];
  int iStack_1b0;
  uint uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 auStack_1a0 [8];
  undefined1 *puStack_180;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [304];
  
  uVar2 = fn_825200F0(auStack_150);
  fn_827D78D0(apppuStack_1c0,lbl_83265A24,uVar2,0xffffffffffffffff,0);
  if (uStack_1ac < 0x10) {
    apppuStack_1c0[0] = apppuStack_1c0;
  }
  fn_82526C70(auStack_130,0x104,0xffffffff821c4da8,apppuStack_1c0[0]);
  fn_82230300(apppuStack_1c0,1,0);
  if (iStack_1b0 != 0) {
    puVar5 = &uStack_1a8;
    lVar6 = 9;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puStack_180 = auStack_130;
    auStack_1a0[0] = 1;
    piVar3 = (int *)fn_82864E90();
    uVar1 = lbl_8320A898;
    uVar2 = (**(code **)(*piVar3 + 0x30))();
    iVar4 = fn_82BFF338(uVar1,uVar2,auStack_1a0,param_1 + 0x18);
    if (-1 < iVar4) {
      uVar2 = fn_82555040(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}

