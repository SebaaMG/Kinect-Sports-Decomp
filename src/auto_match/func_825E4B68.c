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
extern int fn_825313D8();
extern int fn_82544918();
extern int fn_82544F40();
extern int fn_82545098();
extern int fn_82637B30();
extern int iRam832700ec;
extern unsigned int lbl_82195B90;
extern unsigned int lbl_8320A898;


void fn_825E4B68(void)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  iRam832700ec = iRam832700ec + 1;
  if (iRam832700ec == 1) {
    fn_825313D8(lbl_8320A898);
    fn_82544F40();
    iVar2 = lbl_8320A898;
    uVar1 = lbl_82195B90;
    *(uint *)(lbl_8320A898 + 0x293c) = *(uint *)(lbl_8320A898 + 0x293c) | 8;
    uVar3 = *(ulonglong *)(iVar2 + 0x10);
    *(ulonglong *)(iVar2 + 0x10) = uVar3 | 0x200;
    *(ulonglong *)(iVar2 + 0x10) = uVar3 | 0x40200;
    iVar2 = lbl_8320A898;
    *(undefined4 *)(lbl_8320A898 + 0x2904) = uVar1;
    *(ulonglong *)(iVar2 + 0x10) = *(ulonglong *)(iVar2 + 0x10) | 0x8000000;
    fn_82637B30(lbl_8320A898,1);
    fn_82544918(2,lbl_8320A898);
    fn_82545098();
  }
  return;
}

