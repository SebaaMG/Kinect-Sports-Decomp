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
extern int fn_82381BC0();
extern int fn_82A1C098();
extern int fn_82A1EFC0();
extern unsigned int lbl_8327F640;


void fn_8225C7B8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *apuStack_30 [12];
  
  if (lbl_8327F640 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x4c);
    apuStack_30[0] = (undefined4 *)*puVar1;
    while (apuStack_30[0] != puVar1) {
      iVar2 = apuStack_30[0][4];
      if (*(int *)(iVar2 + 0x408) == 0) {
        iVar4 = 0;
        lVar5 = -((ulonglong)(*(uint *)(iVar2 + 0x40c) < 3) - 1);
        if ((lVar5 == 0) && (*(int *)(iVar2 + 1000) != 0x3e5)) {
          uVar3 = fn_82A1C098(iVar2 + 1000);
          uVar3 = (uVar3 & 0xffffffff) >> 0x1f;
          iVar4 = (int)uVar3;
          if ((uVar3 == 0) || (*(int *)(iVar2 + 0x40c) < 1)) {
            *(undefined4 *)(iVar2 + 0x408) = 1;
          }
        }
        if ((0 < *(int *)(iVar2 + 0x40c)) && ((iVar4 != 0 || ((int)lVar5 != 0)))) {
                    /* WARNING: Subroutine does not return */
          fn_82A1EFC0(iVar2,0,1000);
        }
      }
      fn_82381BC0(apuStack_30);
      puVar1 = *(undefined4 **)(param_1 + 0x4c);
    }
  }
  return;
}

