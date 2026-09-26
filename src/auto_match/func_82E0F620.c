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
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEB1A8();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFFC68();
extern int fn_82CFFD68();
extern int fn_82CFFEB8();
extern int fn_82CFFEC8();
extern int fn_82E0F2A8();


void fn_82E0F620(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar8;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [112];
  
  lVar12 = 0;
  iVar8 = fn_82CEAE80(param_3);
  if (0 < iVar8) {
    do {
      iVar8 = fn_82CEAEA8(param_3,lVar12);
      if (((*(ushort *)(iVar8 + 0x10) >> 10 & 1) == 0) &&
         (uVar11 = (uint)*(byte *)(iVar8 + 0xc), uVar11 - 0x16 < 6)) {
        if (uVar11 == 0x16) {
LAB_82e0f6fc:
          lVar2 = param_2;
          lVar3 = param_5;
          if (*(char *)(iVar8 + 0xd) == '\x19') {
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_78,lVar2,iVar8);
              puVar9 = (undefined4 *)fn_82CFFEB8(auStack_78,0);
              uVar1 = puVar9[1];
              uVar4 = fn_82CFD5A8(iVar8);
              fn_82E0F620(param_1,*puVar9,uVar4,param_4,uVar1,param_6);
              lVar5 = fn_82CEB1A8(param_3);
              lVar2 = lVar5 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
        }
        else if ((uVar11 != 0x17) && (uVar11 != 0x18)) {
          if (uVar11 == 0x19) {
            iVar10 = fn_82CFD5C0(iVar8);
            lVar2 = param_2;
            lVar3 = param_5;
            if (iVar10 == 0) {
              uVar4 = 1;
            }
            else {
              uVar4 = fn_82CFD5C0(iVar8);
            }
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_70,lVar2,iVar8);
              uVar6 = fn_82CFD5A8(iVar8);
              uVar7 = fn_82CFFD68(auStack_70);
              fn_82E0F620(param_1,uVar7,uVar6,param_4,uVar4,param_6);
              lVar5 = fn_82CEB1A8(param_3);
              lVar2 = lVar5 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
          else {
            lVar2 = param_2;
            lVar3 = param_5;
            if (uVar11 == 0x1a) goto LAB_82e0f6fc;
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_80,lVar2,iVar8);
              uVar4 = fn_82CFFEC8(auStack_80,0);
              fn_82E0F2A8(param_1,uVar4,param_4,param_6);
              lVar5 = fn_82CEB1A8(param_3);
              lVar2 = lVar5 + lVar2;
              lVar3 = lVar3 + -1;
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

