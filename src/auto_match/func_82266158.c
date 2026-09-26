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
extern int fn_825279F8();
extern int fn_82528948();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82266158(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  
  iVar1 = *(int *)(param_1 + 0xdc);
  if (iVar1 != 0) {
    iVar3 = fn_825279F8(iVar1);
    if ((iVar3 == 0) || (iVar3 == 3)) {
      puVar2 = (undefined4 *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
      *puVar2 = in_register_00010010;
      puVar2[1] = in_register_00010014;
      puVar2[2] = in_register_00010018;
      puVar2[3] = in_vr1;
    }
    else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs38,in_vs45); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar4); memcpy(auVar4, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar4); memcpy(auVar4, &_vt2, 16); }
      vectorConditionalSelect(auVar4,in_vs32,in_vs44);
      puVar2 = (undefined4 *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
      *puVar2 = in_register_00010430;
      puVar2[1] = in_register_00010434;
      puVar2[2] = in_register_00010438;
      puVar2[3] = in_vr67;
    }
    puVar2 = (undefined4 *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
    uVar5 = *puVar2;
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    *(undefined4 *)(iVar1 + 0x170) = 0;
    puVar2 = (undefined4 *)(iVar1 + 0x60U & 0xfffffff0);
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    fn_82528948(iVar1);
  }
  return;
}

