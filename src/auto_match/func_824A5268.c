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
extern unsigned int lbl_821BF6E4;


undefined4 * fn_824A5268(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  
  puVar3 = (undefined4 *)fn_8265C9E0(0x60);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    fn_82F53A20(puVar3,param_1);
    *puVar3 = &lbl_821BF6E4;
    puVar3[0xf] = *(undefined4 *)(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    puVar3[0x11] = 0;
    puVar3[0x10] = uVar1;
    puVar2 = (undefined4 *)((uint)(puVar3 + 0x14) & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
  }
  return puVar3;
}

