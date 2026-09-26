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
extern int fn_82468F58();
extern int fn_8265CA20();


void fn_82467E00(int *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 != 0) {
    iVar1 = param_1[1];
    for (; iVar4 != iVar1; iVar4 = iVar4 + 0x14) {
      uVar3 = (ulonglong)*(uint *)(iVar4 + 4);
      if (uVar3 != 0) {
        uVar2 = *(uint *)(iVar4 + 8);
        if (uVar3 != uVar2) {
          do {
            fn_82468F58(uVar3);
            uVar3 = uVar3 + 0x14;
          } while ((uVar3 & 0xffffffff) != (ulonglong)uVar2);
        }
        fn_8265CA20(*(undefined4 *)(iVar4 + 4));
      }
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
    }
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

