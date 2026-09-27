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
extern unsigned int *auStack_3c;
extern int fn_82FF4A38();
extern int fn_83014548();
extern int fn_83038730();
extern int fn_83039600();
extern unsigned int lbl_83264304;
extern unsigned int uStack_40;


void fn_83039790(int param_1,char param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 auStack_3c;
  
  fn_83038730();
  if (((*(byte *)(param_1 + 0x1e4) & 0x20) != 0) && ((*(byte *)(param_1 + 0xd9) & 2) == 0)) {
    if (*(int *)(param_1 + 0x1dc) == 0) {
      if ((*(char *)(param_1 + 0x1e8) != '\0') &&
         ((param_2 == '\0' || (*(int *)(param_1 + 0x1ec) == 0)))) {
        uVar1 = *(undefined4 *)(param_1 + 0x1d4);
        *(undefined1 *)(param_1 + 0x1e8) = 0;
        uStack_40 = 0;
        auStack_3c = 0;
        uVar2 = fn_83014548(uVar1,&auStack_3c,&uStack_40);
        while (((uVar2 & 0xffffffff) != 0 &&
               (iVar3 = fn_83039600(param_1,uVar2,auStack_3c), iVar3 != 1))) {
          fn_82FF4A38(lbl_83264304,*(undefined4 *)(param_1 + 0x50),uVar2,uStack_40);
          uStack_40 = 0;
          auStack_3c = 0;
          uVar2 = fn_83014548(uVar1,&auStack_3c,&uStack_40);
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1e8) = 0;
    }
  }
  return;
}

