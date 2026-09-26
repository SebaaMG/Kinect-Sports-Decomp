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
extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_824C04E0();
extern int fn_82511928();
extern int fn_82513728();
extern int fn_82522588();
extern int fn_8288A348();
extern int fn_8288A398();
extern int fn_828ACC40();
extern int fn_828ACCE8();
extern int fn_828AD0F8();
extern int fn_828AD188();
extern int fn_828ADFE8();
extern unsigned int iStack_64;
extern unsigned int iStack_70;
extern unsigned int lbl_83297810;
extern unsigned int uStack_6c;


void fn_824C3B98(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar5;
  undefined8 uVar4;
  char cVar6;
  int *piVar7;
  int *piVar8;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar7 = (int *)(iVar1 + 0x68);
  if (*(int *)(iVar1 + 0x68) != 0) {
    iVar5 = *(int *)(*(int *)(iVar1 + 0x68) + 0x70);
    iVar2 = *(int *)(iVar5 + 0x7c);
    if (((iVar2 < 1) || (iVar2 < 4)) || (iVar2 != 4)) {
      bVar3 = false;
    }
    else {
      bVar3 = *(int *)(iVar5 + 0x80) == 1;
    }
    if (bVar3) {
      piVar8 = (int *)(iVar1 + 0x48);
      if (*(int *)(iVar1 + 0x48) == 0) {
        iVar5 = lbl_83297810;
        if (lbl_83297810 == 0) {
          iVar5 = fn_82511928();
        }
        if (*(int *)(iVar5 + 0x28) == 0) {
          iVar5 = lbl_83297810;
          if (lbl_83297810 == 0) {
            iVar5 = fn_82511928();
          }
          uVar4 = fn_82513728(auStack_68,iVar5,*(undefined4 *)(iVar1 + 0x50));
          fn_82522588(&iStack_70,uVar4);
          iVar5 = *(int *)(iVar1 + 0x4c);
          *(undefined4 *)(iVar1 + 0x4c) = uStack_6c;
          *piVar8 = iStack_70;
          if (iVar5 != 0) {
            fn_822315A0();
          }
          if (iStack_64 != 0) {
            fn_822315A0();
          }
        }
      }
      if (*piVar8 == 0) {
        return;
      }
      iVar5 = *(int *)(*piVar8 + 8);
      if (*(int *)(iVar5 + 0xa0) == 0) {
        fn_8288A398();
        cVar6 = fn_8288A348();
        if (cVar6 != '\0') {
          fn_828AD188(iVar5);
        }
      }
      cVar6 = fn_828AD0F8(iVar5);
      if (cVar6 == '\0') {
        return;
      }
      cVar6 = fn_828ACC40(iVar5);
      if (cVar6 != '\0') {
        if ((*(int *)(iVar5 + 0xb4) == 1) && (*(char *)(*(int *)(*piVar7 + 0x70) + 0x58) != '\0')) {
          fn_828ADFE8(iVar5,piVar7,*(undefined4 *)(*piVar7 + 0x78),1,1,0,
                            *(undefined1 *)(*piVar8 + 0x10),*(undefined1 *)(*piVar8 + 0x11));
        }
        else {
          *(undefined4 *)(iVar1 + 0x44) = 2;
          iVar2 = *(int *)(iVar1 + 0x6c);
          *(undefined4 *)(iVar1 + 0x6c) = 0;
          *piVar7 = 0;
          if (iVar2 != 0) {
            fn_822315A0();
          }
          fn_824C04E0(iVar1,1);
        }
      }
      cVar6 = fn_828ACCE8(iVar5);
      if (cVar6 == '\0') {
        return;
      }
      if ((*piVar8 == 0) || (bVar3 = true, *(uint *)(*(int *)(*piVar8 + 8) + 0x204) < 2)) {
        bVar3 = false;
      }
      if (!bVar3) {
        return;
      }
      uVar4 = 6;
      goto LAB_824c3e08;
    }
  }
  *(undefined4 *)(iVar1 + 0x44) = 2;
  iVar5 = *(int *)(iVar1 + 0x6c);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *piVar7 = 0;
  if (iVar5 != 0) {
    fn_822315A0();
  }
  uVar4 = 1;
LAB_824c3e08:
  fn_824C04E0(iVar1,uVar4);
  return;
}

