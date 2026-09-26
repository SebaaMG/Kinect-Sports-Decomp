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
extern int fn_82F39D20();
extern int fn_82F39E50();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


undefined8 fn_82F3A068(int param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  short *psStack_54;
  uint uStack_50;
  int aiStack_4c [19];
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    lVar2 = 0x1a;
    uVar5 = 0;
    if (*(int *)(param_1 + 0x1268) != 0) {
      iVar3 = param_1 + 0x48;
      do {
        fn_82F39E50(iVar3,uVar5,&iStack_5c);
        uVar4 = 0;
        lVar2 = ((ulonglong)*(uint *)(iStack_5c + 0xd4) + 0x1a & 0xffffffff) + lVar2;
        fn_82F39E50(iVar3,uVar5,&iStack_60);
        if (*(int *)(iStack_60 + 0xd0) != 0) {
          do {
            fn_82F39E50(iVar3,uVar5,&uStack_58);
            fn_82F39D20((ulonglong)uStack_58 + 0x14,uVar4,&psStack_54);
            if (*psStack_54 != 1) {
              return 0xffffffff8000ffff;
            }
            fn_82F39E50(iVar3,uVar5,&uStack_50);
            fn_82F39D20((ulonglong)uStack_50 + 0x14,uVar4,aiStack_4c);
            uVar4 = uVar4 + 1;
            lVar2 = (ulonglong)*(ushort *)(aiStack_4c[0] + 2) + 4 + lVar2;
            fn_82F39E50(iVar3,uVar5,&iStack_60);
          } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(iStack_60 + 0xd0));
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x1268));
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar2;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar2;
    }
    *(longlong *)(param_1 + 0x20) = lVar2;
  }
  return uVar1;
}

