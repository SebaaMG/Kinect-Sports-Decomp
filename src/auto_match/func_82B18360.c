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
extern int fn_82AD20C0();
extern int fn_82B41D68();


void fn_82B18360(undefined8 param_1,int param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    if (((*(uint *)(uVar1 + 8) & 0x3f80) == 0x3800) &&
       (uVar3 = fn_82B41D68(param_1,uVar1,param_3,0,1), uVar3 != 0)) {
      for (iVar2 = *(int *)(param_2 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
        uVar5 = (ulonglong)*(uint *)(iVar2 + 4);
        if ((uVar5 != (param_3 & 0xffffffff)) &&
           (uVar4 = fn_82B41D68(param_1,uVar1,uVar5,0,1),
           (uVar3 & 0xffffffff) == (uVar4 & 0xffffffff))) {
          if (uVar5 != 0) goto LAB_82b18418;
          break;
        }
      }
      fn_82AD20C0(uVar1,uVar3,param_1);
    }
LAB_82b18418:
    uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 0x28);
  } while( true );
}

