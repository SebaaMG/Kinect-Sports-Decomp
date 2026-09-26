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
extern int fn_82ABE2E0();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82B8AE98();


void fn_82AD5E58(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    for (uVar2 = *(uint *)(uVar1 + 0x1c); ((uVar2 & 1) == 0 && (uVar2 != 0));
        uVar2 = *(uint *)((uVar2 & 0xfffffffe) + 0x28)) {
      uVar7 = (ulonglong)(*(uint *)(uVar2 + 8) >> 7) & 0x7f;
      if ((uVar7 == 0x6d) || (uVar7 == 0x6c)) {
        lVar8 = (uVar7 - 0x6d) - ((uVar7 - 0x6e) + (ulonglong)(uVar7 - 0x6d == 0));
        iVar4 = (int)((0xcU - lVar8 & 0xffffffff) << 2);
        uVar5 = *(undefined4 *)((int)((lVar8 + 0xbU & 0xffffffff) << 2) + uVar2);
        uVar3 = *(undefined4 *)(*(int *)((int)((0xcU - lVar8 & 0xffffffff) << 2) + uVar2) + 0xc);
        fn_82AD20C0(uVar2,*(undefined4 *)(iVar4 + uVar2),param_1);
        uVar5 = fn_82AD1978(uVar2,uVar5);
        *(undefined4 *)(iVar4 + uVar2) = uVar5;
        cVar6 = fn_82ABE2E0(uVar3);
        if (cVar6 != '\0') {
          fn_82B8AE98(param_1,uVar3);
        }
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) & 0xffffc07f | 0x180;
      }
    }
  }
  return;
}

