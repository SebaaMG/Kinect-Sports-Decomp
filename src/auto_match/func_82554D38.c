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
extern int fn_82522DF8();
extern int fn_82BFEB90();
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;


int fn_82554D38(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = fn_82522DF8(0x44);
  *(undefined4 *)(iVar3 + 8) = 0;
  uVar2 = lbl_8326B434;
  uVar1 = lbl_8326B430;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x28) = uVar2;
  *(undefined4 *)(iVar3 + 0x24) = uVar1;
  if (*(int *)(iVar3 + 0x18) != 0) {
    fn_82BFEB90(*(int *)(iVar3 + 0x18),iVar3 + 0x1c);
  }
  return iVar3;
}

