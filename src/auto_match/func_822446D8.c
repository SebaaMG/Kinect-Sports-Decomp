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
extern unsigned int *auStack_9c;
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FBB0();
extern int fn_82247000();


bool fn_822446D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_b0 [5];
  uint auStack_9c [35];
  
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar2 = fn_82247000();
    if (iVar2 < 5) {
      iVar2 = -0x7cd69f38;
      do {
        if (*(int *)(iVar2 + 0x10) == 1) {
          iVar2 = *(int *)(iVar2 + 4);
          goto LAB_82244730;
        }
        iVar2 = iVar2 + 0x30;
      } while (iVar2 < -0x7cd69e78);
      iVar2 = 0;
LAB_82244730:
      if ((((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0xd54), iVar2 != 0)) &&
          (*(int *)(iVar2 + 0x18) == 0)) && (*(int *)(iVar2 + 0x14) != 0)) {
        *(int *)(*(int *)(iVar2 + 0x14) + 0x3f4) = param_1;
        iVar2 = *(int *)(iVar2 + 0x14);
        *(int *)(param_1 + 0x80) = iVar2;
        if (iVar2 != 0) {
          fn_8223CFC0(aiStack_b0,2,1);
          uVar1 = *(undefined4 *)(param_1 + 0x80);
          *(uint *)((int)auStack_9c + *(int *)(aiStack_b0[0] + 4)) =
               *(uint *)((int)auStack_9c + *(int *)(aiStack_b0[0] + 4)) & 0xfffff1ff | 0x800;
          fn_8223FBB0(aiStack_b0,uVar1);
          fn_8223DCC8(aiStack_b0);
        }
      }
    }
  }
  return *(int *)(param_1 + 0x80) != 0;
}

