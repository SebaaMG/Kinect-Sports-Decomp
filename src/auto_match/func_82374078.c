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
extern int fn_82250A18();
extern int fn_822B17A8();
extern unsigned int lbl_832975B0;


void fn_82374078(int param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if ((*(char *)(iVar3 + 4) == '\0') || (param_2 == *(int *)(param_1 + 0xcc))) {
    puVar2 = *(undefined4 **)(param_2 * 4 + *(int *)(param_1 + 0x20));
    piVar1 = (int *)puVar2[1];
    for (piVar4 = (int *)*puVar2; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if (*(int *)(*piVar4 + 0x34) != 0) {
        fn_822B17A8(*(int *)(*piVar4 + 0x34),param_3,0);
      }
    }
  }
  return;
}

