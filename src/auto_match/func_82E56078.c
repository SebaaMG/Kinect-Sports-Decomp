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
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F63CA0();


undefined8 fn_82E56078(int param_1,short param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    fn_82E50CB8(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0x5c);
    uVar2 = 0;
    if (iVar3 != 0) {
      iVar1 = 0;
      do {
        if (param_2 == *(short *)(iVar1 + *(int *)(param_1 + 100))) {
          if (uVar2 < iVar3 - 1U) {
            iVar1 = uVar2 * 2 + *(int *)(param_1 + 100);
            fn_82F63CA0(iVar1,iVar1 + 2,(iVar3 - uVar2) - 1 & 0x7fffffff);
          }
          iVar3 = *(int *)(param_1 + 0x5c) + -1;
          *(int *)(param_1 + 0x5c) = iVar3;
          *(undefined2 *)(iVar3 * 2 + *(int *)(param_1 + 100)) = 0;
          goto LAB_82e560f8;
        }
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 2;
      } while (uVar2 < *(uint *)(param_1 + 0x5c));
    }
    uVar4 = 0xffffffff80070057;
LAB_82e560f8:
    fn_82E50F10(param_1 + 8);
  }
  return uVar4;
}

