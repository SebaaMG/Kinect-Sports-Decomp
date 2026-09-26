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
extern int fn_82BE5240();
extern int fn_82BEECD0();
extern unsigned int lbl_820EB884;


undefined4 * fn_82BF4A68(int param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)thunk_FUN_82be5550(0x60);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 0x28);
    fn_82BEECD0(puVar2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),0x10,
                  param_2);
    *(undefined2 *)(puVar2 + 0x17) = uVar1;
    *puVar2 = &lbl_820EB884;
  }
  if (puVar2 == (undefined4 *)0x0) {
    fn_82BE5240(param_1,0x65,0xffffffff820eba18,*(undefined4 *)(param_1 + 0x14));
    puVar2 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return puVar2;
}

