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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229AE10();
extern int fn_8266F600();
extern int fn_82672C20();
extern unsigned int iStack_c4;
extern unsigned int uStack_68;


void fn_82292100(undefined8 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                  ulonglong param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_c8 [4];
  int iStack_c4;
  undefined1 auStack_c0 [4];
  int aiStack_bc [3];
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_60 [96];
  
  piVar2 = aiStack_bc;
  lVar4 = 5;
  do {
    piVar2[3] = 0;
    piVar2 = piVar2 + 4;
    *piVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82273CD8(auStack_b0,3);
  dStack_a8 = (double)(longlong)param_2;
  fn_82273CD8(auStack_90,3);
  dStack_88 = (double)(longlong)param_3;
  fn_82273CD8(auStack_80,3);
  dStack_78 = (double)(longlong)param_4;
  fn_82273CD8(auStack_70,5);
  uStack_68 = param_5;
  if ((param_6 & 0xffffffff) == 0) {
    fn_82273CD8(auStack_a0,1);
  }
  else {
    puVar1 = (undefined4 *)fn_8229AE10(auStack_c0,param_1);
    fn_8266F600(*puVar1,param_6,auStack_60,0x20);
    if (aiStack_bc[0] != 0) {
      fn_822315A0();
    }
    fn_82273CD8(auStack_a0,4);
    puStack_98 = auStack_60;
  }
  puVar1 = (undefined4 *)fn_8229AE10(auStack_c8,param_1);
  fn_82672C20(*puVar1,0xffffffff821aa26c,auStack_b0,5);
  if (iStack_c4 != 0) {
    fn_822315A0();
  }
  puVar3 = auStack_60;
  lVar4 = 4;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

