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
extern unsigned int *auStack_10f8;
extern unsigned int *auStack_11fc;
extern unsigned int *auStack_12fc;
extern unsigned int *auStack_13fc;
extern unsigned int *auStack_14fc;
extern unsigned int *auStack_15fc;
extern unsigned int *auStack_16fc;
extern unsigned int *auStack_17fc;
extern unsigned int *auStack_18fc;
extern unsigned int *auStack_1b60;
extern unsigned int *auStack_1c60;
extern unsigned int *auStack_1d60;
extern unsigned int *auStack_1d80;
extern unsigned int *auStack_1da4;
extern int fn_82230300();
extern int fn_82230E20();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82248AE8();
extern int fn_82250A18();
extern int fn_82365BD8();
extern int fn_8247E4D8();
extern int fn_82486B08();
extern int fn_824C24B0();
extern int fn_8251CF80();
extern int fn_825200F0();
extern int fn_82520158();
extern int fn_82558B08();
extern int fn_8256BF18();
extern int fn_8256CC50();
extern int fn_8265BF48();
extern int fn_827D5650();
extern int fn_827D5740();
extern int fn_82A1DD38();
extern int fn_82A1E108();
extern int fn_82F63CA0();
extern unsigned int iStack_1d9c;
extern unsigned int iStack_1da0;
extern unsigned int iStack_1dac;
extern unsigned int lbl_82196288;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000388;
extern unsigned int uRam832766f0;
extern unsigned int uStack_1904;
extern unsigned int uStack_1908;
extern unsigned int uStack_1918;
extern unsigned int uStack_191c;
extern unsigned int uStack_1920;
extern unsigned int uStack_1924;
extern unsigned int uStack_1928;
extern unsigned int uStack_192c;
extern unsigned int uStack_1930;
extern unsigned int uStack_1944;
extern unsigned int uStack_1948;
extern unsigned int uStack_194c;
extern unsigned int uStack_1950;
extern unsigned int uStack_1958;
extern unsigned int uStack_195c;
extern unsigned int uStack_1d98;
extern unsigned int uStack_1da8;
extern unsigned int uStack_1db0;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;


