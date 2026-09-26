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
extern unsigned int *auStack_a0;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_68;
extern int fn_82D34280();
extern int fn_82D35128();
extern int fn_82D351D8();
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;
extern unsigned int uStack_70;
extern V16 vectorAddFloatingPoint();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82D356D0(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int in_r0;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined1 in_vs32 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs42 [16];
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
  undefined2 auStack_a0 [4];
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined2 uStack_40;
  
  vectorAddFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs42,in_vs44);
  puVar6 = (undefined2 *)(param_1 + 0x14);
  uStack_40 = 0x8000;
  piVar5 = (int *)(param_1 + 0x10);
  piVar4 = (int *)(param_1 + 0x1c);{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs38,in_vs39); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMinimumFloatingPoint(in_vs37,in_vs39); memcpy(auVar7, &_vt1, 16); }
  vectorMaximumFloatingPoint(auVar8,in_vs32);
  vectorMaximumFloatingPoint(auVar7,in_vs32);
  puVar1 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  puVar1 = (undefined4 *)((int)&uStack_70 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  lStack_98 = (longlong)(int)fStack_58;
  lStack_90 = (longlong)(int)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
  lStack_80 = (longlong)(int)fStack_5c;
  lStack_88 = (longlong)(int)(((U64)(uStack_70) >> 32) & 0xFFFFFFFF);
  uStack_4e = (undefined2)((uint)(int)(((U64)(uStack_70) >> 32) & 0xFFFFFFFF) >> 0xf);
  uStack_4c = (undefined2)((uint)(int)fStack_68 >> 0xf);
  uStack_46 = (undefined2)((uint)(int)fStack_58 >> 0xf);
  uStack_48 = (undefined2)((uint)(int)fStack_5c >> 0xf);
  uStack_4a = (undefined2)((uint)(int)fStack_60 >> 0xf);
  uStack_50 = (undefined2)((uint)(int)(((U64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 0xf);
  uStack_70 = (longlong)(int)fStack_60;
  uStack_44 = param_3;
  uVar3 = fn_82D35128(piVar4,piVar5,puVar6,&uStack_50);
  if (*(short *)(param_1 + 0x14) == 0x7fff) {
    iVar2 = (((uint)uVar3 & 0xffff) + ((uint)uVar3 & 0xffff) * 4) * 4 + *piVar4;
    *(undefined2 *)(iVar2 + 0x12) = 0x7fff;
    *(ushort *)(iVar2 + 0x10) = *(ushort *)(iVar2 + 0x10) | 0x7fff;
    *piVar5 = iVar2;
    *puVar6 = (short)uVar3;
  }
  else {
    fn_82D351D8(piVar4,piVar5,puVar6,auStack_a0);
    fn_82D34280(param_1,*puVar6,uVar3,auStack_a0[0]);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return uVar3;
}

