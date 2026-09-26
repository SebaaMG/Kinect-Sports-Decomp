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
extern int fn_82AA66A8();
extern int fn_82B50498();
extern int fn_82B50558();
extern unsigned int iStack_30;


byte fn_82B50730(undefined8 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iStack_30;
  undefined4 *puStack_2c;
  
  bVar3 = 0;
  if (*(int *)(param_2 + 0x18) == 0) {
    bVar3 = 1;
  }
  else {
    bVar1 = false;
    fn_82B50498(&iStack_30,*(int *)(param_2 + 0x18),param_1);
    do {
      iVar2 = fn_82B50558(&iStack_30);
      if (iVar2 == 0) goto LAB_82b507ac;
      if (*(int *)(iVar2 + 4) != 0x14) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      bVar1 = true;
    } while (*(int *)(iVar2 + 0x10) != 0);
    bVar3 = 1;
LAB_82b507ac:
    bVar3 = !bVar1 | bVar3;
    *puStack_2c = *(undefined4 *)(iStack_30 + 0x3d0);
    *(undefined4 **)(iStack_30 + 0x3d0) = puStack_2c;
  }
  return bVar3;
}

