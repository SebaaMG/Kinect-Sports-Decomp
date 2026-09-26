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
extern int fn_822315A0();
extern int fn_8255BAF8();
extern int fn_8265CA20();
extern unsigned int lbl_821C082C;
extern unsigned int lbl_8329618C;


undefined4 * fn_824C3380(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  param_1[1] = param_2;
  *param_1 = &lbl_821C082C;
  if (*(int *)(param_2 + 0x5c) != 0) {
    fn_8265CA20();
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  if (*(int *)(param_1[1] + 0x48) != 0) {
    if (lbl_8329618C == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(lbl_8329618C + 4);
    }
    if (iVar4 != 0) {
      puVar1 = *(undefined4 **)(*(int *)(iVar4 + 0xd48) + 4);
      puVar2 = (undefined4 *)*puVar1;
      while ((puVar2 != puVar1 &&
             (*(int *)(puVar2[2] + 4) != *(int *)(*(int *)(param_1[1] + 0x48) + 4)))) {
        puVar2 = (undefined4 *)*puVar2;
      }
      if (puVar2 != *(undefined4 **)(*(int *)(iVar4 + 0xd48) + 4)) {
        fn_8255BAF8();
      }
    }
    iVar4 = param_1[1];
    iVar3 = *(int *)(iVar4 + 0x4c);
    *(undefined4 *)(iVar4 + 0x4c) = 0;
    *(undefined4 *)(iVar4 + 0x48) = 0;
    if (iVar3 != 0) {
      fn_822315A0();
    }
  }
  return param_1;
}

