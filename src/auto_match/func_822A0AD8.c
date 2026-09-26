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
extern unsigned int *auStack_1030;
extern unsigned int *auStack_1830;
extern unsigned int *auStack_830;
extern int fn_82299AC8();
extern int fn_82299D40();
extern int fn_82358FD8();
extern unsigned int lbl_82193880;
extern unsigned int lbl_82193898;


void fn_822A0AD8(double param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_1830 [2048];
  undefined1 auStack_1030 [2048];
  undefined1 auStack_830 [2096];
  
  if (param_3 == 0) {
    fn_82358FD8(*(undefined4 *)(param_2 + 0x1c),auStack_830,0x400,
                      lbl_82193880);
    iVar1 = *(int *)(param_2 + 0x3c);
    if (*(int *)(iVar1 + 0x1220) != 0) {
      return;
    }
    fn_82299AC8(iVar1,auStack_830);
  }
  else {
    if (5 < param_3) {
      return;
    }
    fn_82358FD8(*(undefined4 *)(param_2 + 0x1c),auStack_1830,0x400,
                      (&lbl_82193880)[param_3]);
    fn_82358FD8(*(undefined4 *)(param_2 + 0x1c),auStack_1030,0x400,
                      (&lbl_82193898)[param_3]);
    if ((param_3 == 1) || (param_3 == 2)) {
      iVar1 = *(int *)(param_2 + 0x3c);
    }
    else {
      iVar1 = *(int *)(param_2 + 0x40);
    }
    if (*(int *)(iVar1 + 0x1220) != 0) {
      return;
    }
    fn_82299D40(iVar1,auStack_1830,auStack_1030);
  }
  *(float *)(iVar1 + 0x121c) = (float)param_1;
  return;
}

