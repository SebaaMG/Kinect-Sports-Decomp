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
extern int fn_82437388();
extern int fn_824510C0();
extern int fn_82453DE8();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821922D0;
extern float lbl_821954FC;
extern unsigned int lbl_821956E4;
extern unsigned int lbl_821956F0;
extern unsigned int lbl_821956F4;
extern unsigned int lbl_821B9D60;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82449098(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  fn_824510C0();
  *param_1 = &lbl_821B9D60;
  puVar4 = (undefined4 *)fn_8265C9E0(0x24);
  uVar3 = lbl_821956F4;
  uVar2 = lbl_821956F0;
  uVar1 = lbl_821922D0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = lbl_821956E4;
    puVar4[1] = uVar2;
    puVar4[2] = uVar1;
    puVar4[3] = uVar3;
    puVar4[4] = 3000;
    puVar4[5] = 0;
    puVar4[6] = 0;
  }
  param_1[0x12] = puVar4;
  *(undefined4 *)(param_1[0x10] + 0x208) = 0x1c;
  *(undefined4 *)(param_1[0x10] + 0x114) = 5;
  fn_82437388(param_1);
  uVar1 = lbl_8218E8E8;
  *(float *)(param_1[0x11] + 0x3c) = *(float *)(param_1[0x12] + 0xc) * lbl_821954FC;
  *(undefined4 *)(param_1[0x11] + 0x48) = uVar1;
  *(undefined4 *)(param_1[0x10] + 0x180) = 0x25;
  fn_82453DE8(param_1);
  *(undefined4 *)(param_1[0x12] + 0x1c) = 0;
  *(undefined4 *)(param_1[0x12] + 0x20) = 0;
  return param_1;
}

