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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82E004A0(undefined8 param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_r0;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 in_vr11 [16];
  undefined1 auVar9 [16];

  uVar5 = lbl_821AAD20;
  iVar2 = *(int *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(param_2 + 0x34) + 8) +
            ((param_3 & 0xff) + (param_3 & 0xff) * 2) * 0x10 + 0x20);
  *(undefined4 *)(param_4 + 0x24) = 0;
  *(undefined4 *)(param_4 + 0x48) = uVar1;
  *(undefined4 *)(param_4 + 0x4c) = uVar5;
  puVar3 = (undefined4 *)((param_3 & 0xff) * 0xe0 + iVar2 + 0x60 & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar4 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  uVar6 = lbl_82002AE0;{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr11,*(undefined1 (*) [16])(in_r0 + param_4 + 0x10 & 0xfffffff0),1,0); memcpy(auVar9, &_vt0, 16); }
  memcpy((void *)((const void *)(in_r0 + param_4 + 0x10 & 0xfffffff0)), auVar9, 16);
  *(undefined4 *)(param_4 + 0x20) = uVar5;
  *(undefined4 *)(param_4 + 0x50) = uVar6;
  *(undefined4 *)(param_4 + 0x1c) = uVar1;
  return;
}
