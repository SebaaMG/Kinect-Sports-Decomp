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
extern int fn_82A1EFC0();
extern unsigned int lbl_821AAD20;


undefined8 fn_82F9AC98(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  uVar1 = lbl_821AAD20;
  if (*(int *)(param_1 + 0x74) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(*(int *)(param_1 + 0x74),0,*(int *)(param_1 + 0x80) << 2);
  }
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x8c) = lbl_821AAD20;
  if ((*(uint *)(param_1 + 0x14) & 0xfffffffc) != 0) {
    piVar3 = (int *)(param_1 + 0x110);
    puVar4 = (undefined4 *)(param_1 + 0x1c4);
    do {
      puVar4[-1] = uVar1;
      *puVar4 = uVar1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar1;
      if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(*piVar3,0,puVar4[-0x4a] << 4);
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar2 < *(uint *)(param_1 + 0x14) >> 2);
  }
  *(undefined4 *)(param_1 + 0x200) = uVar1;
  *(undefined4 *)(param_1 + 0x204) = uVar1;
  return 1;
}

