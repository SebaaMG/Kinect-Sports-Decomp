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
extern int fn_82A81CD0();
extern unsigned int lbl_832767F4;


undefined8 fn_825260E0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = 0;
  uVar3 = 0;
  puVar4 = &lbl_832767F4;
  while ((*(int *)(puVar4 + -4) == 0 || (iVar1 = fn_82A81CD0(param_1,puVar4), iVar1 == 0))) {
    uVar3 = uVar3 + 0x3f4;
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 0x3f4;
    if (0x8a5b < uVar3) {
      return 0;
    }
  }
  iVar2 = iVar2 * 0x3f4;
  *(int *)(iVar2 + -0x7cd89810) = *(int *)(iVar2 + -0x7cd89810) + 1;
  *param_2 = *(undefined4 *)(iVar2 + -0x7cd89424);
  *param_3 = *(undefined4 *)(iVar2 + -0x7cd89420);
  return 1;
}

