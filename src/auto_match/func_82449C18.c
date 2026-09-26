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
extern int fn_82433068();
extern int fn_82437388();
extern int fn_82437E38();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821925C0;
extern unsigned int lbl_821B9F64;
extern unsigned int lbl_821CC160;


undefined4 * fn_82449C18(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  fn_82433068();
  *param_1 = &lbl_821B9F64;
  puVar6 = (undefined4 *)fn_8265C9E0(0x70);
  uVar5 = lbl_821CC160;
  uVar4 = lbl_82192480;
  uVar3 = lbl_821916FC;
  uVar2 = lbl_8218E8E8;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[1] = lbl_8218E1AC;
    *puVar6 = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    puVar6[4] = uVar2;
    puVar6[5] = 0;
    puVar6[6] = 600;
    uVar2 = lbl_821925C0;
    puVar6[7] = 200;
    puVar1 = (undefined4 *)((uint)(puVar6 + 0xc) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    puVar6[8] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x15] = uVar3;
    puVar6[0x16] = uVar5;
    puVar6[0x12] = 0;
    puVar6[0x17] = uVar2;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
  }
  param_1[0x11] = puVar6;
  fn_82437E38(param_1,2,0);
  fn_82437E38(param_1,6,0);
  fn_82437E38(param_1,0xe,0);
  fn_82437E38(param_1,0xf,0);
  fn_82437E38(param_1,9,0);
  fn_82437E38(param_1,10,0);
  fn_82437E38(param_1,0xc,0);
  *(undefined4 *)(param_1[0x10] + 0x208) = 0x1d;
  *(undefined4 *)(param_1[0x10] + 0x114) = 3;
  fn_82437388(param_1);
  *(undefined4 *)(param_1[0x10] + 0x180) = 0x24;
  return param_1;
}

