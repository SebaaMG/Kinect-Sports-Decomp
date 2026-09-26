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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82DAD288();
extern int fn_82DAEFD0();
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x82dab1e4) */

undefined8 fn_82DAB098(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs50 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs59 [16];
  
  uVar4 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorSubtractFloatingPoint(in_vs32,in_vs44);
  uVar5 = 0;{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs58,in_vs59); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs56,in_vs57); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorAddFloatingPoint(auVar7,in_vs37); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorAddFloatingPoint(auVar6,in_vs35); memcpy(auVar6, &_vt3, 16); }
  vectorSubtractFloatingPoint(auVar6,auVar7);
  uVar3 = storeVectorElementWordIndexed(in_vs50,0,uVar4 - 0x90);
  *(undefined4 *)(uVar4 - 0x90) = uVar3;
  if (*(int *)(param_1 + 8) == 0) {
    uVar5 = *(undefined2 *)(param_1 + 0x12);
  }
  fn_82DAEFD0(*(undefined4 *)(param_1 + 0xc),uVar4 - 0x80);
  if (*(short *)(iVar1 + 0x204) != 0) {
    fn_82DAD288(iVar1,uVar4 - 0x80);
  }
  if (*(short *)(iVar2 + 0x204) != 0) {
    fn_82DAD288(iVar2,uVar4 - 0x80);
  }
  *(undefined2 *)(param_1 + 0x18) = uVar5;
  return 0;
}