void fn_8247DF58(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar5;
  char cVar7;
  longlong lVar3;
  char *pcVar6;
  undefined8 uVar4;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 uStack_1db0;
  int iStack_1dac;
  undefined4 uStack_1da8;
  undefined1 auStack_1da4 [4];
  int iStack_1da0;
  int iStack_1d9c;
  undefined4 uStack_1d98;
  undefined1 auStack_1d80 [32];
  undefined1 auStack_1d60 [256];
  undefined1 auStack_1c60 [256];
  undefined1 auStack_1b60 [256];
  char acStack_1a60 [260];
  undefined4 uStack_195c;
  undefined4 uStack_1958;
  undefined4 uStack_1950;
  undefined4 uStack_194c;
  undefined4 uStack_1948;
  undefined4 uStack_1944;
  undefined4 uStack_1930;
  undefined4 uStack_192c;
  undefined4 uStack_1928;
  undefined4 uStack_1924;
  undefined4 uStack_1920;
  undefined4 uStack_191c;
  undefined4 uStack_1918;
  undefined4 uStack_1908;
  undefined4 uStack_1904;
  undefined1 auStack_18fc [256];
  undefined1 auStack_17fc [256];
  undefined1 auStack_16fc [256];
  undefined1 auStack_15fc [256];
  undefined1 auStack_14fc [256];
  undefined1 auStack_13fc [256];
  undefined1 auStack_12fc [256];
  undefined1 auStack_11fc [260];
  undefined1 auStack_10f8 [4224];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_60;
  
  if (*(char *)(param_2 + 0xdc) == '\0') {
    if (*(int *)(param_2 + 0xd8) < 4) {
      *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + 1;
    }
    else {
      iVar5 = fn_827D5740(lbl_83265A24);
      if ((iVar5 != 0) && (iVar5 = fn_827D5650(lbl_83265A24), iVar5 != 0)) {
        fn_824C24B0(param_1,param_2 + 0x48);
        if ((*(char *)(param_2 + 0x40) == '\0') && (*(int *)(param_2 + 0x8c) != 0)) {
          *(undefined1 *)(param_2 + 0x40) = 1;
          uVar8 = (ulonglong)lbl_832975B0;
          if (uVar8 == 0) {
            uVar8 = fn_82250A18();
          }
          fn_82230E20(uVar8,0x25);
        }
        else {
          if ((*(int *)(param_2 + 0x90) == 0) ||
             (bVar2 = true, *(uint *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 0x204) < 2)) {
            bVar2 = false;
          }
          if (bVar2) {
            iVar5 = *(int *)(param_2 + 0x94);
            iVar10 = *(int *)(param_2 + 0x90);
            iVar11 = 0;
            iVar9 = 0;
            if ((iVar5 != 0) && (cVar7 = fn_8223AAC0(iVar5), cVar7 != '\0')) {
              iVar11 = iVar10;
              iVar9 = iVar5;
            }
            if (*(int **)(iVar11 + 0x38) != (int *)0x0) {
              lVar3 = (**(code **)(**(int **)(iVar11 + 0x38) + 8))();
              fn_8247E4D8(auStack_1d60,lVar3 + 0xf0);
              pcVar6 = strstr(acStack_1a60,"live");
              if (pcVar6 != (char *)0x0) {
                fn_82520158(0xffffffff821bd350,auStack_1da4,0);
                puVar13 = auStack_10f8;
                lVar3 = 3;
                do {
                  fn_82486B08(puVar13);
                  lVar3 = lVar3 + -1;
                  puVar13 = puVar13 + 0x420;
                } while (-1 < lVar3);
                uStack_191c = 0;
                uStack_1924 = 0;
                uStack_192c = 0;
                uStack_60 = 0;
                uStack_1920 = lbl_82196288;
                uStack_1918 = lbl_82196288;
                uStack_1930 = lbl_82196288;
                uStack_1928 = lbl_82196288;
                fn_82F63CA0(auStack_18fc,auStack_1d60,0x100);
                fn_82F63CA0(auStack_17fc,auStack_1c60,0x100);
                fn_82F63CA0(auStack_16fc,auStack_1b60,0x100);
                fn_82F63CA0(auStack_15fc,acStack_1a60,0x100);
                uStack_1908 = uStack_195c;
                uStack_1904 = uStack_1958;
                fn_82F63CA0(auStack_14fc,auStack_1d60,0x100);
                fn_82F63CA0(auStack_13fc,auStack_1c60,0x100);
                fn_82F63CA0(auStack_12fc,auStack_1b60,0x100);
                fn_82F63CA0(auStack_11fc,acStack_1a60,0x100);
                uStack_70 = uStack_194c;
                uStack_6c = uStack_1948;
                uStack_68 = uStack_1944;
                uStack_78 = uStack_1950;
                fn_82A1DD38(0xffffffff83290060,&uStack_1930,0x18d8);
                uRam832766f0 = 1;
                uStack_1da8 = fn_8265BF48(0xffffffff821bd35c,0);
                uStack_1db0 = fn_8265BF48(0xffffffff821bd394,0);
                fn_825200F0(&iStack_1da0,&uStack_1da8);
                fn_825200F0(auStack_1d80,&uStack_1db0);
                fn_82520158(0xffffffff821bd350,&uStack_1db0,0);
                uVar4 = fn_8256BF18();
                fn_8256CC50(uVar4,&iStack_1da0,auStack_1d80,uStack_1db0);
                while ((iVar5 = fn_827D5740(lbl_83265A24), iVar5 == 0 ||
                       (iVar5 = fn_827D5650(lbl_83265A24), iVar5 == 0))) {
                  fn_82558B08();
                }
                iVar5 = *(int *)(param_2 + 0x94);
                uVar1 = *(undefined4 *)(param_2 + 0x90);
                uVar12 = 0;
                iVar10 = 0;
                if ((iVar5 != 0) && (cVar7 = fn_8223AAC0(iVar5), cVar7 != '\0')) {
                  uVar12 = uVar1;
                  iVar10 = iVar5;
                }
                iStack_1da0 = 0;
                iStack_1d9c = 0;
                uStack_1d98 = 0;
                uStack_1db0 = uVar12;
                iStack_1dac = iVar10;
                cVar7 = fn_82248AE8(&iStack_1da0,1);
                iVar5 = iStack_1da0;
                if (cVar7 != '\0') {
                  if (iStack_1da0 != 0) {
                    fn_82365BD8(iStack_1da0,&uStack_1db0);
                  }
                  iStack_1d9c = iVar5 + 8;
                }
                fn_8251CF80(auStack_1da4,0,&iStack_1da0);
                if (iVar10 != 0) {
                  fn_822315A0(iVar10);
                }
                lVar3 = 3;
                *(undefined1 *)(param_2 + 0xdc) = 1;
                puVar13 = &stack0x00000388;
                do {
                  puVar13 = puVar13 + -0x420;
                  fn_82230300(puVar13,1,0);
                  lVar3 = lVar3 + -1;
                } while (-1 < lVar3);
              }
            }
            if (iVar9 != 0) {
              fn_822315A0(iVar9);
            }
          }
        }
      }
    }
    fn_82A1E108(0x14);
  }
  return;
}

