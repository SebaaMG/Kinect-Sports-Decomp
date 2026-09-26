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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEA420();


void fn_82BEFCE8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar4 = param_1 + 0x4c;
    fn_82BE5340(iVar4);
    while (*(int *)(param_1 + 0x54) != 0) {
      puVar1 = (undefined4 *)fn_82BE5378(iVar4);
      iVar2 = fn_82BEA420(*(undefined4 *)(param_1 + 0x18),*puVar1);
      if (iVar2 != 0) {
        iVar5 = iVar2 + 0x3c;
        fn_82BE5340(iVar5);
        while (*(int *)(iVar2 + 0x44) != 0) {
          iVar3 = fn_82BE5378(iVar5);
          *(undefined8 *)(iVar3 + 0xd0) = 0;
          iVar3 = fn_82BE5378(iVar5);
          *(undefined8 *)(iVar3 + 0x70) = 0;
          fn_82BE5350(iVar5);
        }
      }
      fn_82BE5350(iVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

