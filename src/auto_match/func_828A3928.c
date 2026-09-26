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
extern int fn_82230040();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;
extern U64 storeWordConditionalIndexed();


void fn_828A3928(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  uint *puVar5;
  char in_RESERVE;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  puVar3 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    bVar1 = puVar3 + 2 == (undefined4 *)0x0;
    *puVar3 = param_2;
    puVar3[1] = param_3;
    if (!bVar1) {
      puVar3[2] = *param_4;
      uVar2 = param_4[1];
      puVar3[3] = uVar2;
      if ((ulonglong)uVar2 != 0) {
        lVar4 = (ulonglong)uVar2 + 4;
        do {
          puVar5 = (uint *)lVar4;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,lVar4);
            *puVar5 = uVar2;
            bVar1 = true;
          }
        } while (!bVar1);
      }
    }
    return;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

