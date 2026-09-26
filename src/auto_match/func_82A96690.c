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
extern unsigned int *auStack_40;
extern int fn_82AA75B8();
extern unsigned int stack0x00000000;
extern U64 storeVectorElementHalfWordIndexed();
extern V16 vectorPackD3D128();
extern V16 vectorSplatHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A96690(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  int in_r0;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs61 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined1 in_vr63 [16];
  short sStack_4e;
  undefined1 auStack_40 [64];
  
  uVar6 = ZEXT48(&stack0x00000000);
  piVar8 = (int *)(param_2 + 0xc);
  lVar7 = 4;
  puVar5 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar5 = in_register_00010010;
  puVar5[1] = in_register_00010014;
  puVar5[2] = in_register_00010018;
  puVar5[3] = in_vr1;
  do {
    altv300_21(in_vs32,in_vs61);
    vectorPackD3D128(in_vr63,5,2,2);{ V16 _vt0 = vectorSplatHalfWord(in_vs32,0); memcpy(in_vs32, &_vt0, 16); }
    uVar4 = storeVectorElementHalfWordIndexed(in_vs32,0,uVar6 - 0x4e);
    *(undefined2 *)(uVar6 - 0x4e) = uVar4;
    iVar1 = piVar8[4];
    uVar2 = piVar8[8];
    fn_82AA75B8(uVar6 - 0x50,uVar6 - 0x50,0x20001);
    iVar3 = *piVar8;
    lVar7 = lVar7 + -1;
    piVar8 = piVar8 + 1;
    *(ushort *)(iVar3 * 2 + param_1) =
         *(ushort *)(iVar3 * 2 + param_1) | sStack_4e << (uVar2 & 0x3f) & (ushort)iVar1;
  } while (lVar7 != 0);
  return;
}

