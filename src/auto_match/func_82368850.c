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
extern int fn_822ABBF0();
extern unsigned int iStack_3c;
extern unsigned int lbl_821B2FA8;
extern unsigned int uStack_38;


void fn_82368850(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined **ppuStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  
  uStack_38 = *(undefined4 *)(param_1 + 0x1c);
  puVar1 = *(undefined4 **)(param_1 + 8);
  ppuStack_40 = &lbl_821B2FA8;
  iStack_3c = param_1;
  for (piVar3 = (int *)*puVar1; piVar3 < (int *)puVar1[1]; piVar3 = piVar3 + 1) {
    puVar2 = (undefined4 *)*piVar3;
    for (puVar4 = (undefined4 *)*puVar2; puVar4 < (undefined4 *)puVar2[1]; puVar4 = puVar4 + 1) {
      fn_822ABBF0(*puVar4,&ppuStack_40);
    }
  }
  return;
}

