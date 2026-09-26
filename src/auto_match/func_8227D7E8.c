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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_823F2E20();
extern int fn_82520158();
extern int fn_8266EC60();
extern int fn_8266EF20();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_82673A28();
extern int fn_82673C58();
extern unsigned int iStack_34;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


int fn_8227D7E8(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int in_r0;
  undefined8 uVar3;
  undefined4 *puVar4;
  double dVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  int iStack_34;
  
  puVar4 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar4 = in_register_000104d0;
  puVar4[1] = in_register_000104d4;
  puVar4[2] = in_register_000104d8;
  puVar4[3] = in_vr77;
  fVar2 = lbl_821CC160;
  dVar5 = (double)lbl_821CC160;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar1 = lbl_821CA460;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = 4;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(float *)(param_1 + 0x18) = fVar2;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  puVar4 = (undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  fn_82266D28(puVar4,0);
  *(float *)(param_1 + 0x48) = (float)dVar5;
  *(undefined4 *)(param_1 + 0x44) = 0;
  fn_82520158(0xffffffff821a870c,auStack_40,0);
  uVar3 = fn_8266EC60();
  uVar3 = fn_8266EF20(auStack_38,uVar3,auStack_40,0,0,0x18280143);
  fn_823F2E20(puVar4,uVar3);
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  fn_8266F640(*puVar4,1);
  fn_8266F628(*puVar4,1);
  fn_82673C58(*puVar4,0xffffffff8227db10,param_1,0);
  fn_82673A28(*puVar4,0xffffffff8227dbb0,param_1);
  return param_1;
}

