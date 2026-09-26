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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266EF20();
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_8266F6A8();
extern int fn_82672C20();
extern int fn_82673A28();
extern int fn_82673C58();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 *
fn_822CBBB0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar3 = param_1 + 9;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x10] = 1;
  param_1[0x11] = param_4;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  param_1[0x1b] = 0;
  fn_82273CD8(&uStack_40,5);
  puVar1 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  puVar1 = (undefined4 *)((uint)(param_1 + 0xc) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uStack_38 = param_5;
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EF20(auStack_50,uVar2,param_2,0,0,0x18280143);
  fn_823F2E20(puVar3,uVar2);
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  fn_8266F6A8(*puVar3,4);
  fn_82672C20(*puVar3,0xffffffff821ad110,&uStack_40,1);
  fn_8266F640(*puVar3,1);
  fn_8266F628(*puVar3,1);
  fn_82673A28(*puVar3,0xffffffff822cbe50,param_1);
  fn_82673C58(*puVar3,0xffffffff822cc118,param_1,0);
  puVar1 = (undefined4 *)((uint)(param_1 + 4) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  uVar2 = fn_8266EC60();
  uVar2 = fn_8266EF20(auStack_48,uVar2,param_3,0,0,0x18280143);
  fn_823F2E20(param_1,uVar2);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  fn_8266F6A8(*param_1,4);
  fn_82672C20(*param_1,0xffffffff821ad110,&uStack_40,1);
  fn_8266F640(*param_1,1);
  fn_8266F628(*param_1,1);
  fn_82673A28(*param_1,0xffffffff822cbfb8,param_1);
  fn_82673C58(*param_1,0xffffffff822cc178,param_1,0);
  fn_82273C88(&uStack_40);
  return param_1;
}

