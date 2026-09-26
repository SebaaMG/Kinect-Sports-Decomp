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
extern unsigned int *__imp__XexExecutableModuleHandle;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1F888();
extern int fn_82A1F950();
extern int fn_82A207C8();
extern int fn_82F691F0();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219B8C;


ulonglong fn_82A22EB8(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar2;
  ulonglong uVar1;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)fn_8265C940(0x1000,lbl_8315D2EC);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar1 = fn_82A1F888(param_1,1);
  if ((uVar1 & 0xc0000000) != 0xc0000000) {
    puVar2[2] = param_2;
    *puVar2 = 0xfadebac4;
    puVar2[1] = 3;
    if ((*__imp__XexExecutableModuleHandle == 0) ||
       (iVar3 = RtlImageXexHeaderField
                          (*(undefined4 *)(*__imp__XexExecutableModuleHandle + 0x58),0x40006),
       (longlong)-(ulonglong)(iVar3 == 0) < 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar3 + 4);
    }
    puVar2[3] = uVar4;
    uVar1 = fn_82A1F950(param_1,puVar2,0);
    if (-1 < (longlong)uVar1) {
      fn_82A207C8(puVar2,0x1000,0x24,1);
      uVar1 = fn_82A1F950(param_1,puVar2,1);
      if (-1 < (longlong)uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(puVar2,0,0x1000);
      }
    }
    (**(code **)(lbl_83219B8C + 4))(*param_1);
    *param_1 = 0xffffffff;
  }
  fn_8265C990(puVar2,lbl_8315D2EC);
  return uVar1;
}

