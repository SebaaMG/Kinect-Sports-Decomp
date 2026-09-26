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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_8306ED08();
extern int fn_8306ED98();
extern int fn_8306EDB0();
extern int fn_83075D30();
extern int fn_83075D40();
extern int fn_83075D90();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82021538;
extern unsigned int lbl_8207F4E8;
extern unsigned int lbl_82186DD0;
extern unsigned int lbl_821AAD20;


void fn_83073720(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  fn_82F6A544();
  puVar2 = &lbl_82186DD0;
  dVar7 = (double)lbl_8207F4E8;
  dVar6 = (double)lbl_82021538;
  lVar1 = 2;
  dVar5 = (double)lbl_821AAD20;
  dVar8 = (double)lbl_82002C5C;
  do {
    dVar3 = (double)fn_83075D40(param_2,*puVar2);
    dVar4 = (double)fn_83075D40(param_2,puVar2[-1]);
    if ((dVar3 < dVar8) || (dVar4 < dVar8)) {
      fn_83075D30(auStack_80,param_2,puVar2[1]);
      fn_83075D30(auStack_90,param_2,*puVar2);
      fn_83075D30(auStack_70,param_2,puVar2[-1]);
      altv207_13(in_vs32,in_vs43);
      altv207_13(in_vs32,in_vs42);
      fn_8306EDB0();
      altv207_13(in_vs32,in_vs43);
      altv207_13(in_vs32,in_vs42);
      fn_8306EDB0();
      dVar3 = (double)fn_8306ED98();
      fn_8306ED08();
      dVar4 = (double)fn_8306ED98();
      if ((dVar6 < dVar3) && (dVar4 < dVar8)) {
        fn_83075D90(dVar7,param_2,*puVar2);
        fn_83075D90(dVar7,param_2,puVar2[-1]);
        fn_83075D90(dVar5,param_2,puVar2[-2]);
      }
    }
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 9;
  } while (lVar1 != 0);
  fn_82F6A590();
  return;
}

