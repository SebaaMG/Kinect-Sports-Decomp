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
extern unsigned int uStack_48;
extern U64 storeVectorElementHalfWordIndexed();
extern V16 vectorPackD3D128();
extern V16 vectorSplatHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82A967A8(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int in_r0;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs61 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined1 in_vr63 [16];
  uint uStack_48;
  undefined1 auStack_40 [64];
  
  uVar4 = ZEXT48(&stack0x00000000);
  piVar6 = (int *)(param_2 + 0xc);
  lVar5 = 4;
  puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = in_register_00010010;
  puVar3[1] = in_register_00010014;
  puVar3[2] = in_register_00010018;
  puVar3[3] = in_vr1;
  do {
    altv300_21(in_vs32,in_vs61);
    vectorPackD3D128(in_vr63,5,2,2);{ V16 _vt0 = vectorSplatHalfWord(in_vs32,0); memcpy(in_vs32, &_vt0, 16); }
    uVar2 = storeVectorElementHalfWordIndexed(in_vs32,0,uVar4 - 0x50);
    *(undefined2 *)(uVar4 - 0x50) = uVar2;
    fn_82AA75B8(uVar4 - 0x48,uVar4 - 0x4c,0x40001);
    iVar1 = *piVar6;
    lVar5 = lVar5 + -1;
    piVar6 = piVar6 + 1;
    *(uint *)(iVar1 * 4 + param_1) = *(uint *)(iVar1 * 4 + param_1) | uStack_48;
  } while (lVar5 != 0);
  return;
}

