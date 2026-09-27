extern char *pcRam831c1438;
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
extern int fn_8245A5C8();
extern int fn_8245AE18();
extern int fn_8245B458();
extern int fn_8245B718();
extern int fn_8245B7C8();
extern int fn_8245C700();
extern int fn_8245CBE0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520158();
extern int fn_82522FF0();
extern int fn_8257A250();
extern int fn_8266C898();
extern int fn_8266EC60();
extern int fn_82A1E228();
extern int fn_82BA02A8();
extern unsigned int uRam831c143c;
extern unsigned int uRam831c1440;
extern unsigned int uRam831c1444;


void fn_824E2BD0(void)

{
  undefined4 *puVar1;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 auStack_30;

  iVar4 = fn_8245B458();
  iVar5 = fn_8257A250(iVar4 + 0x6c8,0xffffffff821bac34);
  if (iVar5 == 0) {
    fn_8245C700(iVar4);
    fn_8245B7C8(iVar4);
    fn_8245CBE0(iVar4);
    uVar9 = fn_82522FF0();
    *(undefined8 *)(iVar4 + 0x5b8) = uVar9;
    fn_82A1E228(&auStack_30);
    *(undefined8 *)(iVar4 + 0x590) = auStack_30;
    fn_8245B718(iVar4);
  }
  puVar6 = (undefined4 *)fn_8245A5C8();
  puVar1 = (undefined4 *)*puVar6;
  uVar9 = fn_8245B458();
  (*(code *)*puVar1)(puVar6,uVar9);
  puVar6 = (undefined4 *)fn_8245AE18();
  puVar1 = (undefined4 *)*puVar6;
  uVar9 = fn_8245B458();
  (*(code *)*puVar1)(puVar6,uVar9);
  uRam831c143c = 0;
  pcRam831c1438 = fn_82BA02A8;
  uRam831c1440 = 0;
  uRam831c1444 = 0;
  fn_82520158(0xffffffff821c1364,&auStack_30,0);
  lVar2 = fn_8251F720(&auStack_30,0);
  uVar8 = 0;
  uVar3 = fn_8251FBA8();
  lVar7 = lVar2;
  if ((int)((uVar3 & 0xffffffff) / 0x88) != 0) {
    do {
      uVar9 = fn_8266EC60();
      fn_8266C898(uVar9,lVar7);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x88;
      uVar3 = fn_8251FBA8(lVar2);
    } while ((uVar8 & 0xffffffff) < (uVar3 & 0xffffffff) / 0x88);
  }
  fn_8251FA58(lVar2);
  return;
}
