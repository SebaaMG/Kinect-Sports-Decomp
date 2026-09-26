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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8245D538();
extern int fn_8245DD40();
extern int fn_82522ED8();
extern unsigned int lbl_83276594;
extern U64 storeWordConditionalIndexed();


void fn_824BED88(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char in_RESERVE;
  byte in_cr0;
  
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  iVar3 = lbl_83276594;
  *(undefined4 *)(lbl_83276594 + 0x58) = 0;
  if (((*(int *)(iVar3 + 0x54) != 0) && (*(int *)(iVar3 + 0x58) == 0)) &&
     (*(int *)(iVar3 + 0x50) == 0)) {
    fn_8245DD40();
  }
  *(undefined4 *)param_2[1] = param_3;
  puVar1 = (undefined4 *)*param_2;
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(1,0,ZEXT48(puVar1));
      *puVar1 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  fn_82522ED8(param_2);
  return;
}

