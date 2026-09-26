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
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82DCC568(undefined8 param_1,int param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 in_vs32 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar4 [16];
  undefined1 in_vs44 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs32,in_vs43,in_vs44); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = vectorConditionalSelect(in_vs45,auVar3,in_vs42); memcpy(auVar4, &_vt1, 16); }
  puVar2 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar1 = (undefined4 *)(in_r0 + param_8 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];{ V16 _vt2 = vectorConditionalSelect(in_vs45,auVar3,in_vs44); memcpy(auVar5, &_vt2, 16); }
  puVar2 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar1 = (undefined4 *)(in_r0 + param_7 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];{ V16 _vt3 = vectorMultiplyAddFloatingPoint(in_vs42,auVar3,in_vs45); memcpy(auVar3, &_vt3, 16); }{ V16 _vt4 = vectorConditionalSelect(auVar5,auVar3,auVar4); memcpy(auVar4, &_vt4, 16); }
  puVar2 = (undefined4 *)(in_r0 + param_3 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar1 = (undefined4 *)(in_r0 + param_8 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];{ V16 _vt5 = vectorConditionalSelect(in_vs45,auVar3,auVar5); memcpy(auVar5, &_vt5, 16); }
  puVar2 = (undefined4 *)(in_r0 + param_4 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar1 = (undefined4 *)(in_r0 + param_7 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];{ V16 _vt6 = vectorMultiplyAddFloatingPoint(in_vs42,auVar3,in_vs45); memcpy(auVar3, &_vt6, 16); }
  vectorConditionalSelect(auVar5,auVar3,auVar4);
  puVar2 = (undefined4 *)(in_r0 + param_3 + 0x20 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  puVar1 = (undefined4 *)(in_r0 + param_8 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  vectorConditionalSelect(in_vs45,auVar3,auVar5);
  puVar2 = (undefined4 *)(in_r0 + param_4 + 0x20 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  return;
}

