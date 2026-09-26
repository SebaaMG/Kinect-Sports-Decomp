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
extern unsigned int *auStack_34;
extern int fn_82A26920();
extern int fn_82A26C08();
extern int fn_82A27010();
extern int fn_82A27888();
extern unsigned int iStack_3c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


ulonglong fn_82A279F0(int param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  uint auStack_34 [13];
  
  uVar6 = param_2 + 0xffffU >> 0x10;
  uVar4 = 0x40;
  uStack_38 = uVar6 << 0x10;
  uVar5 = 0;
  do {
    iStack_3c = *(int *)((uVar5 + 0x18) * 4 + param_1);
    if (iStack_3c == 0) {
      if (uVar4 == 0x40) {
        uVar4 = uVar5;
      }
    }
    else if (((uVar6 <= *(uint *)(iStack_3c + 0x30)) && (uStack_38 <= *(uint *)(iStack_3c + 0x1c)))
            && (lVar1 = fn_82A26920(param_1,iStack_3c,&uStack_38,0), lVar1 != 0)) {
      uStack_38 = uStack_38 >> 4;
      uVar2 = fn_82A26C08(param_1,lVar1,&uStack_38,0);
      fn_82A27010(param_1,uVar2,uStack_38);
      return uVar2;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x40);
  if ((uVar4 != 0x40) && ((*(uint *)(param_1 + 0x14) & 2) != 0)) {
    uVar6 = param_2 + 0x10000;
    iStack_3c = 0;
    uStack_40 = uVar6;
    if (uVar6 <= *(uint *)(param_1 + 0x20)) {
      uStack_40 = *(uint *)(param_1 + 0x20);
    }
    iVar3 = NtAllocateVirtualMemory
                      (&iStack_3c,&uStack_40,0x60002000,4,*(undefined4 *)(param_1 + 0x590));
    if (iVar3 < 0) {
      do {
        if (uStack_40 == uVar6) break;
        uStack_40 = uStack_40 >> 1;
        if (uStack_40 < uVar6) {
          uStack_40 = uVar6;
        }
        iVar3 = NtAllocateVirtualMemory
                          (&iStack_3c,&uStack_40,0x60002000,4,*(undefined4 *)(param_1 + 0x590));
      } while (iVar3 < 0);
      if (iVar3 < 0) {
        return 0;
      }
    }
    *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uStack_40;
    auStack_34[0] = uVar6;
    if (uVar6 <= *(uint *)(param_1 + 0x24)) {
      auStack_34[0] = *(uint *)(param_1 + 0x24);
    }
    lVar1 = NtAllocateVirtualMemory
                      (&iStack_3c,auStack_34,0x60001000,4,*(undefined4 *)(param_1 + 0x590));
    if (-1 < lVar1) {
      iVar3 = fn_82A27888(param_1,iStack_3c,uVar4,0,iStack_3c,auStack_34[0] + iStack_3c,
                            uStack_40 + iStack_3c);
      if (iVar3 == 0) {
        lVar1 = -0x3fffffe9;
      }
      if (-1 < (int)lVar1) {
        return (ulonglong)*(uint *)(iStack_3c + 0x28);
      }
    }
    NtFreeVirtualMemory(&iStack_3c,&uStack_40,0x8000,*(undefined4 *)(param_1 + 0x590));
  }
  return 0;
}

