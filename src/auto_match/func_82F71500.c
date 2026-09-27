extern char *pcRam83263404;
extern char *pcRam83263408;
extern char *pcRam83263410;
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
extern int _invalid_parameter_noinfo();
extern int _errno();
extern int fn_82F6CDE8();
extern int _getptd_noexit();
extern int fn_82F717A8();
extern int _lock();
extern unsigned int iStack00000014;
extern unsigned int iStack_48;
extern unsigned int lbl_8216AA70;
extern unsigned int lbl_8216AA74;
extern unsigned int lbl_8216AA7C;
extern unsigned int lbl_8326340C;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82F71500(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int iStack00000014;
  int iStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;

  bVar2 = false;
  iStack_48 = 0;
  iStack00000014 = param_1;
  if (param_1 < 0xc) {
    if (param_1 != 0xb) {
      if (param_1 == 2) {
        puVar3 = (undefined4 *)0x83263404;
        pcVar5 = pcRam83263404;
        goto LAB_82f71640;
      }
      if (param_1 != 4) {
        if (param_1 == 6) goto LAB_82f71608;
        if (param_1 != 8) goto LAB_82f715f4;
      }
    }
    iStack_48 = _getptd_noexit();
    if (iStack_48 == 0) {
      return 0xffffffffffffffff;
    }
    uVar1 = *(uint *)(iStack_48 + 0x5c);
    uVar4 = uVar1;
    do {
      if (*(int *)(uVar4 + 4) == param_1) break;
      uVar4 = uVar4 + 0xc;
    } while (uVar4 < lbl_8216AA7C * 0xc + uVar1);
    if ((lbl_8216AA7C * 0xc + uVar1 <= uVar4) || (*(int *)(uVar4 + 4) != param_1)) {
      uVar4 = 0;
    }
    puVar3 = (undefined4 *)(uVar4 + 8);
    pcVar5 = *(code **)(uVar4 + 8);
  }
  else {
    if (param_1 == 0xf) {
      puVar3 = (undefined4 *)0x83263410;
      pcVar5 = pcRam83263410;
    }
    else if (param_1 == 0x15) {
      puVar3 = (undefined4 *)0x83263408;
      pcVar5 = pcRam83263408;
    }
    else {
      if (param_1 != 0x16) {
LAB_82f715f4:
        puVar3 = (undefined4 *)_errno();
        *puVar3 = 0x16;
        _invalid_parameter_noinfo();
        return 0xffffffffffffffff;
      }
LAB_82f71608:
      puVar3 = &lbl_8326340C;
      pcVar5 = lbl_8326340C;
    }
LAB_82f71640:
    bVar2 = true;
  }
  if (pcVar5 == (code *)0x1) {
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
    fn_82F6CDE8(3);
  }
  if (bVar2) {
    _lock(0);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    uStack_40 = *(undefined4 *)(iStack_48 + 0x60);
    *(undefined4 *)(iStack_48 + 0x60) = 0;
    if (param_1 == 8) {
      uStack_3c = *(undefined4 *)(iStack_48 + 100);
      *(undefined4 *)(iStack_48 + 100) = 0x8c;
      goto LAB_82f716b8;
    }
  }
  else {
LAB_82f716b8:
    iVar6 = lbl_8216AA70;
    if (param_1 == 8) {
      for (; iVar6 < lbl_8216AA74 + lbl_8216AA70; iVar6 = iVar6 + 1) {
        *(undefined4 *)(iVar6 * 0xc + *(int *)(iStack_48 + 0x5c) + 8) = 0;
      }
      goto LAB_82f7170c;
    }
  }
  *puVar3 = 0;
LAB_82f7170c:
  fn_82F717A8();
  iVar6 = iStack00000014;
  if (iStack00000014 == 8) {
    (*pcVar5)(8,*(undefined4 *)(iStack_48 + 100));
  }
  else {
    (*pcVar5)(iStack00000014);
    if ((iVar6 != 0xb) && (iVar6 != 4)) {
      return 0;
    }
  }
  *(undefined4 *)(iStack_48 + 0x60) = uStack_40;
  if (iVar6 == 8) {
    *(undefined4 *)(iStack_48 + 100) = uStack_3c;
  }
  return 0;
}
