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
extern int fn_82ABE190();
extern int fn_82AC8750();
extern int fn_82AC8B10();
extern int fn_82AC8CE8();
extern int fn_82AC8ED0();
extern int fn_82AC8F30();


void fn_82AC8FB8(int param_1,int *param_2)

{
  int iVar1;
  char cVar3;
  undefined8 uVar2;
  
  cVar3 = fn_82AC8B10();
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(*(undefined4 *)(param_1 + 0x2c),0x12c0);
  }
  fn_82AC8CE8(param_1,param_2);
  if (*(int *)(param_1 + 0x34) != 0) {
    if ((param_2[2] & 0x3f80U) != 0x3c00) {
      for (iVar1 = param_2[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        if (*(int *)(iVar1 + 0x10) != 0) {
          cVar3 = fn_82ABE190(iVar1);
          if (cVar3 != '\0') {
            uVar2 = fn_82AC8750(iVar1);
            fn_82AC8F30(*(undefined4 *)(param_1 + 0x34),uVar2);
          }
        }
      }
    }
    for (iVar1 = *param_2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      cVar3 = fn_82ABE190(iVar1);
      if ((cVar3 != '\0') && ((*(uint *)(*(int *)(iVar1 + 0xc) + 8) & 0x3f80) != 0x3c00)) {
        uVar2 = fn_82AC8750(iVar1);
        fn_82AC8ED0(*(undefined4 *)(param_1 + 0x34),uVar2);
      }
    }
  }
  return;
}

