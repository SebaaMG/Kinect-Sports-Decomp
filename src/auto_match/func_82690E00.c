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
extern int fn_82690288();
extern int fn_82690350();
extern int fn_826905F8();
extern int fn_82690708();


ulonglong fn_82690E00(int param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar3;
  ulonglong uVar2;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_2 & 0xffffffff) < 0x41) {
    if ((param_2 & 0xffffffff) < 0x21) {
      uVar1 = fn_82690350(param_1,param_2 - 1,param_2,param_3,param_4);
      if ((uVar1 & 0xffffffff) == 0) {
        lVar4 = 0;
        goto LAB_82690e68;
      }
      uVar5 = (uint)*(ushort *)((int)uVar1 + 0xc);
    }
    else {
      lVar4 = param_2 - 0x21;
LAB_82690e68:
      uVar1 = fn_82690350(param_1 + 0x84,lVar4,param_2,param_3,param_4);
      if ((uVar1 & 0xffffffff) == 0) goto LAB_82690e8c;
      uVar5 = *(uint *)((int)uVar1 + 0x10);
    }
    iVar6 = *(int *)(param_1 + 0x18c) - uVar5;
LAB_82690e54:
    *(int *)(param_1 + 0x18c) = iVar6;
  }
  else {
LAB_82690e8c:
    uVar1 = param_2;
    while( true ) {
      uVar2 = fn_82690708(param_1 + 0x108,uVar1);
      uVar1 = uVar2;
      if (uVar2 == 0) break;
      do {
        cVar3 = fn_82690288(uVar1,param_2,param_3,param_4);
        if (cVar3 != '\0') {
          fn_826905F8(param_1 + 0x108,uVar1);
          iVar6 = *(int *)(param_1 + 0x18c) - *(int *)((int)uVar1 + 0x10);
          goto LAB_82690e54;
        }
        uVar5 = *(uint *)((int)uVar1 + 4);
        uVar1 = (ulonglong)uVar5;
      } while (uVar1 != (uVar2 & 0xffffffff));
      uVar1 = (ulonglong)*(uint *)(uVar5 + 0x10) + 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

