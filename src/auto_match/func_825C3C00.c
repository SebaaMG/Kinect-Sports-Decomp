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
extern unsigned int *auStack_140;
extern unsigned int *auStack_14c;
extern unsigned int *auStack_150;
extern unsigned int *auStack_a0;
extern int fn_82520158();
extern int fn_82575FA8();
extern int fn_82A1EFC0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821C8EA8;
extern unsigned int uStack_50;
extern unsigned int uStack_70;


undefined4 * fn_825C3C00(undefined4 *param_1,int *param_2)

{
  int in_r0;
  undefined4 uVar1;
  undefined8 in_r8;
  undefined4 *puVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined4 in_register_00010480;
  undefined4 in_register_00010484;
  undefined4 in_register_00010488;
  undefined4 in_vr72;
  undefined1 auStack_150 [4];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [160];
  undefined1 auStack_a0 [48];
  undefined1 uStack_70;
  undefined4 uStack_50;
  
  param_1[1] = param_2;
  *param_1 = &lbl_821C8EA8;
  dVar4 = (double)*(float *)(*param_2 + 0x828);
  fn_82A1EFC0(auStack_140,0,0x100);
  uStack_50 = 0xfeeb1e0;
  puVar2 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010480;
  puVar2[1] = in_register_00010484;
  puVar2[2] = in_register_00010488;
  puVar2[3] = in_vr72;
  uStack_70 = 1;
  fn_82520158(0xffffffff821c8e80,auStack_14c,0);
  fn_82520158(0xffffffff821c8e94,auStack_150,0);
  puVar2 = param_1 + 3;
  lVar3 = 2;
  dVar5 = (double)lbl_82192734;
  do {
    uVar1 = fn_82575FA8(dVar4,dVar5,param_2,auStack_14c,auStack_140,1,0,in_r8,0);
    puVar2[-1] = uVar1;
    uVar1 = fn_82575FA8(dVar4,dVar5,param_2,auStack_150,auStack_140,1,0,in_r8,0);
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 1;
    *puVar2 = uVar1;
  } while (lVar3 != 0);
  return param_1;
}

