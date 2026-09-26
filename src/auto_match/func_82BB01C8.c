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
#define _iStack00000018 ((*(U64*)&iStack00000018))
extern int fn_82AB15D0();
extern int fn_82BC0088();
extern unsigned int iStack00000018;


ulonglong fn_82BB01C8(int param_1,ulonglong param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int iStack00000018;
  
  uVar4 = 0;
  _iStack00000018 = param_2;
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = 0;
    if (*(int *)(param_1 + 4) == 0) {
      piVar2 = (int *)fn_82BC0088(param_1,0);
      goto LAB_82bb0210;
    }
    do {
      piVar2 = (int *)(*(int *)(param_1 + 8) + iVar3);
LAB_82bb0210:
      if ((*(int *)*piVar2 != iStack00000018) ||
         (bVar1 = true, (ulonglong)(uint)((int *)*piVar2)[1] != (_iStack00000018 & 0xffffffff))) {
        bVar1 = false;
      }
      if (bVar1) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 4));
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820dfb20,0x23c);
  return (ulonglong)*(uint *)(param_1 + 4);
}

