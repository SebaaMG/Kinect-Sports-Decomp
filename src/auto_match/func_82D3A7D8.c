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
extern unsigned int lbl_82134BF8;
extern unsigned int lbl_82134CF4;
extern unsigned int lbl_8213671C;
extern unsigned int lbl_82136758;
extern unsigned int lbl_82136794;


void fn_82D3A7D8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = &lbl_82134BF8;
  if (param_2 != 0) {
    param_1[3] = 0;
  }
  *param_1 = &lbl_82136758;
  if (param_2 != 0) {
    param_1[3] = 8;
    *(undefined1 *)(param_1 + 4) = 2;
  }
  *param_1 = &lbl_8213671C;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  *param_1 = &lbl_82136794;
  param_1[0xc] = &lbl_82134CF4;
  if (param_2 != 1) {
    return;
  }
  iVar1 = param_1[5];
  param_1[3] = 10;
  puVar2 = (undefined4 *)(iVar1 + 0x10U & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(param_1 + 8) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  param_1[6] = *(undefined4 *)(iVar1 + 0x20);
  param_1[7] = *(undefined4 *)(iVar1 + 0x24);
  return;
}

