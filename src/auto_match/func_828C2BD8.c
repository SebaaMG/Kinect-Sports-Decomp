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
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82516FD8();
extern int fn_825174B8();
extern int fn_82517930();
extern int fn_82517978();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828C2308();
extern int fn_828C2670();
extern int fn_828C4240();
extern int fn_828ED480();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


longlong fn_828C2BD8(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  char cVar8;
  undefined8 uVar7;
  bool bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  int iStack_44;
  
  fn_828C2308(&iStack_70,param_1 + 0xd8);
  if (iStack_70 == *(int *)(param_1 + 0xdc)) {
    iStack_70 = 0;
    iStack_6c = 0;
  }
  else {
    puVar4 = (undefined4 *)(iStack_70 + 0x2c);
    puVar5 = (undefined4 *)(iStack_70 + 0x28);
    iStack_70 = 0;
    iStack_6c = 0;
    fn_82517978(&iStack_70,*puVar5,*puVar4,0);
  }
  iVar6 = iStack_6c;
  iVar1 = *(int *)(iStack_70 + 8);
  fn_828C2670(&iStack_68,iStack_70,param_4);
  iVar2 = *(int *)(iStack_68 + 4);
  if ((*(int *)(param_1 + 0x8c) == 0) ||
     (((cVar8 = fn_828AD0F8(param_1), cVar8 == '\0' &&
       (cVar8 = fn_828AD488(param_1), cVar8 == '\0')) &&
      (cVar8 = fn_828C4240(param_1), cVar8 == '\0')))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((!bVar9) || (lVar12 = 1, 3 < param_2)) {
    lVar12 = 0;
  }
  if (lVar12 != 0) {
    bVar9 = false;
    iVar10 = param_2 * 0x10 + param_1;
    uVar13 = 0;
    uVar3 = *(int *)(iVar10 + 0x10c) - *(int *)(iVar10 + 0x108) >> 4;
    if (uVar3 != 0) {
      iVar11 = 0;
      do {
        iVar14 = *(int *)(iVar10 + 0x108);
        if (*(int *)(*(int *)(iVar11 + iVar14) + 8) == iVar1) {
          if (uVar13 != 0xffffffff) {
            iVar14 = uVar13 * 0x10 + iVar14;
            if (*(int *)(*(int *)(iVar14 + 8) + 4) == iVar2) goto LAB_828c2dc8;
            uVar7 = fn_825174B8(auStack_50,&iStack_70,&iStack_68);
            fn_82517930(iVar14,uVar7);
            if (iStack_44 != 0) {
              fn_822315A0();
            }
            goto LAB_828c2db8;
          }
          break;
        }
        uVar13 = uVar13 + 1;
        iVar11 = iVar11 + 0x10;
      } while (uVar13 < uVar3);
    }
    uVar7 = fn_825174B8(auStack_60,&iStack_70,&iStack_68);
    fn_82516FD8((int *)(iVar10 + 0x108),uVar7);
    iStack_4c = iStack_5c;
    if (iStack_54 != 0) {
      fn_822315A0();
      iStack_4c = iStack_5c;
    }
LAB_828c2db8:
    if (iStack_4c != 0) {
      fn_822315A0();
    }
    bVar9 = true;
LAB_828c2dc8:
    if (bVar9) {
      fn_828ED480(*(undefined4 *)(param_1 + 0x8c),param_2,iVar1,iVar2);
    }
  }
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  if (iVar6 != 0) {
    fn_822315A0(iVar6);
  }
  return lVar12;
}

