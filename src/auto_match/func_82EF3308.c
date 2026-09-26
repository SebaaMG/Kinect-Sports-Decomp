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
extern int fn_82EF2CB8();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


undefined8 fn_82EF3308(int param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [18];
  
  uVar3 = 0;
  lVar4 = 0x2c;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0xffffffffc00d36b6;
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x264) != 0) {
      iVar5 = param_1 + 0x58;
      do {
        fn_82EF2CB8(iVar5,uVar6,&iStack_50);
        uVar1 = *(ushort *)(iStack_50 + 2);
        fn_82EF2CB8(iVar5,uVar6,&iStack_4c);
        uVar2 = *(ushort *)(iStack_4c + 0xc);
        fn_82EF2CB8(iVar5,uVar6,aiStack_48);
        uVar6 = uVar6 + 1;
        lVar4 = (ulonglong)*(ushort *)(aiStack_48[0] + 0x14) +
                (ulonglong)uVar2 * 2 + (ulonglong)uVar1 * 2 + lVar4 + 8;
      } while ((uVar6 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x264));
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar4;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar4;
    }
    *(longlong *)(param_1 + 0x20) = lVar4;
  }
  return uVar3;
}

