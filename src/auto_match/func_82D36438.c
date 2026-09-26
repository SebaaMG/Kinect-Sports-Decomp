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
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D34110();
extern int fn_82D34E10();
extern int fn_82D351D8();
extern int fn_82D35588();
extern int fn_82D35918();
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int uStack_b0;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D36438(int param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined1 in_vs32 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  int iStack_b8;
  int iStack_b4;
  uint uStack_b0;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  
  iVar3 = (int)param_4;
  *(int *)(param_1 + 0x18) = iVar3;
  if (iVar3 != 0) {
    iVar2 = fn_82CE5410();
    if ((int)(param_5[2] & 0x3fffffff) < iVar3) {
      uVar7 = ((ulonglong)(uint)param_5[2] & 0x3fffffff) << 1;
      if ((int)uVar7 <= iVar3) {
        uVar7 = param_4;
      }
      fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),param_5,uVar7,2);
    }
    param_5[1] = iVar3;
    puVar5 = (undefined2 *)(param_1 + 0x14);
    piVar6 = (int *)(param_1 + 0x10);
    fn_82D34E10(param_1 + 0x1c,(param_4 & 0x7fffffff) * 2 + 0xffff & 0xffff,piVar6,puVar5);
    iVar2 = fn_82D351D8(param_1 + 0x1c,piVar6,puVar5,puVar5);
    *(int *)(param_1 + 0x10) = iVar2;
    *(ushort *)(iVar2 + 0x10) = *(ushort *)(iVar2 + 0x10) | 0x7fff;
    iStack_b8 = 0;
    iStack_b4 = 0;
    uStack_b0 = 0x80000000;
    iVar2 = fn_82CE5410();
    if ((int)(uStack_b0 & 0x3fffffff) < iVar3) {
      uVar7 = ((ulonglong)uStack_b0 & 0x3fffffff) << 1;
      if ((int)uVar7 <= iVar3) {
        uVar7 = param_4;
      }
      fn_82CE6310(*(undefined4 *)(iVar2 + 0x10),&iStack_b8,uVar7,0xc);
    }
    if (0 < iVar3) {
      iVar2 = 0;
      uVar7 = param_4;
      do {
        vectorAddFloatingPoint(in_vs32,in_vs43);
        vectorAddFloatingPoint(in_vs45,in_vs44);
        iVar4 = iVar2 + iStack_b8;{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs37,in_vs39); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMinimumFloatingPoint(in_vs38,in_vs39); memcpy(auVar9, &_vt1, 16); }
        vectorMaximumFloatingPoint(auVar8,in_vs32);
        vectorMaximumFloatingPoint(auVar9,in_vs32);
        puVar1 = (undefined4 *)((int)&fStack_90 + in_r0 & 0xfffffff0);
        *puVar1 = in_register_00010010;
        puVar1[1] = in_register_00010014;
        puVar1[2] = in_register_00010018;
        puVar1[3] = in_vr1;
        puVar1 = (undefined4 *)((int)&fStack_a0 + in_r0 & 0xfffffff0);
        *puVar1 = in_register_00010020;
        puVar1[1] = in_register_00010024;
        puVar1[2] = in_register_00010028;
        puVar1[3] = in_vr2;
        *(short *)(iVar2 + iStack_b8) = (short)((uint)(int)fStack_a0 >> 0xf);
        *(short *)(iVar4 + 8) = (short)((uint)(int)fStack_8c >> 0xf);
        *(short *)(iVar4 + 6) = (short)((uint)(int)fStack_90 >> 0xf);
        *(short *)(iVar4 + 10) = (short)((uint)(int)fStack_88 >> 0xf);
        iVar2 = iVar2 + 0xc;
        *(short *)(iVar4 + 4) = (short)((uint)(int)fStack_98 >> 0xf);
        *(short *)(iVar4 + 2) = (short)((uint)(int)fStack_9c >> 0xf);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (iVar3 == 1) {
      iVar2 = *piVar6;
      *(undefined4 *)(iVar2 + 0xc) = *param_3;
      *(ushort *)(iVar2 + 0x10) = *(ushort *)(iVar2 + 0x10) | 0x8000;
      *(undefined2 *)(*piVar6 + 0x12) = 0x7fff;
      *(undefined2 *)*param_5 = *puVar5;
      iStack_b4 = iVar3;
    }
    else {
      iStack_b4 = iVar3;
      fn_82D35918(param_1,iStack_b8,param_3,param_4,*piVar6,param_5,0);
    }
    fn_82D34110(param_1,*piVar6,*puVar5,0x7fff);
    fn_82D35588(param_1,*piVar6,0);
    iVar3 = fn_82CE5410();
    iStack_b4 = 0;
    if ((uStack_b0 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                (*(int **)(iVar3 + 0x10),iStack_b8,uStack_b0 & 0x3fffffff,0xc);
    }
  }
  return;
}

