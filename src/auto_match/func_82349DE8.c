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
extern int fn_82341008();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191418;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192754;
extern unsigned int lbl_82195610;
extern unsigned int lbl_821B1C18;
extern unsigned int lbl_821CC160;


undefined4 * fn_82349DE8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fn_82341008();
  *param_1 = &lbl_821B1C18;
  puVar8 = (undefined4 *)fn_8265C9E0(0x50);
  uVar6 = lbl_82195610;
  uVar2 = lbl_8218E8E8;
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8[0x10] = 0;
    uVar7 = lbl_821CC160;
    puVar8[0x11] = 0;
    uVar5 = lbl_82192754;
    puVar8[0x12] = 2;
    uVar4 = lbl_821922D4;
    uVar3 = lbl_82191418;
    *(undefined1 *)(puVar8 + 4) = 0;
    puVar8[6] = uVar2;
    *(undefined1 *)((int)puVar8 + 0x11) = 0;
    puVar8[7] = uVar7;
    *(undefined1 *)((int)puVar8 + 0x12) = 0;
    puVar8[8] = uVar2;
    *(undefined1 *)((int)puVar8 + 0x13) = 0;
    puVar8[9] = uVar7;
    *(undefined1 *)(puVar8 + 5) = 0;
    puVar8[10] = uVar6;
    *puVar8 = uVar5;
    puVar8[1] = uVar3;
    puVar8[2] = uVar4;
    puVar8[3] = uVar7;
    puVar1 = (undefined4 *)((uint)(puVar8 + 0xc) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
  }
  param_1[4] = puVar8;
  return param_1;
}

