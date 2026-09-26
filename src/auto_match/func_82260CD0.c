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
extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82E1CD08();
extern unsigned int lbl_832660F8;
extern unsigned int lbl_832660FC;
extern unsigned int lbl_832760AA;
extern unsigned int lbl_832760AB;
extern unsigned int lbl_832760B8;
extern unsigned int lbl_832760BC;


void fn_82260CD0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 == '\0') {
    lbl_832760AA = 1;
    lbl_832760AB = 0;
    lbl_832760B8 = lbl_832660F8;
    lbl_832760BC = lbl_832660FC;
    return;
  }
  if (param_1 == 2) {
    iVar2 = fn_8225FDE0(0x23,1);
    if (iVar2 != 0) {
      lbl_832760AA = 1;
      lbl_832760AB = 0;
      lbl_832760B8 = lbl_832660F8;
      lbl_832760BC = lbl_832660FC;
      return;
    }
    cVar3 = fn_82E1CAD0(0x23);
    if (cVar3 != '\0') goto LAB_82260ddc;
  }
  if (param_1 == 3) {
    iVar2 = fn_8225FDE0(0x25,1);
    if (iVar2 != 0) {
      lbl_832760AA = 1;
      lbl_832760AB = 0;
      lbl_832760B8 = lbl_832660F8;
      lbl_832760BC = lbl_832660FC;
      return;
    }
    cVar3 = fn_82E1CAD0(0x25);
    if (cVar3 != '\0') goto LAB_82260ddc;
  }
  if (param_1 == 4) {
    iVar2 = fn_8225FDE0(0x27,1);
    if (iVar2 != 0) {
      lbl_832760AA = 1;
      lbl_832760AB = 0;
      lbl_832760B8 = lbl_832660F8;
      lbl_832760BC = lbl_832660FC;
      return;
    }
    cVar3 = fn_82E1CAD0(0x27);
    if (cVar3 != '\0') goto LAB_82260ddc;
  }
  if (param_1 == 0) {
    iVar2 = fn_8225FDE0(0x24,1);
    if (iVar2 != 0) {
      lbl_832760AA = 1;
      lbl_832760AB = 0;
      lbl_832760B8 = lbl_832660F8;
      lbl_832760BC = lbl_832660FC;
      return;
    }
    cVar3 = fn_82E1CAD0(0x24);
    if (cVar3 != '\0') goto LAB_82260ddc;
  }
  if (param_1 != 1) {
    lbl_832760AA = 1;
    lbl_832760AB = 0;
    lbl_832760B8 = lbl_832660F8;
    lbl_832760BC = lbl_832660FC;
    return;
  }
  iVar2 = fn_8225FDE0(0x26,1);
  if (iVar2 != 0) {
    lbl_832760AA = 1;
    lbl_832760AB = 0;
    lbl_832760B8 = lbl_832660F8;
    lbl_832760BC = lbl_832660FC;
    return;
  }
  cVar3 = fn_82E1CAD0(0x26);
  if (cVar3 == '\0') {
    lbl_832760AA = 1;
    lbl_832760AB = 0;
    lbl_832760B8 = lbl_832660F8;
    lbl_832760BC = lbl_832660FC;
    return;
  }
LAB_82260ddc:
  fn_82E1CD08();
  fn_82E1CB88(0xffffffff821a6d6c,param_2);
  fn_82E1CB88(0xffffffff821a6b8c,param_3);
  fn_82E1CB88(0xffffffff821a685c,param_4);
  fn_82E1CB88(0xffffffff821a6868,param_5);
  fn_82E1CCA8();
  lbl_832760AA = 1;
  lbl_832760AB = 0;
  lbl_832760B8 = lbl_832660F8;
  lbl_832760BC = lbl_832660FC;
  return;
}

