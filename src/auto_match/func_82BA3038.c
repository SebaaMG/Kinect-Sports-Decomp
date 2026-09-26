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
extern int fn_82AB15D0();
extern int fn_82BA0540();
extern int fn_82BC5580();
extern unsigned int lbl_820E3A58;
extern unsigned int lbl_83171C58;


void fn_82BA3038(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(&lbl_820E3A58 + lbl_83171C58 * 8))(0x8e,*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0x2e;
  *(undefined4 *)(iVar2 + 0xa8) = 0;
  if ((*(char *)(param_1 + 0x860) != '\0') && (*(int *)(param_1 + 0x74) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 0x3b4);
    fn_82BC5580(iVar1,iVar2);
    fn_82BA0540(*(undefined4 *)(param_1 + 0x74),iVar2);
    if (*(int *)(param_1 + 0x78) != 0) {
      *(undefined4 *)(iVar2 + 0xa8) = 1;
      if (*(int *)(*(int *)(param_1 + 0x78) + 0x3b4) != iVar1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee2c,0xffffffff820deb50,0xb07);
      }
      fn_82BA0540(*(undefined4 *)(param_1 + 0x78),iVar2);
    }
  }
  return;
}

