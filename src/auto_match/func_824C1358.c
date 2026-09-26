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
extern int fn_8224F398();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_821CC160;


undefined4 * fn_824C1358(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_8265C9E0(0x40);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8224F398();
  }
  *param_1 = uVar2;
  puVar3 = (undefined4 *)fn_8265C9E0(100);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    fn_8224F398(puVar3 + 3);
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    puVar3[2] = 1;
    *(undefined1 *)(puVar3 + 0x13) = 0;
    *(undefined1 *)((int)puVar3 + 0x4d) = 0;
    puVar3[0x14] = 0;
    *(undefined1 *)(puVar3 + 0x15) = 0;
    puVar3[0x18] = 0;
  }
  param_1[1] = puVar3;
  param_1[2] = *param_2;
  param_1[8] = lbl_8218E8FC;
  uVar2 = lbl_82192F70;
  param_1[4] = 1;
  param_1[9] = uVar2;
  param_1[3] = 2;
  param_1[5] = 2;
  uVar2 = lbl_821CC160;
  param_1[6] = 0;
  param_1[10] = uVar2;
  param_1[7] = 0;
  param_1[0xb] = uVar2;
  return param_1;
}

