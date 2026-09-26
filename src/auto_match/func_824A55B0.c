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
extern int fn_8265C9E0();
extern int fn_82F53A20();
extern unsigned int lbl_821BF71C;
extern unsigned int lbl_821CC160;


undefined4 * fn_824A55B0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0x80);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    fn_82F53A20(puVar2,param_1);
    puVar4 = (undefined4 *)(param_1 + 0x44);
    *puVar2 = &lbl_821BF71C;
    puVar3 = puVar2 + 0xe;
    lVar5 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    puVar2[0x19] = 0;
    uVar1 = lbl_821CC160;
    puVar2[0x1c] = 0;
    puVar2[0x18] = uVar1;
    puVar2[0x1a] = 0;
    puVar4 = (undefined4 *)((uint)(puVar2 + 0x14) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
  }
  return puVar2;
}

