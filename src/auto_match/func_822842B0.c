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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_ac;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int lbl_831CEF1C;


void fn_822842B0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined4 auStack_ac [3];
  undefined1 auStack_a0 [8];
  undefined4 *puStack_98;
  undefined1 auStack_90 [8];
  char cStack_88;
  undefined1 auStack_80 [8];
  char cStack_78;
  undefined1 auStack_70 [8];
  char cStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  undefined1 auStack_40 [8];
  double dStack_38;
  undefined1 auStack_30 [48];
  
  lVar5 = 7;
  puVar3 = auStack_ac;
  do {
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  fn_82273CD8(auStack_a0,5);
  puStack_98 = param_1 + param_2 * 0x8d + 0xf;
  iVar1 = param_1[param_2 * 0x8d + 3];
  fn_82273CD8(auStack_90,2);
  iVar2 = param_1[param_2 * 0x8d + 4];
  cStack_88 = '\x01' - (iVar1 == 0);
  fn_82273CD8(auStack_80,2);
  iVar1 = param_1[param_2 * 0x8d + 5];
  cStack_78 = '\x01' - (iVar2 == 0);
  fn_82273CD8(auStack_70,2);
  dVar6 = (double)(float)param_1[param_2 * 0x8d + 6];
  cStack_68 = '\x01' - (iVar1 == 0);
  fn_82273CD8(auStack_60,3);
  dVar7 = (double)(float)param_1[param_2 * 0x8d + 7];
  dStack_58 = dVar6;
  fn_82273CD8(auStack_50,3);
  dVar6 = (double)(float)param_1[param_2 * 0x8d + 8];
  dStack_48 = dVar7;
  fn_82273CD8(auStack_40,3);
  dStack_38 = dVar6;
  fn_82672C20(*param_1,(&lbl_831CEF1C)[param_2],auStack_a0,7);
  puVar4 = auStack_30;
  lVar5 = 6;
  do {
    puVar4 = puVar4 + -0x10;
    fn_82273C88(puVar4);
    lVar5 = lVar5 + -1;
  } while (-1 < lVar5);
  return;
}

