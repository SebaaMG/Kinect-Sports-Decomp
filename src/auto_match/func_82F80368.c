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
extern int fn_82F6FA38();
extern int fn_82F801C8();
extern int fn_82F80208();
extern int fn_82F804E4();
extern int fn_82F812C0();
extern int fn_82F86930();
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack_50;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


void fn_82F80368(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  int iStack_50;
  
  uStack00000014 = (undefined4)param_1;
  uStack0000001c = (undefined4)param_2;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  iStack_50 = fn_82F801C8();
  iVar3 = param_4;
  if (param_4 != -1) {
    do {
      piVar2 = (int *)(iVar3 * 8 + *(int *)(param_3 + 8));
      if (piVar2[1] != 0) break;
      iStack0000002c = *piVar2;
      iVar3 = iStack0000002c;
    } while (iStack0000002c != -1);
  }
  if ((iStack_50 != -1) || (iVar3 != -1)) {
    iVar1 = fn_82F6FA38();
    *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + 1;
    while (iStack_50 != iVar3) {
      if ((iStack_50 < 0) || (*(int *)(param_3 + 4) <= iStack_50)) {
        fn_82F812C0();
      }
      iVar1 = iStack_50 * 8;
      piVar2 = (int *)(*(int *)(param_3 + 8) + iVar1);
      iStack_50 = *piVar2;
      if (piVar2[1] != 0) {
        fn_82F80208(param_1,param_2,param_3,iStack_50);
        fn_82F86930(*(undefined4 *)(*(int *)(param_3 + 8) + iVar1 + 4),param_1,0x103,0);
      }
    }
    fn_82F804E4();
    if (iStack_50 != iStack0000002c) {
      fn_82F812C0();
    }
    fn_82F80208(uStack00000014,uStack0000001c,iStack00000024,param_4);
  }
  return;
}

