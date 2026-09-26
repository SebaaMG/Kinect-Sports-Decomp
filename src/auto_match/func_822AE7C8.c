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
extern unsigned int fStack_4c;
extern int fn_822315A0();
extern int fn_822477C0();
extern int fn_82250A18();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_8251FBA8();
extern int fn_82522588();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;
extern unsigned int lbl_83297810;
extern unsigned int uStack_40;


longlong fn_822AE7C8(int param_1,float param_2,int param_3)

{
  uint uVar1;
  int iVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  
  iStack_50 = 0;
  fStack_4c = 1.4013e-45;
  uVar5 = 0xffffffffffffffff;
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if (*(char *)(iVar3 + 4) != '\0') {
    uVar4 = (ulonglong)lbl_83297810;
    if (uVar4 == 0) {
      uVar4 = fn_82511928();
    }
    fn_825138E0(&uStack_40,uVar4,1);
    fn_82522588(&iStack_48,&uStack_40);
    if ((*(int *)(iStack_48 + 0x38) != 0) &&
       (uVar5 = fn_822477C0(*(int *)(iStack_48 + 0x38),*(undefined4 *)(param_1 + 0x124),
                                  &iStack_50,&fStack_4c), -1 < (longlong)uVar5)) {
      param_3 = iStack_50;
      param_2 = fStack_4c;
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
    if ((((U64)(uStack_40) >> 32) & 0xFFFFFFFF) != 0) {
      fn_822315A0();
    }
  }
  if (param_3 == 0) {
    if (param_2 == 0.0) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x18);
    }
    else if (param_2 == 1.4013e-45) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x20);
    }
    else if ((uint)param_2 < 3) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x28);
    }
    else {
      if (param_2 != 4.2039e-45) {
        return 0;
      }
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x30);
    }
  }
  else if (param_2 == 0.0) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x14);
  }
  else if (param_2 == 1.4013e-45) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x1c);
  }
  else if ((uint)param_2 < 3) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x24);
  }
  else {
    if (param_2 != 4.2039e-45) {
      return 0;
    }
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x2c);
  }
  if (uVar4 == 0) {
    return 0;
  }
  uVar2 = fn_8251FBA8(uVar4);
  iVar6 = (int)((uVar2 & 0xffffffff) / 0x24);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fStack_4c = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
  uVar1 = (uint)((fStack_4c - lbl_821CA460) * (float)(longlong)iVar6);
  uStack_40 = (longlong)(int)uVar1;
  uVar2 = (ulonglong)uVar1;
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if (((*(char *)(iVar3 + 4) != '\0') && (-1 < (int)uVar5)) && ((int)uVar5 < iVar6)) {
    uVar2 = uVar5;
  }
  return uVar2 * 0x24 + uVar4;
}

