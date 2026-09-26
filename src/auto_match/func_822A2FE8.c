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
extern int fn_82295A48();
extern int fn_82297DB0();
extern int fn_82F64988();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822A2FE8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar4;
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar5 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
               (float)(longlong)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x1c)) * 0x1c;
  puVar3 = (undefined4 *)(iVar5 + *(int *)(param_1 + 8));
  if (7 < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  fn_82F64988(param_1 + 0x1c,0x100,puVar3);
  if (1 < (uint)((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x1c)) {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar5 = iVar5 + *(int *)(param_1 + 8);
    iVar6 = iVar5 + 0x1c;
    if (iVar6 != iVar1) {
      iVar5 = iVar5 - iVar6;
      do {
        fn_82295A48(iVar5 + iVar6,iVar6);
        iVar6 = iVar6 + 0x1c;
      } while (iVar6 != iVar1);
    }
    uVar2 = *(uint *)(param_1 + 0xc);
    for (uVar4 = (ulonglong)uVar2 - 0x1c; (uVar4 & 0xffffffff) != (ulonglong)uVar2;
        uVar4 = uVar4 + 0x1c) {
      fn_82297DB0(uVar4,1,0);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -0x1c;
  }
  return;
}

