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
extern int fn_829F5368();
extern int fn_829F5370();
extern int fn_829F65B8();
extern int fn_829F6608();
extern int fn_829F67E0();
extern int fn_829F6FE0();
extern int fn_829F77B0();
extern unsigned int *lbl_83218C44;


undefined8 fn_829F7980(double param_1,double param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 in_r8;
  undefined1 in_vs32 [16];
  undefined1 in_vs61 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  
  piVar2 = lbl_83218C44;
  if (param_3 == 0) {
    lbl_83218C44 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      fn_829F65B8(piVar2);
      fn_829F5370(piVar2);
    }
  }
  else {
    if (lbl_83218C44 == (int *)0x0) {
      iVar3 = fn_829F5368(0x1a960);
      if (iVar3 == 0) {
        lbl_83218C44 = (int *)0x0;
        return 8;
      }
      lbl_83218C44 = (int *)fn_829F6FE0();
      if (lbl_83218C44 == (int *)0x0) {
        return 8;
      }
    }
    *lbl_83218C44 = param_3;
    puVar1 = (undefined4 *)((uint)(lbl_83218C44 + 0x4b08) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    altv207_13(in_vs32,in_vs61);
    puVar1 = (undefined4 *)((uint)(lbl_83218C44 + 0x4b0c) & 0xfffffff0);
    *puVar1 = in_register_000103f0;
    puVar1[1] = in_register_000103f4;
    puVar1[2] = in_register_000103f8;
    puVar1[3] = in_vr63;
    piVar2 = lbl_83218C44;
    lbl_83218C44[0x4b10] = (int)(float)param_1;
    piVar2[0x4b11] = (int)(float)param_2;
    fn_829F6608();
    iVar3 = fn_829F67E0(lbl_83218C44);
    if (iVar3 != 0) {
      fn_829F77B0(lbl_83218C44,in_r8);
    }
  }
  return 0;
}

