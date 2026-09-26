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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C1E328();
extern unsigned int iStack_4c;


ulonglong fn_82C1E4A8(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 auStack_48 [18];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iStack_4c = 0;
  auStack_50[0] = 0;
  bVar3 = false;
  uVar8 = (ulonglong)*(uint *)(*(int *)(iVar1 + 4) + 0x14) + param_2;
  if ((longlong)(ulonglong)*(uint *)(*(int *)(iVar1 + 4) + 0x10) < (longlong)uVar8) {
    return 0xffffffff80070057;
  }
  if ((longlong)uVar8 < (longlong)(ulonglong)*(uint *)(*(int *)(iVar1 + 4) + 0x14)) {
    return 0xffffffff80070057;
  }
  if (*(short *)(iVar1 + 0x98) != 0) {
    uVar4 = fn_82C10F68(*(undefined4 *)(iVar1 + 0x94),auStack_48,&iStack_4c,auStack_50);
    if ((uVar4 & 0xffffffff) != 0x80500016) {
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      do {
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        if ((((iStack_4c != 0) && (*(int *)(iStack_4c + 0x30) == 2)) &&
            (*(int *)(iStack_4c + 4) != 0)) && (*(int *)(iStack_4c + 0x50) == 0)) {
          bVar3 = true;
          break;
        }
        uVar4 = fn_82C10FD0(*(undefined4 *)(iVar1 + 0x94),auStack_48[0],&iStack_4c,auStack_50);
      } while ((uVar4 & 0xffffffff) != 0x80500016);
    }
    fn_82C11038(*(undefined4 *)(iVar1 + 0x94),auStack_48[0]);
    if (bVar3) {
      iVar2 = *(int *)(iStack_4c + 0x48);
      uVar5 = (ulonglong)*(uint *)(iVar2 + 4);
      uVar4 = (longlong)uVar8 / (longlong)uVar5 & 0xffffffff;
      trapDoubleWordImmediate(6,uVar5,0);
      trapDoubleWordImmediate(5,uVar5 & ~((uVar8 * 2 | uVar8 >> 0x3f) - 1),0xffff);
      if (*(uint *)(iVar2 + 0xc) < uVar4) {
        return 0xffffffff80070057;
      }
      iVar6 = *(int *)(iVar1 + 4);
      uVar7 = *(uint *)((int)(uVar4 << 3) + *(int *)(iVar2 + 0x10));
      if (*(uint *)(iVar6 + 0xc) < uVar7) {
        return 0xffffffff80070057;
      }
      goto LAB_82c1e644;
    }
  }
  iVar6 = *(int *)(iVar1 + 4);
  uVar7 = 0;
  if (*(int *)(iVar6 + 0x10) != 0) {
    uVar4 = (ulonglong)*(uint *)(iVar6 + 0x10);
    uVar8 = (ulonglong)*(uint *)(iVar6 + 0xc) * param_2;
    trapDoubleWordImmediate(6,uVar4,0);
    uVar7 = (uint)((longlong)uVar8 / (longlong)uVar4);
    trapDoubleWordImmediate(5,uVar4 & ~((uVar8 * 2 | uVar8 >> 0x3f) - 1),0xffff);
  }
LAB_82c1e644:
  uVar8 = fn_82C1E328(param_1,((longlong)*(int *)(iVar6 + 8) * (longlong)(int)uVar7 & 0xffffffffU)
                                + *(longlong *)(iVar1 + 0x10));
  return uVar8;
}

