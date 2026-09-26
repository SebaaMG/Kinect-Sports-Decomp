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
extern int fn_82250A18();
extern int fn_823CC7A0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;


void fn_82306A50(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x50) = lbl_821CC160;
  puVar4 = (undefined4 *)(param_1 + 0xb0U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  puVar4 = (undefined4 *)(param_1 + 0xc0U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x80U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  *(undefined1 *)(param_1 + 0x54) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x90U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  puVar4 = (undefined4 *)(param_1 + 0x60U & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  iVar5 = fn_823CC7A0();
  iVar3 = iVar5 * 300 + iVar3;
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  fVar1 = *(float *)(iVar3 + 0x560);
  if (*(char *)(iVar5 + 4) == '\0') {
    fVar2 = *(float *)(iVar3 + 0x55c);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (fVar1 - fVar2) * ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar2
    ;
  }
  *(float *)(param_1 + 0x70) = fVar1;
  *(undefined4 *)(param_1 + 0xd0) = 1;
  return;
}

