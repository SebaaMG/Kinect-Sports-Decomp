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
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_82306238();
extern int fn_82531F18();
extern unsigned int lbl_82191F78;
extern int (*lbl_83276798)();


void fn_82306308(uint param_1)

{
  undefined4 *puVar1;
  undefined8 in_r0;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int aiStack_70 [2];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [80];
  
  if (lbl_83276798 == (code *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (*lbl_83276798)();
  }
  if ((-(uint)(lVar2 != 0) & param_1) == 0) {
    fn_82306238();
  }
  else {
    uVar4 = 0;
    dVar5 = (double)lbl_82191F78;
    do {
      uVar9 = in_vr1;
      uVar8 = in_register_00010018;
      uVar7 = in_register_00010014;
      uVar6 = in_register_00010010;
      fn_82306238();
      puVar1 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
      *puVar1 = in_register_00010010;
      puVar1[1] = in_register_00010014;
      puVar1[2] = in_register_00010018;
      puVar1[3] = in_vr1;
      in_vr1 = uVar9;
      in_register_00010018 = uVar8;
      in_register_00010014 = uVar7;
      in_register_00010010 = uVar6;
      iVar3 = fn_82531F18(dVar5,dVar5,auStack_60,auStack_68,aiStack_70);
      if ((iVar3 != 0) && (aiStack_70[0] == 1)) {
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x14);
  }
  return;
}

