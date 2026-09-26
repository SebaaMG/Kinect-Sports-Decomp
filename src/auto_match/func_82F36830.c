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
extern unsigned int *auStack_44;
extern int fn_82F35400();


undefined8 fn_82F36830(int param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piStack_50;
  int *piStack_4c;
  undefined4 *puStack_48;
  uint auStack_44 [17];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if ((param_2 == 0) || (param_3 == (longlong *)0x0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc4);
    lVar4 = 0;
    uVar5 = 0;
    if (uVar1 != 0) {
      param_1 = param_1 + 0x5c;
      do {
        fn_82F35400(param_1,uVar5,&piStack_50);
        if (*piStack_50 == param_2) {
          *param_3 = lVar4;
          return 0;
        }
        fn_82F35400(param_1,uVar5,&piStack_4c);
        if (*piStack_4c != 0) {
          fn_82F35400(param_1,uVar5,&puStack_48);
          iVar3 = (**(code **)(*(int *)*puStack_48 + 0x24))((int *)*puStack_48,auStack_44);
          if (-1 < iVar3) {
            lVar4 = (ulonglong)auStack_44[0] + lVar4;
          }
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)uVar1);
    }
    uVar2 = 0xffffffffc00d3a9c;
  }
  return uVar2;
}

