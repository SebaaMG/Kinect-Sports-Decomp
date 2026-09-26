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
extern unsigned int *auStack_150;
extern unsigned int *auStack_250;
extern unsigned int *auStack_280;
extern unsigned int *auStack_2b0;
extern int fn_82931D48();
extern int fn_8297F6B8();
extern int fn_82980C18();
extern int fn_82981668();
extern int fn_82981738();
extern int fn_82981820();
extern int fn_82981C40();
extern int fn_829846B0();
extern unsigned int uStack_260;
extern unsigned int uStack_264;
extern unsigned int uStack_270;
extern unsigned int uStack_290;
extern unsigned int uStack_294;
extern unsigned int uStack_2a0;


void fn_82984B00(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined1 *param_4,
                  undefined1 *param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar6;
  ulonglong uVar5;
  undefined1 *puVar9;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 auStack_2b0 [16];
  undefined4 uStack_2a0;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined1 auStack_280 [16];
  undefined4 uStack_270;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 auStack_250 [256];
  undefined1 auStack_150 [336];
  
  if ((param_6 != 0) || (param_4 == (undefined1 *)0x0)) goto LAB_82984f00;
  if (param_5 != (undefined1 *)0x0) {
    fn_82931D48(auStack_2b0);
    fn_82931D48(auStack_280);
    puVar6 = param_4;
    if (*(int *)(param_4 + 4) != 9) {
      uStack_2a0 = 4;
      uStack_294 = 1;
      uStack_290 = fn_82981738(param_1,param_4);
      iVar2 = fn_82981668(param_1,param_4);
      puVar6 = auStack_2b0;
      if (iVar2 != 0) {
        uStack_2a0 = 1;
      }
    }
    puVar9 = param_5;
    if (*(int *)(param_5 + 4) != 9) {
      uStack_270 = 4;
      uStack_264 = 1;
      uStack_260 = fn_82981738(param_1,param_5);
      iVar2 = fn_82981668(param_1,param_5);
      puVar9 = auStack_280;
      if (iVar2 != 0) {
        uStack_270 = 1;
      }
    }
    iVar2 = *(int *)(puVar6 + 0x10);
    if ((iVar2 != 4) && (iVar3 = *(int *)(puVar9 + 0x10), iVar3 != 4)) {
      if (iVar2 == 0) {
LAB_82984c00:
        bVar1 = iVar3 == 3;
        goto LAB_82984efc;
      }
      if (iVar2 == 1) {
        if (iVar3 != 0) {
          if (iVar3 == 1) {
            if (*(uint *)(puVar9 + 0x20) < *(uint *)(puVar6 + 0x20)) goto LAB_82984c30;
          }
          else {
            if (iVar3 != 2) goto LAB_82984c00;
            uVar4 = *(uint *)(puVar9 + 0x1c);
            if (((uVar4 == 1) && (*(uint *)(puVar9 + 0x20) < *(uint *)(puVar6 + 0x20))) ||
               ((iVar2 = *(int *)(puVar9 + 0x20), iVar2 == 1 && (uVar4 < *(uint *)(puVar6 + 0x20))))
               ) goto LAB_82984c30;
            if ((uVar4 != 1) && (iVar2 != 1)) {
              iVar3 = *(int *)(puVar6 + 0x20);
LAB_82984ce0:
              if (uVar4 * iVar2 != iVar3) goto LAB_82984c30;
            }
          }
        }
      }
      else if (iVar2 == 2) {
        if (iVar3 != 0) {
          if (iVar3 == 1) {
            uVar4 = *(uint *)(puVar6 + 0x1c);
            if (((uVar4 != 1) || (*(uint *)(puVar6 + 0x20) <= *(uint *)(puVar9 + 0x20))) &&
               ((iVar2 = *(int *)(puVar6 + 0x20), iVar2 != 1 || (uVar4 <= *(uint *)(puVar9 + 0x20)))
               )) {
              if ((uVar4 != 1) && (iVar2 != 1)) {
                iVar3 = *(int *)(puVar9 + 0x20);
                goto LAB_82984ce0;
              }
              goto LAB_82984f00;
            }
          }
          else {
            if (iVar3 != 2) goto LAB_82984c00;
            if ((*(uint *)(puVar6 + 0x1c) <= *(uint *)(puVar9 + 0x1c)) &&
               (*(uint *)(puVar6 + 0x20) <= *(uint *)(puVar9 + 0x20))) goto LAB_82984f00;
          }
          goto LAB_82984c30;
        }
      }
      else if (iVar2 == 3) {
        if (iVar3 != 3) goto LAB_82984c30;
        iVar2 = *(int *)(puVar9 + 0x14);
        if (iVar2 != 0x16) {
          iVar3 = *(int *)(puVar6 + 0x14);
          if ((iVar3 < 0x2f) || (0x32 < iVar3)) {
            if (iVar2 == 0x18) {
              if ((((iVar3 != 0x18) && (iVar3 != 0x19)) &&
                  ((iVar3 != 0x1b && ((iVar3 != 0x1d && (iVar3 != 0x1e)))))) && (iVar3 != 0x1a)) {
                bVar1 = iVar3 == 0x1c;
LAB_82984e48:
                if (!bVar1) goto LAB_82984c30;
              }
            }
            else if ((iVar2 == 0x21) || (iVar2 == 0x2f)) {
              if ((iVar3 != 0x21) && (((iVar3 != 0x22 && (iVar3 != 0x23)) && (iVar3 != 0x24)))) {
                bVar1 = iVar3 == 0x25;
                goto LAB_82984e48;
              }
            }
            else if (iVar3 != iVar2) goto LAB_82984c30;
            iVar2 = fn_8297F6B8(param_1,*(undefined4 *)(puVar6 + 0x18),
                                  *(undefined4 *)(puVar9 + 0x18));
            if (iVar2 == 0) goto LAB_82984c30;
          }
          else if (iVar3 != iVar2) {
            uVar4 = (uint)LZCOUNT(iVar2 + -0x2f) >> 5;
            goto LAB_82984ef8;
          }
        }
      }
LAB_82984f00:
      uVar8 = 0xffffffff82196582;
      goto LAB_82984c38;
    }
    uVar5 = (longlong)*(int *)(puVar6 + 0x20) * (longlong)*(int *)(puVar6 + 0x1c);
    if ((uVar5 & 0xffffffff) <=
        ((longlong)*(int *)(puVar9 + 0x20) * (longlong)*(int *)(puVar9 + 0x1c) & 0xffffffffU)) {
      uVar7 = 0;
      if ((uVar5 & 0xffffffff) != 0) {
        do {
          iVar2 = fn_82981C40(param_1,param_4,uVar7,auStack_2b0);
          if (((iVar2 < 0) || (iVar2 = fn_82981C40(param_1,param_5,uVar7,auStack_280), iVar2 < 0))
             || (iVar2 = fn_829846B0(param_1,auStack_2b0,auStack_280,1), iVar2 == 0))
          goto LAB_82984c30;
          uVar7 = uVar7 + 1;
        } while ((uVar7 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      uVar4 = 1;
LAB_82984ef8:
      bVar1 = uVar4 == 0;
LAB_82984efc:
      if (!bVar1) goto LAB_82984f00;
    }
  }
LAB_82984c30:
  uVar8 = 0xffffffff8204e384;
LAB_82984c38:
  fn_82981820(param_1,auStack_250,0xff,param_4);
  fn_82981820(param_1,auStack_150,0xff,param_5);
  if ((param_3 & 0xffffffff) == 0) {
    fn_82980C18(param_1,param_2,0xbc9,0xffffffff8204e360,uVar8,auStack_150,auStack_250);
  }
  else {
    fn_82980C18(param_1,param_2,0xbc9,0xffffffff8204e334,param_3,uVar8,auStack_150,auStack_250);
  }
  return;
}

