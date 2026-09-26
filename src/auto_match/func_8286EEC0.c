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
extern unsigned int *auStack_12c;
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_160;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1c0;
extern char cRam832116e5;
extern char cRam832116e7;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FBB0();
extern int fn_8223FCD8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866420();
extern int fn_8286E368();
extern int fn_82A1F2F8();
extern int fn_82F62578();
extern int fn_82F63CA0();
extern int fn_82FE79D0();
extern unsigned int uStack_1cc;


undefined8 fn_8286EEC0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar10;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *****pppppuVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 ****appppuStack_1e0 [5];
  uint uStack_1cc;
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [4];
  undefined1 auStack_12c [300];
  
  piVar13 = *(int **)(param_1 + 4);
  if (piVar13 != *(int **)(param_1 + 8)) {
    piVar12 = piVar13 + 1;
    do {
      iVar1 = *piVar13;
      if ((*(char *)(iVar1 + 0x29) == '\0') && (*(char *)(iVar1 + 0x2b) != '\x01')) {
        piVar13 = piVar13 + 1;
        piVar12 = piVar12 + 1;
      }
      else {
        if ((cRam832116e5 != '\0') || (cRam832116e7 != '\0')) {
          fn_8223CFC0(auStack_130,2,1);
          fn_828648B8(auStack_1c0,iVar1);
          uVar14 = 0xffffffff82021a54;
          if (*(char *)(iVar1 + 0x28) == '\0') {
            uVar14 = 0xffffffff82021a5c;
          }
          puVar10 = (undefined4 *)fn_8223B688(auStack_180,auStack_1c0);
          if (0xf < (uint)puVar10[5]) {
            puVar10 = (undefined4 *)*puVar10;
          }
          uVar2 = *(undefined4 *)(iVar1 + 0x24);
          uVar3 = fn_828647D8(iVar1);
          uVar4 = fn_82F62578(auStack_140,2);
          uVar5 = fn_828647D8(iVar1);
          uVar6 = fn_82F62578(auStack_160,10);
          uVar7 = fn_82A1F2F8();
          uVar8 = fn_82F62578(auStack_150,8);
          uVar9 = fn_82240158(auStack_130,0xffffffff82021a94);
          uVar8 = fn_8223FCD8(uVar9,uVar8);
          uVar7 = fn_82520AC8(uVar8,uVar7);
          uVar7 = fn_82240158(uVar7,0xffffffff82021a90);
          uVar7 = fn_82240158(uVar7,0xffffffff82021a70);
          uVar6 = fn_8223FCD8(uVar7,uVar6);
          uVar5 = fn_82520AC8(uVar6,uVar5);
          uVar5 = fn_82240158(uVar5,0xffffffff82021a6c);
          uVar5 = fn_82240158(uVar5,0xffffffff82021a64);
          uVar14 = fn_82240158(uVar5,uVar14);
          uVar14 = fn_82240158(uVar14,0xffffffff82021a4c);
          uVar14 = fn_8223FCD8(uVar14,uVar4);
          uVar14 = fn_8223FBB0(uVar14,uVar2);
          uVar14 = fn_82240158(uVar14,0xffffffff82021a34);
          uVar14 = fn_82240158(uVar14,puVar10);
          uVar14 = fn_82240158(uVar14,0xffffffff82021a30);
          uVar14 = fn_82520AC8(uVar14,uVar3);
          fn_82240158(uVar14,0xffffffff82021a2c);
          fn_82230300(auStack_180,1,0);
          fn_82230300(auStack_1c0,1,0);
          if (cRam832116e7 != '\0') {
            fn_822403C8(appppuStack_1e0,auStack_12c);
            pppppuVar11 = (undefined4 *****)appppuStack_1e0[0];
            if (uStack_1cc < 0x10) {
              pppppuVar11 = appppuStack_1e0;
            }
            fn_82230110(auStack_1a0,pppppuVar11);
            uVar14 = fn_82865170();
            fn_82866420(uVar14,auStack_1a0,0);
            fn_82230300(auStack_1a0,1,0);
            fn_82230300(appppuStack_1e0,1,0);
          }
          fn_8223DCC8(auStack_130);
        }
        fn_82FE79D0(param_1);
        fn_82F63CA0(piVar13,piVar12,(*(int *)(param_1 + 8) - (int)piVar12 >> 2) << 2);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
        fn_8286E368(iVar1,1);
      }
    } while (piVar13 != *(int **)(param_1 + 8));
  }
  return 0x20100000;
}

