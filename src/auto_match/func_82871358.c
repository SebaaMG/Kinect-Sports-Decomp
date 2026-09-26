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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern char cRam832116e0;
extern char cRam832116e1;
extern char cRam832116e2;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828664C8();
extern int fn_828684F8();
extern int fn_82870B98();
extern unsigned int lbl_82006848;


void fn_82871358(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  iVar2 = *param_2;
  uVar6 = fn_828684F8();
  fn_82870B98(uVar6,iVar2);
  RtlEnterCriticalSection(iVar2 + 0x48);
  fVar5 = lbl_82006848;
  if (param_1 == 1) {
    if ((*(char *)(iVar2 + 0x45) != '\0') ||
       (*(undefined1 *)(iVar2 + 0x3d) = 1, cRam832116e0 == '\0')) goto LAB_82871500;
    fn_828648B8(auStack_f0,iVar2 + 0x18);
    fn_8223B688(auStack_50,auStack_f0);
    fn_82230300(auStack_f0,1,0);
    puVar8 = auStack_50;
  }
  else {
    if (param_1 == 4) {
      if (cRam832116e2 != '\0') {
        fn_828648B8(auStack_d0,iVar2 + 0x18);
        fn_8223B688(auStack_70,auStack_d0);
        fn_82230300(auStack_d0,1,0);
        fn_82230300(auStack_70,1,0);
      }
      fn_82865170();
      puVar7 = (undefined4 *)fn_828664C8();
      if (puVar7 != (undefined4 *)0x0) {
        uVar6 = fn_828684F8();
        fn_82870B98(uVar6,iVar2);
        puVar3 = (undefined4 *)*puVar7;
        iVar4 = param_2[6];
        uVar6 = fn_828647D8(iVar2 + 0x18);
        (*(code *)*puVar3)(puVar7,uVar6,iVar4);
        uVar6 = fn_828684F8();
        fn_82870B98(uVar6,iVar2);
      }
      goto LAB_82871500;
    }
    if (param_1 != 8) goto LAB_82871500;
    *(float *)(iVar2 + 0x6c) = (float)param_2[4] * lbl_82006848;
    fVar1 = (float)param_2[5];
    *(undefined1 *)(iVar2 + 0x68) = 1;
    *(float *)(iVar2 + 0x70) = fVar1 * fVar5;
    if (cRam832116e1 == '\0') goto LAB_82871500;
    fn_828648B8(auStack_b0,iVar2 + 0x18);
    fn_8223B688(auStack_90,auStack_b0);
    fn_82230300(auStack_b0,1,0);
    puVar8 = auStack_90;
  }
  fn_82230300(puVar8,1,0);
LAB_82871500:
  RtlLeaveCriticalSection(iVar2 + 0x48);
  uVar6 = fn_828684F8();
  fn_82870B98(uVar6,iVar2);
  return;
}

