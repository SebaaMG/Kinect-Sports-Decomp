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
extern unsigned int *auStack_210;
extern unsigned int *auStack_220;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern unsigned int lbl_82134504;
extern unsigned int lbl_82134508;
extern unsigned int *lbl_8323B464;


undefined4 * fn_82D2CF18(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 in_r0;
  int iVar3;
  undefined4 in_register_000100b0;
  undefined4 in_register_000100b4;
  undefined4 in_register_000100b8;
  undefined4 in_vr11;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [512];
  
  fn_82CEE578(auStack_220,auStack_210,0x200);
  fn_82CEDB38(auStack_220,0xffffffff82134a80);
  iVar3 = (**(code **)(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0xffffffffb6c47b76,auStack_210,0xffffffff82134a28,0x15a);
  if (iVar3 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
  fn_82CED958(auStack_220);
  *param_1 = lbl_82134508;
  uVar2 = lbl_82134504;
  puVar1 = (undefined4 *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  param_1[4] = uVar2;
  puVar1 = (undefined4 *)((int)param_1 + (int)in_r0 + 0x10 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  return param_1;
}

