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
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_82552B50();
extern int fn_8262F8D8();
extern unsigned int lbl_821CACCC;


void fn_82616FD8(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[0x21];
  *param_1 = &lbl_821CACCC;
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x18) & 0xfffffffc;
                    /* WARNING: Subroutine does not return */
    fn_8262F8D8(iVar1,10,0,uVar2,0,uVar2,*(uint *)(iVar1 + 0x1c) & 0x3fffffc,0);
  }
  if (param_1[0x23] != 0) {
    fn_82545950(param_1 + 0x23);
  }
  if (param_1[0x24] != 0) {
    fn_82545A90(param_1 + 0x24);
  }
  if (*(char *)((int)param_1 + 199) != '\0') {
    fn_82552B50(param_1 + 0x2d,1);
  }
  return;
}

