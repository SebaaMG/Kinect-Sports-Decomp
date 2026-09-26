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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_88;
extern unsigned int *auStack_a0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829AB1D8();
extern int fn_829AB378();
extern int fn_829AE248();
extern int fn_829AE308();
extern int fn_829AE470();
extern int fn_829AE788();
extern int fn_829AEC60();
extern int fn_829AEE18();
extern int fn_829AEEC0();
extern int fn_829AEEE8();
extern int fn_829AEF08();
extern int fn_829AEF28();
extern int fn_829AEF68();
extern int fn_829AEFA8();
extern int fn_829AF0B8();
extern int fn_829AF0C8();
extern int fn_829AF0E8();
extern int fn_829AF140();
extern int fn_829AF2F0();
extern int fn_829AF330();
extern int fn_829B0F58();
extern int fn_82F6C150();
extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_bc;
extern unsigned int lbl_28280086;
extern unsigned int lbl_8202E4C0;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_8c;
extern unsigned int uStack_a4;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_8291F2D0(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  char cVar8;
  undefined8 uVar9;
  uint *puStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  uint uStack_c0;
  int iStack_bc;
  uint uStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  uint auStack_a0 [5];
  undefined4 uStack_8c;
  undefined8 auStack_88 [17];
  
  uStack0000001c = (undefined4)param_2;
  uStack_c0 = 0;
  iStack_bc = 0;
  iStack_b4 = 0;
  iStack_a8 = 0;
  puStack00000014 = param_1;
  uStack00000024 = param_3;
  iVar2 = fn_829AB1D8(param_2,0);
  if (iVar2 != 0) {
    return 0xffffffff80004005;
  }
  uStack_c0 = fn_829AE308(0xffffffff8202e4c8,0,0xffffffff8291c8b8,0xffffffff82ba02a8);
  iVar2 = 0;
  if ((uStack_c0 == 0) || (iStack_bc = fn_829AB378(), iStack_bc == 0)) goto LAB_8291f78c;
  iVar2 = fn_82F6C150(uStack_c0);
  if (iVar2 == 0) {
    auStack_a0[4] = uStack0000001c;
    uStack_8c = uStack00000024;
    fn_829B0F58(uStack_c0,auStack_a0 + 4,0xffffffff8291c858);
    fn_829AE470(uStack_c0,iStack_bc);
    fn_829AEFA8(uStack_c0,iStack_bc,auStack_a0,&uStack_b8,&iStack_b0,&iStack_ac,0,0);
    puVar1 = puStack00000014;
    if (iStack_ac == 0) {
      *puStack00000014 = 0x28000002;
    }
    else if (iStack_ac == 2) {
      iStack_a8 = 1;
      *puStack00000014 = (uint)&lbl_28280086;
    }
    else if (iStack_ac == 4) {
      *puStack00000014 = 0x800004a;
    }
    else {
      if (iStack_ac != 6) goto LAB_8291f6b8;
      *puStack00000014 = 0x18280086;
    }
    if (iStack_b0 == 0x10) {
      fn_829AF0C8(uStack_c0);
      uVar3 = *puVar1 & 0xfffffe3f;
      if (uVar3 == 0x800000a) {
        *puVar1 = 0x36314c41;
      }
      else if (uVar3 == 0x18280006) {
        *puVar1 = 0x1a20005a;
      }
      else if (uVar3 == 0x28000002) {
        *puVar1 = 0x28000058;
      }
      else {
        if (uVar3 != 0x28280006) goto LAB_8291f6b8;
        *puVar1 = 0x36315220;
      }
    }
    if (iStack_b0 < 8) {
      fn_829AF0E8(uStack_c0);
    }
    if ((iStack_ac == 0) && (iStack_b0 < 8)) {
      fn_829AF330(uStack_c0);
    }
    iVar2 = fn_829AEF68(uStack_c0,iStack_bc,&uStack_a4);
    if (iVar2 == 0) {
      iVar2 = fn_829AEF28(uStack_c0,iStack_bc,auStack_88);
      if (iVar2 != 0) {
        fn_829AF2F0(lbl_8202E4C0,auStack_88[0],uStack_c0);
      }
    }
    else {
      fn_829AE248(uStack_c0,iStack_bc,uStack_a4);
    }
    iVar2 = fn_829AEEC0(uStack_c0,iStack_bc,0x10);
    if (iVar2 != 0) {
      fn_829AF330(uStack_c0);
      uVar7 = (CONCAT44(*puVar1,*puVar1) & 0xfffffffffffffe3f) - 0x28000002;
      if (uVar7 == 0) {
        *puVar1 = 0x800004a;
      }
      else if ((uVar7 & 0xffffffff) == 0x16) {
        *puVar1 = 0x36314c41;
      }
      else if ((uVar7 & 0xffffffff) == 0x280004) {
        *puVar1 = 0x18280086;
      }
      else if ((uVar7 & 0xffffffff) == 0xe31521e) {
        *puVar1 = 0x1a20005a;
      }
    }
    iVar2 = iStack_a8;
    if (((iStack_a8 != 0) || ((*puVar1 & 0xfffffe3f) == 0x36315220)) ||
       ((*puVar1 & 0xfffffe3f) == 0x18280006)) {
      fn_829AF0B8(uStack_c0);
    }
    if (iVar2 != 0) {
      fn_829AF140(uStack_c0,0xff,1);
      *puVar1 = (uint)&lbl_28280086;
    }
    fn_829AE788(uStack_c0,iStack_bc);
    uVar3 = *puVar1;
    uVar7 = CONCAT44(uVar3,uVar3) & 0xfffffffffffffe3f;
    iVar2 = (int)uVar7;
    if (iVar2 < 0x28000019) {
      if (iVar2 != 0x28000018) {
        if (iVar2 == 0x800000a) {
LAB_8291f668:
          cVar8 = '\x02';
          goto LAB_8291f6a0;
        }
        if ((iVar2 == 0x18280006) || (iVar2 == 0x1a20001a)) goto LAB_8291f69c;
        if (iVar2 != 0x28000002) goto LAB_8291f68c;
      }
      cVar8 = '\x01';
    }
    else if ((uVar3 & 0xfffffe3f) == 0x28280006) {
LAB_8291f69c:
      cVar8 = '\x04';
    }
    else {
      uVar7 = uVar7 - 0x36314c01;
      if (uVar7 == 0) goto LAB_8291f668;
      if ((uVar7 & 0xffffffff) == 0x61f) {
        cVar8 = '\x03';
      }
      else {
LAB_8291f68c:
        cVar8 = '\0';
      }
    }
LAB_8291f6a0:
    cVar4 = fn_829AEF08(uStack_c0,iStack_bc);
    if (cVar8 == cVar4) {
      puVar1[5] = 1;
      puVar1[3] = auStack_a0[0];
      puVar1[4] = uStack_b8;
      uVar3 = fn_829AEEE8(uStack_c0,iStack_bc);
      puVar1[0xd] = 0;
      puVar1[0xc] = uVar3;
      iVar2 = iStack_b4;
      if (puVar1[0x10] == 0) {
LAB_8291f79c:
        uVar9 = 0;
      }
      else {
        auStack_a0[1] = 0x24810000;
        uVar3 = fn_8265C940((longlong)(int)uVar3 * (longlong)(int)uStack_b8,0x24810000);
        puVar1[1] = uVar3;
        iVar2 = iStack_b4;
        if (uVar3 != 0) {
          puVar1[0xe] = 1;
          auStack_a0[2] = 0x24810000;
          iVar2 = fn_8265C940(uStack_b8 << 2,0x24810000);
          iStack_b4 = iVar2;
          if (iVar2 != 0) {
            uVar3 = 0;
            if (uStack_b8 != 0) {
              piVar6 = (int *)(iVar2 + -4);
              do {
                iVar5 = puVar1[0xc] * uVar3;
                uVar3 = uVar3 + 1;
                piVar6 = piVar6 + 1;
                *piVar6 = iVar5 + puVar1[1];
              } while (uVar3 < uStack_b8);
            }
            fn_829AEC60(uStack_c0,iVar2);
            goto LAB_8291f79c;
          }
        }
LAB_8291f78c:
        uVar9 = 0xffffffff8007000e;
      }
      goto LAB_8291f7a0;
    }
  }
LAB_8291f6b8:
  uVar9 = 0xffffffff80004005;
  iVar2 = iStack_b4;
LAB_8291f7a0:
  if (uStack_c0 != 0) {
    fn_829AEE18(&uStack_c0,&iStack_bc,0);
  }
  if (iVar2 != 0) {
    auStack_a0[3] = 0x24810000;
    fn_8265C990(iVar2,0x24810000);
  }
  return uVar9;
}

