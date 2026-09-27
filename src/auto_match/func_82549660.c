extern unsigned int *puRam83296d40;
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
extern unsigned int *auStack_40;
extern int fn_82522ED8();
extern int fn_82549610();
extern int fn_8259C738();
extern int fn_825B4898();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82811460();
extern int fn_82A1BB18();
extern int fn_82A1F238();
extern int iRam83296d48;
extern unsigned int uRam83296d44;


void fn_82549660(uint param_1,ulonglong param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined4 auStack_40;

  fn_82549610(&auStack_40,0xffffffff83296d4c);
  puVar1 = puRam83296d40;
  if (puRam83296d40 != (uint *)0x0) {
    uVar6 = 0;
    if (*puRam83296d40 != 0) {
      iVar5 = 0;
      do {
        fn_82522ED8(*(undefined4 *)(puVar1[7] + iVar5 + 8));
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar6 < *puVar1);
    }
    fn_82522ED8(puVar1[7]);
    fn_82A1F238(puVar1[3]);
    puVar1[3] = 0;
    fn_8265CA20(puVar1);
    puRam83296d40 = (uint *)0x0;
  }
  if ((param_1 == 0) || ((param_2 & 0xffffffff) == 0)) goto LAB_82549780;
  lVar2 = fn_82811460(param_1 >> 0xc);
  iVar5 = (int)param_2;
  uVar4 = (longlong)(0x1000 << ((uint)lVar2 & 0x3f)) * (longlong)iVar5;
  if ((uVar4 & 0xffffff) == 0) {
    uVar4 = 0xffffffff80000000;
LAB_8254973c:
    uVar4 = uVar4 | 4;
  }
  else {
    if ((uVar4 & 0xffff) == 0) {
      uVar4 = 0x20000000;
      goto LAB_8254973c;
    }
    uVar4 = 4;
  }
  uVar3 = fn_8265C9E0(0x20);
  if ((uVar3 & 0xffffffff) == 0) {
    puRam83296d40 = (uint *)0x0;
    uRam83296d44 = param_1;
    iRam83296d48 = iVar5;
  }
  else {
    puRam83296d40 = (uint *)fn_825B4898(uVar3,lVar2 + 1,param_2,uVar4);
    uRam83296d44 = param_1;
    iRam83296d48 = iVar5;
  }
LAB_82549780:
  fn_82A1BB18();
  fn_8259C738(auStack_40);
  return;
}
