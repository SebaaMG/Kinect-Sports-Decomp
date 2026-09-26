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
extern unsigned int *auStack_b0;
extern int fn_8226B6A8();
extern int fn_82270B70();
extern int fn_82271378();
extern int fn_822715B0();
extern int fn_82272008();
extern int fn_822720D8();
extern int fn_82272268();
extern int fn_822724D0();
extern int fn_82272608();
extern int fn_82272770();
extern int fn_82272BA0();
extern int fn_82275128();
extern int fn_8228C2C8();
extern int fn_822A85C8();
extern int fn_8266F580();
extern int fn_827EF828();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_82F68CC0();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821954C8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8326B394;
extern unsigned int lbl_8327F894;


void fn_8226D970(void)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auStack_b0 [176];
  
  piVar5 = (int *)fn_82270B70();
  if (piVar5[0x27] != 0) {
    return;
  }
  uVar6 = piVar5[0x28];
  piVar5[0x27] = 1;
  bVar4 = true;
  dVar9 = (double)lbl_8327F894;
  piVar5[0x18] = (int)lbl_8327F894;
  piVar5[0x1a] = (int)(float)((double)(float)piVar5[0x1a] + dVar9);
  piVar5[0x19] = piVar5[0x19] + 1U & 3;
  if (uVar6 == 0) {
    uVar6 = fn_82272008(piVar5);
  }
  else {
    if (uVar6 != 1) {
      bVar3 = bVar4;
      if (uVar6 < 3) {
        uVar6 = fn_822720D8(piVar5);
      }
      else if (uVar6 == 3) {
        uVar6 = fn_822724D0(piVar5);
      }
      else if (uVar6 < 5) {
        uVar6 = fn_82272608(piVar5);
      }
      else {
        bVar3 = true;
        if (uVar6 == 5) {
          uVar6 = fn_82272770();
          bVar3 = bVar4;
        }
      }
      goto LAB_8226da44;
    }
    uVar6 = fn_82272268(piVar5);
  }
  bVar3 = false;
LAB_8226da44:
  fn_822715B0(dVar9,piVar5);
  if (uVar6 == piVar5[0x28]) {
    piVar5[0x26] = 0;
  }
  else {
    piVar5[0x28] = uVar6;
    piVar5[0x26] = 1;
    piVar5[0x1a] = lbl_821CC160;
  }
  fn_82271378(dVar9,piVar5);
  fn_822A85C8(dVar9,piVar5[0x17]);
  if (piVar5[0x28] != 0) {
    fn_8226B6A8(dVar9,piVar5[0x13]);
    uVar8 = (ulonglong)(uint)piVar5[0x15];
    if (uVar8 != 0) {
      fn_82272BA0(auStack_b0);
      fn_82F68CC0(uVar8 + 0x38,auStack_b0,0x70);
    }
    if (piVar5[0x15] != 0) {
      *(ulonglong *)(piVar5[0x15] + 0xa8) = CONCAT44(lbl_821954C8,lbl_821954C8);
    }
    fn_827EF828(dVar9,piVar5[0x16]);
    fn_827EFFE8(piVar5[0x16]);
    fn_827F0180(piVar5[0x16],**(undefined4 **)((piVar5[0x19] + 0x20) * 4 + *piVar5),1,0,0);
  }
  if ((piVar5[0x28] != 0) &&
     (((*(int *)piVar5[0x90] == 2 || (*(int *)piVar5[0x90] == 3)) &&
      (iVar7 = fn_82275128(), *(float *)(iVar7 + 0xc) < lbl_821917B4)))) {
    *(float *)(iVar7 + 0xc) = lbl_821917B4;
  }
  piVar1 = (int *)piVar5[0x2a];
  piVar2 = (int *)*piVar1;
  do {
    if (piVar1 == piVar2) {
LAB_8226dc08:
      if (((piVar5[0x43] != 0) && (piVar5[0x41] != 0)) &&
         (iVar7 = fn_8266F580(*(undefined4 *)(piVar5[0x41] + 8)), iVar7 != 0)) {
        piVar5[0x43] = 0;
        iVar7 = fn_8266F580(*(undefined4 *)(piVar5[0x41] + 8));
        if (iVar7 == 0) {
          *(undefined4 *)(piVar5[1] + 0x1a4) = lbl_8326B394;
        }
        else {
          *(int *)(piVar5[1] + 0x1a4) = iVar7;
        }
      }
      piVar5[0x27] = 0;
      return;
    }
    iVar7 = piVar1[1];
    if (*(int *)(iVar7 + 0x10b4) == 0) {
      if ((piVar5[0x25] != 0) && (bVar3)) {
        piVar5[0x25] = 0;
        if (piVar5[0x44] != 0) {
          fn_8228C2C8(piVar5[0x44],iVar7 + 0x34);
        }
        if (piVar5[0x46] != 0) {
          fn_8228C2C8(piVar5[0x46],iVar7 + 0x834);
        }
      }
      if (*(int **)(iVar7 + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 0xc) + 4))(dVar9);
        goto LAB_8226dc08;
      }
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}

