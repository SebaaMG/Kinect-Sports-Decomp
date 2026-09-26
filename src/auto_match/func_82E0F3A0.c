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
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEB1A8();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFFC68();
extern int fn_82CFFD68();
extern int fn_82CFFEB8();
extern int fn_82E0F198();


void fn_82E0F3A0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar8;
  int iVar9;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar10;
  undefined8 uVar7;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [120];
  
  lVar12 = 0;
  iVar8 = fn_82CEAE80(param_3);
  if (0 < iVar8) {
    do {
      iVar8 = fn_82CEAEA8(param_3,lVar12);
      if (((*(ushort *)(iVar8 + 0x10) >> 10 & 1) == 0) &&
         (uVar11 = (uint)*(byte *)(iVar8 + 0xc), uVar11 - 0x16 < 7)) {
        if (uVar11 == 0x16) {
LAB_82e0f4a4:
          lVar2 = param_2;
          lVar3 = param_5;
          if (*(char *)(iVar8 + 0xd) == '\x1c') {
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_88,lVar2,iVar8);
              puVar10 = (undefined4 *)fn_82CFFEB8(auStack_88,0);
              fn_82E0F198(param_1,*puVar10,puVar10[1],param_4,param_6);
              lVar6 = fn_82CEB1A8(param_3);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
          else if (*(char *)(iVar8 + 0xd) == '\x19') {
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_80,lVar2,iVar8);
              puVar10 = (undefined4 *)fn_82CFFEB8(auStack_80,0);
              uVar1 = puVar10[1];
              uVar4 = fn_82CFD5A8(iVar8);
              fn_82E0F3A0(param_1,*puVar10,uVar4,param_4,uVar1,param_6);
              lVar6 = fn_82CEB1A8(param_3);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
        }
        else if ((uVar11 != 0x17) && (uVar11 != 0x18)) {
          if (uVar11 == 0x19) {
            iVar9 = fn_82CFD5C0(iVar8);
            lVar2 = param_2;
            lVar3 = param_5;
            if (iVar9 == 0) {
              uVar4 = 1;
            }
            else {
              uVar4 = fn_82CFD5C0(iVar8);
            }
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_78,lVar2,iVar8);
              uVar5 = fn_82CFD5A8(iVar8);
              uVar7 = fn_82CFFD68(auStack_78);
              fn_82E0F3A0(param_1,uVar7,uVar5,param_4,uVar4,param_6);
              lVar6 = fn_82CEB1A8(param_3);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
          else {
            if (uVar11 == 0x1a) goto LAB_82e0f4a4;
            if (uVar11 != 0x1b) {
              iVar9 = fn_82CFD5C0(iVar8);
              lVar2 = param_2;
              lVar3 = param_5;
              if (iVar9 == 0) {
                uVar4 = 1;
              }
              else {
                uVar4 = fn_82CFD5C0(iVar8);
              }
              while (-1 < lVar3 + -1) {
                fn_82CFFC68(auStack_90,lVar2,iVar8);
                uVar5 = fn_82CFFD68(auStack_90);
                fn_82E0F198(param_1,uVar5,uVar4,param_4,param_6);
                lVar6 = fn_82CEB1A8(param_3);
                lVar2 = lVar6 + lVar2;
                lVar3 = lVar3 + -1;
              }
            }
          }
        }
      }
      lVar12 = lVar12 + 1;
      iVar8 = fn_82CEAE80(param_3);
    } while ((int)lVar12 < iVar8);
  }
  return;
}

